// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHRECALLMANAGEMENTTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHRECALLMANAGEMENTTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class PublishRecallManagementTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementJobId, recallManagementJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementJobId, recallManagementJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PublishRecallManagementTableResponseBody() = default ;
    PublishRecallManagementTableResponseBody(const PublishRecallManagementTableResponseBody &) = default ;
    PublishRecallManagementTableResponseBody(PublishRecallManagementTableResponseBody &&) = default ;
    PublishRecallManagementTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRecallManagementTableResponseBody() = default ;
    PublishRecallManagementTableResponseBody& operator=(const PublishRecallManagementTableResponseBody &) = default ;
    PublishRecallManagementTableResponseBody& operator=(PublishRecallManagementTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recallManagementJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // recallManagementJobId Field Functions 
    bool hasRecallManagementJobId() const { return this->recallManagementJobId_ != nullptr;};
    void deleteRecallManagementJobId() { this->recallManagementJobId_ = nullptr;};
    inline string getRecallManagementJobId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementJobId_, "") };
    inline PublishRecallManagementTableResponseBody& setRecallManagementJobId(string recallManagementJobId) { DARABONBA_PTR_SET_VALUE(recallManagementJobId_, recallManagementJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishRecallManagementTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> recallManagementJobId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
