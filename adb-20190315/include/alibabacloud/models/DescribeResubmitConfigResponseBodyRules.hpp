// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESUBMITCONFIGRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESUBMITCONFIGRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeResubmitConfigResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResubmitConfigResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(ExceedMemoryException, exceedMemoryException_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_TO_JSON(TargetGroupName, targetGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResubmitConfigResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceedMemoryException, exceedMemoryException_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_FROM_JSON(TargetGroupName, targetGroupName_);
    };
    DescribeResubmitConfigResponseBodyRules() = default ;
    DescribeResubmitConfigResponseBodyRules(const DescribeResubmitConfigResponseBodyRules &) = default ;
    DescribeResubmitConfigResponseBodyRules(DescribeResubmitConfigResponseBodyRules &&) = default ;
    DescribeResubmitConfigResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResubmitConfigResponseBodyRules() = default ;
    DescribeResubmitConfigResponseBodyRules& operator=(const DescribeResubmitConfigResponseBodyRules &) = default ;
    DescribeResubmitConfigResponseBodyRules& operator=(DescribeResubmitConfigResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exceedMemoryException_ != nullptr
        && this->groupName_ != nullptr && this->peakMemory_ != nullptr && this->queryTime_ != nullptr && this->targetGroupName_ != nullptr; };
    // exceedMemoryException Field Functions 
    bool hasExceedMemoryException() const { return this->exceedMemoryException_ != nullptr;};
    void deleteExceedMemoryException() { this->exceedMemoryException_ = nullptr;};
    inline bool exceedMemoryException() const { DARABONBA_PTR_GET_DEFAULT(exceedMemoryException_, false) };
    inline DescribeResubmitConfigResponseBodyRules& setExceedMemoryException(bool exceedMemoryException) { DARABONBA_PTR_SET_VALUE(exceedMemoryException_, exceedMemoryException) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeResubmitConfigResponseBodyRules& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline string peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, "") };
    inline DescribeResubmitConfigResponseBodyRules& setPeakMemory(string peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline string queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
    inline DescribeResubmitConfigResponseBodyRules& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // targetGroupName Field Functions 
    bool hasTargetGroupName() const { return this->targetGroupName_ != nullptr;};
    void deleteTargetGroupName() { this->targetGroupName_ = nullptr;};
    inline string targetGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetGroupName_, "") };
    inline DescribeResubmitConfigResponseBodyRules& setTargetGroupName(string targetGroupName) { DARABONBA_PTR_SET_VALUE(targetGroupName_, targetGroupName) };


  protected:
    // Indicates whether out-of-memory (OOM) check is configured.
    std::shared_ptr<bool> exceedMemoryException_ = nullptr;
    // The name of the source resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The peak memory usage.
    std::shared_ptr<string> peakMemory_ = nullptr;
    // The duration of the SQL statement. Unit: milliseconds.
    std::shared_ptr<string> queryTime_ = nullptr;
    // The name of the destination resource group.
    std::shared_ptr<string> targetGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
