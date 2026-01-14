// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFAULTLEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFAULTLEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ModifyDefaultLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefaultLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultId, defaultId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SensitiveIds, sensitiveIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefaultLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultId, defaultId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SensitiveIds, sensitiveIds_);
    };
    ModifyDefaultLevelRequest() = default ;
    ModifyDefaultLevelRequest(const ModifyDefaultLevelRequest &) = default ;
    ModifyDefaultLevelRequest(ModifyDefaultLevelRequest &&) = default ;
    ModifyDefaultLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefaultLevelRequest() = default ;
    ModifyDefaultLevelRequest& operator=(const ModifyDefaultLevelRequest &) = default ;
    ModifyDefaultLevelRequest& operator=(ModifyDefaultLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultId_ == nullptr
        && this->lang_ == nullptr && this->sensitiveIds_ == nullptr; };
    // defaultId Field Functions 
    bool hasDefaultId() const { return this->defaultId_ != nullptr;};
    void deleteDefaultId() { this->defaultId_ = nullptr;};
    inline int64_t getDefaultId() const { DARABONBA_PTR_GET_DEFAULT(defaultId_, 0L) };
    inline ModifyDefaultLevelRequest& setDefaultId(int64_t defaultId) { DARABONBA_PTR_SET_VALUE(defaultId_, defaultId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyDefaultLevelRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sensitiveIds Field Functions 
    bool hasSensitiveIds() const { return this->sensitiveIds_ != nullptr;};
    void deleteSensitiveIds() { this->sensitiveIds_ = nullptr;};
    inline string getSensitiveIds() const { DARABONBA_PTR_GET_DEFAULT(sensitiveIds_, "") };
    inline ModifyDefaultLevelRequest& setSensitiveIds(string sensitiveIds) { DARABONBA_PTR_SET_VALUE(sensitiveIds_, sensitiveIds) };


  protected:
    // The default sensitivity level of data that Data Security Center (DSC) cannot classify as sensitive or insensitive. Valid values:
    // 
    // *   **1**: N/A
    // *   **2**: S1
    // *   **3**: S2
    // *   **4**: S3
    // *   **5**: S4
    shared_ptr<int64_t> defaultId_ {};
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Chinese
    // *   **en_us**: English
    shared_ptr<string> lang_ {};
    // The sensitivity level ID of data that DSC classifies as sensitive. Separate multiple IDs with commas (,). Valid values:
    // 
    // *   **1**: N/A
    // *   **2**: S1
    // *   **3**: S2
    // *   **4**: S3
    // *   **5**: S4
    shared_ptr<string> sensitiveIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
