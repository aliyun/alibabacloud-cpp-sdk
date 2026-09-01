// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEENVDINJECTACTION_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEENVDINJECTACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateEnvdInjectAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateEnvdInjectAction& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateEnvdInjectAction& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    CreateTemplateEnvdInjectAction() = default ;
    CreateTemplateEnvdInjectAction(const CreateTemplateEnvdInjectAction &) = default ;
    CreateTemplateEnvdInjectAction(CreateTemplateEnvdInjectAction &&) = default ;
    CreateTemplateEnvdInjectAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateEnvdInjectAction() = default ;
    CreateTemplateEnvdInjectAction& operator=(const CreateTemplateEnvdInjectAction &) = default ;
    CreateTemplateEnvdInjectAction& operator=(CreateTemplateEnvdInjectAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateTemplateEnvdInjectAction& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // Specifies whether to enable envd injection.
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
