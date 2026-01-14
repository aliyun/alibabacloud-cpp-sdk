// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKnowledgeBaseJobResponseBody() = default ;
    CreateKnowledgeBaseJobResponseBody(const CreateKnowledgeBaseJobResponseBody &) = default ;
    CreateKnowledgeBaseJobResponseBody(CreateKnowledgeBaseJobResponseBody &&) = default ;
    CreateKnowledgeBaseJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseJobResponseBody() = default ;
    CreateKnowledgeBaseJobResponseBody& operator=(const CreateKnowledgeBaseJobResponseBody &) = default ;
    CreateKnowledgeBaseJobResponseBody& operator=(CreateKnowledgeBaseJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // knowledgeBaseJobId Field Functions 
    bool hasKnowledgeBaseJobId() const { return this->knowledgeBaseJobId_ != nullptr;};
    void deleteKnowledgeBaseJobId() { this->knowledgeBaseJobId_ = nullptr;};
    inline string getKnowledgeBaseJobId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseJobId_, "") };
    inline CreateKnowledgeBaseJobResponseBody& setKnowledgeBaseJobId(string knowledgeBaseJobId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobId_, knowledgeBaseJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKnowledgeBaseJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> knowledgeBaseJobId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
