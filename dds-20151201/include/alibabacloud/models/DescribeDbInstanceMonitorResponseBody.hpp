// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstanceMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceMonitorResponseBody() = default ;
    DescribeDBInstanceMonitorResponseBody(const DescribeDBInstanceMonitorResponseBody &) = default ;
    DescribeDBInstanceMonitorResponseBody(DescribeDBInstanceMonitorResponseBody &&) = default ;
    DescribeDBInstanceMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceMonitorResponseBody() = default ;
    DescribeDBInstanceMonitorResponseBody& operator=(const DescribeDBInstanceMonitorResponseBody &) = default ;
    DescribeDBInstanceMonitorResponseBody& operator=(DescribeDBInstanceMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->granularity_ == nullptr
        && this->requestId_ == nullptr; };
    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline DescribeDBInstanceMonitorResponseBody& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The collection frequency of monitoring data for the instance. Valid value: **5**. Unit: seconds.
    shared_ptr<string> granularity_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
