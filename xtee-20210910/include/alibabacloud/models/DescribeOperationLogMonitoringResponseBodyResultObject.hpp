// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGMONITORINGRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGMONITORINGRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperationLogMonitoringResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperationLogMonitoringResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(dateGrouped, dateGrouped_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperationLogMonitoringResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(dateGrouped, dateGrouped_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    DescribeOperationLogMonitoringResponseBodyResultObject() = default ;
    DescribeOperationLogMonitoringResponseBodyResultObject(const DescribeOperationLogMonitoringResponseBodyResultObject &) = default ;
    DescribeOperationLogMonitoringResponseBodyResultObject(DescribeOperationLogMonitoringResponseBodyResultObject &&) = default ;
    DescribeOperationLogMonitoringResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperationLogMonitoringResponseBodyResultObject() = default ;
    DescribeOperationLogMonitoringResponseBodyResultObject& operator=(const DescribeOperationLogMonitoringResponseBodyResultObject &) = default ;
    DescribeOperationLogMonitoringResponseBodyResultObject& operator=(DescribeOperationLogMonitoringResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateGrouped_ != nullptr
        && this->totalCount_ != nullptr; };
    // dateGrouped Field Functions 
    bool hasDateGrouped() const { return this->dateGrouped_ != nullptr;};
    void deleteDateGrouped() { this->dateGrouped_ = nullptr;};
    inline string dateGrouped() const { DARABONBA_PTR_GET_DEFAULT(dateGrouped_, "") };
    inline DescribeOperationLogMonitoringResponseBodyResultObject& setDateGrouped(string dateGrouped) { DARABONBA_PTR_SET_VALUE(dateGrouped_, dateGrouped) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeOperationLogMonitoringResponseBodyResultObject& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Time axis slice.
    std::shared_ptr<string> dateGrouped_ = nullptr;
    // Total count.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
