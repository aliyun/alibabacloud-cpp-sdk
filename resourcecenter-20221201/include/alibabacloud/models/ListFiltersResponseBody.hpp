// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListFiltersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFiltersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultFilterName, defaultFilterName_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFiltersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultFilterName, defaultFilterName_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFiltersResponseBody() = default ;
    ListFiltersResponseBody(const ListFiltersResponseBody &) = default ;
    ListFiltersResponseBody(ListFiltersResponseBody &&) = default ;
    ListFiltersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFiltersResponseBody() = default ;
    ListFiltersResponseBody& operator=(const ListFiltersResponseBody &) = default ;
    ListFiltersResponseBody& operator=(ListFiltersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(FilterConfiguration, filterConfiguration_);
        DARABONBA_PTR_TO_JSON(FilterName, filterName_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(FilterConfiguration, filterConfiguration_);
        DARABONBA_PTR_FROM_JSON(FilterName, filterName_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filterConfiguration_ == nullptr
        && this->filterName_ == nullptr; };
      // filterConfiguration Field Functions 
      bool hasFilterConfiguration() const { return this->filterConfiguration_ != nullptr;};
      void deleteFilterConfiguration() { this->filterConfiguration_ = nullptr;};
      inline string getFilterConfiguration() const { DARABONBA_PTR_GET_DEFAULT(filterConfiguration_, "") };
      inline Filters& setFilterConfiguration(string filterConfiguration) { DARABONBA_PTR_SET_VALUE(filterConfiguration_, filterConfiguration) };


      // filterName Field Functions 
      bool hasFilterName() const { return this->filterName_ != nullptr;};
      void deleteFilterName() { this->filterName_ = nullptr;};
      inline string getFilterName() const { DARABONBA_PTR_GET_DEFAULT(filterName_, "") };
      inline Filters& setFilterName(string filterName) { DARABONBA_PTR_SET_VALUE(filterName_, filterName) };


    protected:
      // This parameter is required.
      shared_ptr<string> filterConfiguration_ {};
      shared_ptr<string> filterName_ {};
    };

    virtual bool empty() const override { return this->defaultFilterName_ == nullptr
        && this->filters_ == nullptr && this->requestId_ == nullptr; };
    // defaultFilterName Field Functions 
    bool hasDefaultFilterName() const { return this->defaultFilterName_ != nullptr;};
    void deleteDefaultFilterName() { this->defaultFilterName_ = nullptr;};
    inline string getDefaultFilterName() const { DARABONBA_PTR_GET_DEFAULT(defaultFilterName_, "") };
    inline ListFiltersResponseBody& setDefaultFilterName(string defaultFilterName) { DARABONBA_PTR_SET_VALUE(defaultFilterName_, defaultFilterName) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListFiltersResponseBody::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListFiltersResponseBody::Filters>) };
    inline vector<ListFiltersResponseBody::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListFiltersResponseBody::Filters>) };
    inline ListFiltersResponseBody& setFilters(const vector<ListFiltersResponseBody::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListFiltersResponseBody& setFilters(vector<ListFiltersResponseBody::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFiltersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> defaultFilterName_ {};
    shared_ptr<vector<ListFiltersResponseBody::Filters>> filters_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
