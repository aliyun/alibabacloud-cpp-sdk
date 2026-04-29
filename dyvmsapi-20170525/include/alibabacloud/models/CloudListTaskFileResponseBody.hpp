// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTTASKFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTTASKFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListTaskFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListTaskFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListTaskFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListTaskFileResponseBody() = default ;
    CloudListTaskFileResponseBody(const CloudListTaskFileResponseBody &) = default ;
    CloudListTaskFileResponseBody(CloudListTaskFileResponseBody &&) = default ;
    CloudListTaskFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListTaskFileResponseBody() = default ;
    CloudListTaskFileResponseBody& operator=(const CloudListTaskFileResponseBody &) = default ;
    CloudListTaskFileResponseBody& operator=(CloudListTaskFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskFileList, taskFileList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskFileList, taskFileList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskFileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskFileList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ImportCount, importCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
          DARABONBA_PTR_TO_JSON(RestrictCount, restrictCount_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, TaskFileList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ImportCount, importCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
          DARABONBA_PTR_FROM_JSON(RestrictCount, restrictCount_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        TaskFileList() = default ;
        TaskFileList(const TaskFileList &) = default ;
        TaskFileList(TaskFileList &&) = default ;
        TaskFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskFileList() = default ;
        TaskFileList& operator=(const TaskFileList &) = default ;
        TaskFileList& operator=(TaskFileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->enterpriseId_ == nullptr && this->id_ == nullptr && this->importCount_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->repeatCount_ == nullptr && this->restrictCount_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TaskFileList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline TaskFileList& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline TaskFileList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // importCount Field Functions 
        bool hasImportCount() const { return this->importCount_ != nullptr;};
        void deleteImportCount() { this->importCount_ = nullptr;};
        inline string getImportCount() const { DARABONBA_PTR_GET_DEFAULT(importCount_, "") };
        inline TaskFileList& setImportCount(string importCount) { DARABONBA_PTR_SET_VALUE(importCount_, importCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TaskFileList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline TaskFileList& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // repeatCount Field Functions 
        bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
        void deleteRepeatCount() { this->repeatCount_ = nullptr;};
        inline string getRepeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, "") };
        inline TaskFileList& setRepeatCount(string repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


        // restrictCount Field Functions 
        bool hasRestrictCount() const { return this->restrictCount_ != nullptr;};
        void deleteRestrictCount() { this->restrictCount_ = nullptr;};
        inline string getRestrictCount() const { DARABONBA_PTR_GET_DEFAULT(restrictCount_, "") };
        inline TaskFileList& setRestrictCount(string restrictCount) { DARABONBA_PTR_SET_VALUE(restrictCount_, restrictCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TaskFileList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline TaskFileList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // 创建批次时间，格式为： yyyy-MM-dd HH:mm:ss
        shared_ptr<string> createTime_ {};
        // 企业编号
        shared_ptr<string> enterpriseId_ {};
        // 批次Id
        shared_ptr<string> id_ {};
        // 导入条数
        shared_ptr<string> importCount_ {};
        // 批次名称
        shared_ptr<string> name_ {};
        // 优先级，默认为0，值越大优先级越高
        shared_ptr<string> priority_ {};
        // 重复条数
        shared_ptr<string> repeatCount_ {};
        // 黑名单条数
        shared_ptr<string> restrictCount_ {};
        // 批次状态，0：未导入，1：导入完成 ，2：加载到缓存，3：呼叫完，4：已冻结
        shared_ptr<string> status_ {};
        // 任务Id
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->taskFileList_ == nullptr
        && this->totalCount_ == nullptr; };
      // taskFileList Field Functions 
      bool hasTaskFileList() const { return this->taskFileList_ != nullptr;};
      void deleteTaskFileList() { this->taskFileList_ = nullptr;};
      inline const vector<Data::TaskFileList> & getTaskFileList() const { DARABONBA_PTR_GET_CONST(taskFileList_, vector<Data::TaskFileList>) };
      inline vector<Data::TaskFileList> getTaskFileList() { DARABONBA_PTR_GET(taskFileList_, vector<Data::TaskFileList>) };
      inline Data& setTaskFileList(const vector<Data::TaskFileList> & taskFileList) { DARABONBA_PTR_SET_VALUE(taskFileList_, taskFileList) };
      inline Data& setTaskFileList(vector<Data::TaskFileList> && taskFileList) { DARABONBA_PTR_SET_RVALUE(taskFileList_, taskFileList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline Data& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // 任务批次信息
      shared_ptr<vector<Data::TaskFileList>> taskFileList_ {};
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListTaskFileResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListTaskFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListTaskFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListTaskFileResponseBody::Data) };
    inline CloudListTaskFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListTaskFileResponseBody::Data) };
    inline CloudListTaskFileResponseBody& setData(const CloudListTaskFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListTaskFileResponseBody& setData(CloudListTaskFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListTaskFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListTaskFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListTaskFileResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
