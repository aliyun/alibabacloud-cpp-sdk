// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(ConfigKeys, configKeys_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(ConfigKeys, configKeys_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    ListConfigsRequest() = default ;
    ListConfigsRequest(const ListConfigsRequest &) = default ;
    ListConfigsRequest(ListConfigsRequest &&) = default ;
    ListConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigsRequest() = default ;
    ListConfigsRequest& operator=(const ListConfigsRequest &) = default ;
    ListConfigsRequest& operator=(ListConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryName_ == nullptr
        && return this->configKeys_ == nullptr && return this->labels_ == nullptr && return this->verbose_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListConfigsRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // configKeys Field Functions 
    bool hasConfigKeys() const { return this->configKeys_ != nullptr;};
    void deleteConfigKeys() { this->configKeys_ = nullptr;};
    inline string configKeys() const { DARABONBA_PTR_GET_DEFAULT(configKeys_, "") };
    inline ListConfigsRequest& setConfigKeys(string configKeys) { DARABONBA_PTR_SET_VALUE(configKeys_, configKeys) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListConfigsRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline string verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, "") };
    inline ListConfigsRequest& setVerbose(string verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    // The category of the configuration item. Supported categories:
    // 
    // *   CommonResourceConfig
    // *   DLCAutoRecycle
    // *   DLCPriorityConfig
    // *   DSWPriorityConfig
    // *   QuotaMaximumDuration
    // *   CommonTagConfig
    std::shared_ptr<string> categoryName_ = nullptr;
    // The key of the configuration item. Supported keys:
    // 
    // *   tempStoragePath: Temporary storage path. This key can be used only when CategoryName is set to CommonResourceConfig.
    // *   isAutoRecycle: Automatic recycle configuration. This key can be used only when CategoryName is set to DLCAutoRecycle.
    // *   priorityConfig: Priority configuration. This key can be used only when CategoryName is set to DLCPriorityConfig or DSWPriorityConfig.
    // *   quotaMaximumDuration: Maximum run time of DLC jobs for a quota. This key can be used only when CategoryName is set to QuotaMaximumDuration.
    // *   predefinedTags: The predefined tags of the workspace. All created resources must have tags
    std::shared_ptr<string> configKeys_ = nullptr;
    // The tags used as filter conditions. Separate multiple tags with commas (,). These conditions are in an AND relationship.
    std::shared_ptr<string> labels_ = nullptr;
    // Specifies whether to show the tag information.
    // 
    // *   true
    // *   false
    std::shared_ptr<string> verbose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
