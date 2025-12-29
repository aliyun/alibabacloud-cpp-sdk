// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeActiveOperationTaskTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationTaskTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationTaskTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    DescribeActiveOperationTaskTypeResponseBody() = default ;
    DescribeActiveOperationTaskTypeResponseBody(const DescribeActiveOperationTaskTypeResponseBody &) = default ;
    DescribeActiveOperationTaskTypeResponseBody(DescribeActiveOperationTaskTypeResponseBody &&) = default ;
    DescribeActiveOperationTaskTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationTaskTypeResponseBody() = default ;
    DescribeActiveOperationTaskTypeResponseBody& operator=(const DescribeActiveOperationTaskTypeResponseBody &) = default ;
    DescribeActiveOperationTaskTypeResponseBody& operator=(DescribeActiveOperationTaskTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TypeList& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TaskTypeInfoEn, taskTypeInfoEn_);
        DARABONBA_PTR_TO_JSON(TaskTypeInfoZh, taskTypeInfoZh_);
      };
      friend void from_json(const Darabonba::Json& j, TypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TaskTypeInfoEn, taskTypeInfoEn_);
        DARABONBA_PTR_FROM_JSON(TaskTypeInfoZh, taskTypeInfoZh_);
      };
      TypeList() = default ;
      TypeList(const TypeList &) = default ;
      TypeList(TypeList &&) = default ;
      TypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TypeList() = default ;
      TypeList& operator=(const TypeList &) = default ;
      TypeList& operator=(TypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->taskType_ == nullptr && this->taskTypeInfoEn_ == nullptr && this->taskTypeInfoZh_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline TypeList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TypeList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // taskTypeInfoEn Field Functions 
      bool hasTaskTypeInfoEn() const { return this->taskTypeInfoEn_ != nullptr;};
      void deleteTaskTypeInfoEn() { this->taskTypeInfoEn_ = nullptr;};
      inline string getTaskTypeInfoEn() const { DARABONBA_PTR_GET_DEFAULT(taskTypeInfoEn_, "") };
      inline TypeList& setTaskTypeInfoEn(string taskTypeInfoEn) { DARABONBA_PTR_SET_VALUE(taskTypeInfoEn_, taskTypeInfoEn) };


      // taskTypeInfoZh Field Functions 
      bool hasTaskTypeInfoZh() const { return this->taskTypeInfoZh_ != nullptr;};
      void deleteTaskTypeInfoZh() { this->taskTypeInfoZh_ = nullptr;};
      inline string getTaskTypeInfoZh() const { DARABONBA_PTR_GET_DEFAULT(taskTypeInfoZh_, "") };
      inline TypeList& setTaskTypeInfoZh(string taskTypeInfoZh) { DARABONBA_PTR_SET_VALUE(taskTypeInfoZh_, taskTypeInfoZh) };


    protected:
      // The number of pending tasks.
      shared_ptr<int32_t> count_ {};
      // The type of the task. Valid values:
      // 
      // *   **rds_apsaradb_transfer**: data migration
      // *   **rds_apsaradb_upgrade**: minor version update
      shared_ptr<string> taskType_ {};
      // The task type in English.
      shared_ptr<string> taskTypeInfoEn_ {};
      // The task type in Chinese.
      shared_ptr<string> taskTypeInfoZh_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->typeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveOperationTaskTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<DescribeActiveOperationTaskTypeResponseBody::TypeList> & getTypeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<DescribeActiveOperationTaskTypeResponseBody::TypeList>) };
    inline vector<DescribeActiveOperationTaskTypeResponseBody::TypeList> getTypeList() { DARABONBA_PTR_GET(typeList_, vector<DescribeActiveOperationTaskTypeResponseBody::TypeList>) };
    inline DescribeActiveOperationTaskTypeResponseBody& setTypeList(const vector<DescribeActiveOperationTaskTypeResponseBody::TypeList> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline DescribeActiveOperationTaskTypeResponseBody& setTypeList(vector<DescribeActiveOperationTaskTypeResponseBody::TypeList> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The O\\&M tasks.
    shared_ptr<vector<DescribeActiveOperationTaskTypeResponseBody::TypeList>> typeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
