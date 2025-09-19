// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYASSETCLEANCONFIGREQUESTASSETCLEANCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYASSETCLEANCONFIGREQUESTASSETCLEANCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAssetCleanConfigRequestAssetCleanConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAssetCleanConfigRequestAssetCleanConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(CleanDays, cleanDays_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAssetCleanConfigRequestAssetCleanConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(CleanDays, cleanDays_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyAssetCleanConfigRequestAssetCleanConfigs() = default ;
    ModifyAssetCleanConfigRequestAssetCleanConfigs(const ModifyAssetCleanConfigRequestAssetCleanConfigs &) = default ;
    ModifyAssetCleanConfigRequestAssetCleanConfigs(ModifyAssetCleanConfigRequestAssetCleanConfigs &&) = default ;
    ModifyAssetCleanConfigRequestAssetCleanConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAssetCleanConfigRequestAssetCleanConfigs() = default ;
    ModifyAssetCleanConfigRequestAssetCleanConfigs& operator=(const ModifyAssetCleanConfigRequestAssetCleanConfigs &) = default ;
    ModifyAssetCleanConfigRequestAssetCleanConfigs& operator=(ModifyAssetCleanConfigRequestAssetCleanConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cleanDays_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // cleanDays Field Functions 
    bool hasCleanDays() const { return this->cleanDays_ != nullptr;};
    void deleteCleanDays() { this->cleanDays_ = nullptr;};
    inline int32_t cleanDays() const { DARABONBA_PTR_GET_DEFAULT(cleanDays_, 0) };
    inline ModifyAssetCleanConfigRequestAssetCleanConfigs& setCleanDays(int32_t cleanDays) { DARABONBA_PTR_SET_VALUE(cleanDays_, cleanDays) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyAssetCleanConfigRequestAssetCleanConfigs& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ModifyAssetCleanConfigRequestAssetCleanConfigs& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of days before hosts whose provider cannot be identified are automatically cleaned after they enter the offline state. Valid value: an integer that ranges from 1 to 30.
    std::shared_ptr<int32_t> cleanDays_ = nullptr;
    // Specifies whether to enable the feature of cleaning the offline hosts whose provider cannot be identified. Valid values:
    // 
    // *   **0**: disables the feature.
    // *   **1**: enables the feature.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of hosts that you want to clean.
    // 
    // Set the value to **1**, which indicates hosts whose provider cannot be identified.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
