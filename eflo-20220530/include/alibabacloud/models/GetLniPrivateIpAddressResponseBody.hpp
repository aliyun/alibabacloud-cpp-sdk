// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLNIPRIVATEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLNIPRIVATEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetLniPrivateIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLniPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLniPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLniPrivateIpAddressResponseBody() = default ;
    GetLniPrivateIpAddressResponseBody(const GetLniPrivateIpAddressResponseBody &) = default ;
    GetLniPrivateIpAddressResponseBody(GetLniPrivateIpAddressResponseBody &&) = default ;
    GetLniPrivateIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLniPrivateIpAddressResponseBody() = default ;
    GetLniPrivateIpAddressResponseBody& operator=(const GetLniPrivateIpAddressResponseBody &) = default ;
    GetLniPrivateIpAddressResponseBody& operator=(GetLniPrivateIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(IpAddressMac, ipAddressMac_);
        DARABONBA_PTR_TO_JSON(IpName, ipName_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(IpAddressMac, ipAddressMac_);
        DARABONBA_PTR_FROM_JSON(IpName, ipName_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->ipAddressMac_ == nullptr && this->ipName_ == nullptr && this->message_ == nullptr && this->networkInterfaceId_ == nullptr
        && this->privateIpAddress_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->subnetId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Content& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Content& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // ipAddressMac Field Functions 
      bool hasIpAddressMac() const { return this->ipAddressMac_ != nullptr;};
      void deleteIpAddressMac() { this->ipAddressMac_ = nullptr;};
      inline string getIpAddressMac() const { DARABONBA_PTR_GET_DEFAULT(ipAddressMac_, "") };
      inline Content& setIpAddressMac(string ipAddressMac) { DARABONBA_PTR_SET_VALUE(ipAddressMac_, ipAddressMac) };


      // ipName Field Functions 
      bool hasIpName() const { return this->ipName_ != nullptr;};
      void deleteIpName() { this->ipName_ = nullptr;};
      inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
      inline Content& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Content& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline Content& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // privateIpAddress Field Functions 
      bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
      void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
      inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
      inline Content& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Content& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subnetId Field Functions 
      bool hasSubnetId() const { return this->subnetId_ != nullptr;};
      void deleteSubnetId() { this->subnetId_ = nullptr;};
      inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
      inline Content& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    protected:
      // The instance description.
      shared_ptr<string> description_ {};
      // The time when the data address was created.
      shared_ptr<string> gmtCreate_ {};
      // MAC address of the secondary private network
      shared_ptr<string> ipAddressMac_ {};
      // IP unique identifier
      shared_ptr<string> ipName_ {};
      // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
      shared_ptr<string> message_ {};
      // Lingjun network interface controller ID
      shared_ptr<string> networkInterfaceId_ {};
      // The secondary private IP address of the Lingjun network interface controller.
      shared_ptr<string> privateIpAddress_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Resource group instance ID
      shared_ptr<string> resourceGroupId_ {};
      // The state of the rule.
      shared_ptr<string> status_ {};
      // The subnet instance ID.
      shared_ptr<string> subnetId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLniPrivateIpAddressResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetLniPrivateIpAddressResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetLniPrivateIpAddressResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetLniPrivateIpAddressResponseBody::Content) };
    inline GetLniPrivateIpAddressResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetLniPrivateIpAddressResponseBody::Content) };
    inline GetLniPrivateIpAddressResponseBody& setContent(const GetLniPrivateIpAddressResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetLniPrivateIpAddressResponseBody& setContent(GetLniPrivateIpAddressResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLniPrivateIpAddressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLniPrivateIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetLniPrivateIpAddressResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
