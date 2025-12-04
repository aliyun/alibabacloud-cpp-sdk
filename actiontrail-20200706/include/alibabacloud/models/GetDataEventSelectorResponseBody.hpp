// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEVENTSELECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataEventSelectorResponseBodySlsDeliveryConfigs.hpp>
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
    virtual bool empty() const override { return this->dataEventSelectors_ == nullptr
        && return this->isTrailAllRegion_ == nullptr && return this->requestId_ == nullptr && return this->slsDeliveryConfigs_ == nullptr && return this->trailArn_ == nullptr; };
    // dataEventSelectors Field Functions 
    bool hasDataEventSelectors() const { return this->dataEventSelectors_ != nullptr;};
    void deleteDataEventSelectors() { this->dataEventSelectors_ = nullptr;};
    inline string dataEventSelectors() const { DARABONBA_PTR_GET_DEFAULT(dataEventSelectors_, "") };
    inline GetDataEventSelectorResponseBody& setDataEventSelectors(string dataEventSelectors) { DARABONBA_PTR_SET_VALUE(dataEventSelectors_, dataEventSelectors) };


    // isTrailAllRegion Field Functions 
    bool hasIsTrailAllRegion() const { return this->isTrailAllRegion_ != nullptr;};
    void deleteIsTrailAllRegion() { this->isTrailAllRegion_ = nullptr;};
    inline bool isTrailAllRegion() const { DARABONBA_PTR_GET_DEFAULT(isTrailAllRegion_, false) };
    inline GetDataEventSelectorResponseBody& setIsTrailAllRegion(bool isTrailAllRegion) { DARABONBA_PTR_SET_VALUE(isTrailAllRegion_, isTrailAllRegion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataEventSelectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsDeliveryConfigs Field Functions 
    bool hasSlsDeliveryConfigs() const { return this->slsDeliveryConfigs_ != nullptr;};
    void deleteSlsDeliveryConfigs() { this->slsDeliveryConfigs_ = nullptr;};
    inline const vector<GetDataEventSelectorResponseBodySlsDeliveryConfigs> & slsDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfigs_, vector<GetDataEventSelectorResponseBodySlsDeliveryConfigs>) };
    inline vector<GetDataEventSelectorResponseBodySlsDeliveryConfigs> slsDeliveryConfigs() { DARABONBA_PTR_GET(slsDeliveryConfigs_, vector<GetDataEventSelectorResponseBodySlsDeliveryConfigs>) };
    inline GetDataEventSelectorResponseBody& setSlsDeliveryConfigs(const vector<GetDataEventSelectorResponseBodySlsDeliveryConfigs> & slsDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };
    inline GetDataEventSelectorResponseBody& setSlsDeliveryConfigs(vector<GetDataEventSelectorResponseBodySlsDeliveryConfigs> && slsDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };


    // trailArn Field Functions 
    bool hasTrailArn() const { return this->trailArn_ != nullptr;};
    void deleteTrailArn() { this->trailArn_ = nullptr;};
    inline string trailArn() const { DARABONBA_PTR_GET_DEFAULT(trailArn_, "") };
    inline GetDataEventSelectorResponseBody& setTrailArn(string trailArn) { DARABONBA_PTR_SET_VALUE(trailArn_, trailArn) };


  protected:
    std::shared_ptr<string> dataEventSelectors_ = nullptr;
    std::shared_ptr<bool> isTrailAllRegion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<GetDataEventSelectorResponseBodySlsDeliveryConfigs>> slsDeliveryConfigs_ = nullptr;
    std::shared_ptr<string> trailArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
