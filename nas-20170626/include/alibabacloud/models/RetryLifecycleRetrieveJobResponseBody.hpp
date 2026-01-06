// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYLIFECYCLERETRIEVEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYLIFECYCLERETRIEVEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class RetryLifecycleRetrieveJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryLifecycleRetrieveJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryLifecycleRetrieveJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RetryLifecycleRetrieveJobResponseBody() = default ;
    RetryLifecycleRetrieveJobResponseBody(const RetryLifecycleRetrieveJobResponseBody &) = default ;
    RetryLifecycleRetrieveJobResponseBody(RetryLifecycleRetrieveJobResponseBody &&) = default ;
    RetryLifecycleRetrieveJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryLifecycleRetrieveJobResponseBody() = default ;
    RetryLifecycleRetrieveJobResponseBody& operator=(const RetryLifecycleRetrieveJobResponseBody &) = default ;
    RetryLifecycleRetrieveJobResponseBody& operator=(RetryLifecycleRetrieveJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetryLifecycleRetrieveJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
