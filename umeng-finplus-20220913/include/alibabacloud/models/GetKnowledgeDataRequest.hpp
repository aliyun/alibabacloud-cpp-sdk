// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetKnowledgeDataRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetKnowledgeDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetKnowledgeDataRequest() = default ;
    GetKnowledgeDataRequest(const GetKnowledgeDataRequest &) = default ;
    GetKnowledgeDataRequest(GetKnowledgeDataRequest &&) = default ;
    GetKnowledgeDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeDataRequest() = default ;
    GetKnowledgeDataRequest& operator=(const GetKnowledgeDataRequest &) = default ;
    GetKnowledgeDataRequest& operator=(GetKnowledgeDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetKnowledgeDataRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetKnowledgeDataRequestBody) };
    inline GetKnowledgeDataRequestBody body() { DARABONBA_PTR_GET(body_, GetKnowledgeDataRequestBody) };
    inline GetKnowledgeDataRequest& setBody(const GetKnowledgeDataRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetKnowledgeDataRequest& setBody(GetKnowledgeDataRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<GetKnowledgeDataRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
