// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKLOGLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKLOGLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTaskLogListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskLogListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(completionTime, completionTime_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskLogListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(completionTime, completionTime_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    DescribeTaskLogListResponseBodyResultObject() = default ;
    DescribeTaskLogListResponseBodyResultObject(const DescribeTaskLogListResponseBodyResultObject &) = default ;
    DescribeTaskLogListResponseBodyResultObject(DescribeTaskLogListResponseBodyResultObject &&) = default ;
    DescribeTaskLogListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskLogListResponseBodyResultObject() = default ;
    DescribeTaskLogListResponseBodyResultObject& operator=(const DescribeTaskLogListResponseBodyResultObject &) = default ;
    DescribeTaskLogListResponseBodyResultObject& operator=(DescribeTaskLogListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completionTime_ != nullptr
        && this->createTime_ != nullptr && this->id_ != nullptr && this->remark_ != nullptr && this->sceneName_ != nullptr && this->status_ != nullptr
        && this->taskType_ != nullptr; };
    // completionTime Field Functions 
    bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
    void deleteCompletionTime() { this->completionTime_ = nullptr;};
    inline int64_t completionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, 0L) };
    inline DescribeTaskLogListResponseBodyResultObject& setCompletionTime(int64_t completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeTaskLogListResponseBodyResultObject& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeTaskLogListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeTaskLogListResponseBodyResultObject& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeTaskLogListResponseBodyResultObject& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTaskLogListResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeTaskLogListResponseBodyResultObject& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Completion time, in milliseconds.
    std::shared_ptr<int64_t> completionTime_ = nullptr;
    // Task creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Log ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Remark.
    std::shared_ptr<string> remark_ = nullptr;
    // Scene name
    std::shared_ptr<string> sceneName_ = nullptr;
    // Status.
    // 
    // 0: Deleted
    // 1: Normal
    std::shared_ptr<string> status_ = nullptr;
    // Task type
    // 
    // 1: Data upload
    // 2: Supplemental upload
    // 3: Labeling
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
