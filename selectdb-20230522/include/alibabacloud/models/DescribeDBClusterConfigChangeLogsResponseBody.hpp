// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGCHANGELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterConfigChangeLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterConfigChangeLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterConfigChangeLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterConfigChangeLogsResponseBody() = default ;
    DescribeDBClusterConfigChangeLogsResponseBody(const DescribeDBClusterConfigChangeLogsResponseBody &) = default ;
    DescribeDBClusterConfigChangeLogsResponseBody(DescribeDBClusterConfigChangeLogsResponseBody &&) = default ;
    DescribeDBClusterConfigChangeLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterConfigChangeLogsResponseBody() = default ;
    DescribeDBClusterConfigChangeLogsResponseBody& operator=(const DescribeDBClusterConfigChangeLogsResponseBody &) = default ;
    DescribeDBClusterConfigChangeLogsResponseBody& operator=(DescribeDBClusterConfigChangeLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
        DARABONBA_PTR_TO_JSON(ParamChangeLogs, paramChangeLogs_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
        DARABONBA_PTR_FROM_JSON(ParamChangeLogs, paramChangeLogs_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class ParamChangeLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamChangeLogs& obj) { 
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsApplied, isApplied_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NewValue, newValue_);
          DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
        };
        friend void from_json(const Darabonba::Json& j, ParamChangeLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsApplied, isApplied_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
          DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
        };
        ParamChangeLogs() = default ;
        ParamChangeLogs(const ParamChangeLogs &) = default ;
        ParamChangeLogs(ParamChangeLogs &&) = default ;
        ParamChangeLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamChangeLogs() = default ;
        ParamChangeLogs& operator=(const ParamChangeLogs &) = default ;
        ParamChangeLogs& operator=(ParamChangeLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isApplied_ == nullptr && this->name_ == nullptr && this->newValue_ == nullptr
        && this->oldValue_ == nullptr; };
        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline ParamChangeLogs& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ParamChangeLogs& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ParamChangeLogs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isApplied Field Functions 
        bool hasIsApplied() const { return this->isApplied_ != nullptr;};
        void deleteIsApplied() { this->isApplied_ = nullptr;};
        inline bool getIsApplied() const { DARABONBA_PTR_GET_DEFAULT(isApplied_, false) };
        inline ParamChangeLogs& setIsApplied(bool isApplied) { DARABONBA_PTR_SET_VALUE(isApplied_, isApplied) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ParamChangeLogs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // newValue Field Functions 
        bool hasNewValue() const { return this->newValue_ != nullptr;};
        void deleteNewValue() { this->newValue_ = nullptr;};
        inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
        inline ParamChangeLogs& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


        // oldValue Field Functions 
        bool hasOldValue() const { return this->oldValue_ != nullptr;};
        void deleteOldValue() { this->oldValue_ = nullptr;};
        inline string getOldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
        inline ParamChangeLogs& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


      protected:
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        // The ID of the change log.
        shared_ptr<int64_t> id_ {};
        // Indicates whether the modification has taken effect.
        shared_ptr<bool> isApplied_ {};
        // The parameter name.
        shared_ptr<string> name_ {};
        shared_ptr<string> newValue_ {};
        shared_ptr<string> oldValue_ {};
      };

      virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && this->dbInstanceId_ == nullptr && this->dbInstanceName_ == nullptr && this->paramChangeLogs_ == nullptr && this->taskId_ == nullptr; };
      // dbClusterId Field Functions 
      bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
      void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
      inline string getDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
      inline Data& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


      // dbInstanceId Field Functions 
      bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
      void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
      inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
      inline Data& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


      // dbInstanceName Field Functions 
      bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
      void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
      inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
      inline Data& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


      // paramChangeLogs Field Functions 
      bool hasParamChangeLogs() const { return this->paramChangeLogs_ != nullptr;};
      void deleteParamChangeLogs() { this->paramChangeLogs_ = nullptr;};
      inline const vector<Data::ParamChangeLogs> & getParamChangeLogs() const { DARABONBA_PTR_GET_CONST(paramChangeLogs_, vector<Data::ParamChangeLogs>) };
      inline vector<Data::ParamChangeLogs> getParamChangeLogs() { DARABONBA_PTR_GET(paramChangeLogs_, vector<Data::ParamChangeLogs>) };
      inline Data& setParamChangeLogs(const vector<Data::ParamChangeLogs> & paramChangeLogs) { DARABONBA_PTR_SET_VALUE(paramChangeLogs_, paramChangeLogs) };
      inline Data& setParamChangeLogs(vector<Data::ParamChangeLogs> && paramChangeLogs) { DARABONBA_PTR_SET_RVALUE(paramChangeLogs_, paramChangeLogs) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Data& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The cluster ID.
      shared_ptr<string> dbClusterId_ {};
      shared_ptr<string> dbInstanceId_ {};
      // The instance ID.
      shared_ptr<string> dbInstanceName_ {};
      // The parameter change logs.
      shared_ptr<vector<Data::ParamChangeLogs>> paramChangeLogs_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBClusterConfigChangeLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBClusterConfigChangeLogsResponseBody::Data) };
    inline DescribeDBClusterConfigChangeLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBClusterConfigChangeLogsResponseBody::Data) };
    inline DescribeDBClusterConfigChangeLogsResponseBody& setData(const DescribeDBClusterConfigChangeLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBClusterConfigChangeLogsResponseBody& setData(DescribeDBClusterConfigChangeLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterConfigChangeLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // The information returned.
    shared_ptr<DescribeDBClusterConfigChangeLogsResponseBody::Data> data_ {};
    // The dynamic code. This parameter is not returned.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic message. This parameter is not returned.
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
