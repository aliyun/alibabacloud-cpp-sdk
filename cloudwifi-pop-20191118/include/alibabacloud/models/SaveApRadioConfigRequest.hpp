// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPRADIOCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPRADIOCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class SaveApRadioConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveApRadioConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BcastRate, bcastRate_);
      DARABONBA_PTR_TO_JSON(BeaconInt, beaconInt_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Frag, frag_);
      DARABONBA_PTR_TO_JSON(Htmode, htmode_);
      DARABONBA_PTR_TO_JSON(Hwmode, hwmode_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(McastRate, mcastRate_);
      DARABONBA_PTR_TO_JSON(MgmtRate, mgmtRate_);
      DARABONBA_PTR_TO_JSON(Minrate, minrate_);
      DARABONBA_PTR_TO_JSON(Noscan, noscan_);
      DARABONBA_PTR_TO_JSON(Probereq, probereq_);
      DARABONBA_PTR_TO_JSON(RequireMode, requireMode_);
      DARABONBA_PTR_TO_JSON(Rts, rts_);
      DARABONBA_PTR_TO_JSON(Shortgi, shortgi_);
      DARABONBA_PTR_TO_JSON(Txpower, txpower_);
      DARABONBA_PTR_TO_JSON(Uapsd, uapsd_);
    };
    friend void from_json(const Darabonba::Json& j, SaveApRadioConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BcastRate, bcastRate_);
      DARABONBA_PTR_FROM_JSON(BeaconInt, beaconInt_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Frag, frag_);
      DARABONBA_PTR_FROM_JSON(Htmode, htmode_);
      DARABONBA_PTR_FROM_JSON(Hwmode, hwmode_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(McastRate, mcastRate_);
      DARABONBA_PTR_FROM_JSON(MgmtRate, mgmtRate_);
      DARABONBA_PTR_FROM_JSON(Minrate, minrate_);
      DARABONBA_PTR_FROM_JSON(Noscan, noscan_);
      DARABONBA_PTR_FROM_JSON(Probereq, probereq_);
      DARABONBA_PTR_FROM_JSON(RequireMode, requireMode_);
      DARABONBA_PTR_FROM_JSON(Rts, rts_);
      DARABONBA_PTR_FROM_JSON(Shortgi, shortgi_);
      DARABONBA_PTR_FROM_JSON(Txpower, txpower_);
      DARABONBA_PTR_FROM_JSON(Uapsd, uapsd_);
    };
    SaveApRadioConfigRequest() = default ;
    SaveApRadioConfigRequest(const SaveApRadioConfigRequest &) = default ;
    SaveApRadioConfigRequest(SaveApRadioConfigRequest &&) = default ;
    SaveApRadioConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveApRadioConfigRequest() = default ;
    SaveApRadioConfigRequest& operator=(const SaveApRadioConfigRequest &) = default ;
    SaveApRadioConfigRequest& operator=(SaveApRadioConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->bcastRate_ == nullptr && this->beaconInt_ == nullptr && this->channel_ == nullptr && this->disabled_ == nullptr
        && this->frag_ == nullptr && this->htmode_ == nullptr && this->hwmode_ == nullptr && this->id_ == nullptr && this->mcastRate_ == nullptr
        && this->mgmtRate_ == nullptr && this->minrate_ == nullptr && this->noscan_ == nullptr && this->probereq_ == nullptr && this->requireMode_ == nullptr
        && this->rts_ == nullptr && this->shortgi_ == nullptr && this->txpower_ == nullptr && this->uapsd_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline SaveApRadioConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SaveApRadioConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bcastRate Field Functions 
    bool hasBcastRate() const { return this->bcastRate_ != nullptr;};
    void deleteBcastRate() { this->bcastRate_ = nullptr;};
    inline int32_t getBcastRate() const { DARABONBA_PTR_GET_DEFAULT(bcastRate_, 0) };
    inline SaveApRadioConfigRequest& setBcastRate(int32_t bcastRate) { DARABONBA_PTR_SET_VALUE(bcastRate_, bcastRate) };


    // beaconInt Field Functions 
    bool hasBeaconInt() const { return this->beaconInt_ != nullptr;};
    void deleteBeaconInt() { this->beaconInt_ = nullptr;};
    inline int32_t getBeaconInt() const { DARABONBA_PTR_GET_DEFAULT(beaconInt_, 0) };
    inline SaveApRadioConfigRequest& setBeaconInt(int32_t beaconInt) { DARABONBA_PTR_SET_VALUE(beaconInt_, beaconInt) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline SaveApRadioConfigRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline string getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, "") };
    inline SaveApRadioConfigRequest& setDisabled(string disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // frag Field Functions 
    bool hasFrag() const { return this->frag_ != nullptr;};
    void deleteFrag() { this->frag_ = nullptr;};
    inline int32_t getFrag() const { DARABONBA_PTR_GET_DEFAULT(frag_, 0) };
    inline SaveApRadioConfigRequest& setFrag(int32_t frag) { DARABONBA_PTR_SET_VALUE(frag_, frag) };


    // htmode Field Functions 
    bool hasHtmode() const { return this->htmode_ != nullptr;};
    void deleteHtmode() { this->htmode_ = nullptr;};
    inline string getHtmode() const { DARABONBA_PTR_GET_DEFAULT(htmode_, "") };
    inline SaveApRadioConfigRequest& setHtmode(string htmode) { DARABONBA_PTR_SET_VALUE(htmode_, htmode) };


    // hwmode Field Functions 
    bool hasHwmode() const { return this->hwmode_ != nullptr;};
    void deleteHwmode() { this->hwmode_ = nullptr;};
    inline string getHwmode() const { DARABONBA_PTR_GET_DEFAULT(hwmode_, "") };
    inline SaveApRadioConfigRequest& setHwmode(string hwmode) { DARABONBA_PTR_SET_VALUE(hwmode_, hwmode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SaveApRadioConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mcastRate Field Functions 
    bool hasMcastRate() const { return this->mcastRate_ != nullptr;};
    void deleteMcastRate() { this->mcastRate_ = nullptr;};
    inline int32_t getMcastRate() const { DARABONBA_PTR_GET_DEFAULT(mcastRate_, 0) };
    inline SaveApRadioConfigRequest& setMcastRate(int32_t mcastRate) { DARABONBA_PTR_SET_VALUE(mcastRate_, mcastRate) };


    // mgmtRate Field Functions 
    bool hasMgmtRate() const { return this->mgmtRate_ != nullptr;};
    void deleteMgmtRate() { this->mgmtRate_ = nullptr;};
    inline int32_t getMgmtRate() const { DARABONBA_PTR_GET_DEFAULT(mgmtRate_, 0) };
    inline SaveApRadioConfigRequest& setMgmtRate(int32_t mgmtRate) { DARABONBA_PTR_SET_VALUE(mgmtRate_, mgmtRate) };


    // minrate Field Functions 
    bool hasMinrate() const { return this->minrate_ != nullptr;};
    void deleteMinrate() { this->minrate_ = nullptr;};
    inline int32_t getMinrate() const { DARABONBA_PTR_GET_DEFAULT(minrate_, 0) };
    inline SaveApRadioConfigRequest& setMinrate(int32_t minrate) { DARABONBA_PTR_SET_VALUE(minrate_, minrate) };


    // noscan Field Functions 
    bool hasNoscan() const { return this->noscan_ != nullptr;};
    void deleteNoscan() { this->noscan_ = nullptr;};
    inline string getNoscan() const { DARABONBA_PTR_GET_DEFAULT(noscan_, "") };
    inline SaveApRadioConfigRequest& setNoscan(string noscan) { DARABONBA_PTR_SET_VALUE(noscan_, noscan) };


    // probereq Field Functions 
    bool hasProbereq() const { return this->probereq_ != nullptr;};
    void deleteProbereq() { this->probereq_ = nullptr;};
    inline string getProbereq() const { DARABONBA_PTR_GET_DEFAULT(probereq_, "") };
    inline SaveApRadioConfigRequest& setProbereq(string probereq) { DARABONBA_PTR_SET_VALUE(probereq_, probereq) };


    // requireMode Field Functions 
    bool hasRequireMode() const { return this->requireMode_ != nullptr;};
    void deleteRequireMode() { this->requireMode_ = nullptr;};
    inline string getRequireMode() const { DARABONBA_PTR_GET_DEFAULT(requireMode_, "") };
    inline SaveApRadioConfigRequest& setRequireMode(string requireMode) { DARABONBA_PTR_SET_VALUE(requireMode_, requireMode) };


    // rts Field Functions 
    bool hasRts() const { return this->rts_ != nullptr;};
    void deleteRts() { this->rts_ = nullptr;};
    inline int32_t getRts() const { DARABONBA_PTR_GET_DEFAULT(rts_, 0) };
    inline SaveApRadioConfigRequest& setRts(int32_t rts) { DARABONBA_PTR_SET_VALUE(rts_, rts) };


    // shortgi Field Functions 
    bool hasShortgi() const { return this->shortgi_ != nullptr;};
    void deleteShortgi() { this->shortgi_ = nullptr;};
    inline string getShortgi() const { DARABONBA_PTR_GET_DEFAULT(shortgi_, "") };
    inline SaveApRadioConfigRequest& setShortgi(string shortgi) { DARABONBA_PTR_SET_VALUE(shortgi_, shortgi) };


    // txpower Field Functions 
    bool hasTxpower() const { return this->txpower_ != nullptr;};
    void deleteTxpower() { this->txpower_ = nullptr;};
    inline string getTxpower() const { DARABONBA_PTR_GET_DEFAULT(txpower_, "") };
    inline SaveApRadioConfigRequest& setTxpower(string txpower) { DARABONBA_PTR_SET_VALUE(txpower_, txpower) };


    // uapsd Field Functions 
    bool hasUapsd() const { return this->uapsd_ != nullptr;};
    void deleteUapsd() { this->uapsd_ = nullptr;};
    inline int32_t getUapsd() const { DARABONBA_PTR_GET_DEFAULT(uapsd_, 0) };
    inline SaveApRadioConfigRequest& setUapsd(int32_t uapsd) { DARABONBA_PTR_SET_VALUE(uapsd_, uapsd) };


  protected:
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<int32_t> bcastRate_ {};
    // This parameter is required.
    shared_ptr<int32_t> beaconInt_ {};
    // This parameter is required.
    shared_ptr<string> channel_ {};
    // This parameter is required.
    shared_ptr<string> disabled_ {};
    // This parameter is required.
    shared_ptr<int32_t> frag_ {};
    // This parameter is required.
    shared_ptr<string> htmode_ {};
    // This parameter is required.
    shared_ptr<string> hwmode_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int32_t> mcastRate_ {};
    // This parameter is required.
    shared_ptr<int32_t> mgmtRate_ {};
    // This parameter is required.
    shared_ptr<int32_t> minrate_ {};
    // This parameter is required.
    shared_ptr<string> noscan_ {};
    // This parameter is required.
    shared_ptr<string> probereq_ {};
    shared_ptr<string> requireMode_ {};
    // This parameter is required.
    shared_ptr<int32_t> rts_ {};
    // This parameter is required.
    shared_ptr<string> shortgi_ {};
    // This parameter is required.
    shared_ptr<string> txpower_ {};
    // This parameter is required.
    shared_ptr<int32_t> uapsd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
