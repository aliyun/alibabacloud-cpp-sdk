// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateKnowLedgeRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class CreateKnowLedgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowLedgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowLedgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateKnowLedgeRequest() = default ;
    CreateKnowLedgeRequest(const CreateKnowLedgeRequest &) = default ;
    CreateKnowLedgeRequest(CreateKnowLedgeRequest &&) = default ;
    CreateKnowLedgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowLedgeRequest() = default ;
    CreateKnowLedgeRequest& operator=(const CreateKnowLedgeRequest &) = default ;
    CreateKnowLedgeRequest& operator=(CreateKnowLedgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateKnowLedgeRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateKnowLedgeRequestBody) };
    inline CreateKnowLedgeRequestBody body() { DARABONBA_PTR_GET(body_, CreateKnowLedgeRequestBody) };
    inline CreateKnowLedgeRequest& setBody(const CreateKnowLedgeRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateKnowLedgeRequest& setBody(CreateKnowLedgeRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<CreateKnowLedgeRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
