// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBILLINGOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBILLINGOVERVIEWREQUEST_HPP_
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
  class GetBillingOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBillingOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(billMonth, billMonth_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(locale, locale_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(topNum, topNum_);
      DARABONBA_PTR_TO_JSON(zeroFilter, zeroFilter_);
    };
    friend void from_json(const Darabonba::Json& j, GetBillingOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(billMonth, billMonth_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(locale, locale_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(topNum, topNum_);
      DARABONBA_PTR_FROM_JSON(zeroFilter, zeroFilter_);
    };
    GetBillingOverviewRequest() = default ;
    GetBillingOverviewRequest(const GetBillingOverviewRequest &) = default ;
    GetBillingOverviewRequest(GetBillingOverviewRequest &&) = default ;
    GetBillingOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBillingOverviewRequest() = default ;
    GetBillingOverviewRequest& operator=(const GetBillingOverviewRequest &) = default ;
    GetBillingOverviewRequest& operator=(GetBillingOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The filter field. For more information, see the "Additional information" section below.
        shared_ptr<string> code_ {};
        // The filter type.
        shared_ptr<string> selectType_ {};
        // The list of filter values.
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
      // The list of dimension filters.
      shared_ptr<vector<Filter::Dimensions>> dimensions_ {};
    };

    virtual bool empty() const override { return this->billMonth_ == nullptr
        && this->filter_ == nullptr && this->groupBy_ == nullptr && this->locale_ == nullptr && this->regionId_ == nullptr && this->topNum_ == nullptr
        && this->zeroFilter_ == nullptr; };
    // billMonth Field Functions 
    bool hasBillMonth() const { return this->billMonth_ != nullptr;};
    void deleteBillMonth() { this->billMonth_ = nullptr;};
    inline string getBillMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
    inline GetBillingOverviewRequest& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetBillingOverviewRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, GetBillingOverviewRequest::Filter) };
    inline GetBillingOverviewRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, GetBillingOverviewRequest::Filter) };
    inline GetBillingOverviewRequest& setFilter(const GetBillingOverviewRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetBillingOverviewRequest& setFilter(GetBillingOverviewRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<GetBillingOverviewRequest::GroupBy> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<GetBillingOverviewRequest::GroupBy>) };
    inline vector<GetBillingOverviewRequest::GroupBy> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<GetBillingOverviewRequest::GroupBy>) };
    inline GetBillingOverviewRequest& setGroupBy(const vector<GetBillingOverviewRequest::GroupBy> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline GetBillingOverviewRequest& setGroupBy(vector<GetBillingOverviewRequest::GroupBy> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetBillingOverviewRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetBillingOverviewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topNum Field Functions 
    bool hasTopNum() const { return this->topNum_ != nullptr;};
    void deleteTopNum() { this->topNum_ = nullptr;};
    inline int32_t getTopNum() const { DARABONBA_PTR_GET_DEFAULT(topNum_, 0) };
    inline GetBillingOverviewRequest& setTopNum(int32_t topNum) { DARABONBA_PTR_SET_VALUE(topNum_, topNum) };


    // zeroFilter Field Functions 
    bool hasZeroFilter() const { return this->zeroFilter_ != nullptr;};
    void deleteZeroFilter() { this->zeroFilter_ = nullptr;};
    inline bool getZeroFilter() const { DARABONBA_PTR_GET_DEFAULT(zeroFilter_, false) };
    inline GetBillingOverviewRequest& setZeroFilter(bool zeroFilter) { DARABONBA_PTR_SET_VALUE(zeroFilter_, zeroFilter) };


  protected:
    // The billing month. This parameter is required.
    shared_ptr<string> billMonth_ {};
    // The filter condition.
    shared_ptr<GetBillingOverviewRequest::Filter> filter_ {};
    // The list of grouping conditions. Currently, you must specify exactly one grouping dimension.
    shared_ptr<vector<GetBillingOverviewRequest::GroupBy>> groupBy_ {};
    // The response language. Default value: en-US.
    shared_ptr<string> locale_ {};
    // The region.
    shared_ptr<string> regionId_ {};
    // The number of groups to return. Valid values: 1 to 20. Default value: 20.
    shared_ptr<int32_t> topNum_ {};
    // Specifies whether to filter out groups with a zero amount. Default value: true.
    shared_ptr<bool> zeroFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
