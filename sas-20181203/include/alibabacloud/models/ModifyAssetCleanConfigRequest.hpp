// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYASSETCLEANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYASSETCLEANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAssetCleanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAssetCleanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCleanConfigs, assetCleanConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAssetCleanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCleanConfigs, assetCleanConfigs_);
    };
    ModifyAssetCleanConfigRequest() = default ;
    ModifyAssetCleanConfigRequest(const ModifyAssetCleanConfigRequest &) = default ;
    ModifyAssetCleanConfigRequest(ModifyAssetCleanConfigRequest &&) = default ;
    ModifyAssetCleanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAssetCleanConfigRequest() = default ;
    ModifyAssetCleanConfigRequest& operator=(const ModifyAssetCleanConfigRequest &) = default ;
    ModifyAssetCleanConfigRequest& operator=(ModifyAssetCleanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetCleanConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetCleanConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(CleanDays, cleanDays_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AssetCleanConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(CleanDays, cleanDays_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AssetCleanConfigs() = default ;
      AssetCleanConfigs(const AssetCleanConfigs &) = default ;
      AssetCleanConfigs(AssetCleanConfigs &&) = default ;
      AssetCleanConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetCleanConfigs() = default ;
      AssetCleanConfigs& operator=(const AssetCleanConfigs &) = default ;
      AssetCleanConfigs& operator=(AssetCleanConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cleanDays_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // cleanDays Field Functions 
      bool hasCleanDays() const { return this->cleanDays_ != nullptr;};
      void deleteCleanDays() { this->cleanDays_ = nullptr;};
      inline int32_t getCleanDays() const { DARABONBA_PTR_GET_DEFAULT(cleanDays_, 0) };
      inline AssetCleanConfigs& setCleanDays(int32_t cleanDays) { DARABONBA_PTR_SET_VALUE(cleanDays_, cleanDays) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline AssetCleanConfigs& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline AssetCleanConfigs& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of days before hosts whose provider cannot be identified are automatically cleaned after they enter the offline state. Valid value: an integer that ranges from 1 to 30.
      shared_ptr<int32_t> cleanDays_ {};
      // Specifies whether to enable the feature of cleaning the offline hosts whose provider cannot be identified. Valid values:
      // 
      // *   **0**: disables the feature.
      // *   **1**: enables the feature.
      shared_ptr<int32_t> status_ {};
      // The type of hosts that you want to clean.
      // 
      // Set the value to **1**, which indicates hosts whose provider cannot be identified.
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->assetCleanConfigs_ == nullptr; };
    // assetCleanConfigs Field Functions 
    bool hasAssetCleanConfigs() const { return this->assetCleanConfigs_ != nullptr;};
    void deleteAssetCleanConfigs() { this->assetCleanConfigs_ = nullptr;};
    inline const vector<ModifyAssetCleanConfigRequest::AssetCleanConfigs> & getAssetCleanConfigs() const { DARABONBA_PTR_GET_CONST(assetCleanConfigs_, vector<ModifyAssetCleanConfigRequest::AssetCleanConfigs>) };
    inline vector<ModifyAssetCleanConfigRequest::AssetCleanConfigs> getAssetCleanConfigs() { DARABONBA_PTR_GET(assetCleanConfigs_, vector<ModifyAssetCleanConfigRequest::AssetCleanConfigs>) };
    inline ModifyAssetCleanConfigRequest& setAssetCleanConfigs(const vector<ModifyAssetCleanConfigRequest::AssetCleanConfigs> & assetCleanConfigs) { DARABONBA_PTR_SET_VALUE(assetCleanConfigs_, assetCleanConfigs) };
    inline ModifyAssetCleanConfigRequest& setAssetCleanConfigs(vector<ModifyAssetCleanConfigRequest::AssetCleanConfigs> && assetCleanConfigs) { DARABONBA_PTR_SET_RVALUE(assetCleanConfigs_, assetCleanConfigs) };


  protected:
    // The asset cleanup configurations.
    shared_ptr<vector<ModifyAssetCleanConfigRequest::AssetCleanConfigs>> assetCleanConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
