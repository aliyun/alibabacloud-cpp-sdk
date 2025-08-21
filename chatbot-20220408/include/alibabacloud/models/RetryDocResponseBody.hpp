// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYDOCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYDOCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class RetryDocResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryDocResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryDocResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RetryDocResponseBody() = default ;
    RetryDocResponseBody(const RetryDocResponseBody &) = default ;
    RetryDocResponseBody(RetryDocResponseBody &&) = default ;
    RetryDocResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryDocResponseBody() = default ;
    RetryDocResponseBody& operator=(const RetryDocResponseBody &) = default ;
    RetryDocResponseBody& operator=(RetryDocResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->knowledgeId_ != nullptr
        && this->requestId_ != nullptr; };
    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline RetryDocResponseBody& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetryDocResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> knowledgeId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
