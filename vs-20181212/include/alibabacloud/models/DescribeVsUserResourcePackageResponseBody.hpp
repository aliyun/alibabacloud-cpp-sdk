// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsUserResourcePackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    DescribeVsUserResourcePackageResponseBody() = default ;
    DescribeVsUserResourcePackageResponseBody(const DescribeVsUserResourcePackageResponseBody &) = default ;
    DescribeVsUserResourcePackageResponseBody(DescribeVsUserResourcePackageResponseBody &&) = default ;
    DescribeVsUserResourcePackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsUserResourcePackageResponseBody() = default ;
    DescribeVsUserResourcePackageResponseBody& operator=(const DescribeVsUserResourcePackageResponseBody &) = default ;
    DescribeVsUserResourcePackageResponseBody& operator=(DescribeVsUserResourcePackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourcePackageInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePackageInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ResourcePackageInfo, resourcePackageInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePackageInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourcePackageInfo, resourcePackageInfo_);
      };
      ResourcePackageInfos() = default ;
      ResourcePackageInfos(const ResourcePackageInfos &) = default ;
      ResourcePackageInfos(ResourcePackageInfos &&) = default ;
      ResourcePackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcePackageInfos() = default ;
      ResourcePackageInfos& operator=(const ResourcePackageInfos &) = default ;
      ResourcePackageInfos& operator=(ResourcePackageInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourcePackageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePackageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePackageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ResourcePackageInfo() = default ;
        ResourcePackageInfo(const ResourcePackageInfo &) = default ;
        ResourcePackageInfo(ResourcePackageInfo &&) = default ;
        ResourcePackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePackageInfo() = default ;
        ResourcePackageInfo& operator=(const ResourcePackageInfo &) = default ;
        ResourcePackageInfo& operator=(ResourcePackageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->currCapacity_ == nullptr && this->displayName_ == nullptr && this->initCapacity_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr; };
        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline ResourcePackageInfo& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // currCapacity Field Functions 
        bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
        void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
        inline string getCurrCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, "") };
        inline ResourcePackageInfo& setCurrCapacity(string currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ResourcePackageInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // initCapacity Field Functions 
        bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
        void deleteInitCapacity() { this->initCapacity_ = nullptr;};
        inline string getInitCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, "") };
        inline ResourcePackageInfo& setInitCapacity(string initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ResourcePackageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResourcePackageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> commodityCode_ {};
        shared_ptr<string> currCapacity_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> initCapacity_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->resourcePackageInfo_ == nullptr; };
      // resourcePackageInfo Field Functions 
      bool hasResourcePackageInfo() const { return this->resourcePackageInfo_ != nullptr;};
      void deleteResourcePackageInfo() { this->resourcePackageInfo_ = nullptr;};
      inline const vector<ResourcePackageInfos::ResourcePackageInfo> & getResourcePackageInfo() const { DARABONBA_PTR_GET_CONST(resourcePackageInfo_, vector<ResourcePackageInfos::ResourcePackageInfo>) };
      inline vector<ResourcePackageInfos::ResourcePackageInfo> getResourcePackageInfo() { DARABONBA_PTR_GET(resourcePackageInfo_, vector<ResourcePackageInfos::ResourcePackageInfo>) };
      inline ResourcePackageInfos& setResourcePackageInfo(const vector<ResourcePackageInfos::ResourcePackageInfo> & resourcePackageInfo) { DARABONBA_PTR_SET_VALUE(resourcePackageInfo_, resourcePackageInfo) };
      inline ResourcePackageInfos& setResourcePackageInfo(vector<ResourcePackageInfos::ResourcePackageInfo> && resourcePackageInfo) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfo_, resourcePackageInfo) };


    protected:
      shared_ptr<vector<ResourcePackageInfos::ResourcePackageInfo>> resourcePackageInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourcePackageInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsUserResourcePackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePackageInfos Field Functions 
    bool hasResourcePackageInfos() const { return this->resourcePackageInfos_ != nullptr;};
    void deleteResourcePackageInfos() { this->resourcePackageInfos_ = nullptr;};
    inline const DescribeVsUserResourcePackageResponseBody::ResourcePackageInfos & getResourcePackageInfos() const { DARABONBA_PTR_GET_CONST(resourcePackageInfos_, DescribeVsUserResourcePackageResponseBody::ResourcePackageInfos) };
    inline DescribeVsUserResourcePackageResponseBody::ResourcePackageInfos getResourcePackageInfos() { DARABONBA_PTR_GET(resourcePackageInfos_, DescribeVsUserResourcePackageResponseBody::ResourcePackageInfos) };
    inline DescribeVsUserResourcePackageResponseBody& setResourcePackageInfos(const DescribeVsUserResourcePackageResponseBody::ResourcePackageInfos & resourcePackageInfos) { DARABONBA_PTR_SET_VALUE(resourcePackageInfos_, resourcePackageInfos) };
    inline DescribeVsUserResourcePackageResponseBody& setResourcePackageInfos(DescribeVsUserResourcePackageResponseBody::ResourcePackageInfos && resourcePackageInfos) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfos_, resourcePackageInfos) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeVsUserResourcePackageResponseBody::ResourcePackageInfos> resourcePackageInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
