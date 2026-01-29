// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(FilterParam, filterParam_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(FilterParam, filterParam_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeSavingsPlansUsageDetailRequest() = default ;
    DescribeSavingsPlansUsageDetailRequest(const DescribeSavingsPlansUsageDetailRequest &) = default ;
    DescribeSavingsPlansUsageDetailRequest(DescribeSavingsPlansUsageDetailRequest &&) = default ;
    DescribeSavingsPlansUsageDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageDetailRequest() = default ;
    DescribeSavingsPlansUsageDetailRequest& operator=(const DescribeSavingsPlansUsageDetailRequest &) = default ;
    DescribeSavingsPlansUsageDetailRequest& operator=(DescribeSavingsPlansUsageDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FilterParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterParam& obj) { 
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, FilterParam& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      FilterParam() = default ;
      FilterParam(const FilterParam &) = default ;
      FilterParam(FilterParam &&) = default ;
      FilterParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterParam() = default ;
      FilterParam& operator=(const FilterParam &) = default ;
      FilterParam& operator=(FilterParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(SelectType, selectType_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->selectType_ == nullptr && this->values_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Tags& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // selectType Field Functions 
        bool hasSelectType() const { return this->selectType_ != nullptr;};
        void deleteSelectType() { this->selectType_ = nullptr;};
        inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
        inline Tags& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline Tags& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Tags& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> selectType_ {};
        shared_ptr<vector<string>> values_ {};
      };

      class Dimensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(SelectType, selectType_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Dimensions() = default ;
        Dimensions(const Dimensions &) = default ;
        Dimensions(Dimensions &&) = default ;
        Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dimensions() = default ;
        Dimensions& operator=(const Dimensions &) = default ;
        Dimensions& operator=(Dimensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->selectType_ == nullptr && this->values_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Dimensions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // selectType Field Functions 
        bool hasSelectType() const { return this->selectType_ != nullptr;};
        void deleteSelectType() { this->selectType_ = nullptr;};
        inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
        inline Dimensions& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline Dimensions& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Dimensions& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> selectType_ {};
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->tags_ == nullptr; };
      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<FilterParam::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<FilterParam::Dimensions>) };
      inline vector<FilterParam::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<FilterParam::Dimensions>) };
      inline FilterParam& setDimensions(const vector<FilterParam::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline FilterParam& setDimensions(vector<FilterParam::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<FilterParam::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<FilterParam::Tags>) };
      inline vector<FilterParam::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<FilterParam::Tags>) };
      inline FilterParam& setTags(const vector<FilterParam::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline FilterParam& setTags(vector<FilterParam::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<vector<FilterParam::Dimensions>> dimensions_ {};
      shared_ptr<vector<FilterParam::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->billOwnerId_ == nullptr
        && this->endPeriod_ == nullptr && this->filterParam_ == nullptr && this->maxResults_ == nullptr && this->periodType_ == nullptr && this->startPeriod_ == nullptr
        && this->token_ == nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t getBillOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline DescribeSavingsPlansUsageDetailRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string getEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeSavingsPlansUsageDetailRequest& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // filterParam Field Functions 
    bool hasFilterParam() const { return this->filterParam_ != nullptr;};
    void deleteFilterParam() { this->filterParam_ = nullptr;};
    inline const DescribeSavingsPlansUsageDetailRequest::FilterParam & getFilterParam() const { DARABONBA_PTR_GET_CONST(filterParam_, DescribeSavingsPlansUsageDetailRequest::FilterParam) };
    inline DescribeSavingsPlansUsageDetailRequest::FilterParam getFilterParam() { DARABONBA_PTR_GET(filterParam_, DescribeSavingsPlansUsageDetailRequest::FilterParam) };
    inline DescribeSavingsPlansUsageDetailRequest& setFilterParam(const DescribeSavingsPlansUsageDetailRequest::FilterParam & filterParam) { DARABONBA_PTR_SET_VALUE(filterParam_, filterParam) };
    inline DescribeSavingsPlansUsageDetailRequest& setFilterParam(DescribeSavingsPlansUsageDetailRequest::FilterParam && filterParam) { DARABONBA_PTR_SET_RVALUE(filterParam_, filterParam) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSavingsPlansUsageDetailRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeSavingsPlansUsageDetailRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string getStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeSavingsPlansUsageDetailRequest& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeSavingsPlansUsageDetailRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The ID of the account for which you want to query usage details. If you do not set this parameter, the data of the current Alibaba Cloud account and its RAM users is queried. To query the data of a RAM user, specify the ID of the RAM user.
    shared_ptr<int64_t> billOwnerId_ {};
    // The end of the time range to query. The end is excluded from the time range. If you do not set this parameter, the end time is the current time. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    shared_ptr<string> endPeriod_ {};
    shared_ptr<DescribeSavingsPlansUsageDetailRequest::FilterParam> filterParam_ {};
    // The maximum number of entries to return. Default value: 20. Maximum value: 300.
    shared_ptr<int32_t> maxResults_ {};
    // The time granularity at which usage details are queried. Valid values: MONTH, DAY, and HOUR.
    // 
    // This parameter is required.
    shared_ptr<string> periodType_ {};
    // The beginning of the time range to query. The beginning is included in the time range. Specify the time in the format of yyyy-MM-dd HH:mm:ss.
    // 
    // This parameter is required.
    shared_ptr<string> startPeriod_ {};
    // The token that is used to retrieve the next page of results. You do not need to set this parameter if you query usage details within a specific time range for the first time. The response returns a token that you can use to query usage details that are displayed on the next page. If a null value is returned for the NextToken parameter, no more coverage details can be queried.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
