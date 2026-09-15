// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEENVDINJECTACTION_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEENVDINJECTACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateEnvdInjectAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateEnvdInjectAction& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateEnvdInjectAction& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    PublicUpdateTemplateEnvdInjectAction() = default ;
    PublicUpdateTemplateEnvdInjectAction(const PublicUpdateTemplateEnvdInjectAction &) = default ;
    PublicUpdateTemplateEnvdInjectAction(PublicUpdateTemplateEnvdInjectAction &&) = default ;
    PublicUpdateTemplateEnvdInjectAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateEnvdInjectAction() = default ;
    PublicUpdateTemplateEnvdInjectAction& operator=(const PublicUpdateTemplateEnvdInjectAction &) = default ;
    PublicUpdateTemplateEnvdInjectAction& operator=(PublicUpdateTemplateEnvdInjectAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline PublicUpdateTemplateEnvdInjectAction& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // Specifies whether envd injection is enabled.
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
