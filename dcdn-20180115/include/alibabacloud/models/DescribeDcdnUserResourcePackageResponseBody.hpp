// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserResourcePackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    DescribeDcdnUserResourcePackageResponseBody() = default ;
    DescribeDcdnUserResourcePackageResponseBody(const DescribeDcdnUserResourcePackageResponseBody &) = default ;
    DescribeDcdnUserResourcePackageResponseBody(DescribeDcdnUserResourcePackageResponseBody &&) = default ;
    DescribeDcdnUserResourcePackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserResourcePackageResponseBody() = default ;
    DescribeDcdnUserResourcePackageResponseBody& operator=(const DescribeDcdnUserResourcePackageResponseBody &) = default ;
    DescribeDcdnUserResourcePackageResponseBody& operator=(DescribeDcdnUserResourcePackageResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
          DARABONBA_PTR_TO_JSON(CurrCapacityShowUnit, currCapacityShowUnit_);
          DARABONBA_PTR_TO_JSON(CurrCapacityShowValue, currCapacityShowValue_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
          DARABONBA_PTR_TO_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
          DARABONBA_PTR_TO_JSON(InitCapacityShowUnit, initCapacityShowUnit_);
          DARABONBA_PTR_TO_JSON(InitCapacityShowValue, initCapacityShowValue_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePackageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
          DARABONBA_PTR_FROM_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
          DARABONBA_PTR_FROM_JSON(CurrCapacityShowUnit, currCapacityShowUnit_);
          DARABONBA_PTR_FROM_JSON(CurrCapacityShowValue, currCapacityShowValue_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
          DARABONBA_PTR_FROM_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
          DARABONBA_PTR_FROM_JSON(InitCapacityShowUnit, initCapacityShowUnit_);
          DARABONBA_PTR_FROM_JSON(InitCapacityShowValue, initCapacityShowValue_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
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
        && this->currCapacity_ == nullptr && this->currCapacityBaseUnit_ == nullptr && this->currCapacityShowUnit_ == nullptr && this->currCapacityShowValue_ == nullptr && this->displayName_ == nullptr
        && this->endTime_ == nullptr && this->initCapacity_ == nullptr && this->initCapacityBaseUnit_ == nullptr && this->initCapacityShowUnit_ == nullptr && this->initCapacityShowValue_ == nullptr
        && this->instanceId_ == nullptr && this->region_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->templateName_ == nullptr; };
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


        // currCapacityBaseUnit Field Functions 
        bool hasCurrCapacityBaseUnit() const { return this->currCapacityBaseUnit_ != nullptr;};
        void deleteCurrCapacityBaseUnit() { this->currCapacityBaseUnit_ = nullptr;};
        inline string getCurrCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityBaseUnit_, "") };
        inline ResourcePackageInfo& setCurrCapacityBaseUnit(string currCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(currCapacityBaseUnit_, currCapacityBaseUnit) };


        // currCapacityShowUnit Field Functions 
        bool hasCurrCapacityShowUnit() const { return this->currCapacityShowUnit_ != nullptr;};
        void deleteCurrCapacityShowUnit() { this->currCapacityShowUnit_ = nullptr;};
        inline string getCurrCapacityShowUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityShowUnit_, "") };
        inline ResourcePackageInfo& setCurrCapacityShowUnit(string currCapacityShowUnit) { DARABONBA_PTR_SET_VALUE(currCapacityShowUnit_, currCapacityShowUnit) };


        // currCapacityShowValue Field Functions 
        bool hasCurrCapacityShowValue() const { return this->currCapacityShowValue_ != nullptr;};
        void deleteCurrCapacityShowValue() { this->currCapacityShowValue_ = nullptr;};
        inline string getCurrCapacityShowValue() const { DARABONBA_PTR_GET_DEFAULT(currCapacityShowValue_, "") };
        inline ResourcePackageInfo& setCurrCapacityShowValue(string currCapacityShowValue) { DARABONBA_PTR_SET_VALUE(currCapacityShowValue_, currCapacityShowValue) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ResourcePackageInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline ResourcePackageInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // initCapacity Field Functions 
        bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
        void deleteInitCapacity() { this->initCapacity_ = nullptr;};
        inline string getInitCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, "") };
        inline ResourcePackageInfo& setInitCapacity(string initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


        // initCapacityBaseUnit Field Functions 
        bool hasInitCapacityBaseUnit() const { return this->initCapacityBaseUnit_ != nullptr;};
        void deleteInitCapacityBaseUnit() { this->initCapacityBaseUnit_ = nullptr;};
        inline string getInitCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityBaseUnit_, "") };
        inline ResourcePackageInfo& setInitCapacityBaseUnit(string initCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(initCapacityBaseUnit_, initCapacityBaseUnit) };


        // initCapacityShowUnit Field Functions 
        bool hasInitCapacityShowUnit() const { return this->initCapacityShowUnit_ != nullptr;};
        void deleteInitCapacityShowUnit() { this->initCapacityShowUnit_ = nullptr;};
        inline string getInitCapacityShowUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityShowUnit_, "") };
        inline ResourcePackageInfo& setInitCapacityShowUnit(string initCapacityShowUnit) { DARABONBA_PTR_SET_VALUE(initCapacityShowUnit_, initCapacityShowUnit) };


        // initCapacityShowValue Field Functions 
        bool hasInitCapacityShowValue() const { return this->initCapacityShowValue_ != nullptr;};
        void deleteInitCapacityShowValue() { this->initCapacityShowValue_ = nullptr;};
        inline string getInitCapacityShowValue() const { DARABONBA_PTR_GET_DEFAULT(initCapacityShowValue_, "") };
        inline ResourcePackageInfo& setInitCapacityShowValue(string initCapacityShowValue) { DARABONBA_PTR_SET_VALUE(initCapacityShowValue_, initCapacityShowValue) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ResourcePackageInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline ResourcePackageInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ResourcePackageInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResourcePackageInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline ResourcePackageInfo& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        // The commodity code of the resource plan.
        shared_ptr<string> commodityCode_ {};
        // The remaining quota of the resource plan.
        // 
        // *   The unit for traffic: bytes.
        // *   The unit for requests: count.
        shared_ptr<string> currCapacity_ {};
        shared_ptr<string> currCapacityBaseUnit_ {};
        shared_ptr<string> currCapacityShowUnit_ {};
        shared_ptr<string> currCapacityShowValue_ {};
        // The name of the resource plan.
        shared_ptr<string> displayName_ {};
        // The expiration time. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
        shared_ptr<string> endTime_ {};
        // The total quota of the resource plan.
        // 
        // *   The unit for traffic: bytes.
        // *   The unit for requests: count.
        shared_ptr<string> initCapacity_ {};
        shared_ptr<string> initCapacityBaseUnit_ {};
        shared_ptr<string> initCapacityShowUnit_ {};
        shared_ptr<string> initCapacityShowValue_ {};
        // The ID of the resource plan.
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> region_ {};
        // The validation time. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
        shared_ptr<string> startTime_ {};
        // The status of the resource plan. Valid values:
        // 
        // *   **valid**: valid
        // *   **closed**: expired
        shared_ptr<string> status_ {};
        // The name of the template.
        shared_ptr<string> templateName_ {};
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
    inline DescribeDcdnUserResourcePackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePackageInfos Field Functions 
    bool hasResourcePackageInfos() const { return this->resourcePackageInfos_ != nullptr;};
    void deleteResourcePackageInfos() { this->resourcePackageInfos_ = nullptr;};
    inline const DescribeDcdnUserResourcePackageResponseBody::ResourcePackageInfos & getResourcePackageInfos() const { DARABONBA_PTR_GET_CONST(resourcePackageInfos_, DescribeDcdnUserResourcePackageResponseBody::ResourcePackageInfos) };
    inline DescribeDcdnUserResourcePackageResponseBody::ResourcePackageInfos getResourcePackageInfos() { DARABONBA_PTR_GET(resourcePackageInfos_, DescribeDcdnUserResourcePackageResponseBody::ResourcePackageInfos) };
    inline DescribeDcdnUserResourcePackageResponseBody& setResourcePackageInfos(const DescribeDcdnUserResourcePackageResponseBody::ResourcePackageInfos & resourcePackageInfos) { DARABONBA_PTR_SET_VALUE(resourcePackageInfos_, resourcePackageInfos) };
    inline DescribeDcdnUserResourcePackageResponseBody& setResourcePackageInfos(DescribeDcdnUserResourcePackageResponseBody::ResourcePackageInfos && resourcePackageInfos) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfos_, resourcePackageInfos) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The detailed information about resource plans. The returned information is displayed in the format that is specified by the ResourcePackageInfo parameter.
    shared_ptr<DescribeDcdnUserResourcePackageResponseBody::ResourcePackageInfos> resourcePackageInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
