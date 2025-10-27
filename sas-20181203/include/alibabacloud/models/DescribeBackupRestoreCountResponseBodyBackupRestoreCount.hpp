// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPRESTORECOUNTRESPONSEBODYBACKUPRESTORECOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPRESTORECOUNTRESPONSEBODYBACKUPRESTORECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupRestoreCountResponseBodyBackupRestoreCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupRestoreCountResponseBodyBackupRestoreCount& obj) { 
      DARABONBA_PTR_TO_JSON(Recovering, recovering_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupRestoreCountResponseBodyBackupRestoreCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Recovering, recovering_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeBackupRestoreCountResponseBodyBackupRestoreCount() = default ;
    DescribeBackupRestoreCountResponseBodyBackupRestoreCount(const DescribeBackupRestoreCountResponseBodyBackupRestoreCount &) = default ;
    DescribeBackupRestoreCountResponseBodyBackupRestoreCount(DescribeBackupRestoreCountResponseBodyBackupRestoreCount &&) = default ;
    DescribeBackupRestoreCountResponseBodyBackupRestoreCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupRestoreCountResponseBodyBackupRestoreCount() = default ;
    DescribeBackupRestoreCountResponseBodyBackupRestoreCount& operator=(const DescribeBackupRestoreCountResponseBodyBackupRestoreCount &) = default ;
    DescribeBackupRestoreCountResponseBodyBackupRestoreCount& operator=(DescribeBackupRestoreCountResponseBodyBackupRestoreCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recovering_ == nullptr
        && return this->total_ == nullptr; };
    // recovering Field Functions 
    bool hasRecovering() const { return this->recovering_ != nullptr;};
    void deleteRecovering() { this->recovering_ = nullptr;};
    inline int32_t recovering() const { DARABONBA_PTR_GET_DEFAULT(recovering_, 0) };
    inline DescribeBackupRestoreCountResponseBodyBackupRestoreCount& setRecovering(int32_t recovering) { DARABONBA_PTR_SET_VALUE(recovering_, recovering) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeBackupRestoreCountResponseBodyBackupRestoreCount& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of the restoration tasks that are in the **being restored** state.
    std::shared_ptr<int32_t> recovering_ = nullptr;
    // The total number of the restoration tasks that you create.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
