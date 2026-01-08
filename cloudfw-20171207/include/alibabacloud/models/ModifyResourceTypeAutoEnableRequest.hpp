// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCETYPEAUTOENABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCETYPEAUTOENABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyResourceTypeAutoEnableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceTypeAutoEnableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceTypeAutoEnable, resourceTypeAutoEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceTypeAutoEnableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeAutoEnable, resourceTypeAutoEnable_);
    };
    ModifyResourceTypeAutoEnableRequest() = default ;
    ModifyResourceTypeAutoEnableRequest(const ModifyResourceTypeAutoEnableRequest &) = default ;
    ModifyResourceTypeAutoEnableRequest(ModifyResourceTypeAutoEnableRequest &&) = default ;
    ModifyResourceTypeAutoEnableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceTypeAutoEnableRequest() = default ;
    ModifyResourceTypeAutoEnableRequest& operator=(const ModifyResourceTypeAutoEnableRequest &) = default ;
    ModifyResourceTypeAutoEnableRequest& operator=(ModifyResourceTypeAutoEnableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->resourceTypeAutoEnable_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyResourceTypeAutoEnableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceTypeAutoEnable Field Functions 
    bool hasResourceTypeAutoEnable() const { return this->resourceTypeAutoEnable_ != nullptr;};
    void deleteResourceTypeAutoEnable() { this->resourceTypeAutoEnable_ = nullptr;};
    inline string getResourceTypeAutoEnable() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeAutoEnable_, "") };
    inline ModifyResourceTypeAutoEnableRequest& setResourceTypeAutoEnable(string resourceTypeAutoEnable) { DARABONBA_PTR_SET_VALUE(resourceTypeAutoEnable_, resourceTypeAutoEnable) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> resourceTypeAutoEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
