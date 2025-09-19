// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSWITCHREGIONDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSwitchRegionDetailResponseBodyDataRegionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSwitchRegionDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwitchRegionDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtIsAgreeModified, gmtIsAgreeModified_);
      DARABONBA_PTR_TO_JSON(GmtNoticed, gmtNoticed_);
      DARABONBA_PTR_TO_JSON(IsAgree, isAgree_);
      DARABONBA_PTR_TO_JSON(IsNoticed, isNoticed_);
      DARABONBA_PTR_TO_JSON(NeedSwitch, needSwitch_);
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwitchRegionDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtIsAgreeModified, gmtIsAgreeModified_);
      DARABONBA_PTR_FROM_JSON(GmtNoticed, gmtNoticed_);
      DARABONBA_PTR_FROM_JSON(IsAgree, isAgree_);
      DARABONBA_PTR_FROM_JSON(IsNoticed, isNoticed_);
      DARABONBA_PTR_FROM_JSON(NeedSwitch, needSwitch_);
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
    };
    GetSwitchRegionDetailResponseBodyData() = default ;
    GetSwitchRegionDetailResponseBodyData(const GetSwitchRegionDetailResponseBodyData &) = default ;
    GetSwitchRegionDetailResponseBodyData(GetSwitchRegionDetailResponseBodyData &&) = default ;
    GetSwitchRegionDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwitchRegionDetailResponseBodyData() = default ;
    GetSwitchRegionDetailResponseBodyData& operator=(const GetSwitchRegionDetailResponseBodyData &) = default ;
    GetSwitchRegionDetailResponseBodyData& operator=(GetSwitchRegionDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtIsAgreeModified_ != nullptr
        && this->gmtNoticed_ != nullptr && this->isAgree_ != nullptr && this->isNoticed_ != nullptr && this->needSwitch_ != nullptr && this->regionStatus_ != nullptr; };
    // gmtIsAgreeModified Field Functions 
    bool hasGmtIsAgreeModified() const { return this->gmtIsAgreeModified_ != nullptr;};
    void deleteGmtIsAgreeModified() { this->gmtIsAgreeModified_ = nullptr;};
    inline int64_t gmtIsAgreeModified() const { DARABONBA_PTR_GET_DEFAULT(gmtIsAgreeModified_, 0L) };
    inline GetSwitchRegionDetailResponseBodyData& setGmtIsAgreeModified(int64_t gmtIsAgreeModified) { DARABONBA_PTR_SET_VALUE(gmtIsAgreeModified_, gmtIsAgreeModified) };


    // gmtNoticed Field Functions 
    bool hasGmtNoticed() const { return this->gmtNoticed_ != nullptr;};
    void deleteGmtNoticed() { this->gmtNoticed_ = nullptr;};
    inline int64_t gmtNoticed() const { DARABONBA_PTR_GET_DEFAULT(gmtNoticed_, 0L) };
    inline GetSwitchRegionDetailResponseBodyData& setGmtNoticed(int64_t gmtNoticed) { DARABONBA_PTR_SET_VALUE(gmtNoticed_, gmtNoticed) };


    // isAgree Field Functions 
    bool hasIsAgree() const { return this->isAgree_ != nullptr;};
    void deleteIsAgree() { this->isAgree_ = nullptr;};
    inline string isAgree() const { DARABONBA_PTR_GET_DEFAULT(isAgree_, "") };
    inline GetSwitchRegionDetailResponseBodyData& setIsAgree(string isAgree) { DARABONBA_PTR_SET_VALUE(isAgree_, isAgree) };


    // isNoticed Field Functions 
    bool hasIsNoticed() const { return this->isNoticed_ != nullptr;};
    void deleteIsNoticed() { this->isNoticed_ = nullptr;};
    inline string isNoticed() const { DARABONBA_PTR_GET_DEFAULT(isNoticed_, "") };
    inline GetSwitchRegionDetailResponseBodyData& setIsNoticed(string isNoticed) { DARABONBA_PTR_SET_VALUE(isNoticed_, isNoticed) };


    // needSwitch Field Functions 
    bool hasNeedSwitch() const { return this->needSwitch_ != nullptr;};
    void deleteNeedSwitch() { this->needSwitch_ = nullptr;};
    inline bool needSwitch() const { DARABONBA_PTR_GET_DEFAULT(needSwitch_, false) };
    inline GetSwitchRegionDetailResponseBodyData& setNeedSwitch(bool needSwitch) { DARABONBA_PTR_SET_VALUE(needSwitch_, needSwitch) };


    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline const vector<Models::GetSwitchRegionDetailResponseBodyDataRegionStatus> & regionStatus() const { DARABONBA_PTR_GET_CONST(regionStatus_, vector<Models::GetSwitchRegionDetailResponseBodyDataRegionStatus>) };
    inline vector<Models::GetSwitchRegionDetailResponseBodyDataRegionStatus> regionStatus() { DARABONBA_PTR_GET(regionStatus_, vector<Models::GetSwitchRegionDetailResponseBodyDataRegionStatus>) };
    inline GetSwitchRegionDetailResponseBodyData& setRegionStatus(const vector<Models::GetSwitchRegionDetailResponseBodyDataRegionStatus> & regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };
    inline GetSwitchRegionDetailResponseBodyData& setRegionStatus(vector<Models::GetSwitchRegionDetailResponseBodyDataRegionStatus> && regionStatus) { DARABONBA_PTR_SET_RVALUE(regionStatus_, regionStatus) };


  protected:
    // The time when the permissions were modified.
    std::shared_ptr<int64_t> gmtIsAgreeModified_ = nullptr;
    // The notification time.
    std::shared_ptr<int64_t> gmtNoticed_ = nullptr;
    // Indicates whether the migration is approved.
    std::shared_ptr<string> isAgree_ = nullptr;
    // Indicates whether the notification is sent.
    std::shared_ptr<string> isNoticed_ = nullptr;
    std::shared_ptr<bool> needSwitch_ = nullptr;
    // The status of the switching to the region.
    std::shared_ptr<vector<Models::GetSwitchRegionDetailResponseBodyDataRegionStatus>> regionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
