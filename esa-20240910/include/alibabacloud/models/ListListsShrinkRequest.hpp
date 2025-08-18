// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListListsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListListsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgsShrink_);
    };
    ListListsShrinkRequest() = default ;
    ListListsShrinkRequest(const ListListsShrinkRequest &) = default ;
    ListListsShrinkRequest(ListListsShrinkRequest &&) = default ;
    ListListsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListsShrinkRequest() = default ;
    ListListsShrinkRequest& operator=(const ListListsShrinkRequest &) = default ;
    ListListsShrinkRequest& operator=(ListListsShrinkRequest &&) = default ;
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
    inline ListListsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListListsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryArgsShrink Field Functions 
    bool hasQueryArgsShrink() const { return this->queryArgsShrink_ != nullptr;};
    void deleteQueryArgsShrink() { this->queryArgsShrink_ = nullptr;};
    inline string queryArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(queryArgsShrink_, "") };
    inline ListListsShrinkRequest& setQueryArgsShrink(string queryArgsShrink) { DARABONBA_PTR_SET_VALUE(queryArgsShrink_, queryArgsShrink) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The query arguments in the JSON format, which contain filter conditions.
    std::shared_ptr<string> queryArgsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
