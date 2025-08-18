// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPagesRequestQueryArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListPagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgs_);
    };
    friend void from_json(const Darabonba::Json& j, ListPagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgs_);
    };
    ListPagesRequest() = default ;
    ListPagesRequest(const ListPagesRequest &) = default ;
    ListPagesRequest(ListPagesRequest &&) = default ;
    ListPagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPagesRequest() = default ;
    ListPagesRequest& operator=(const ListPagesRequest &) = default ;
    ListPagesRequest& operator=(ListPagesRequest &&) = default ;
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
    inline ListPagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryArgs Field Functions 
    bool hasQueryArgs() const { return this->queryArgs_ != nullptr;};
    void deleteQueryArgs() { this->queryArgs_ = nullptr;};
    inline const ListPagesRequestQueryArgs & queryArgs() const { DARABONBA_PTR_GET_CONST(queryArgs_, ListPagesRequestQueryArgs) };
    inline ListPagesRequestQueryArgs queryArgs() { DARABONBA_PTR_GET(queryArgs_, ListPagesRequestQueryArgs) };
    inline ListPagesRequest& setQueryArgs(const ListPagesRequestQueryArgs & queryArgs) { DARABONBA_PTR_SET_VALUE(queryArgs_, queryArgs) };
    inline ListPagesRequest& setQueryArgs(ListPagesRequestQueryArgs && queryArgs) { DARABONBA_PTR_SET_RVALUE(queryArgs_, queryArgs) };


  protected:
    // The page number. Valid values: **1 to 100000**. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<ListPagesRequestQueryArgs> queryArgs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
