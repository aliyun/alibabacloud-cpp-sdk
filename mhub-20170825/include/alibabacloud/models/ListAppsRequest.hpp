// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    ListAppsRequest() = default ;
    ListAppsRequest(const ListAppsRequest &) = default ;
    ListAppsRequest(ListAppsRequest &&) = default ;
    ListAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsRequest() = default ;
    ListAppsRequest& operator=(const ListAppsRequest &) = default ;
    ListAppsRequest& operator=(ListAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->osType_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->productId_ != nullptr; };
    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline int32_t osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, 0) };
    inline ListAppsRequest& setOsType(int32_t osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string page() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline ListAppsRequest& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAppsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListAppsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    std::shared_ptr<int32_t> osType_ = nullptr;
    std::shared_ptr<string> page_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
