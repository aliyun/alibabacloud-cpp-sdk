// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDefenseCountStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseCountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseCountStatistics, defenseCountStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseCountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseCountStatistics, defenseCountStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefenseCountStatisticsResponseBody() = default ;
    DescribeDefenseCountStatisticsResponseBody(const DescribeDefenseCountStatisticsResponseBody &) = default ;
    DescribeDefenseCountStatisticsResponseBody(DescribeDefenseCountStatisticsResponseBody &&) = default ;
    DescribeDefenseCountStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseCountStatisticsResponseBody() = default ;
    DescribeDefenseCountStatisticsResponseBody& operator=(const DescribeDefenseCountStatisticsResponseBody &) = default ;
    DescribeDefenseCountStatisticsResponseBody& operator=(DescribeDefenseCountStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DefenseCountStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefenseCountStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseCountTotalUsageOfCurrentMonth, defenseCountTotalUsageOfCurrentMonth_);
        DARABONBA_PTR_TO_JSON(FlowPackCountRemain, flowPackCountRemain_);
        DARABONBA_PTR_TO_JSON(MaxUsableDefenseCountCurrentMonth, maxUsableDefenseCountCurrentMonth_);
        DARABONBA_PTR_TO_JSON(SecHighSpeedCountRemain, secHighSpeedCountRemain_);
      };
      friend void from_json(const Darabonba::Json& j, DefenseCountStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseCountTotalUsageOfCurrentMonth, defenseCountTotalUsageOfCurrentMonth_);
        DARABONBA_PTR_FROM_JSON(FlowPackCountRemain, flowPackCountRemain_);
        DARABONBA_PTR_FROM_JSON(MaxUsableDefenseCountCurrentMonth, maxUsableDefenseCountCurrentMonth_);
        DARABONBA_PTR_FROM_JSON(SecHighSpeedCountRemain, secHighSpeedCountRemain_);
      };
      DefenseCountStatistics() = default ;
      DefenseCountStatistics(const DefenseCountStatistics &) = default ;
      DefenseCountStatistics(DefenseCountStatistics &&) = default ;
      DefenseCountStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefenseCountStatistics() = default ;
      DefenseCountStatistics& operator=(const DefenseCountStatistics &) = default ;
      DefenseCountStatistics& operator=(DefenseCountStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defenseCountTotalUsageOfCurrentMonth_ == nullptr
        && this->flowPackCountRemain_ == nullptr && this->maxUsableDefenseCountCurrentMonth_ == nullptr && this->secHighSpeedCountRemain_ == nullptr; };
      // defenseCountTotalUsageOfCurrentMonth Field Functions 
      bool hasDefenseCountTotalUsageOfCurrentMonth() const { return this->defenseCountTotalUsageOfCurrentMonth_ != nullptr;};
      void deleteDefenseCountTotalUsageOfCurrentMonth() { this->defenseCountTotalUsageOfCurrentMonth_ = nullptr;};
      inline int32_t getDefenseCountTotalUsageOfCurrentMonth() const { DARABONBA_PTR_GET_DEFAULT(defenseCountTotalUsageOfCurrentMonth_, 0) };
      inline DefenseCountStatistics& setDefenseCountTotalUsageOfCurrentMonth(int32_t defenseCountTotalUsageOfCurrentMonth) { DARABONBA_PTR_SET_VALUE(defenseCountTotalUsageOfCurrentMonth_, defenseCountTotalUsageOfCurrentMonth) };


      // flowPackCountRemain Field Functions 
      bool hasFlowPackCountRemain() const { return this->flowPackCountRemain_ != nullptr;};
      void deleteFlowPackCountRemain() { this->flowPackCountRemain_ = nullptr;};
      inline int32_t getFlowPackCountRemain() const { DARABONBA_PTR_GET_DEFAULT(flowPackCountRemain_, 0) };
      inline DefenseCountStatistics& setFlowPackCountRemain(int32_t flowPackCountRemain) { DARABONBA_PTR_SET_VALUE(flowPackCountRemain_, flowPackCountRemain) };


      // maxUsableDefenseCountCurrentMonth Field Functions 
      bool hasMaxUsableDefenseCountCurrentMonth() const { return this->maxUsableDefenseCountCurrentMonth_ != nullptr;};
      void deleteMaxUsableDefenseCountCurrentMonth() { this->maxUsableDefenseCountCurrentMonth_ = nullptr;};
      inline int32_t getMaxUsableDefenseCountCurrentMonth() const { DARABONBA_PTR_GET_DEFAULT(maxUsableDefenseCountCurrentMonth_, 0) };
      inline DefenseCountStatistics& setMaxUsableDefenseCountCurrentMonth(int32_t maxUsableDefenseCountCurrentMonth) { DARABONBA_PTR_SET_VALUE(maxUsableDefenseCountCurrentMonth_, maxUsableDefenseCountCurrentMonth) };


      // secHighSpeedCountRemain Field Functions 
      bool hasSecHighSpeedCountRemain() const { return this->secHighSpeedCountRemain_ != nullptr;};
      void deleteSecHighSpeedCountRemain() { this->secHighSpeedCountRemain_ = nullptr;};
      inline int32_t getSecHighSpeedCountRemain() const { DARABONBA_PTR_GET_DEFAULT(secHighSpeedCountRemain_, 0) };
      inline DefenseCountStatistics& setSecHighSpeedCountRemain(int32_t secHighSpeedCountRemain) { DARABONBA_PTR_SET_VALUE(secHighSpeedCountRemain_, secHighSpeedCountRemain) };


    protected:
      // The number of advanced mitigation sessions that are used within the current calendar month.
      shared_ptr<int32_t> defenseCountTotalUsageOfCurrentMonth_ {};
      // The number of available global advanced mitigation sessions for the Insurance mitigation plan.
      shared_ptr<int32_t> flowPackCountRemain_ {};
      // The maximum number of advanced mitigation sessions available for the current calendar month. The advanced mitigation sessions include the advanced mitigation sessions that are provided free of charge and the global advanced mitigation sessions that you purchase.
      shared_ptr<int32_t> maxUsableDefenseCountCurrentMonth_ {};
      // The number of available global advanced mitigation sessions for the Secure Chinese Mainland Acceleration (Sec-CMA) mitigation plan.
      shared_ptr<int32_t> secHighSpeedCountRemain_ {};
    };

    virtual bool empty() const override { return this->defenseCountStatistics_ == nullptr
        && this->requestId_ == nullptr; };
    // defenseCountStatistics Field Functions 
    bool hasDefenseCountStatistics() const { return this->defenseCountStatistics_ != nullptr;};
    void deleteDefenseCountStatistics() { this->defenseCountStatistics_ = nullptr;};
    inline const DescribeDefenseCountStatisticsResponseBody::DefenseCountStatistics & getDefenseCountStatistics() const { DARABONBA_PTR_GET_CONST(defenseCountStatistics_, DescribeDefenseCountStatisticsResponseBody::DefenseCountStatistics) };
    inline DescribeDefenseCountStatisticsResponseBody::DefenseCountStatistics getDefenseCountStatistics() { DARABONBA_PTR_GET(defenseCountStatistics_, DescribeDefenseCountStatisticsResponseBody::DefenseCountStatistics) };
    inline DescribeDefenseCountStatisticsResponseBody& setDefenseCountStatistics(const DescribeDefenseCountStatisticsResponseBody::DefenseCountStatistics & defenseCountStatistics) { DARABONBA_PTR_SET_VALUE(defenseCountStatistics_, defenseCountStatistics) };
    inline DescribeDefenseCountStatisticsResponseBody& setDefenseCountStatistics(DescribeDefenseCountStatisticsResponseBody::DefenseCountStatistics && defenseCountStatistics) { DARABONBA_PTR_SET_RVALUE(defenseCountStatistics_, defenseCountStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseCountStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the number of advanced mitigation sessions.
    shared_ptr<DescribeDefenseCountStatisticsResponseBody::DefenseCountStatistics> defenseCountStatistics_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
