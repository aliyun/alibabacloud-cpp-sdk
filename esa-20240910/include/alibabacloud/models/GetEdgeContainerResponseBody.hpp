// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillingMode, billingMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingMode, billingMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetEdgeContainerResponseBody() = default ;
    GetEdgeContainerResponseBody(const GetEdgeContainerResponseBody &) = default ;
    GetEdgeContainerResponseBody(GetEdgeContainerResponseBody &&) = default ;
    GetEdgeContainerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerResponseBody() = default ;
    GetEdgeContainerResponseBody& operator=(const GetEdgeContainerResponseBody &) = default ;
    GetEdgeContainerResponseBody& operator=(GetEdgeContainerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingMode_ == nullptr
        && this->instanceId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // billingMode Field Functions 
    bool hasBillingMode() const { return this->billingMode_ != nullptr;};
    void deleteBillingMode() { this->billingMode_ = nullptr;};
    inline string getBillingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
    inline GetEdgeContainerResponseBody& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEdgeContainerResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEdgeContainerResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The billing mode.
    shared_ptr<string> billingMode_ {};
    // The plan instance ID.
    shared_ptr<string> instanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The plan instance status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
