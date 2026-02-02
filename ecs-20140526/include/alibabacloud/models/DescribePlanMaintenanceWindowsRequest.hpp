// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLANMAINTENANCEWINDOWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLANMAINTENANCEWINDOWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePlanMaintenanceWindowsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlanMaintenanceWindowsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_TO_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupId, targetResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TargetResourceTags, targetResourceTags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlanMaintenanceWindowsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_FROM_JSON(PlanWindowName, planWindowName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupId, targetResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TargetResourceTags, targetResourceTags_);
    };
    DescribePlanMaintenanceWindowsRequest() = default ;
    DescribePlanMaintenanceWindowsRequest(const DescribePlanMaintenanceWindowsRequest &) = default ;
    DescribePlanMaintenanceWindowsRequest(DescribePlanMaintenanceWindowsRequest &&) = default ;
    DescribePlanMaintenanceWindowsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlanMaintenanceWindowsRequest() = default ;
    DescribePlanMaintenanceWindowsRequest& operator=(const DescribePlanMaintenanceWindowsRequest &) = default ;
    DescribePlanMaintenanceWindowsRequest& operator=(DescribePlanMaintenanceWindowsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TargetResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TargetResourceTags() = default ;
      TargetResourceTags(const TargetResourceTags &) = default ;
      TargetResourceTags(TargetResourceTags &&) = default ;
      TargetResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetResourceTags() = default ;
      TargetResourceTags& operator=(const TargetResourceTags &) = default ;
      TargetResourceTags& operator=(TargetResourceTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TargetResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TargetResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->enable_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->planWindowId_ == nullptr && this->planWindowName_ == nullptr && this->regionId_ == nullptr
        && this->targetResourceGroupId_ == nullptr && this->targetResourceTags_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribePlanMaintenanceWindowsRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePlanMaintenanceWindowsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePlanMaintenanceWindowsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // planWindowId Field Functions 
    bool hasPlanWindowId() const { return this->planWindowId_ != nullptr;};
    void deletePlanWindowId() { this->planWindowId_ = nullptr;};
    inline string getPlanWindowId() const { DARABONBA_PTR_GET_DEFAULT(planWindowId_, "") };
    inline DescribePlanMaintenanceWindowsRequest& setPlanWindowId(string planWindowId) { DARABONBA_PTR_SET_VALUE(planWindowId_, planWindowId) };


    // planWindowName Field Functions 
    bool hasPlanWindowName() const { return this->planWindowName_ != nullptr;};
    void deletePlanWindowName() { this->planWindowName_ = nullptr;};
    inline string getPlanWindowName() const { DARABONBA_PTR_GET_DEFAULT(planWindowName_, "") };
    inline DescribePlanMaintenanceWindowsRequest& setPlanWindowName(string planWindowName) { DARABONBA_PTR_SET_VALUE(planWindowName_, planWindowName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePlanMaintenanceWindowsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetResourceGroupId Field Functions 
    bool hasTargetResourceGroupId() const { return this->targetResourceGroupId_ != nullptr;};
    void deleteTargetResourceGroupId() { this->targetResourceGroupId_ = nullptr;};
    inline string getTargetResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupId_, "") };
    inline DescribePlanMaintenanceWindowsRequest& setTargetResourceGroupId(string targetResourceGroupId) { DARABONBA_PTR_SET_VALUE(targetResourceGroupId_, targetResourceGroupId) };


    // targetResourceTags Field Functions 
    bool hasTargetResourceTags() const { return this->targetResourceTags_ != nullptr;};
    void deleteTargetResourceTags() { this->targetResourceTags_ = nullptr;};
    inline const DescribePlanMaintenanceWindowsRequest::TargetResourceTags & getTargetResourceTags() const { DARABONBA_PTR_GET_CONST(targetResourceTags_, DescribePlanMaintenanceWindowsRequest::TargetResourceTags) };
    inline DescribePlanMaintenanceWindowsRequest::TargetResourceTags getTargetResourceTags() { DARABONBA_PTR_GET(targetResourceTags_, DescribePlanMaintenanceWindowsRequest::TargetResourceTags) };
    inline DescribePlanMaintenanceWindowsRequest& setTargetResourceTags(const DescribePlanMaintenanceWindowsRequest::TargetResourceTags & targetResourceTags) { DARABONBA_PTR_SET_VALUE(targetResourceTags_, targetResourceTags) };
    inline DescribePlanMaintenanceWindowsRequest& setTargetResourceTags(DescribePlanMaintenanceWindowsRequest::TargetResourceTags && targetResourceTags) { DARABONBA_PTR_SET_RVALUE(targetResourceTags_, targetResourceTags) };


  protected:
    shared_ptr<bool> enable_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> planWindowId_ {};
    shared_ptr<string> planWindowName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> targetResourceGroupId_ {};
    shared_ptr<DescribePlanMaintenanceWindowsRequest::TargetResourceTags> targetResourceTags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
