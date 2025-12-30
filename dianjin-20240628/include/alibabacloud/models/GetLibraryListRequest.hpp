// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(query, query_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(query, query_);
    };
    GetLibraryListRequest() = default ;
    GetLibraryListRequest(const GetLibraryListRequest &) = default ;
    GetLibraryListRequest(GetLibraryListRequest &&) = default ;
    GetLibraryListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryListRequest() = default ;
    GetLibraryListRequest& operator=(const GetLibraryListRequest &) = default ;
    GetLibraryListRequest& operator=(GetLibraryListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->query_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetLibraryListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetLibraryListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetLibraryListRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
