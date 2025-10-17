// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYUSERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYUSERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBodyUserDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(OnlineDuration, onlineDuration_);
      DARABONBA_PTR_TO_JSON(OnlinePeriods, onlinePeriods_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(OnlineDuration, onlineDuration_);
      DARABONBA_PTR_FROM_JSON(OnlinePeriods, onlinePeriods_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeFaultDiagnosisUserDetailResponseBodyUserDetail() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyUserDetail(const DescribeFaultDiagnosisUserDetailResponseBodyUserDetail &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyUserDetail(DescribeFaultDiagnosisUserDetailResponseBodyUserDetail &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyUserDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBodyUserDetail() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& operator=(const DescribeFaultDiagnosisUserDetailResponseBodyUserDetail &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& operator=(DescribeFaultDiagnosisUserDetailResponseBodyUserDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTs_ == nullptr
        && return this->destroyedTs_ == nullptr && return this->duration_ == nullptr && return this->location_ == nullptr && return this->network_ == nullptr && return this->onlineDuration_ == nullptr
        && return this->onlinePeriods_ == nullptr && return this->os_ == nullptr && return this->sdkVersion_ == nullptr && return this->userId_ == nullptr; };
    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // onlineDuration Field Functions 
    bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
    void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
    inline int64_t onlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


    // onlinePeriods Field Functions 
    bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
    void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods> & onlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods>) };
    inline vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods> onlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods>) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setOnlinePeriods(const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setOnlinePeriods(vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // sdkVersion Field Functions 
    bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
    void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
    inline string sdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeFaultDiagnosisUserDetailResponseBodyUserDetail& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<int64_t> onlineDuration_ = nullptr;
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods>> onlinePeriods_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> sdkVersion_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
