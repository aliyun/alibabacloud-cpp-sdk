// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceSupportMaxPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSupportMaxPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSupportMaxPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceSupportMaxPerformanceResponseBody() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody(const DescribeDBInstanceSupportMaxPerformanceResponseBody &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody(DescribeDBInstanceSupportMaxPerformanceResponseBody &&) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSupportMaxPerformanceResponseBody() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody& operator=(const DescribeDBInstanceSupportMaxPerformanceResponseBody &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody& operator=(DescribeDBInstanceSupportMaxPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->performances_ != nullptr && this->requestId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances & performances() const { DARABONBA_PTR_GET_CONST(performances_, DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances performances() { DARABONBA_PTR_GET(performances_, DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setPerformances(const DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setPerformances(DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The queried performance metric.
    std::shared_ptr<DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances> performances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
