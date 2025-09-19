// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RemindAlarmCount, remindAlarmCount_);
      DARABONBA_PTR_TO_JSON(SeriousAlarmCount, seriousAlarmCount_);
      DARABONBA_PTR_TO_JSON(SuspiciousAlarmCount, suspiciousAlarmCount_);
      DARABONBA_PTR_TO_JSON(TotalAlarmCount, totalAlarmCount_);
      DARABONBA_PTR_TO_JSON(TotalNode, totalNode_);
      DARABONBA_PTR_TO_JSON(hasRiskNode, hasRiskNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RemindAlarmCount, remindAlarmCount_);
      DARABONBA_PTR_FROM_JSON(SeriousAlarmCount, seriousAlarmCount_);
      DARABONBA_PTR_FROM_JSON(SuspiciousAlarmCount, suspiciousAlarmCount_);
      DARABONBA_PTR_FROM_JSON(TotalAlarmCount, totalAlarmCount_);
      DARABONBA_PTR_FROM_JSON(TotalNode, totalNode_);
      DARABONBA_PTR_FROM_JSON(hasRiskNode, hasRiskNode_);
    };
    DescribeContainerStatisticsResponseBodyData() = default ;
    DescribeContainerStatisticsResponseBodyData(const DescribeContainerStatisticsResponseBodyData &) = default ;
    DescribeContainerStatisticsResponseBodyData(DescribeContainerStatisticsResponseBodyData &&) = default ;
    DescribeContainerStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerStatisticsResponseBodyData() = default ;
    DescribeContainerStatisticsResponseBodyData& operator=(const DescribeContainerStatisticsResponseBodyData &) = default ;
    DescribeContainerStatisticsResponseBodyData& operator=(DescribeContainerStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remindAlarmCount_ != nullptr
        && this->seriousAlarmCount_ != nullptr && this->suspiciousAlarmCount_ != nullptr && this->totalAlarmCount_ != nullptr && this->totalNode_ != nullptr && this->hasRiskNode_ != nullptr; };
    // remindAlarmCount Field Functions 
    bool hasRemindAlarmCount() const { return this->remindAlarmCount_ != nullptr;};
    void deleteRemindAlarmCount() { this->remindAlarmCount_ = nullptr;};
    inline int32_t remindAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(remindAlarmCount_, 0) };
    inline DescribeContainerStatisticsResponseBodyData& setRemindAlarmCount(int32_t remindAlarmCount) { DARABONBA_PTR_SET_VALUE(remindAlarmCount_, remindAlarmCount) };


    // seriousAlarmCount Field Functions 
    bool hasSeriousAlarmCount() const { return this->seriousAlarmCount_ != nullptr;};
    void deleteSeriousAlarmCount() { this->seriousAlarmCount_ = nullptr;};
    inline int32_t seriousAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(seriousAlarmCount_, 0) };
    inline DescribeContainerStatisticsResponseBodyData& setSeriousAlarmCount(int32_t seriousAlarmCount) { DARABONBA_PTR_SET_VALUE(seriousAlarmCount_, seriousAlarmCount) };


    // suspiciousAlarmCount Field Functions 
    bool hasSuspiciousAlarmCount() const { return this->suspiciousAlarmCount_ != nullptr;};
    void deleteSuspiciousAlarmCount() { this->suspiciousAlarmCount_ = nullptr;};
    inline int32_t suspiciousAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousAlarmCount_, 0) };
    inline DescribeContainerStatisticsResponseBodyData& setSuspiciousAlarmCount(int32_t suspiciousAlarmCount) { DARABONBA_PTR_SET_VALUE(suspiciousAlarmCount_, suspiciousAlarmCount) };


    // totalAlarmCount Field Functions 
    bool hasTotalAlarmCount() const { return this->totalAlarmCount_ != nullptr;};
    void deleteTotalAlarmCount() { this->totalAlarmCount_ = nullptr;};
    inline int32_t totalAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(totalAlarmCount_, 0) };
    inline DescribeContainerStatisticsResponseBodyData& setTotalAlarmCount(int32_t totalAlarmCount) { DARABONBA_PTR_SET_VALUE(totalAlarmCount_, totalAlarmCount) };


    // totalNode Field Functions 
    bool hasTotalNode() const { return this->totalNode_ != nullptr;};
    void deleteTotalNode() { this->totalNode_ = nullptr;};
    inline int32_t totalNode() const { DARABONBA_PTR_GET_DEFAULT(totalNode_, 0) };
    inline DescribeContainerStatisticsResponseBodyData& setTotalNode(int32_t totalNode) { DARABONBA_PTR_SET_VALUE(totalNode_, totalNode) };


    // hasRiskNode Field Functions 
    bool hasHasRiskNode() const { return this->hasRiskNode_ != nullptr;};
    void deleteHasRiskNode() { this->hasRiskNode_ = nullptr;};
    inline int32_t hasRiskNode() const { DARABONBA_PTR_GET_DEFAULT(hasRiskNode_, 0) };
    inline DescribeContainerStatisticsResponseBodyData& setHasRiskNode(int32_t hasRiskNode) { DARABONBA_PTR_SET_VALUE(hasRiskNode_, hasRiskNode) };


  protected:
    // The number of alerts whose risk level is **Reminder**.
    std::shared_ptr<int32_t> remindAlarmCount_ = nullptr;
    // The number of alerts whose risk level is **Urgent**.
    std::shared_ptr<int32_t> seriousAlarmCount_ = nullptr;
    // The number of alerts whose risk level is **Suspicious**.
    std::shared_ptr<int32_t> suspiciousAlarmCount_ = nullptr;
    // The total number of alerts that are generated in the current container cluster.
    std::shared_ptr<int32_t> totalAlarmCount_ = nullptr;
    // The total number of nodes in the current container cluster.
    std::shared_ptr<int32_t> totalNode_ = nullptr;
    // The number of nodes on which alerts are generated in the current container cluster.
    std::shared_ptr<int32_t> hasRiskNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
