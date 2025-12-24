// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECREATEANDDELETESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECREATEANDDELETESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeInstanceCreateAndDeleteStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceCreateAndDeleteStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCreateAndDeleteStatistics, instanceCreateAndDeleteStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceCreateAndDeleteStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCreateAndDeleteStatistics, instanceCreateAndDeleteStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceCreateAndDeleteStatisticsResponseBody() = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody(const DescribeInstanceCreateAndDeleteStatisticsResponseBody &) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody(DescribeInstanceCreateAndDeleteStatisticsResponseBody &&) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceCreateAndDeleteStatisticsResponseBody() = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody& operator=(const DescribeInstanceCreateAndDeleteStatisticsResponseBody &) = default ;
    DescribeInstanceCreateAndDeleteStatisticsResponseBody& operator=(DescribeInstanceCreateAndDeleteStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCreateAndDeleteStatistics_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceCreateAndDeleteStatistics Field Functions 
    bool hasInstanceCreateAndDeleteStatistics() const { return this->instanceCreateAndDeleteStatistics_ != nullptr;};
    void deleteInstanceCreateAndDeleteStatistics() { this->instanceCreateAndDeleteStatistics_ = nullptr;};
    inline const DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics & instanceCreateAndDeleteStatistics() const { DARABONBA_PTR_GET_CONST(instanceCreateAndDeleteStatistics_, DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics instanceCreateAndDeleteStatistics() { DARABONBA_PTR_GET(instanceCreateAndDeleteStatistics_, DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBody& setInstanceCreateAndDeleteStatistics(const DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics & instanceCreateAndDeleteStatistics) { DARABONBA_PTR_SET_VALUE(instanceCreateAndDeleteStatistics_, instanceCreateAndDeleteStatistics) };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBody& setInstanceCreateAndDeleteStatistics(DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics && instanceCreateAndDeleteStatistics) { DARABONBA_PTR_SET_RVALUE(instanceCreateAndDeleteStatistics_, instanceCreateAndDeleteStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceCreateAndDeleteStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeInstanceCreateAndDeleteStatisticsResponseBodyInstanceCreateAndDeleteStatistics> instanceCreateAndDeleteStatistics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
