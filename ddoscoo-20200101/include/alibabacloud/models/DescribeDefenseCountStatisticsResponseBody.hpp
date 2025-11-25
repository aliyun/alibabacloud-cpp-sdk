// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics.hpp>
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
    virtual bool empty() const override { return this->defenseCountStatistics_ == nullptr
        && return this->requestId_ == nullptr; };
    // defenseCountStatistics Field Functions 
    bool hasDefenseCountStatistics() const { return this->defenseCountStatistics_ != nullptr;};
    void deleteDefenseCountStatistics() { this->defenseCountStatistics_ = nullptr;};
    inline const DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics & defenseCountStatistics() const { DARABONBA_PTR_GET_CONST(defenseCountStatistics_, DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics) };
    inline DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics defenseCountStatistics() { DARABONBA_PTR_GET(defenseCountStatistics_, DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics) };
    inline DescribeDefenseCountStatisticsResponseBody& setDefenseCountStatistics(const DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics & defenseCountStatistics) { DARABONBA_PTR_SET_VALUE(defenseCountStatistics_, defenseCountStatistics) };
    inline DescribeDefenseCountStatisticsResponseBody& setDefenseCountStatistics(DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics && defenseCountStatistics) { DARABONBA_PTR_SET_RVALUE(defenseCountStatistics_, defenseCountStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseCountStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the number of advanced mitigation sessions.
    std::shared_ptr<DescribeDefenseCountStatisticsResponseBodyDefenseCountStatistics> defenseCountStatistics_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
