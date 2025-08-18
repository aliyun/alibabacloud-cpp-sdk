// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBMITRECORDSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSubmitRecordsRequestListQuerySearchFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSubmitRecordsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubmitRecordsRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(SearchFilter, searchFilter_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubmitRecordsRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(SearchFilter, searchFilter_);
    };
    ListSubmitRecordsRequestListQuery() = default ;
    ListSubmitRecordsRequestListQuery(const ListSubmitRecordsRequestListQuery &) = default ;
    ListSubmitRecordsRequestListQuery(ListSubmitRecordsRequestListQuery &&) = default ;
    ListSubmitRecordsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubmitRecordsRequestListQuery() = default ;
    ListSubmitRecordsRequestListQuery& operator=(const ListSubmitRecordsRequestListQuery &) = default ;
    ListSubmitRecordsRequestListQuery& operator=(ListSubmitRecordsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->searchFilter_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListSubmitRecordsRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // searchFilter Field Functions 
    bool hasSearchFilter() const { return this->searchFilter_ != nullptr;};
    void deleteSearchFilter() { this->searchFilter_ = nullptr;};
    inline const Models::ListSubmitRecordsRequestListQuerySearchFilter & searchFilter() const { DARABONBA_PTR_GET_CONST(searchFilter_, Models::ListSubmitRecordsRequestListQuerySearchFilter) };
    inline Models::ListSubmitRecordsRequestListQuerySearchFilter searchFilter() { DARABONBA_PTR_GET(searchFilter_, Models::ListSubmitRecordsRequestListQuerySearchFilter) };
    inline ListSubmitRecordsRequestListQuery& setSearchFilter(const Models::ListSubmitRecordsRequestListQuerySearchFilter & searchFilter) { DARABONBA_PTR_SET_VALUE(searchFilter_, searchFilter) };
    inline ListSubmitRecordsRequestListQuery& setSearchFilter(Models::ListSubmitRecordsRequestListQuerySearchFilter && searchFilter) { DARABONBA_PTR_SET_RVALUE(searchFilter_, searchFilter) };


  protected:
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::ListSubmitRecordsRequestListQuerySearchFilter> searchFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
