// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEUSERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEUSERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DisableUserConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableUserConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DisableUserConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DisableUserConfigRequest() = default ;
    DisableUserConfigRequest(const DisableUserConfigRequest &) = default ;
    DisableUserConfigRequest(DisableUserConfigRequest &&) = default ;
    DisableUserConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableUserConfigRequest() = default ;
    DisableUserConfigRequest& operator=(const DisableUserConfigRequest &) = default ;
    DisableUserConfigRequest& operator=(DisableUserConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->featureType_ == nullptr && return this->lang_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DisableUserConfigRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline int32_t featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, 0) };
    inline DisableUserConfigRequest& setFeatureType(int32_t featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DisableUserConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The code of the configuration item. You can call the [DescribeConfigs](~~DescribeConfigs~~) operation to obtain the code of the configuration item.
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> featureType_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh_cn**: Chinese (default)
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
