// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTUSERDEFINEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTUSERDEFINEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestUserDefinePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestUserDefinePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(CustomConfig, customConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestUserDefinePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomConfig, customConfig_);
    };
    CreateAppInstanceGroupRequestUserDefinePolicy() = default ;
    CreateAppInstanceGroupRequestUserDefinePolicy(const CreateAppInstanceGroupRequestUserDefinePolicy &) = default ;
    CreateAppInstanceGroupRequestUserDefinePolicy(CreateAppInstanceGroupRequestUserDefinePolicy &&) = default ;
    CreateAppInstanceGroupRequestUserDefinePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestUserDefinePolicy() = default ;
    CreateAppInstanceGroupRequestUserDefinePolicy& operator=(const CreateAppInstanceGroupRequestUserDefinePolicy &) = default ;
    CreateAppInstanceGroupRequestUserDefinePolicy& operator=(CreateAppInstanceGroupRequestUserDefinePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customConfig_ == nullptr; };
    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline string customConfig() const { DARABONBA_PTR_GET_DEFAULT(customConfig_, "") };
    inline CreateAppInstanceGroupRequestUserDefinePolicy& setCustomConfig(string customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };


  protected:
    std::shared_ptr<string> customConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
