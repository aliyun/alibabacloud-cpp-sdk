// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAuthorizedDataServiceApiDetailsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDataServiceApiDetailsRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDataServiceApiDetailsRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAuthorizedDataServiceApiDetailsRequestListQuery() = default ;
    ListAuthorizedDataServiceApiDetailsRequestListQuery(const ListAuthorizedDataServiceApiDetailsRequestListQuery &) = default ;
    ListAuthorizedDataServiceApiDetailsRequestListQuery(ListAuthorizedDataServiceApiDetailsRequestListQuery &&) = default ;
    ListAuthorizedDataServiceApiDetailsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDataServiceApiDetailsRequestListQuery() = default ;
    ListAuthorizedDataServiceApiDetailsRequestListQuery& operator=(const ListAuthorizedDataServiceApiDetailsRequestListQuery &) = default ;
    ListAuthorizedDataServiceApiDetailsRequestListQuery& operator=(ListAuthorizedDataServiceApiDetailsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListAuthorizedDataServiceApiDetailsRequestListQuery& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListAuthorizedDataServiceApiDetailsRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedDataServiceApiDetailsRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // AppKey
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
