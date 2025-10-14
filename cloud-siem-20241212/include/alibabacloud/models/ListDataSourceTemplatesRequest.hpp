// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSourceTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceTemplateIds, dataSourceTemplateIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateIds, dataSourceTemplateIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListDataSourceTemplatesRequest() = default ;
    ListDataSourceTemplatesRequest(const ListDataSourceTemplatesRequest &) = default ;
    ListDataSourceTemplatesRequest(ListDataSourceTemplatesRequest &&) = default ;
    ListDataSourceTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTemplatesRequest() = default ;
    ListDataSourceTemplatesRequest& operator=(const ListDataSourceTemplatesRequest &) = default ;
    ListDataSourceTemplatesRequest& operator=(ListDataSourceTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceTemplateIds_ == nullptr
        && return this->lang_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataSourceTemplateIds Field Functions 
    bool hasDataSourceTemplateIds() const { return this->dataSourceTemplateIds_ != nullptr;};
    void deleteDataSourceTemplateIds() { this->dataSourceTemplateIds_ = nullptr;};
    inline const vector<string> & dataSourceTemplateIds() const { DARABONBA_PTR_GET_CONST(dataSourceTemplateIds_, vector<string>) };
    inline vector<string> dataSourceTemplateIds() { DARABONBA_PTR_GET(dataSourceTemplateIds_, vector<string>) };
    inline ListDataSourceTemplatesRequest& setDataSourceTemplateIds(const vector<string> & dataSourceTemplateIds) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateIds_, dataSourceTemplateIds) };
    inline ListDataSourceTemplatesRequest& setDataSourceTemplateIds(vector<string> && dataSourceTemplateIds) { DARABONBA_PTR_SET_RVALUE(dataSourceTemplateIds_, dataSourceTemplateIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataSourceTemplatesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataSourceTemplatesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataSourceTemplatesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataSourceTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDataSourceTemplatesRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<vector<string>> dataSourceTemplateIds_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
