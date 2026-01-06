// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeModifyParameterLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody(DescribeModifyParameterLogResponseBody &&) = default ;
    DescribeModifyParameterLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody& operator=(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody& operator=(DescribeModifyParameterLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterChangeLog, parameterChangeLog_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterChangeLog, parameterChangeLog_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParameterChangeLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParameterChangeLog& obj) { 
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(NewParameterValue, newParameterValue_);
          DARABONBA_PTR_TO_JSON(OldParameterValue, oldParameterValue_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ParameterChangeLog& obj) { 
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(NewParameterValue, newParameterValue_);
          DARABONBA_PTR_FROM_JSON(OldParameterValue, oldParameterValue_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ParameterChangeLog() = default ;
        ParameterChangeLog(const ParameterChangeLog &) = default ;
        ParameterChangeLog(ParameterChangeLog &&) = default ;
        ParameterChangeLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParameterChangeLog() = default ;
        ParameterChangeLog& operator=(const ParameterChangeLog &) = default ;
        ParameterChangeLog& operator=(ParameterChangeLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->modifyTime_ == nullptr
        && this->newParameterValue_ == nullptr && this->oldParameterValue_ == nullptr && this->parameterName_ == nullptr && this->status_ == nullptr; };
        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline ParameterChangeLog& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // newParameterValue Field Functions 
        bool hasNewParameterValue() const { return this->newParameterValue_ != nullptr;};
        void deleteNewParameterValue() { this->newParameterValue_ = nullptr;};
        inline string getNewParameterValue() const { DARABONBA_PTR_GET_DEFAULT(newParameterValue_, "") };
        inline ParameterChangeLog& setNewParameterValue(string newParameterValue) { DARABONBA_PTR_SET_VALUE(newParameterValue_, newParameterValue) };


        // oldParameterValue Field Functions 
        bool hasOldParameterValue() const { return this->oldParameterValue_ != nullptr;};
        void deleteOldParameterValue() { this->oldParameterValue_ = nullptr;};
        inline string getOldParameterValue() const { DARABONBA_PTR_GET_DEFAULT(oldParameterValue_, "") };
        inline ParameterChangeLog& setOldParameterValue(string oldParameterValue) { DARABONBA_PTR_SET_VALUE(oldParameterValue_, oldParameterValue) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline ParameterChangeLog& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ParameterChangeLog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the parameter was modified. This value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<string> modifyTime_ {};
        // The new value of the parameter.
        shared_ptr<string> newParameterValue_ {};
        // The original value of the parameter.
        shared_ptr<string> oldParameterValue_ {};
        // The name of the parameter.
        shared_ptr<string> parameterName_ {};
        // The status. Valid values:
        // 
        // *   **Applied:** The new value has taken effect.
        // *   **Syncing:** The new value is being applied and has not taken effect.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->parameterChangeLog_ == nullptr; };
      // parameterChangeLog Field Functions 
      bool hasParameterChangeLog() const { return this->parameterChangeLog_ != nullptr;};
      void deleteParameterChangeLog() { this->parameterChangeLog_ = nullptr;};
      inline const vector<Items::ParameterChangeLog> & getParameterChangeLog() const { DARABONBA_PTR_GET_CONST(parameterChangeLog_, vector<Items::ParameterChangeLog>) };
      inline vector<Items::ParameterChangeLog> getParameterChangeLog() { DARABONBA_PTR_GET(parameterChangeLog_, vector<Items::ParameterChangeLog>) };
      inline Items& setParameterChangeLog(const vector<Items::ParameterChangeLog> & parameterChangeLog) { DARABONBA_PTR_SET_VALUE(parameterChangeLog_, parameterChangeLog) };
      inline Items& setParameterChangeLog(vector<Items::ParameterChangeLog> && parameterChangeLog) { DARABONBA_PTR_SET_RVALUE(parameterChangeLog_, parameterChangeLog) };


    protected:
      shared_ptr<vector<Items::ParameterChangeLog>> parameterChangeLog_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr
        && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeModifyParameterLogResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeModifyParameterLogResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeModifyParameterLogResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeModifyParameterLogResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeModifyParameterLogResponseBody::Items) };
    inline DescribeModifyParameterLogResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeModifyParameterLogResponseBody::Items) };
    inline DescribeModifyParameterLogResponseBody& setItems(const DescribeModifyParameterLogResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeModifyParameterLogResponseBody& setItems(DescribeModifyParameterLogResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeModifyParameterLogResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeModifyParameterLogResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModifyParameterLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeModifyParameterLogResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The database engine of the instance.
    shared_ptr<string> engine_ {};
    // The database engine version of the instance.
    shared_ptr<string> engineVersion_ {};
    // The log entries.
    shared_ptr<DescribeModifyParameterLogResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
