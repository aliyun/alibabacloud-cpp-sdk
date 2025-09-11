// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSRESPONSEBODYAUTOSNAPSHOTTASKSAUTOSNAPSHOTTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSRESPONSEBODYAUTOSNAPSHOTTASKSAUTOSNAPSHOTTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SourceFileSystemId, sourceFileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SourceFileSystemId, sourceFileSystemId_);
    };
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask() = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask(const DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask &) = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask(DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask &&) = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask() = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask& operator=(const DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask &) = default ;
    DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask& operator=(DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotPolicyId_ != nullptr
        && this->sourceFileSystemId_ != nullptr; };
    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // sourceFileSystemId Field Functions 
    bool hasSourceFileSystemId() const { return this->sourceFileSystemId_ != nullptr;};
    void deleteSourceFileSystemId() { this->sourceFileSystemId_ = nullptr;};
    inline string sourceFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemId_, "") };
    inline DescribeAutoSnapshotTasksResponseBodyAutoSnapshotTasksAutoSnapshotTask& setSourceFileSystemId(string sourceFileSystemId) { DARABONBA_PTR_SET_VALUE(sourceFileSystemId_, sourceFileSystemId) };


  protected:
    // The ID of the automatic snapshot policy.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> sourceFileSystemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
