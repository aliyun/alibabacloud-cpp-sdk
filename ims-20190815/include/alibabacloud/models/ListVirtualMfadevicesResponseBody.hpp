// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVirtualMFADevicesResponseBodyVirtualMFADevices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListVirtualMFADevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    ListVirtualMFADevicesResponseBody() = default ;
    ListVirtualMFADevicesResponseBody(const ListVirtualMFADevicesResponseBody &) = default ;
    ListVirtualMFADevicesResponseBody(ListVirtualMFADevicesResponseBody &&) = default ;
    ListVirtualMFADevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualMFADevicesResponseBody() = default ;
    ListVirtualMFADevicesResponseBody& operator=(const ListVirtualMFADevicesResponseBody &) = default ;
    ListVirtualMFADevicesResponseBody& operator=(ListVirtualMFADevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isTruncated_ != nullptr
        && this->marker_ != nullptr && this->requestId_ != nullptr && this->virtualMFADevices_ != nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListVirtualMFADevicesResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListVirtualMFADevicesResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirtualMFADevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualMFADevices Field Functions 
    bool hasVirtualMFADevices() const { return this->virtualMFADevices_ != nullptr;};
    void deleteVirtualMFADevices() { this->virtualMFADevices_ = nullptr;};
    inline const ListVirtualMFADevicesResponseBodyVirtualMFADevices & virtualMFADevices() const { DARABONBA_PTR_GET_CONST(virtualMFADevices_, ListVirtualMFADevicesResponseBodyVirtualMFADevices) };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevices virtualMFADevices() { DARABONBA_PTR_GET(virtualMFADevices_, ListVirtualMFADevicesResponseBodyVirtualMFADevices) };
    inline ListVirtualMFADevicesResponseBody& setVirtualMFADevices(const ListVirtualMFADevicesResponseBodyVirtualMFADevices & virtualMFADevices) { DARABONBA_PTR_SET_VALUE(virtualMFADevices_, virtualMFADevices) };
    inline ListVirtualMFADevicesResponseBody& setVirtualMFADevices(ListVirtualMFADevicesResponseBodyVirtualMFADevices && virtualMFADevices) { DARABONBA_PTR_SET_RVALUE(virtualMFADevices_, virtualMFADevices) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // >  This parameter is returned only when `IsTruncated` is `true`.
    std::shared_ptr<string> marker_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the MFA device.
    std::shared_ptr<ListVirtualMFADevicesResponseBodyVirtualMFADevices> virtualMFADevices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
