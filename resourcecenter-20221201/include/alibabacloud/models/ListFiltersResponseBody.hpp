// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFiltersResponseBodyFilters.hpp>
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
    virtual bool empty() const override { return this->defaultFilterName_ == nullptr
        && return this->filters_ == nullptr && return this->requestId_ == nullptr; };
    // defaultFilterName Field Functions 
    bool hasDefaultFilterName() const { return this->defaultFilterName_ != nullptr;};
    void deleteDefaultFilterName() { this->defaultFilterName_ = nullptr;};
    inline string defaultFilterName() const { DARABONBA_PTR_GET_DEFAULT(defaultFilterName_, "") };
    inline ListFiltersResponseBody& setDefaultFilterName(string defaultFilterName) { DARABONBA_PTR_SET_VALUE(defaultFilterName_, defaultFilterName) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListFiltersResponseBodyFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListFiltersResponseBodyFilters>) };
    inline vector<ListFiltersResponseBodyFilters> filters() { DARABONBA_PTR_GET(filters_, vector<ListFiltersResponseBodyFilters>) };
    inline ListFiltersResponseBody& setFilters(const vector<ListFiltersResponseBodyFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListFiltersResponseBody& setFilters(vector<ListFiltersResponseBodyFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFiltersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the default filter.
    std::shared_ptr<string> defaultFilterName_ = nullptr;
    // The configurations of the filter.
    std::shared_ptr<vector<ListFiltersResponseBodyFilters>> filters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
