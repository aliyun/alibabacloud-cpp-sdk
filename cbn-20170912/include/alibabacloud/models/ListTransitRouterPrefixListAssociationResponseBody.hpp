// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterPrefixListAssociationResponseBodyPrefixLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterPrefixListAssociationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPrefixListAssociationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPrefixListAssociationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTransitRouterPrefixListAssociationResponseBody() = default ;
    ListTransitRouterPrefixListAssociationResponseBody(const ListTransitRouterPrefixListAssociationResponseBody &) = default ;
    ListTransitRouterPrefixListAssociationResponseBody(ListTransitRouterPrefixListAssociationResponseBody &&) = default ;
    ListTransitRouterPrefixListAssociationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPrefixListAssociationResponseBody() = default ;
    ListTransitRouterPrefixListAssociationResponseBody& operator=(const ListTransitRouterPrefixListAssociationResponseBody &) = default ;
    ListTransitRouterPrefixListAssociationResponseBody& operator=(ListTransitRouterPrefixListAssociationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->prefixLists_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prefixLists Field Functions 
    bool hasPrefixLists() const { return this->prefixLists_ != nullptr;};
    void deletePrefixLists() { this->prefixLists_ = nullptr;};
    inline const vector<ListTransitRouterPrefixListAssociationResponseBodyPrefixLists> & prefixLists() const { DARABONBA_PTR_GET_CONST(prefixLists_, vector<ListTransitRouterPrefixListAssociationResponseBodyPrefixLists>) };
    inline vector<ListTransitRouterPrefixListAssociationResponseBodyPrefixLists> prefixLists() { DARABONBA_PTR_GET(prefixLists_, vector<ListTransitRouterPrefixListAssociationResponseBodyPrefixLists>) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPrefixLists(const vector<ListTransitRouterPrefixListAssociationResponseBodyPrefixLists> & prefixLists) { DARABONBA_PTR_SET_VALUE(prefixLists_, prefixLists) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setPrefixLists(vector<ListTransitRouterPrefixListAssociationResponseBodyPrefixLists> && prefixLists) { DARABONBA_PTR_SET_RVALUE(prefixLists_, prefixLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterPrefixListAssociationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterPrefixListAssociationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // A list of prefix lists.
    std::shared_ptr<vector<ListTransitRouterPrefixListAssociationResponseBodyPrefixLists>> prefixLists_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
