// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeDistinctReleasesResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistinctReleasesResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
      DARABONBA_PTR_TO_JSON(TaskflowType, taskflowType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistinctReleasesResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
      DARABONBA_PTR_FROM_JSON(TaskflowType, taskflowType_);
    };
    DescribeDistinctReleasesResponseBodyRecords() = default ;
    DescribeDistinctReleasesResponseBodyRecords(const DescribeDistinctReleasesResponseBodyRecords &) = default ;
    DescribeDistinctReleasesResponseBodyRecords(DescribeDistinctReleasesResponseBodyRecords &&) = default ;
    DescribeDistinctReleasesResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistinctReleasesResponseBodyRecords() = default ;
    DescribeDistinctReleasesResponseBodyRecords& operator=(const DescribeDistinctReleasesResponseBodyRecords &) = default ;
    DescribeDistinctReleasesResponseBodyRecords& operator=(DescribeDistinctReleasesResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->taskflowMd5_ == nullptr && return this->taskflowType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDistinctReleasesResponseBodyRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // taskflowMd5 Field Functions 
    bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
    void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
    inline string taskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
    inline DescribeDistinctReleasesResponseBodyRecords& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


    // taskflowType Field Functions 
    bool hasTaskflowType() const { return this->taskflowType_ != nullptr;};
    void deleteTaskflowType() { this->taskflowType_ = nullptr;};
    inline string taskflowType() const { DARABONBA_PTR_GET_DEFAULT(taskflowType_, "") };
    inline DescribeDistinctReleasesResponseBodyRecords& setTaskflowType(string taskflowType) { DARABONBA_PTR_SET_VALUE(taskflowType_, taskflowType) };


  protected:
    // The version description.
    std::shared_ptr<string> description_ = nullptr;
    // The MD5 value of the version XML configuration.
    std::shared_ptr<string> taskflowMd5_ = nullptr;
    // The format of the playbook. Valid values:
    // 
    // *   **xml**: XML format.
    // *   **x6**: JSON format.
    std::shared_ptr<string> taskflowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
