// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETSCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAssetSchemasRequestCloudAssetTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedDataOnly, associatedDataOnly_);
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DataNames, dataNames_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedDataOnly, associatedDataOnly_);
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DataNames, dataNames_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListCloudAssetSchemasRequest() = default ;
    ListCloudAssetSchemasRequest(const ListCloudAssetSchemasRequest &) = default ;
    ListCloudAssetSchemasRequest(ListCloudAssetSchemasRequest &&) = default ;
    ListCloudAssetSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetSchemasRequest() = default ;
    ListCloudAssetSchemasRequest& operator=(const ListCloudAssetSchemasRequest &) = default ;
    ListCloudAssetSchemasRequest& operator=(ListCloudAssetSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedDataOnly_ == nullptr
        && return this->cloudAssetTypes_ == nullptr && return this->currentPage_ == nullptr && return this->dataNames_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr; };
    // associatedDataOnly Field Functions 
    bool hasAssociatedDataOnly() const { return this->associatedDataOnly_ != nullptr;};
    void deleteAssociatedDataOnly() { this->associatedDataOnly_ = nullptr;};
    inline bool associatedDataOnly() const { DARABONBA_PTR_GET_DEFAULT(associatedDataOnly_, false) };
    inline ListCloudAssetSchemasRequest& setAssociatedDataOnly(bool associatedDataOnly) { DARABONBA_PTR_SET_VALUE(associatedDataOnly_, associatedDataOnly) };


    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<ListCloudAssetSchemasRequestCloudAssetTypes> & cloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<ListCloudAssetSchemasRequestCloudAssetTypes>) };
    inline vector<ListCloudAssetSchemasRequestCloudAssetTypes> cloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<ListCloudAssetSchemasRequestCloudAssetTypes>) };
    inline ListCloudAssetSchemasRequest& setCloudAssetTypes(const vector<ListCloudAssetSchemasRequestCloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline ListCloudAssetSchemasRequest& setCloudAssetTypes(vector<ListCloudAssetSchemasRequestCloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudAssetSchemasRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataNames Field Functions 
    bool hasDataNames() const { return this->dataNames_ != nullptr;};
    void deleteDataNames() { this->dataNames_ = nullptr;};
    inline const vector<string> & dataNames() const { DARABONBA_PTR_GET_CONST(dataNames_, vector<string>) };
    inline vector<string> dataNames() { DARABONBA_PTR_GET(dataNames_, vector<string>) };
    inline ListCloudAssetSchemasRequest& setDataNames(const vector<string> & dataNames) { DARABONBA_PTR_SET_VALUE(dataNames_, dataNames) };
    inline ListCloudAssetSchemasRequest& setDataNames(vector<string> && dataNames) { DARABONBA_PTR_SET_RVALUE(dataNames_, dataNames) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCloudAssetSchemasRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudAssetSchemasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Whether to filter out attributes that can be associated with other assets.
    std::shared_ptr<bool> associatedDataOnly_ = nullptr;
    // The types of cloud assets.
    std::shared_ptr<vector<ListCloudAssetSchemasRequestCloudAssetTypes>> cloudAssetTypes_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // List of asset data names
    std::shared_ptr<vector<string>> dataNames_ = nullptr;
    // The language type for requesting and receiving messages, with a default value of **zh**. The values can be: - **zh**: Chinese - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
