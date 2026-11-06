// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSourceTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceTemplateIds, dataSourceTemplateIdsShrink_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateIds, dataSourceTemplateIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListDataSourceTemplatesShrinkRequest() = default ;
    ListDataSourceTemplatesShrinkRequest(const ListDataSourceTemplatesShrinkRequest &) = default ;
    ListDataSourceTemplatesShrinkRequest(ListDataSourceTemplatesShrinkRequest &&) = default ;
    ListDataSourceTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTemplatesShrinkRequest() = default ;
    ListDataSourceTemplatesShrinkRequest& operator=(const ListDataSourceTemplatesShrinkRequest &) = default ;
    ListDataSourceTemplatesShrinkRequest& operator=(ListDataSourceTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceTemplateIdsShrink_ == nullptr
        && this->lang_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // dataSourceTemplateIdsShrink Field Functions 
    bool hasDataSourceTemplateIdsShrink() const { return this->dataSourceTemplateIdsShrink_ != nullptr;};
    void deleteDataSourceTemplateIdsShrink() { this->dataSourceTemplateIdsShrink_ = nullptr;};
    inline string getDataSourceTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateIdsShrink_, "") };
    inline ListDataSourceTemplatesShrinkRequest& setDataSourceTemplateIdsShrink(string dataSourceTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateIdsShrink_, dataSourceTemplateIdsShrink) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataSourceTemplatesShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataSourceTemplatesShrinkRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataSourceTemplatesShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataSourceTemplatesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDataSourceTemplatesShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> dataSourceTemplateIdsShrink_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
