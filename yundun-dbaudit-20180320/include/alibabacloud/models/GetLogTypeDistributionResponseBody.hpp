// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGTYPEDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGTYPEDISTRIBUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetLogTypeDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogTypeDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeList, timeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogTypeDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeList, timeList_);
    };
    GetLogTypeDistributionResponseBody() = default ;
    GetLogTypeDistributionResponseBody(const GetLogTypeDistributionResponseBody &) = default ;
    GetLogTypeDistributionResponseBody(GetLogTypeDistributionResponseBody &&) = default ;
    GetLogTypeDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogTypeDistributionResponseBody() = default ;
    GetLogTypeDistributionResponseBody& operator=(const GetLogTypeDistributionResponseBody &) = default ;
    GetLogTypeDistributionResponseBody& operator=(GetLogTypeDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeList& obj) { 
        DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_TO_JSON(DeleteSqlCount, deleteSqlCount_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(ExecCostUS, execCostUS_);
        DARABONBA_PTR_TO_JSON(InsertSqlCount, insertSqlCount_);
        DARABONBA_PTR_TO_JSON(OtherSqlCount, otherSqlCount_);
        DARABONBA_PTR_TO_JSON(SelectSqlCount, selectSqlCount_);
        DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
        DARABONBA_PTR_TO_JSON(UpdateSqlCount, updateSqlCount_);
      };
      friend void from_json(const Darabonba::Json& j, TimeList& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
        DARABONBA_PTR_FROM_JSON(DeleteSqlCount, deleteSqlCount_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(ExecCostUS, execCostUS_);
        DARABONBA_PTR_FROM_JSON(InsertSqlCount, insertSqlCount_);
        DARABONBA_PTR_FROM_JSON(OtherSqlCount, otherSqlCount_);
        DARABONBA_PTR_FROM_JSON(SelectSqlCount, selectSqlCount_);
        DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
        DARABONBA_PTR_FROM_JSON(UpdateSqlCount, updateSqlCount_);
      };
      TimeList() = default ;
      TimeList(const TimeList &) = default ;
      TimeList(TimeList &&) = default ;
      TimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeList() = default ;
      TimeList& operator=(const TimeList &) = default ;
      TimeList& operator=(TimeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->deleteSqlCount_ == nullptr && this->endDate_ == nullptr && this->execCostUS_ == nullptr && this->insertSqlCount_ == nullptr && this->otherSqlCount_ == nullptr
        && this->selectSqlCount_ == nullptr && this->sqlCount_ == nullptr && this->updateSqlCount_ == nullptr; };
      // beginDate Field Functions 
      bool hasBeginDate() const { return this->beginDate_ != nullptr;};
      void deleteBeginDate() { this->beginDate_ = nullptr;};
      inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
      inline TimeList& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


      // deleteSqlCount Field Functions 
      bool hasDeleteSqlCount() const { return this->deleteSqlCount_ != nullptr;};
      void deleteDeleteSqlCount() { this->deleteSqlCount_ = nullptr;};
      inline int64_t getDeleteSqlCount() const { DARABONBA_PTR_GET_DEFAULT(deleteSqlCount_, 0L) };
      inline TimeList& setDeleteSqlCount(int64_t deleteSqlCount) { DARABONBA_PTR_SET_VALUE(deleteSqlCount_, deleteSqlCount) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline TimeList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // execCostUS Field Functions 
      bool hasExecCostUS() const { return this->execCostUS_ != nullptr;};
      void deleteExecCostUS() { this->execCostUS_ = nullptr;};
      inline string getExecCostUS() const { DARABONBA_PTR_GET_DEFAULT(execCostUS_, "") };
      inline TimeList& setExecCostUS(string execCostUS) { DARABONBA_PTR_SET_VALUE(execCostUS_, execCostUS) };


      // insertSqlCount Field Functions 
      bool hasInsertSqlCount() const { return this->insertSqlCount_ != nullptr;};
      void deleteInsertSqlCount() { this->insertSqlCount_ = nullptr;};
      inline int64_t getInsertSqlCount() const { DARABONBA_PTR_GET_DEFAULT(insertSqlCount_, 0L) };
      inline TimeList& setInsertSqlCount(int64_t insertSqlCount) { DARABONBA_PTR_SET_VALUE(insertSqlCount_, insertSqlCount) };


      // otherSqlCount Field Functions 
      bool hasOtherSqlCount() const { return this->otherSqlCount_ != nullptr;};
      void deleteOtherSqlCount() { this->otherSqlCount_ = nullptr;};
      inline int64_t getOtherSqlCount() const { DARABONBA_PTR_GET_DEFAULT(otherSqlCount_, 0L) };
      inline TimeList& setOtherSqlCount(int64_t otherSqlCount) { DARABONBA_PTR_SET_VALUE(otherSqlCount_, otherSqlCount) };


      // selectSqlCount Field Functions 
      bool hasSelectSqlCount() const { return this->selectSqlCount_ != nullptr;};
      void deleteSelectSqlCount() { this->selectSqlCount_ = nullptr;};
      inline int64_t getSelectSqlCount() const { DARABONBA_PTR_GET_DEFAULT(selectSqlCount_, 0L) };
      inline TimeList& setSelectSqlCount(int64_t selectSqlCount) { DARABONBA_PTR_SET_VALUE(selectSqlCount_, selectSqlCount) };


      // sqlCount Field Functions 
      bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
      void deleteSqlCount() { this->sqlCount_ = nullptr;};
      inline int64_t getSqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
      inline TimeList& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


      // updateSqlCount Field Functions 
      bool hasUpdateSqlCount() const { return this->updateSqlCount_ != nullptr;};
      void deleteUpdateSqlCount() { this->updateSqlCount_ = nullptr;};
      inline int64_t getUpdateSqlCount() const { DARABONBA_PTR_GET_DEFAULT(updateSqlCount_, 0L) };
      inline TimeList& setUpdateSqlCount(int64_t updateSqlCount) { DARABONBA_PTR_SET_VALUE(updateSqlCount_, updateSqlCount) };


    protected:
      shared_ptr<string> beginDate_ {};
      shared_ptr<int64_t> deleteSqlCount_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<string> execCostUS_ {};
      shared_ptr<int64_t> insertSqlCount_ {};
      shared_ptr<int64_t> otherSqlCount_ {};
      shared_ptr<int64_t> selectSqlCount_ {};
      shared_ptr<int64_t> sqlCount_ {};
      shared_ptr<int64_t> updateSqlCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogTypeDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeList Field Functions 
    bool hasTimeList() const { return this->timeList_ != nullptr;};
    void deleteTimeList() { this->timeList_ = nullptr;};
    inline const vector<GetLogTypeDistributionResponseBody::TimeList> & getTimeList() const { DARABONBA_PTR_GET_CONST(timeList_, vector<GetLogTypeDistributionResponseBody::TimeList>) };
    inline vector<GetLogTypeDistributionResponseBody::TimeList> getTimeList() { DARABONBA_PTR_GET(timeList_, vector<GetLogTypeDistributionResponseBody::TimeList>) };
    inline GetLogTypeDistributionResponseBody& setTimeList(const vector<GetLogTypeDistributionResponseBody::TimeList> & timeList) { DARABONBA_PTR_SET_VALUE(timeList_, timeList) };
    inline GetLogTypeDistributionResponseBody& setTimeList(vector<GetLogTypeDistributionResponseBody::TimeList> && timeList) { DARABONBA_PTR_SET_RVALUE(timeList_, timeList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetLogTypeDistributionResponseBody::TimeList>> timeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
