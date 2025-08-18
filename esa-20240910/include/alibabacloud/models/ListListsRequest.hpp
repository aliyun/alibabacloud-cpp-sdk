// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListListsRequestQueryArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListListsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
    };
    friend void from_json(const Darabonba::Json& j, ListListsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
    };
    ListListsRequest() = default ;
    ListListsRequest(const ListListsRequest &) = default ;
    ListListsRequest(ListListsRequest &&) = default ;
    ListListsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListsRequest() = default ;
    ListListsRequest& operator=(const ListListsRequest &) = default ;
    ListListsRequest& operator=(ListListsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->queryArgs_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListListsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListListsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListListsRequestQueryArgs & queryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListListsRequestQueryArgs) };
    inline ListListsRequestQueryArgs queryArgs() { DARABONBA_PTR_GET(queryArgs_, ListListsRequestQueryArgs) };
    inline ListListsRequest& setQueryArgs(const ListListsRequestQueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListListsRequest& setQueryArgs(ListListsRequestQueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The query arguments in the JSON format, which contain filter conditions.
    std::shared_ptr<ListListsRequestQueryArgs> queryArgs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
