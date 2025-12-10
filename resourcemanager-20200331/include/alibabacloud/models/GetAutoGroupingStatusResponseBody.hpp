// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOGROUPINGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOGROUPINGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetAutoGroupingStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoGroupingStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableExistedResourcesTransfer, enableExistedResourcesTransfer_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoGroupingStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableExistedResourcesTransfer, enableExistedResourcesTransfer_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAutoGroupingStatusResponseBody() = default ;
    GetAutoGroupingStatusResponseBody(const GetAutoGroupingStatusResponseBody &) = default ;
    GetAutoGroupingStatusResponseBody(GetAutoGroupingStatusResponseBody &&) = default ;
    GetAutoGroupingStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoGroupingStatusResponseBody() = default ;
    GetAutoGroupingStatusResponseBody& operator=(const GetAutoGroupingStatusResponseBody &) = default ;
    GetAutoGroupingStatusResponseBody& operator=(GetAutoGroupingStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableExistedResourcesTransfer_ == nullptr
        && return this->enableStatus_ == nullptr && return this->requestId_ == nullptr; };
    // enableExistedResourcesTransfer Field Functions 
    bool hasEnableExistedResourcesTransfer() const { return this->enableExistedResourcesTransfer_ != nullptr;};
    void deleteEnableExistedResourcesTransfer() { this->enableExistedResourcesTransfer_ = nullptr;};
    inline bool enableExistedResourcesTransfer() const { DARABONBA_PTR_GET_DEFAULT(enableExistedResourcesTransfer_, false) };
    inline GetAutoGroupingStatusResponseBody& setEnableExistedResourcesTransfer(bool enableExistedResourcesTransfer) { DARABONBA_PTR_SET_VALUE(enableExistedResourcesTransfer_, enableExistedResourcesTransfer) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline GetAutoGroupingStatusResponseBody& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoGroupingStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the Transfer Existing Associated Resources feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableExistedResourcesTransfer_ = nullptr;
    // The status of the Automatic Resource Transfer feature. Valid values:
    // 
    // *   Enabling: The feature is being enabled.
    // *   Enable: The feature is enabled.
    // *   Partial_Enable: The transfer of associated resources is enabled, but custom transfer rule-based resource transfer is disabled. You can call the [EnableAutoGrouping](https://help.aliyun.com/document_detail/2870380.html) operation to enable custom transfer rule-based resource transfer.
    // *   Disable: The feature is disabled.
    std::shared_ptr<string> enableStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
