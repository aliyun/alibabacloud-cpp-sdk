// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateEdgeContainerAppResourceReserveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeContainerAppResourceReserveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Forever, forever_);
      DARABONBA_PTR_TO_JSON(ReserveSet, reserveSet_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeContainerAppResourceReserveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Forever, forever_);
      DARABONBA_PTR_FROM_JSON(ReserveSet, reserveSet_);
    };
    UpdateEdgeContainerAppResourceReserveRequest() = default ;
    UpdateEdgeContainerAppResourceReserveRequest(const UpdateEdgeContainerAppResourceReserveRequest &) = default ;
    UpdateEdgeContainerAppResourceReserveRequest(UpdateEdgeContainerAppResourceReserveRequest &&) = default ;
    UpdateEdgeContainerAppResourceReserveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeContainerAppResourceReserveRequest() = default ;
    UpdateEdgeContainerAppResourceReserveRequest& operator=(const UpdateEdgeContainerAppResourceReserveRequest &) = default ;
    UpdateEdgeContainerAppResourceReserveRequest& operator=(UpdateEdgeContainerAppResourceReserveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReserveSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReserveSet& obj) { 
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      };
      friend void from_json(const Darabonba::Json& j, ReserveSet& obj) { 
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      };
      ReserveSet() = default ;
      ReserveSet(const ReserveSet &) = default ;
      ReserveSet(ReserveSet &&) = default ;
      ReserveSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReserveSet() = default ;
      ReserveSet& operator=(const ReserveSet &) = default ;
      ReserveSet& operator=(ReserveSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isp_ == nullptr
        && this->region_ == nullptr && this->replicas_ == nullptr; };
      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline ReserveSet& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline ReserveSet& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
      inline ReserveSet& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    protected:
      // The ISP. The following types are supported. You do not need to enter the ISP in regions outside the Chinese mainland:
      // 
      // *   China Mobile: cmcc
      // *   China Telecom: chinanet
      // *   China Unicom: unicom
      shared_ptr<string> isp_ {};
      // Information about the region. The Chinese mainland supports the input of regions and special administrative regions, and the regions outside the Chinese mainland support the input of countries. The following is the corresponding parameter mapping:
      // 
      // Chinese mainland:
      // 
      // *   East China: huadong
      // *   South China: huanan
      // *   Central China: huazhong
      // *   North China: huabei
      // *   Northwest China: xibei
      // *   Southwest China: xinan
      // *   Northeast China: dongbei
      // 
      // Special Administrative Regions and overseas:
      // 
      // *   Taiwan, China: tw
      // *   Macau, China: mo
      // *   Hong Kong, China: hk
      // *   Japan: jp
      // *   United States: us
      // *   Thailand: th
      // *   Korea: kr
      // *   Russia: ru
      // *   Singapore: sg
      // *   France: fr
      // *   Spain: es
      // *   Italy: it
      // *   Sweden: se
      // *   UAE: ae
      // *   Indonesia: id
      // *   Chile: cl
      // *   Philippines: ph
      // *   Malaysia: my
      // *   Vietnam: vn
      // *   Argentina: AR
      // *   Australia: au
      // *   Brazil: br
      // *   Colombia: co
      // *   Germany: de
      // *   UK: GB
      // *   Peru: pe
      // *   Saudi Arabia: sa
      // *   Netherlands: nl
      // *   South Africa: za
      shared_ptr<string> region_ {};
      // The number of container replicas.
      shared_ptr<int32_t> replicas_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->durationTime_ == nullptr && this->enable_ == nullptr && this->forever_ == nullptr && this->reserveSet_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // durationTime Field Functions 
    bool hasDurationTime() const { return this->durationTime_ != nullptr;};
    void deleteDurationTime() { this->durationTime_ = nullptr;};
    inline string getDurationTime() const { DARABONBA_PTR_GET_DEFAULT(durationTime_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequest& setDurationTime(string durationTime) { DARABONBA_PTR_SET_VALUE(durationTime_, durationTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // forever Field Functions 
    bool hasForever() const { return this->forever_ != nullptr;};
    void deleteForever() { this->forever_ = nullptr;};
    inline bool getForever() const { DARABONBA_PTR_GET_DEFAULT(forever_, false) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setForever(bool forever) { DARABONBA_PTR_SET_VALUE(forever_, forever) };


    // reserveSet Field Functions 
    bool hasReserveSet() const { return this->reserveSet_ != nullptr;};
    void deleteReserveSet() { this->reserveSet_ = nullptr;};
    inline const vector<UpdateEdgeContainerAppResourceReserveRequest::ReserveSet> & getReserveSet() const { DARABONBA_PTR_GET_CONST(reserveSet_, vector<UpdateEdgeContainerAppResourceReserveRequest::ReserveSet>) };
    inline vector<UpdateEdgeContainerAppResourceReserveRequest::ReserveSet> getReserveSet() { DARABONBA_PTR_GET(reserveSet_, vector<UpdateEdgeContainerAppResourceReserveRequest::ReserveSet>) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setReserveSet(const vector<UpdateEdgeContainerAppResourceReserveRequest::ReserveSet> & reserveSet) { DARABONBA_PTR_SET_VALUE(reserveSet_, reserveSet) };
    inline UpdateEdgeContainerAppResourceReserveRequest& setReserveSet(vector<UpdateEdgeContainerAppResourceReserveRequest::ReserveSet> && reserveSet) { DARABONBA_PTR_SET_RVALUE(reserveSet_, reserveSet) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    shared_ptr<string> appId_ {};
    // The end time of the reservation. The input time is UTC. It takes +8 hours to enter Beijing time. For example, if the current time is 2006-01-02 06:04:05, you need to enter "2006-01-02T14:04:05Z".
    shared_ptr<string> durationTime_ {};
    // Whether to enable resource reservation.
    shared_ptr<bool> enable_ {};
    // Whether to permanently enable the reservation. Once it is enabled, you are not allowed to set the reservation deadline.
    shared_ptr<bool> forever_ {};
    // Reserved resource list.
    shared_ptr<vector<UpdateEdgeContainerAppResourceReserveRequest::ReserveSet>> reserveSet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
