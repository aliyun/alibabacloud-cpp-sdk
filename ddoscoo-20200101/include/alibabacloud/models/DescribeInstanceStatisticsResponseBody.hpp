// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceStatisticsResponseBodyInstanceStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatistics, instanceStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatistics, instanceStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceStatisticsResponseBody() = default ;
    DescribeInstanceStatisticsResponseBody(const DescribeInstanceStatisticsResponseBody &) = default ;
    DescribeInstanceStatisticsResponseBody(DescribeInstanceStatisticsResponseBody &&) = default ;
    DescribeInstanceStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatisticsResponseBody() = default ;
    DescribeInstanceStatisticsResponseBody& operator=(const DescribeInstanceStatisticsResponseBody &) = default ;
    DescribeInstanceStatisticsResponseBody& operator=(DescribeInstanceStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceStatistics_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceStatistics Field Functions 
    bool hasInstanceStatistics() const { return this->instanceStatistics_ != nullptr;};
    void deleteInstanceStatistics() { this->instanceStatistics_ = nullptr;};
    inline const vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics> & instanceStatistics() const { DARABONBA_PTR_GET_CONST(instanceStatistics_, vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics>) };
    inline vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics> instanceStatistics() { DARABONBA_PTR_GET(instanceStatistics_, vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics>) };
    inline DescribeInstanceStatisticsResponseBody& setInstanceStatistics(const vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics> & instanceStatistics) { DARABONBA_PTR_SET_VALUE(instanceStatistics_, instanceStatistics) };
    inline DescribeInstanceStatisticsResponseBody& setInstanceStatistics(vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics> && instanceStatistics) { DARABONBA_PTR_SET_RVALUE(instanceStatistics_, instanceStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the instance.
    std::shared_ptr<vector<DescribeInstanceStatisticsResponseBodyInstanceStatistics>> instanceStatistics_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
