// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIESINSTANCETYPEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIESINSTANCETYPEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OnDemandInstanceIds, onDemandInstanceIds_);
      DARABONBA_PTR_TO_JSON(SpotInstanceIds, spotInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OnDemandInstanceIds, onDemandInstanceIds_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceIds, spotInstanceIds_);
    };
    ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails() = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails(const ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails &) = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails(ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails &&) = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails() = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& operator=(const ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails &) = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& operator=(ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->onDemandInstanceIds_ != nullptr && this->spotInstanceIds_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // onDemandInstanceIds Field Functions 
    bool hasOnDemandInstanceIds() const { return this->onDemandInstanceIds_ != nullptr;};
    void deleteOnDemandInstanceIds() { this->onDemandInstanceIds_ = nullptr;};
    inline const vector<string> & onDemandInstanceIds() const { DARABONBA_PTR_GET_CONST(onDemandInstanceIds_, vector<string>) };
    inline vector<string> onDemandInstanceIds() { DARABONBA_PTR_GET(onDemandInstanceIds_, vector<string>) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& setOnDemandInstanceIds(const vector<string> & onDemandInstanceIds) { DARABONBA_PTR_SET_VALUE(onDemandInstanceIds_, onDemandInstanceIds) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& setOnDemandInstanceIds(vector<string> && onDemandInstanceIds) { DARABONBA_PTR_SET_RVALUE(onDemandInstanceIds_, onDemandInstanceIds) };


    // spotInstanceIds Field Functions 
    bool hasSpotInstanceIds() const { return this->spotInstanceIds_ != nullptr;};
    void deleteSpotInstanceIds() { this->spotInstanceIds_ = nullptr;};
    inline const vector<string> & spotInstanceIds() const { DARABONBA_PTR_GET_CONST(spotInstanceIds_, vector<string>) };
    inline vector<string> spotInstanceIds() { DARABONBA_PTR_GET(spotInstanceIds_, vector<string>) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& setSpotInstanceIds(const vector<string> & spotInstanceIds) { DARABONBA_PTR_SET_VALUE(spotInstanceIds_, spotInstanceIds) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails& setSpotInstanceIds(vector<string> && spotInstanceIds) { DARABONBA_PTR_SET_RVALUE(spotInstanceIds_, spotInstanceIds) };


  protected:
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<vector<string>> onDemandInstanceIds_ = nullptr;
    std::shared_ptr<vector<string>> spotInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
