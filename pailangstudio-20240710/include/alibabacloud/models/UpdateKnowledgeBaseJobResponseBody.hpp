// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class UpdateKnowledgeBaseJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateKnowledgeBaseJobResponseBody() = default ;
    UpdateKnowledgeBaseJobResponseBody(const UpdateKnowledgeBaseJobResponseBody &) = default ;
    UpdateKnowledgeBaseJobResponseBody(UpdateKnowledgeBaseJobResponseBody &&) = default ;
    UpdateKnowledgeBaseJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseJobResponseBody() = default ;
    UpdateKnowledgeBaseJobResponseBody& operator=(const UpdateKnowledgeBaseJobResponseBody &) = default ;
    UpdateKnowledgeBaseJobResponseBody& operator=(UpdateKnowledgeBaseJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateKnowledgeBaseJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
