// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHRECORDSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHRECORDSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPublishRecordsRequestListQuerySearchFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListPublishRecordsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishRecordsRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SearchFilter, searchFilter_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishRecordsRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SearchFilter, searchFilter_);
    };
    ListPublishRecordsRequestListQuery() = default ;
    ListPublishRecordsRequestListQuery(const ListPublishRecordsRequestListQuery &) = default ;
    ListPublishRecordsRequestListQuery(ListPublishRecordsRequestListQuery &&) = default ;
    ListPublishRecordsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishRecordsRequestListQuery() = default ;
    ListPublishRecordsRequestListQuery& operator=(const ListPublishRecordsRequestListQuery &) = default ;
    ListPublishRecordsRequestListQuery& operator=(ListPublishRecordsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->searchFilter_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListPublishRecordsRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // searchFilter Field Functions 
    bool hasSearchFilter() const { return this->searchFilter_ != nullptr;};
    void deleteSearchFilter() { this->searchFilter_ = nullptr;};
    inline const Models::ListPublishRecordsRequestListQuerySearchFilter & searchFilter() const { DARABONBA_PTR_GET_CONST(searchFilter_, Models::ListPublishRecordsRequestListQuerySearchFilter) };
    inline Models::ListPublishRecordsRequestListQuerySearchFilter searchFilter() { DARABONBA_PTR_GET(searchFilter_, Models::ListPublishRecordsRequestListQuerySearchFilter) };
    inline ListPublishRecordsRequestListQuery& setSearchFilter(const Models::ListPublishRecordsRequestListQuerySearchFilter & searchFilter) { DARABONBA_PTR_SET_VALUE(searchFilter_, searchFilter) };
    inline ListPublishRecordsRequestListQuery& setSearchFilter(Models::ListPublishRecordsRequestListQuerySearchFilter && searchFilter) { DARABONBA_PTR_SET_RVALUE(searchFilter_, searchFilter) };


  protected:
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::ListPublishRecordsRequestListQuerySearchFilter> searchFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
