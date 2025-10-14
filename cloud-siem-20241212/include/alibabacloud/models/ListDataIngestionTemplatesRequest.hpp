// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionTemplateStatus, dataIngestionTemplateStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateIds, dataSourceTemplateIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplateStatus, dataIngestionTemplateStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateIds, dataSourceTemplateIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListDataIngestionTemplatesRequest() = default ;
    ListDataIngestionTemplatesRequest(const ListDataIngestionTemplatesRequest &) = default ;
    ListDataIngestionTemplatesRequest(ListDataIngestionTemplatesRequest &&) = default ;
    ListDataIngestionTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionTemplatesRequest() = default ;
    ListDataIngestionTemplatesRequest& operator=(const ListDataIngestionTemplatesRequest &) = default ;
    ListDataIngestionTemplatesRequest& operator=(ListDataIngestionTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionTemplateStatus_ == nullptr
        && return this->dataSourceTemplateIds_ == nullptr && return this->lang_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->productId_ == nullptr
        && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataIngestionTemplateStatus Field Functions 
    bool hasDataIngestionTemplateStatus() const { return this->dataIngestionTemplateStatus_ != nullptr;};
    void deleteDataIngestionTemplateStatus() { this->dataIngestionTemplateStatus_ = nullptr;};
    inline string dataIngestionTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateStatus_, "") };
    inline ListDataIngestionTemplatesRequest& setDataIngestionTemplateStatus(string dataIngestionTemplateStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateStatus_, dataIngestionTemplateStatus) };


    // dataSourceTemplateIds Field Functions 
    bool hasDataSourceTemplateIds() const { return this->dataSourceTemplateIds_ != nullptr;};
    void deleteDataSourceTemplateIds() { this->dataSourceTemplateIds_ = nullptr;};
    inline string dataSourceTemplateIds() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateIds_, "") };
    inline ListDataIngestionTemplatesRequest& setDataSourceTemplateIds(string dataSourceTemplateIds) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateIds_, dataSourceTemplateIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataIngestionTemplatesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataIngestionTemplatesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataIngestionTemplatesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListDataIngestionTemplatesRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataIngestionTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDataIngestionTemplatesRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataIngestionTemplateStatus_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateIds_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
