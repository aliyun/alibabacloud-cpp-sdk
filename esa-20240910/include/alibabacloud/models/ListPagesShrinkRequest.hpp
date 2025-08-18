// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListPagesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPagesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListPagesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgsShrink_);
    };
    ListPagesShrinkRequest() = default ;
    ListPagesShrinkRequest(const ListPagesShrinkRequest &) = default ;
    ListPagesShrinkRequest(ListPagesShrinkRequest &&) = default ;
    ListPagesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPagesShrinkRequest() = default ;
    ListPagesShrinkRequest& operator=(const ListPagesShrinkRequest &) = default ;
    ListPagesShrinkRequest& operator=(ListPagesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->queryArgsShrink_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPagesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPagesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryArgsShrink Field Functions 
    bool hasQueryArgsShrink() const { return this->queryArgsShrink_ != nullptr;};
    void deleteQueryArgsShrink() { this->queryArgsShrink_ = nullptr;};
    inline string queryArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(queryArgsShrink_, "") };
    inline ListPagesShrinkRequest& setQueryArgsShrink(string queryArgsShrink) { DARABONBA_PTR_SET_VALUE(queryArgsShrink_, queryArgsShrink) };


  protected:
    // The page number. Valid values: **1 to 100000**. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> queryArgsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
