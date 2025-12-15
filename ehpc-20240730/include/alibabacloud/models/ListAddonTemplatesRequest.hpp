// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAddonTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonNames, addonNames_);
      DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonNames, addonNames_);
      DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListAddonTemplatesRequest() = default ;
    ListAddonTemplatesRequest(const ListAddonTemplatesRequest &) = default ;
    ListAddonTemplatesRequest(ListAddonTemplatesRequest &&) = default ;
    ListAddonTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonTemplatesRequest() = default ;
    ListAddonTemplatesRequest& operator=(const ListAddonTemplatesRequest &) = default ;
    ListAddonTemplatesRequest& operator=(ListAddonTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonNames_ == nullptr
        && return this->clusterCategory_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr; };
    // addonNames Field Functions 
    bool hasAddonNames() const { return this->addonNames_ != nullptr;};
    void deleteAddonNames() { this->addonNames_ = nullptr;};
    inline const vector<string> & addonNames() const { DARABONBA_PTR_GET_CONST(addonNames_, vector<string>) };
    inline vector<string> addonNames() { DARABONBA_PTR_GET(addonNames_, vector<string>) };
    inline ListAddonTemplatesRequest& setAddonNames(const vector<string> & addonNames) { DARABONBA_PTR_SET_VALUE(addonNames_, addonNames) };
    inline ListAddonTemplatesRequest& setAddonNames(vector<string> && addonNames) { DARABONBA_PTR_SET_RVALUE(addonNames_, addonNames) };


    // clusterCategory Field Functions 
    bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
    void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
    inline string clusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
    inline ListAddonTemplatesRequest& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAddonTemplatesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAddonTemplatesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAddonTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The addon names.
    std::shared_ptr<vector<string>> addonNames_ = nullptr;
    // The cluster type. Valid values:
    // 
    // *   Standard
    // *   Serverless
    std::shared_ptr<string> clusterCategory_ = nullptr;
    // The page number of the page to return. Pages start from page 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
