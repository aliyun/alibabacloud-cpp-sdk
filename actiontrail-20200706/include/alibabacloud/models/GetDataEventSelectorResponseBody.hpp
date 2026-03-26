// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetDataEventSelectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataEventSelectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataEventSelectors, dataEventSelectors_);
      DARABONBA_PTR_TO_JSON(IsTrailAllRegion, isTrailAllRegion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
      DARABONBA_PTR_TO_JSON(TrailArn, trailArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataEventSelectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEventSelectors, dataEventSelectors_);
      DARABONBA_PTR_FROM_JSON(IsTrailAllRegion, isTrailAllRegion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(TrailArn, trailArn_);
    };
    GetDataEventSelectorResponseBody() = default ;
    GetDataEventSelectorResponseBody(const GetDataEventSelectorResponseBody &) = default ;
    GetDataEventSelectorResponseBody(GetDataEventSelectorResponseBody &&) = default ;
    GetDataEventSelectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataEventSelectorResponseBody() = default ;
    GetDataEventSelectorResponseBody& operator=(const GetDataEventSelectorResponseBody &) = default ;
    GetDataEventSelectorResponseBody& operator=(GetDataEventSelectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsDeliveryConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsDeliveryConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(RegionSlsProjectArn, regionSlsProjectArn_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TrailRegion, trailRegion_);
      };
      friend void from_json(const Darabonba::Json& j, SlsDeliveryConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(RegionSlsProjectArn, regionSlsProjectArn_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TrailRegion, trailRegion_);
      };
      SlsDeliveryConfigs() = default ;
      SlsDeliveryConfigs(const SlsDeliveryConfigs &) = default ;
      SlsDeliveryConfigs(SlsDeliveryConfigs &&) = default ;
      SlsDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsDeliveryConfigs() = default ;
      SlsDeliveryConfigs& operator=(const SlsDeliveryConfigs &) = default ;
      SlsDeliveryConfigs& operator=(SlsDeliveryConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->regionSlsProjectArn_ == nullptr && this->status_ == nullptr && this->trailRegion_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SlsDeliveryConfigs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline SlsDeliveryConfigs& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline SlsDeliveryConfigs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // regionSlsProjectArn Field Functions 
      bool hasRegionSlsProjectArn() const { return this->regionSlsProjectArn_ != nullptr;};
      void deleteRegionSlsProjectArn() { this->regionSlsProjectArn_ = nullptr;};
      inline string getRegionSlsProjectArn() const { DARABONBA_PTR_GET_DEFAULT(regionSlsProjectArn_, "") };
      inline SlsDeliveryConfigs& setRegionSlsProjectArn(string regionSlsProjectArn) { DARABONBA_PTR_SET_VALUE(regionSlsProjectArn_, regionSlsProjectArn) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SlsDeliveryConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trailRegion Field Functions 
      bool hasTrailRegion() const { return this->trailRegion_ != nullptr;};
      void deleteTrailRegion() { this->trailRegion_ = nullptr;};
      inline string getTrailRegion() const { DARABONBA_PTR_GET_DEFAULT(trailRegion_, "") };
      inline SlsDeliveryConfigs& setTrailRegion(string trailRegion) { DARABONBA_PTR_SET_VALUE(trailRegion_, trailRegion) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> regionSlsProjectArn_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> trailRegion_ {};
    };

    virtual bool empty() const override { return this->dataEventSelectors_ == nullptr
        && this->isTrailAllRegion_ == nullptr && this->requestId_ == nullptr && this->slsDeliveryConfigs_ == nullptr && this->trailArn_ == nullptr; };
    // dataEventSelectors Field Functions 
    bool hasDataEventSelectors() const { return this->dataEventSelectors_ != nullptr;};
    void deleteDataEventSelectors() { this->dataEventSelectors_ = nullptr;};
    inline string getDataEventSelectors() const { DARABONBA_PTR_GET_DEFAULT(dataEventSelectors_, "") };
    inline GetDataEventSelectorResponseBody& setDataEventSelectors(string dataEventSelectors) { DARABONBA_PTR_SET_VALUE(dataEventSelectors_, dataEventSelectors) };


    // isTrailAllRegion Field Functions 
    bool hasIsTrailAllRegion() const { return this->isTrailAllRegion_ != nullptr;};
    void deleteIsTrailAllRegion() { this->isTrailAllRegion_ = nullptr;};
    inline bool getIsTrailAllRegion() const { DARABONBA_PTR_GET_DEFAULT(isTrailAllRegion_, false) };
    inline GetDataEventSelectorResponseBody& setIsTrailAllRegion(bool isTrailAllRegion) { DARABONBA_PTR_SET_VALUE(isTrailAllRegion_, isTrailAllRegion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataEventSelectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsDeliveryConfigs Field Functions 
    bool hasSlsDeliveryConfigs() const { return this->slsDeliveryConfigs_ != nullptr;};
    void deleteSlsDeliveryConfigs() { this->slsDeliveryConfigs_ = nullptr;};
    inline const vector<GetDataEventSelectorResponseBody::SlsDeliveryConfigs> & getSlsDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfigs_, vector<GetDataEventSelectorResponseBody::SlsDeliveryConfigs>) };
    inline vector<GetDataEventSelectorResponseBody::SlsDeliveryConfigs> getSlsDeliveryConfigs() { DARABONBA_PTR_GET(slsDeliveryConfigs_, vector<GetDataEventSelectorResponseBody::SlsDeliveryConfigs>) };
    inline GetDataEventSelectorResponseBody& setSlsDeliveryConfigs(const vector<GetDataEventSelectorResponseBody::SlsDeliveryConfigs> & slsDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };
    inline GetDataEventSelectorResponseBody& setSlsDeliveryConfigs(vector<GetDataEventSelectorResponseBody::SlsDeliveryConfigs> && slsDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };


    // trailArn Field Functions 
    bool hasTrailArn() const { return this->trailArn_ != nullptr;};
    void deleteTrailArn() { this->trailArn_ = nullptr;};
    inline string getTrailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
    inline GetDataEventSelectorResponseBody& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


  protected:
    shared_ptr<string> dataEventSelectors_ {};
    shared_ptr<bool> isTrailAllRegion_ {};
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<vector<GetDataEventSelectorResponseBody::SlsDeliveryConfigs>> slsDeliveryConfigs_ {};
    shared_ptr<string> trailArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
