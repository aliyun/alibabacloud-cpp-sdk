// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPRESETRESPONSEBODYHONEYPOTPRESET_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPRESETRESPONSEBODYHONEYPOTPRESET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotPresetResponseBodyHoneypotPreset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotPresetResponseBodyHoneypotPreset& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotPresetId, honeypotPresetId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotPresetResponseBodyHoneypotPreset& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotPresetId, honeypotPresetId_);
    };
    CreateHoneypotPresetResponseBodyHoneypotPreset() = default ;
    CreateHoneypotPresetResponseBodyHoneypotPreset(const CreateHoneypotPresetResponseBodyHoneypotPreset &) = default ;
    CreateHoneypotPresetResponseBodyHoneypotPreset(CreateHoneypotPresetResponseBodyHoneypotPreset &&) = default ;
    CreateHoneypotPresetResponseBodyHoneypotPreset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotPresetResponseBodyHoneypotPreset() = default ;
    CreateHoneypotPresetResponseBodyHoneypotPreset& operator=(const CreateHoneypotPresetResponseBodyHoneypotPreset &) = default ;
    CreateHoneypotPresetResponseBodyHoneypotPreset& operator=(CreateHoneypotPresetResponseBodyHoneypotPreset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotPresetId_ == nullptr; };
    // honeypotPresetId Field Functions 
    bool hasHoneypotPresetId() const { return this->honeypotPresetId_ != nullptr;};
    void deleteHoneypotPresetId() { this->honeypotPresetId_ = nullptr;};
    inline string honeypotPresetId() const { DARABONBA_PTR_GET_DEFAULT(honeypotPresetId_, "") };
    inline CreateHoneypotPresetResponseBodyHoneypotPreset& setHoneypotPresetId(string honeypotPresetId) { DARABONBA_PTR_SET_VALUE(honeypotPresetId_, honeypotPresetId) };


  protected:
    // The ID of the honeypot template.
    std::shared_ptr<string> honeypotPresetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
