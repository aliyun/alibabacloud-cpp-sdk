// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTASKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StepList, stepList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StepList, stepList_);
    };
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo(DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo &&) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& operator=(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& operator=(DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->progress_ != nullptr && this->status_ != nullptr && this->stepList_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stepList Field Functions 
    bool hasStepList() const { return this->stepList_ != nullptr;};
    void deleteStepList() { this->stepList_ = nullptr;};
    inline const Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList & stepList() const { DARABONBA_PTR_GET_CONST(stepList_, Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList) };
    inline Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList stepList() { DARABONBA_PTR_GET(stepList_, Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& setStepList(const Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList & stepList) { DARABONBA_PTR_SET_VALUE(stepList_, stepList) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfo& setStepList(Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList && stepList) { DARABONBA_PTR_SET_RVALUE(stepList_, stepList) };


  protected:
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The progress of the job. Unit: %.
    std::shared_ptr<string> progress_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   NOT_RUN
    // *   RUNNING
    // *   SUCCEED
    std::shared_ptr<string> status_ = nullptr;
    // The job steps.
    std::shared_ptr<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTaskInfoStepList> stepList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
