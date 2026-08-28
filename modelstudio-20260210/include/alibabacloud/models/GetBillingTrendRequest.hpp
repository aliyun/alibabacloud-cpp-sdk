// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBILLINGTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBILLINGTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetBillingTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBillingTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(locale, locale_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(timePeriod, timePeriod_);
      DARABONBA_PTR_TO_JSON(topNum, topNum_);
      DARABONBA_PTR_TO_JSON(zeroFilter, zeroFilter_);
    };
    friend void from_json(const Darabonba::Json& j, GetBillingTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(locale, locale_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(timePeriod, timePeriod_);
      DARABONBA_PTR_FROM_JSON(topNum, topNum_);
      DARABONBA_PTR_FROM_JSON(zeroFilter, zeroFilter_);
    };
    GetBillingTrendRequest() = default ;
    GetBillingTrendRequest(const GetBillingTrendRequest &) = default ;
    GetBillingTrendRequest(GetBillingTrendRequest &&) = default ;
    GetBillingTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBillingTrendRequest() = default ;
    GetBillingTrendRequest& operator=(const GetBillingTrendRequest &) = default ;
    GetBillingTrendRequest& operator=(GetBillingTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimePeriod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimePeriod& obj) { 
        DARABONBA_PTR_TO_JSON(end, end_);
        DARABONBA_PTR_TO_JSON(start, start_);
      };
      friend void from_json(const Darabonba::Json& j, TimePeriod& obj) { 
        DARABONBA_PTR_FROM_JSON(end, end_);
        DARABONBA_PTR_FROM_JSON(start, start_);
      };
      TimePeriod() = default ;
      TimePeriod(const TimePeriod &) = default ;
      TimePeriod(TimePeriod &&) = default ;
      TimePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimePeriod() = default ;
      TimePeriod& operator=(const TimePeriod &) = default ;
      TimePeriod& operator=(TimePeriod &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
      inline TimePeriod& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
      inline TimePeriod& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      // The end time.
      shared_ptr<string> end_ {};
      // The start time.
      shared_ptr<string> start_ {};
    };

    class GroupBy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupBy& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
      };
      friend void from_json(const Darabonba::Json& j, GroupBy& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
      };
      GroupBy() = default ;
      GroupBy(const GroupBy &) = default ;
      GroupBy(GroupBy &&) = default ;
      GroupBy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupBy() = default ;
      GroupBy& operator=(const GroupBy &) = default ;
      GroupBy& operator=(GroupBy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline GroupBy& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    protected:
      // The grouping dimension code. For more information, see the "Additional information" section below.
      shared_ptr<string> code_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dimensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(selectType, selectType_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(selectType, selectType_);
          DARABONBA_PTR_FROM_JSON(values, values_);
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
        // The filter dimension code. For more information, see the "Additional information" section below.
        shared_ptr<string> code_ {};
        // The filter method.
        shared_ptr<string> selectType_ {};
        // The filter value list.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->dimensions_ == nullptr; };
      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<Filter::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Filter::Dimensions>) };
      inline vector<Filter::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<Filter::Dimensions>) };
      inline Filter& setDimensions(const vector<Filter::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline Filter& setDimensions(vector<Filter::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    protected:
      // The dimension filter list.
      shared_ptr<vector<Filter::Dimensions>> dimensions_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->granularity_ == nullptr && this->groupBy_ == nullptr && this->locale_ == nullptr && this->regionId_ == nullptr && this->timePeriod_ == nullptr
        && this->topNum_ == nullptr && this->zeroFilter_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetBillingTrendRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, GetBillingTrendRequest::Filter) };
    inline GetBillingTrendRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, GetBillingTrendRequest::Filter) };
    inline GetBillingTrendRequest& setFilter(const GetBillingTrendRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetBillingTrendRequest& setFilter(GetBillingTrendRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline GetBillingTrendRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<GetBillingTrendRequest::GroupBy> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<GetBillingTrendRequest::GroupBy>) };
    inline vector<GetBillingTrendRequest::GroupBy> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<GetBillingTrendRequest::GroupBy>) };
    inline GetBillingTrendRequest& setGroupBy(const vector<GetBillingTrendRequest::GroupBy> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline GetBillingTrendRequest& setGroupBy(vector<GetBillingTrendRequest::GroupBy> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetBillingTrendRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetBillingTrendRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timePeriod Field Functions 
    bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
    void deleteTimePeriod() { this->timePeriod_ = nullptr;};
    inline const GetBillingTrendRequest::TimePeriod & getTimePeriod() const { DARABONBA_PTR_GET_CONST(timePeriod_, GetBillingTrendRequest::TimePeriod) };
    inline GetBillingTrendRequest::TimePeriod getTimePeriod() { DARABONBA_PTR_GET(timePeriod_, GetBillingTrendRequest::TimePeriod) };
    inline GetBillingTrendRequest& setTimePeriod(const GetBillingTrendRequest::TimePeriod & timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };
    inline GetBillingTrendRequest& setTimePeriod(GetBillingTrendRequest::TimePeriod && timePeriod) { DARABONBA_PTR_SET_RVALUE(timePeriod_, timePeriod) };


    // topNum Field Functions 
    bool hasTopNum() const { return this->topNum_ != nullptr;};
    void deleteTopNum() { this->topNum_ = nullptr;};
    inline int32_t getTopNum() const { DARABONBA_PTR_GET_DEFAULT(topNum_, 0) };
    inline GetBillingTrendRequest& setTopNum(int32_t topNum) { DARABONBA_PTR_SET_VALUE(topNum_, topNum) };


    // zeroFilter Field Functions 
    bool hasZeroFilter() const { return this->zeroFilter_ != nullptr;};
    void deleteZeroFilter() { this->zeroFilter_ = nullptr;};
    inline bool getZeroFilter() const { DARABONBA_PTR_GET_DEFAULT(zeroFilter_, false) };
    inline GetBillingTrendRequest& setZeroFilter(bool zeroFilter) { DARABONBA_PTR_SET_VALUE(zeroFilter_, zeroFilter) };


  protected:
    // The dimension filter conditions.
    shared_ptr<GetBillingTrendRequest::Filter> filter_ {};
    // The query granularity. This parameter is required.
    shared_ptr<string> granularity_ {};
    // The grouping conditions. This parameter must contain one and only one element.
    shared_ptr<vector<GetBillingTrendRequest::GroupBy>> groupBy_ {};
    // The response language. Default value: en-US.
    shared_ptr<string> locale_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The query time range, including the start time and end time. This parameter is required.
    shared_ptr<GetBillingTrendRequest::TimePeriod> timePeriod_ {};
    // The number of groups to return. Valid values: 1 to 20. Default value: 20. The remaining groups are merged into "Others".
    shared_ptr<int32_t> topNum_ {};
    // Specifies whether to filter out groups with a zero amount. Default value: true.
    shared_ptr<bool> zeroFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
