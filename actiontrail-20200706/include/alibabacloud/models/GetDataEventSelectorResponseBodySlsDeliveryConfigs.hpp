// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORRESPONSEBODYSLSDELIVERYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORRESPONSEBODYSLSDELIVERYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetDataEventSelectorResponseBodySlsDeliveryConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataEventSelectorResponseBodySlsDeliveryConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RegionSlsProjectArn, regionSlsProjectArn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrailRegion, trailRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataEventSelectorResponseBodySlsDeliveryConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RegionSlsProjectArn, regionSlsProjectArn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrailRegion, trailRegion_);
    };
    GetDataEventSelectorResponseBodySlsDeliveryConfigs() = default ;
    GetDataEventSelectorResponseBodySlsDeliveryConfigs(const GetDataEventSelectorResponseBodySlsDeliveryConfigs &) = default ;
    GetDataEventSelectorResponseBodySlsDeliveryConfigs(GetDataEventSelectorResponseBodySlsDeliveryConfigs &&) = default ;
    GetDataEventSelectorResponseBodySlsDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataEventSelectorResponseBodySlsDeliveryConfigs() = default ;
    GetDataEventSelectorResponseBodySlsDeliveryConfigs& operator=(const GetDataEventSelectorResponseBodySlsDeliveryConfigs &) = default ;
    GetDataEventSelectorResponseBodySlsDeliveryConfigs& operator=(GetDataEventSelectorResponseBodySlsDeliveryConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->regionSlsProjectArn_ == nullptr && return this->status_ == nullptr && return this->trailRegion_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDataEventSelectorResponseBodySlsDeliveryConfigs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataEventSelectorResponseBodySlsDeliveryConfigs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataEventSelectorResponseBodySlsDeliveryConfigs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // regionSlsProjectArn Field Functions 
    bool hasRegionSlsProjectArn() const { return this->regionSlsProjectArn_ != nullptr;};
    void deleteRegionSlsProjectArn() { this->regionSlsProjectArn_ = nullptr;};
    inline string regionSlsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(regionSlsProjectArn_, "") };
    inline GetDataEventSelectorResponseBodySlsDeliveryConfigs& setRegionSlsProjectArn(string regionSlsProjectArn) { DARABONBA_PTR_SET_VALUE(regionSlsProjectArn_, regionSlsProjectArn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataEventSelectorResponseBodySlsDeliveryConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trailRegion Field Functions 
    bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
    void deleteTrailRegion() { this->trailRegion_ = nullptr;};
    inline string trailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
    inline GetDataEventSelectorResponseBodySlsDeliveryConfigs& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> regionSlsProjectArn_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> trailRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
