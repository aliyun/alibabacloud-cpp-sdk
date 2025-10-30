// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREATEINDEXJOBRESPONSEBODYJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREATEINDEXJOBRESPONSEBODYJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeCreateIndexJobResponseBodyJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreateIndexJobResponseBodyJob& obj) { 
      DARABONBA_PTR_TO_JSON(Completed, completed_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreateIndexJobResponseBodyJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Completed, completed_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeCreateIndexJobResponseBodyJob() = default ;
    DescribeCreateIndexJobResponseBodyJob(const DescribeCreateIndexJobResponseBodyJob &) = default ;
    DescribeCreateIndexJobResponseBodyJob(DescribeCreateIndexJobResponseBodyJob &&) = default ;
    DescribeCreateIndexJobResponseBodyJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreateIndexJobResponseBodyJob() = default ;
    DescribeCreateIndexJobResponseBodyJob& operator=(const DescribeCreateIndexJobResponseBodyJob &) = default ;
    DescribeCreateIndexJobResponseBodyJob& operator=(DescribeCreateIndexJobResponseBodyJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completed_ == nullptr
        && return this->createTime_ == nullptr && return this->error_ == nullptr && return this->id_ == nullptr && return this->progress_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr; };
    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline bool completed() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
    inline DescribeCreateIndexJobResponseBodyJob& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCreateIndexJobResponseBodyJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline DescribeCreateIndexJobResponseBodyJob& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeCreateIndexJobResponseBodyJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeCreateIndexJobResponseBodyJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCreateIndexJobResponseBodyJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeCreateIndexJobResponseBodyJob& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<bool> completed_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    // Job ID。
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
