// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLENIPRIVATEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLENIPRIVATEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetLeniPrivateIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLeniPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLeniPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLeniPrivateIpAddressResponseBody() = default ;
    GetLeniPrivateIpAddressResponseBody(const GetLeniPrivateIpAddressResponseBody &) = default ;
    GetLeniPrivateIpAddressResponseBody(GetLeniPrivateIpAddressResponseBody &&) = default ;
    GetLeniPrivateIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLeniPrivateIpAddressResponseBody() = default ;
    GetLeniPrivateIpAddressResponseBody& operator=(const GetLeniPrivateIpAddressResponseBody &) = default ;
    GetLeniPrivateIpAddressResponseBody& operator=(GetLeniPrivateIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IpName, ipName_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IpName, ipName_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->elasticNetworkInterfaceId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ipName_ == nullptr && this->message_ == nullptr
        && this->privateIpAddress_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Content& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // elasticNetworkInterfaceId Field Functions 
      bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
      void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
      inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
      inline Content& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Content& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


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


    protected:
      // The description.
      shared_ptr<string> description_ {};
      // Lingjun Elastic Network Interface ID.
      shared_ptr<string> elasticNetworkInterfaceId_ {};
      // The time when the activation code was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the certificate was updated.
      shared_ptr<string> gmtModified_ {};
      // Lingjun Elastic Network Interface secondary private IP unique identifier.
      shared_ptr<string> ipName_ {};
      // The returned message.
      shared_ptr<string> message_ {};
      // Lingjun Elastic Network Interface secondary private IP address.
      shared_ptr<string> privateIpAddress_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Resource group instance ID
      shared_ptr<string> resourceGroupId_ {};
      // The task status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLeniPrivateIpAddressResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetLeniPrivateIpAddressResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetLeniPrivateIpAddressResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetLeniPrivateIpAddressResponseBody::Content) };
    inline GetLeniPrivateIpAddressResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetLeniPrivateIpAddressResponseBody::Content) };
    inline GetLeniPrivateIpAddressResponseBody& setContent(const GetLeniPrivateIpAddressResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetLeniPrivateIpAddressResponseBody& setContent(GetLeniPrivateIpAddressResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLeniPrivateIpAddressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLeniPrivateIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<GetLeniPrivateIpAddressResponseBody::Content> content_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
