// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginSummaryResponseBodyDataFailedReasons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePluginSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCnt, failedCnt_);
      DARABONBA_PTR_TO_JSON(FailedReasons, failedReasons_);
      DARABONBA_PTR_TO_JSON(OfflineCnt, offlineCnt_);
      DARABONBA_PTR_TO_JSON(OnlineCnt, onlineCnt_);
      DARABONBA_PTR_TO_JSON(SwitchOffCnt, switchOffCnt_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCnt, failedCnt_);
      DARABONBA_PTR_FROM_JSON(FailedReasons, failedReasons_);
      DARABONBA_PTR_FROM_JSON(OfflineCnt, offlineCnt_);
      DARABONBA_PTR_FROM_JSON(OnlineCnt, onlineCnt_);
      DARABONBA_PTR_FROM_JSON(SwitchOffCnt, switchOffCnt_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribePluginSummaryResponseBodyData() = default ;
    DescribePluginSummaryResponseBodyData(const DescribePluginSummaryResponseBodyData &) = default ;
    DescribePluginSummaryResponseBodyData(DescribePluginSummaryResponseBodyData &&) = default ;
    DescribePluginSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSummaryResponseBodyData() = default ;
    DescribePluginSummaryResponseBodyData& operator=(const DescribePluginSummaryResponseBodyData &) = default ;
    DescribePluginSummaryResponseBodyData& operator=(DescribePluginSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedCnt_ != nullptr
        && this->failedReasons_ != nullptr && this->offlineCnt_ != nullptr && this->onlineCnt_ != nullptr && this->switchOffCnt_ != nullptr && this->totalCnt_ != nullptr; };
    // failedCnt Field Functions 
    bool hasFailedCnt() const { return this->failedCnt_ != nullptr;};
    void deleteFailedCnt() { this->failedCnt_ = nullptr;};
    inline int32_t failedCnt() const { DARABONBA_PTR_GET_DEFAULT(failedCnt_, 0) };
    inline DescribePluginSummaryResponseBodyData& setFailedCnt(int32_t failedCnt) { DARABONBA_PTR_SET_VALUE(failedCnt_, failedCnt) };


    // failedReasons Field Functions 
    bool hasFailedReasons() const { return this->failedReasons_ != nullptr;};
    void deleteFailedReasons() { this->failedReasons_ = nullptr;};
    inline const vector<Models::DescribePluginSummaryResponseBodyDataFailedReasons> & failedReasons() const { DARABONBA_PTR_GET_CONST(failedReasons_, vector<Models::DescribePluginSummaryResponseBodyDataFailedReasons>) };
    inline vector<Models::DescribePluginSummaryResponseBodyDataFailedReasons> failedReasons() { DARABONBA_PTR_GET(failedReasons_, vector<Models::DescribePluginSummaryResponseBodyDataFailedReasons>) };
    inline DescribePluginSummaryResponseBodyData& setFailedReasons(const vector<Models::DescribePluginSummaryResponseBodyDataFailedReasons> & failedReasons) { DARABONBA_PTR_SET_VALUE(failedReasons_, failedReasons) };
    inline DescribePluginSummaryResponseBodyData& setFailedReasons(vector<Models::DescribePluginSummaryResponseBodyDataFailedReasons> && failedReasons) { DARABONBA_PTR_SET_RVALUE(failedReasons_, failedReasons) };


    // offlineCnt Field Functions 
    bool hasOfflineCnt() const { return this->offlineCnt_ != nullptr;};
    void deleteOfflineCnt() { this->offlineCnt_ = nullptr;};
    inline int32_t offlineCnt() const { DARABONBA_PTR_GET_DEFAULT(offlineCnt_, 0) };
    inline DescribePluginSummaryResponseBodyData& setOfflineCnt(int32_t offlineCnt) { DARABONBA_PTR_SET_VALUE(offlineCnt_, offlineCnt) };


    // onlineCnt Field Functions 
    bool hasOnlineCnt() const { return this->onlineCnt_ != nullptr;};
    void deleteOnlineCnt() { this->onlineCnt_ = nullptr;};
    inline int32_t onlineCnt() const { DARABONBA_PTR_GET_DEFAULT(onlineCnt_, 0) };
    inline DescribePluginSummaryResponseBodyData& setOnlineCnt(int32_t onlineCnt) { DARABONBA_PTR_SET_VALUE(onlineCnt_, onlineCnt) };


    // switchOffCnt Field Functions 
    bool hasSwitchOffCnt() const { return this->switchOffCnt_ != nullptr;};
    void deleteSwitchOffCnt() { this->switchOffCnt_ = nullptr;};
    inline int32_t switchOffCnt() const { DARABONBA_PTR_GET_DEFAULT(switchOffCnt_, 0) };
    inline DescribePluginSummaryResponseBodyData& setSwitchOffCnt(int32_t switchOffCnt) { DARABONBA_PTR_SET_VALUE(switchOffCnt_, switchOffCnt) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int32_t totalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
    inline DescribePluginSummaryResponseBodyData& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    // The number of hosts on which the plug-in failed to be installed.
    std::shared_ptr<int32_t> failedCnt_ = nullptr;
    // The causes of installation failures.
    std::shared_ptr<vector<Models::DescribePluginSummaryResponseBodyDataFailedReasons>> failedReasons_ = nullptr;
    // The number of hosts on which the plug-in is offline.
    std::shared_ptr<int32_t> offlineCnt_ = nullptr;
    // The number of hosts on which the plug-in is online.
    std::shared_ptr<int32_t> onlineCnt_ = nullptr;
    // The number of hosts for which the plug-in is not enabled.
    std::shared_ptr<int32_t> switchOffCnt_ = nullptr;
    // The total number of hosts.
    std::shared_ptr<int32_t> totalCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
