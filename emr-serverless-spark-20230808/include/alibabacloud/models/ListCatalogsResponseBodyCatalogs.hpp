// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODYCATALOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODYCATALOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListCatalogsResponseBodyCatalogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsResponseBodyCatalogs& obj) { 
      DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(catalogProvider, catalogProvider_);
      DARABONBA_PTR_TO_JSON(catalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(extras, extras_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(resourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsResponseBodyCatalogs& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(catalogProvider, catalogProvider_);
      DARABONBA_PTR_FROM_JSON(catalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(extras, extras_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(resourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListCatalogsResponseBodyCatalogs() = default ;
    ListCatalogsResponseBodyCatalogs(const ListCatalogsResponseBodyCatalogs &) = default ;
    ListCatalogsResponseBodyCatalogs(ListCatalogsResponseBodyCatalogs &&) = default ;
    ListCatalogsResponseBodyCatalogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogsResponseBodyCatalogs() = default ;
    ListCatalogsResponseBodyCatalogs& operator=(const ListCatalogsResponseBodyCatalogs &) = default ;
    ListCatalogsResponseBodyCatalogs& operator=(ListCatalogsResponseBodyCatalogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->catalogProvider_ == nullptr && return this->catalogType_ == nullptr && return this->environments_ == nullptr && return this->extras_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->workspaceId_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListCatalogsResponseBodyCatalogs& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // catalogProvider Field Functions 
    bool hasCatalogProvider() const { return this->catalogProvider_ != nullptr;};
    void deleteCatalogProvider() { this->catalogProvider_ = nullptr;};
    inline string catalogProvider() const { DARABONBA_PTR_GET_DEFAULT(catalogProvider_, "") };
    inline ListCatalogsResponseBodyCatalogs& setCatalogProvider(string catalogProvider) { DARABONBA_PTR_SET_VALUE(catalogProvider_, catalogProvider) };


    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string catalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline ListCatalogsResponseBodyCatalogs& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<string> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<string>) };
    inline vector<string> environments() { DARABONBA_PTR_GET(environments_, vector<string>) };
    inline ListCatalogsResponseBodyCatalogs& setEnvironments(const vector<string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline ListCatalogsResponseBodyCatalogs& setEnvironments(vector<string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline const map<string, string> & extras() const { DARABONBA_PTR_GET_CONST(extras_, map<string, string>) };
    inline map<string, string> extras() { DARABONBA_PTR_GET(extras_, map<string, string>) };
    inline ListCatalogsResponseBodyCatalogs& setExtras(const map<string, string> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
    inline ListCatalogsResponseBodyCatalogs& setExtras(map<string, string> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListCatalogsResponseBodyCatalogs& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListCatalogsResponseBodyCatalogs& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline ListCatalogsResponseBodyCatalogs& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListCatalogsResponseBodyCatalogs& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // regionId。
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<string> catalogProvider_ = nullptr;
    std::shared_ptr<string> catalogType_ = nullptr;
    std::shared_ptr<vector<string>> environments_ = nullptr;
    std::shared_ptr<map<string, string>> extras_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
    // 工作空间id。
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
