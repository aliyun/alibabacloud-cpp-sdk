// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADIAGNOSISREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADIAGNOSISREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListDataDiagnosisReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDiagnosisReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionRate, exceptionRate_);
      DARABONBA_PTR_TO_JSON(ReportsOfAbnormalBehavior, reportsOfAbnormalBehavior_);
      DARABONBA_PTR_TO_JSON(ReportsOfBaseStatistics, reportsOfBaseStatistics_);
      DARABONBA_PTR_TO_JSON(ReportsOfChangeRateData, reportsOfChangeRateData_);
      DARABONBA_PTR_TO_JSON(ReportsOfJoinTables, reportsOfJoinTables_);
      DARABONBA_PTR_TO_JSON(ReportsOfPreferenceStatisticsCycle, reportsOfPreferenceStatisticsCycle_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDiagnosisReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionRate, exceptionRate_);
      DARABONBA_PTR_FROM_JSON(ReportsOfAbnormalBehavior, reportsOfAbnormalBehavior_);
      DARABONBA_PTR_FROM_JSON(ReportsOfBaseStatistics, reportsOfBaseStatistics_);
      DARABONBA_PTR_FROM_JSON(ReportsOfChangeRateData, reportsOfChangeRateData_);
      DARABONBA_PTR_FROM_JSON(ReportsOfJoinTables, reportsOfJoinTables_);
      DARABONBA_PTR_FROM_JSON(ReportsOfPreferenceStatisticsCycle, reportsOfPreferenceStatisticsCycle_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDataDiagnosisReportsResponseBody() = default ;
    ListDataDiagnosisReportsResponseBody(const ListDataDiagnosisReportsResponseBody &) = default ;
    ListDataDiagnosisReportsResponseBody(ListDataDiagnosisReportsResponseBody &&) = default ;
    ListDataDiagnosisReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDiagnosisReportsResponseBody() = default ;
    ListDataDiagnosisReportsResponseBody& operator=(const ListDataDiagnosisReportsResponseBody &) = default ;
    ListDataDiagnosisReportsResponseBody& operator=(ListDataDiagnosisReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExceptionRate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExceptionRate& obj) { 
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ExceptionRate& obj) { 
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ExceptionRate() = default ;
      ExceptionRate(const ExceptionRate &) = default ;
      ExceptionRate(ExceptionRate &&) = default ;
      ExceptionRate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExceptionRate() = default ;
      ExceptionRate& operator=(const ExceptionRate &) = default ;
      ExceptionRate& operator=(ExceptionRate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->group_ == nullptr
        && this->message_ == nullptr && this->type_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline ExceptionRate& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ExceptionRate& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ExceptionRate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> group_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->exceptionRate_ == nullptr
        && this->reportsOfAbnormalBehavior_ == nullptr && this->reportsOfBaseStatistics_ == nullptr && this->reportsOfChangeRateData_ == nullptr && this->reportsOfJoinTables_ == nullptr && this->reportsOfPreferenceStatisticsCycle_ == nullptr
        && this->requestId_ == nullptr && this->type_ == nullptr; };
    // exceptionRate Field Functions 
    bool hasExceptionRate() const { return this->exceptionRate_ != nullptr;};
    void deleteExceptionRate() { this->exceptionRate_ = nullptr;};
    inline const vector<ListDataDiagnosisReportsResponseBody::ExceptionRate> & getExceptionRate() const { DARABONBA_PTR_GET_CONST(exceptionRate_, vector<ListDataDiagnosisReportsResponseBody::ExceptionRate>) };
    inline vector<ListDataDiagnosisReportsResponseBody::ExceptionRate> getExceptionRate() { DARABONBA_PTR_GET(exceptionRate_, vector<ListDataDiagnosisReportsResponseBody::ExceptionRate>) };
    inline ListDataDiagnosisReportsResponseBody& setExceptionRate(const vector<ListDataDiagnosisReportsResponseBody::ExceptionRate> & exceptionRate) { DARABONBA_PTR_SET_VALUE(exceptionRate_, exceptionRate) };
    inline ListDataDiagnosisReportsResponseBody& setExceptionRate(vector<ListDataDiagnosisReportsResponseBody::ExceptionRate> && exceptionRate) { DARABONBA_PTR_SET_RVALUE(exceptionRate_, exceptionRate) };


    // reportsOfAbnormalBehavior Field Functions 
    bool hasReportsOfAbnormalBehavior() const { return this->reportsOfAbnormalBehavior_ != nullptr;};
    void deleteReportsOfAbnormalBehavior() { this->reportsOfAbnormalBehavior_ = nullptr;};
    inline const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfAbnormalBehavior>> & getReportsOfAbnormalBehavior() const { DARABONBA_PTR_GET_CONST(reportsOfAbnormalBehavior_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfAbnormalBehavior>>) };
    inline vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfAbnormalBehavior>> getReportsOfAbnormalBehavior() { DARABONBA_PTR_GET(reportsOfAbnormalBehavior_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfAbnormalBehavior>>) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfAbnormalBehavior(const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfAbnormalBehavior>> & reportsOfAbnormalBehavior) { DARABONBA_PTR_SET_VALUE(reportsOfAbnormalBehavior_, reportsOfAbnormalBehavior) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfAbnormalBehavior(vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfAbnormalBehavior>> && reportsOfAbnormalBehavior) { DARABONBA_PTR_SET_RVALUE(reportsOfAbnormalBehavior_, reportsOfAbnormalBehavior) };


    // reportsOfBaseStatistics Field Functions 
    bool hasReportsOfBaseStatistics() const { return this->reportsOfBaseStatistics_ != nullptr;};
    void deleteReportsOfBaseStatistics() { this->reportsOfBaseStatistics_ = nullptr;};
    inline const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfBaseStatistics>> & getReportsOfBaseStatistics() const { DARABONBA_PTR_GET_CONST(reportsOfBaseStatistics_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfBaseStatistics>>) };
    inline vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfBaseStatistics>> getReportsOfBaseStatistics() { DARABONBA_PTR_GET(reportsOfBaseStatistics_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfBaseStatistics>>) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfBaseStatistics(const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfBaseStatistics>> & reportsOfBaseStatistics) { DARABONBA_PTR_SET_VALUE(reportsOfBaseStatistics_, reportsOfBaseStatistics) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfBaseStatistics(vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfBaseStatistics>> && reportsOfBaseStatistics) { DARABONBA_PTR_SET_RVALUE(reportsOfBaseStatistics_, reportsOfBaseStatistics) };


    // reportsOfChangeRateData Field Functions 
    bool hasReportsOfChangeRateData() const { return this->reportsOfChangeRateData_ != nullptr;};
    void deleteReportsOfChangeRateData() { this->reportsOfChangeRateData_ = nullptr;};
    inline const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfChangeRateData>> & getReportsOfChangeRateData() const { DARABONBA_PTR_GET_CONST(reportsOfChangeRateData_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfChangeRateData>>) };
    inline vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfChangeRateData>> getReportsOfChangeRateData() { DARABONBA_PTR_GET(reportsOfChangeRateData_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfChangeRateData>>) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfChangeRateData(const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfChangeRateData>> & reportsOfChangeRateData) { DARABONBA_PTR_SET_VALUE(reportsOfChangeRateData_, reportsOfChangeRateData) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfChangeRateData(vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfChangeRateData>> && reportsOfChangeRateData) { DARABONBA_PTR_SET_RVALUE(reportsOfChangeRateData_, reportsOfChangeRateData) };


    // reportsOfJoinTables Field Functions 
    bool hasReportsOfJoinTables() const { return this->reportsOfJoinTables_ != nullptr;};
    void deleteReportsOfJoinTables() { this->reportsOfJoinTables_ = nullptr;};
    inline const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfJoinTables>> & getReportsOfJoinTables() const { DARABONBA_PTR_GET_CONST(reportsOfJoinTables_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfJoinTables>>) };
    inline vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfJoinTables>> getReportsOfJoinTables() { DARABONBA_PTR_GET(reportsOfJoinTables_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfJoinTables>>) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfJoinTables(const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfJoinTables>> & reportsOfJoinTables) { DARABONBA_PTR_SET_VALUE(reportsOfJoinTables_, reportsOfJoinTables) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfJoinTables(vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfJoinTables>> && reportsOfJoinTables) { DARABONBA_PTR_SET_RVALUE(reportsOfJoinTables_, reportsOfJoinTables) };


    // reportsOfPreferenceStatisticsCycle Field Functions 
    bool hasReportsOfPreferenceStatisticsCycle() const { return this->reportsOfPreferenceStatisticsCycle_ != nullptr;};
    void deleteReportsOfPreferenceStatisticsCycle() { this->reportsOfPreferenceStatisticsCycle_ = nullptr;};
    inline const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfPreferenceStatisticsCycle>> & getReportsOfPreferenceStatisticsCycle() const { DARABONBA_PTR_GET_CONST(reportsOfPreferenceStatisticsCycle_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfPreferenceStatisticsCycle>>) };
    inline vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfPreferenceStatisticsCycle>> getReportsOfPreferenceStatisticsCycle() { DARABONBA_PTR_GET(reportsOfPreferenceStatisticsCycle_, vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfPreferenceStatisticsCycle>>) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfPreferenceStatisticsCycle(const vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfPreferenceStatisticsCycle>> & reportsOfPreferenceStatisticsCycle) { DARABONBA_PTR_SET_VALUE(reportsOfPreferenceStatisticsCycle_, reportsOfPreferenceStatisticsCycle) };
    inline ListDataDiagnosisReportsResponseBody& setReportsOfPreferenceStatisticsCycle(vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfPreferenceStatisticsCycle>> && reportsOfPreferenceStatisticsCycle) { DARABONBA_PTR_SET_RVALUE(reportsOfPreferenceStatisticsCycle_, reportsOfPreferenceStatisticsCycle) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataDiagnosisReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataDiagnosisReportsResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<vector<ListDataDiagnosisReportsResponseBody::ExceptionRate>> exceptionRate_ {};
    shared_ptr<vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfAbnormalBehavior>>> reportsOfAbnormalBehavior_ {};
    shared_ptr<vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfBaseStatistics>>> reportsOfBaseStatistics_ {};
    shared_ptr<vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfChangeRateData>>> reportsOfChangeRateData_ {};
    shared_ptr<vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfJoinTables>>> reportsOfJoinTables_ {};
    shared_ptr<vector<vector<ListDataDiagnosisReportsResponseBody::ReportsOfPreferenceStatisticsCycle>>> reportsOfPreferenceStatisticsCycle_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
