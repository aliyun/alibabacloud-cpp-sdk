// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTAGGREGATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTAGGREGATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListAlertAggregationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertAggregationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertAggregations, alertAggregations_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertAggregationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertAggregations, alertAggregations_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlertAggregationsResponseBody() = default ;
    ListAlertAggregationsResponseBody(const ListAlertAggregationsResponseBody &) = default ;
    ListAlertAggregationsResponseBody(ListAlertAggregationsResponseBody &&) = default ;
    ListAlertAggregationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertAggregationsResponseBody() = default ;
    ListAlertAggregationsResponseBody& operator=(const ListAlertAggregationsResponseBody &) = default ;
    ListAlertAggregationsResponseBody& operator=(ListAlertAggregationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertAggregations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertAggregations& obj) { 
        DARABONBA_PTR_TO_JSON(AccountDisplayValues, accountDisplayValues_);
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(AggregationKey, aggregationKey_);
        DARABONBA_PTR_TO_JSON(AggregationType, aggregationType_);
        DARABONBA_PTR_TO_JSON(AlertCount, alertCount_);
        DARABONBA_PTR_TO_JSON(AttackStages, attackStages_);
        DARABONBA_PTR_TO_JSON(DefenseActionCounts, defenseActionCounts_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_TO_JSON(PrimaryDisplayValue, primaryDisplayValue_);
        DARABONBA_PTR_TO_JSON(PrimaryValue, primaryValue_);
        DARABONBA_PTR_TO_JSON(SecondaryValue, secondaryValue_);
        DARABONBA_PTR_TO_JSON(SourceCodes, sourceCodes_);
        DARABONBA_PTR_TO_JSON(StatusCounts, statusCounts_);
      };
      friend void from_json(const Darabonba::Json& j, AlertAggregations& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountDisplayValues, accountDisplayValues_);
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(AggregationKey, aggregationKey_);
        DARABONBA_PTR_FROM_JSON(AggregationType, aggregationType_);
        DARABONBA_PTR_FROM_JSON(AlertCount, alertCount_);
        DARABONBA_PTR_FROM_JSON(AttackStages, attackStages_);
        DARABONBA_PTR_FROM_JSON(DefenseActionCounts, defenseActionCounts_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_FROM_JSON(PrimaryDisplayValue, primaryDisplayValue_);
        DARABONBA_PTR_FROM_JSON(PrimaryValue, primaryValue_);
        DARABONBA_PTR_FROM_JSON(SecondaryValue, secondaryValue_);
        DARABONBA_PTR_FROM_JSON(SourceCodes, sourceCodes_);
        DARABONBA_PTR_FROM_JSON(StatusCounts, statusCounts_);
      };
      AlertAggregations() = default ;
      AlertAggregations(const AlertAggregations &) = default ;
      AlertAggregations(AlertAggregations &&) = default ;
      AlertAggregations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertAggregations() = default ;
      AlertAggregations& operator=(const AlertAggregations &) = default ;
      AlertAggregations& operator=(AlertAggregations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StatusCounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatusCounts& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, StatusCounts& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        StatusCounts() = default ;
        StatusCounts(const StatusCounts &) = default ;
        StatusCounts(StatusCounts &&) = default ;
        StatusCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatusCounts() = default ;
        StatusCounts& operator=(const StatusCounts &) = default ;
        StatusCounts& operator=(StatusCounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StatusCounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
        inline StatusCounts& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> value_ {};
      };

      class DefenseActionCounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefenseActionCounts& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DefenseActionCounts& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DefenseActionCounts() = default ;
        DefenseActionCounts(const DefenseActionCounts &) = default ;
        DefenseActionCounts(DefenseActionCounts &&) = default ;
        DefenseActionCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DefenseActionCounts() = default ;
        DefenseActionCounts& operator=(const DefenseActionCounts &) = default ;
        DefenseActionCounts& operator=(DefenseActionCounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DefenseActionCounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
        inline DefenseActionCounts& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> value_ {};
      };

      virtual bool empty() const override { return this->accountDisplayValues_ == nullptr
        && this->accountIds_ == nullptr && this->aggregationKey_ == nullptr && this->aggregationType_ == nullptr && this->alertCount_ == nullptr && this->attackStages_ == nullptr
        && this->defenseActionCounts_ == nullptr && this->firstTime_ == nullptr && this->latestTime_ == nullptr && this->primaryDisplayValue_ == nullptr && this->primaryValue_ == nullptr
        && this->secondaryValue_ == nullptr && this->sourceCodes_ == nullptr && this->statusCounts_ == nullptr; };
      // accountDisplayValues Field Functions 
      bool hasAccountDisplayValues() const { return this->accountDisplayValues_ != nullptr;};
      void deleteAccountDisplayValues() { this->accountDisplayValues_ = nullptr;};
      inline const vector<string> & getAccountDisplayValues() const { DARABONBA_PTR_GET_CONST(accountDisplayValues_, vector<string>) };
      inline vector<string> getAccountDisplayValues() { DARABONBA_PTR_GET(accountDisplayValues_, vector<string>) };
      inline AlertAggregations& setAccountDisplayValues(const vector<string> & accountDisplayValues) { DARABONBA_PTR_SET_VALUE(accountDisplayValues_, accountDisplayValues) };
      inline AlertAggregations& setAccountDisplayValues(vector<string> && accountDisplayValues) { DARABONBA_PTR_SET_RVALUE(accountDisplayValues_, accountDisplayValues) };


      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
      inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
      inline AlertAggregations& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline AlertAggregations& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // aggregationKey Field Functions 
      bool hasAggregationKey() const { return this->aggregationKey_ != nullptr;};
      void deleteAggregationKey() { this->aggregationKey_ = nullptr;};
      inline string getAggregationKey() const { DARABONBA_PTR_GET_DEFAULT(aggregationKey_, "") };
      inline AlertAggregations& setAggregationKey(string aggregationKey) { DARABONBA_PTR_SET_VALUE(aggregationKey_, aggregationKey) };


      // aggregationType Field Functions 
      bool hasAggregationType() const { return this->aggregationType_ != nullptr;};
      void deleteAggregationType() { this->aggregationType_ = nullptr;};
      inline string getAggregationType() const { DARABONBA_PTR_GET_DEFAULT(aggregationType_, "") };
      inline AlertAggregations& setAggregationType(string aggregationType) { DARABONBA_PTR_SET_VALUE(aggregationType_, aggregationType) };


      // alertCount Field Functions 
      bool hasAlertCount() const { return this->alertCount_ != nullptr;};
      void deleteAlertCount() { this->alertCount_ = nullptr;};
      inline int64_t getAlertCount() const { DARABONBA_PTR_GET_DEFAULT(alertCount_, 0L) };
      inline AlertAggregations& setAlertCount(int64_t alertCount) { DARABONBA_PTR_SET_VALUE(alertCount_, alertCount) };


      // attackStages Field Functions 
      bool hasAttackStages() const { return this->attackStages_ != nullptr;};
      void deleteAttackStages() { this->attackStages_ = nullptr;};
      inline const vector<string> & getAttackStages() const { DARABONBA_PTR_GET_CONST(attackStages_, vector<string>) };
      inline vector<string> getAttackStages() { DARABONBA_PTR_GET(attackStages_, vector<string>) };
      inline AlertAggregations& setAttackStages(const vector<string> & attackStages) { DARABONBA_PTR_SET_VALUE(attackStages_, attackStages) };
      inline AlertAggregations& setAttackStages(vector<string> && attackStages) { DARABONBA_PTR_SET_RVALUE(attackStages_, attackStages) };


      // defenseActionCounts Field Functions 
      bool hasDefenseActionCounts() const { return this->defenseActionCounts_ != nullptr;};
      void deleteDefenseActionCounts() { this->defenseActionCounts_ = nullptr;};
      inline const vector<AlertAggregations::DefenseActionCounts> & getDefenseActionCounts() const { DARABONBA_PTR_GET_CONST(defenseActionCounts_, vector<AlertAggregations::DefenseActionCounts>) };
      inline vector<AlertAggregations::DefenseActionCounts> getDefenseActionCounts() { DARABONBA_PTR_GET(defenseActionCounts_, vector<AlertAggregations::DefenseActionCounts>) };
      inline AlertAggregations& setDefenseActionCounts(const vector<AlertAggregations::DefenseActionCounts> & defenseActionCounts) { DARABONBA_PTR_SET_VALUE(defenseActionCounts_, defenseActionCounts) };
      inline AlertAggregations& setDefenseActionCounts(vector<AlertAggregations::DefenseActionCounts> && defenseActionCounts) { DARABONBA_PTR_SET_RVALUE(defenseActionCounts_, defenseActionCounts) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline AlertAggregations& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // latestTime Field Functions 
      bool hasLatestTime() const { return this->latestTime_ != nullptr;};
      void deleteLatestTime() { this->latestTime_ = nullptr;};
      inline int64_t getLatestTime() const { DARABONBA_PTR_GET_DEFAULT(latestTime_, 0L) };
      inline AlertAggregations& setLatestTime(int64_t latestTime) { DARABONBA_PTR_SET_VALUE(latestTime_, latestTime) };


      // primaryDisplayValue Field Functions 
      bool hasPrimaryDisplayValue() const { return this->primaryDisplayValue_ != nullptr;};
      void deletePrimaryDisplayValue() { this->primaryDisplayValue_ = nullptr;};
      inline string getPrimaryDisplayValue() const { DARABONBA_PTR_GET_DEFAULT(primaryDisplayValue_, "") };
      inline AlertAggregations& setPrimaryDisplayValue(string primaryDisplayValue) { DARABONBA_PTR_SET_VALUE(primaryDisplayValue_, primaryDisplayValue) };


      // primaryValue Field Functions 
      bool hasPrimaryValue() const { return this->primaryValue_ != nullptr;};
      void deletePrimaryValue() { this->primaryValue_ = nullptr;};
      inline string getPrimaryValue() const { DARABONBA_PTR_GET_DEFAULT(primaryValue_, "") };
      inline AlertAggregations& setPrimaryValue(string primaryValue) { DARABONBA_PTR_SET_VALUE(primaryValue_, primaryValue) };


      // secondaryValue Field Functions 
      bool hasSecondaryValue() const { return this->secondaryValue_ != nullptr;};
      void deleteSecondaryValue() { this->secondaryValue_ = nullptr;};
      inline string getSecondaryValue() const { DARABONBA_PTR_GET_DEFAULT(secondaryValue_, "") };
      inline AlertAggregations& setSecondaryValue(string secondaryValue) { DARABONBA_PTR_SET_VALUE(secondaryValue_, secondaryValue) };


      // sourceCodes Field Functions 
      bool hasSourceCodes() const { return this->sourceCodes_ != nullptr;};
      void deleteSourceCodes() { this->sourceCodes_ = nullptr;};
      inline const vector<string> & getSourceCodes() const { DARABONBA_PTR_GET_CONST(sourceCodes_, vector<string>) };
      inline vector<string> getSourceCodes() { DARABONBA_PTR_GET(sourceCodes_, vector<string>) };
      inline AlertAggregations& setSourceCodes(const vector<string> & sourceCodes) { DARABONBA_PTR_SET_VALUE(sourceCodes_, sourceCodes) };
      inline AlertAggregations& setSourceCodes(vector<string> && sourceCodes) { DARABONBA_PTR_SET_RVALUE(sourceCodes_, sourceCodes) };


      // statusCounts Field Functions 
      bool hasStatusCounts() const { return this->statusCounts_ != nullptr;};
      void deleteStatusCounts() { this->statusCounts_ = nullptr;};
      inline const vector<AlertAggregations::StatusCounts> & getStatusCounts() const { DARABONBA_PTR_GET_CONST(statusCounts_, vector<AlertAggregations::StatusCounts>) };
      inline vector<AlertAggregations::StatusCounts> getStatusCounts() { DARABONBA_PTR_GET(statusCounts_, vector<AlertAggregations::StatusCounts>) };
      inline AlertAggregations& setStatusCounts(const vector<AlertAggregations::StatusCounts> & statusCounts) { DARABONBA_PTR_SET_VALUE(statusCounts_, statusCounts) };
      inline AlertAggregations& setStatusCounts(vector<AlertAggregations::StatusCounts> && statusCounts) { DARABONBA_PTR_SET_RVALUE(statusCounts_, statusCounts) };


    protected:
      shared_ptr<vector<string>> accountDisplayValues_ {};
      shared_ptr<vector<string>> accountIds_ {};
      shared_ptr<string> aggregationKey_ {};
      shared_ptr<string> aggregationType_ {};
      shared_ptr<int64_t> alertCount_ {};
      shared_ptr<vector<string>> attackStages_ {};
      shared_ptr<vector<AlertAggregations::DefenseActionCounts>> defenseActionCounts_ {};
      shared_ptr<int64_t> firstTime_ {};
      shared_ptr<int64_t> latestTime_ {};
      shared_ptr<string> primaryDisplayValue_ {};
      shared_ptr<string> primaryValue_ {};
      shared_ptr<string> secondaryValue_ {};
      shared_ptr<vector<string>> sourceCodes_ {};
      shared_ptr<vector<AlertAggregations::StatusCounts>> statusCounts_ {};
    };

    virtual bool empty() const override { return this->alertAggregations_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // alertAggregations Field Functions 
    bool hasAlertAggregations() const { return this->alertAggregations_ != nullptr;};
    void deleteAlertAggregations() { this->alertAggregations_ = nullptr;};
    inline const vector<ListAlertAggregationsResponseBody::AlertAggregations> & getAlertAggregations() const { DARABONBA_PTR_GET_CONST(alertAggregations_, vector<ListAlertAggregationsResponseBody::AlertAggregations>) };
    inline vector<ListAlertAggregationsResponseBody::AlertAggregations> getAlertAggregations() { DARABONBA_PTR_GET(alertAggregations_, vector<ListAlertAggregationsResponseBody::AlertAggregations>) };
    inline ListAlertAggregationsResponseBody& setAlertAggregations(const vector<ListAlertAggregationsResponseBody::AlertAggregations> & alertAggregations) { DARABONBA_PTR_SET_VALUE(alertAggregations_, alertAggregations) };
    inline ListAlertAggregationsResponseBody& setAlertAggregations(vector<ListAlertAggregationsResponseBody::AlertAggregations> && alertAggregations) { DARABONBA_PTR_SET_RVALUE(alertAggregations_, alertAggregations) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAlertAggregationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAlertAggregationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertAggregationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertAggregationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertAggregationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlertAggregationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListAlertAggregationsResponseBody::AlertAggregations>> alertAggregations_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
