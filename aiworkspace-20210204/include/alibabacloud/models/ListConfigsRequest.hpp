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
        && this->configKeys_ == nullptr && this->labels_ == nullptr && this->verbose_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListConfigsRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // configKeys Field Functions 
    bool hasConfigKeys() const { return this->configKeys_ != nullptr;};
    void deleteConfigKeys() { this->configKeys_ = nullptr;};
    inline string getConfigKeys() const { DARABONBA_PTR_GET_DEFAULT(configKeys_, "") };
    inline ListConfigsRequest& setConfigKeys(string configKeys) { DARABONBA_PTR_SET_VALUE(configKeys_, configKeys) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListConfigsRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline string getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, "") };
    inline ListConfigsRequest& setVerbose(string verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    // The category of the configuration item. The following categories are supported:
    // 
    // - CommonResourceConfig: The common resource configuration.
    // 
    // - DLCAutoRecycle: The automatic recycling configuration for DLC.
    // 
    // - DLCPriorityConfig: The priority configuration for DLC.
    // 
    // - DSWPriorityConfig: The priority configuration for DSW.
    // 
    // - QuotaMaximumDuration: The configuration for the maximum runtime of a DLC task in a quota.
    // 
    // - CommonTagConfig: The label configuration.
    shared_ptr<string> categoryName_ {};
    // The key of the configuration item. The following keys are supported:
    // 
    // - tempStoragePath: The path for temporary storage. This key is valid only when CategoryName is set to CommonResourceConfig.
    // 
    // - isAutoRecycle: The automatic recycling configuration. This key is valid only when CategoryName is set to DLCAutoRecycle.
    // 
    // - priorityConfig: The priority configuration. This key is valid only when CategoryName is set to DLCPriorityConfig or DSWPriorityConfig.
    // 
    // - quotaMaximumDuration: The configuration for the maximum runtime of a DLC task in a quota. This key is valid only when CategoryName is set to QuotaMaximumDuration.
    // 
    // - predefinedTags: The predefined labels for the workspace. Resources that you create must have these labels.
    shared_ptr<string> configKeys_ {};
    // The labels to use as filter conditions. Separate multiple labels with commas. A logical AND operation is performed on these labels.
    shared_ptr<string> labels_ {};
    // Specifies whether to return label information.
    // 
    // - true: Returns label information.
    // 
    // - false: Does not return label information.
    shared_ptr<string> verbose_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
