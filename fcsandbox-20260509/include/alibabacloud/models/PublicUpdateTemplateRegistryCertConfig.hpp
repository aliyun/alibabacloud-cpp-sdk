// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEREGISTRYCERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEREGISTRYCERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateRegistryCertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateRegistryCertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(insecure, insecure_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateRegistryCertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(insecure, insecure_);
    };
    PublicUpdateTemplateRegistryCertConfig() = default ;
    PublicUpdateTemplateRegistryCertConfig(const PublicUpdateTemplateRegistryCertConfig &) = default ;
    PublicUpdateTemplateRegistryCertConfig(PublicUpdateTemplateRegistryCertConfig &&) = default ;
    PublicUpdateTemplateRegistryCertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateRegistryCertConfig() = default ;
    PublicUpdateTemplateRegistryCertConfig& operator=(const PublicUpdateTemplateRegistryCertConfig &) = default ;
    PublicUpdateTemplateRegistryCertConfig& operator=(PublicUpdateTemplateRegistryCertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insecure_ == nullptr; };
    // insecure Field Functions 
    bool hasInsecure() const { return this->insecure_ != nullptr;};
    void deleteInsecure() { this->insecure_ = nullptr;};
    inline bool getInsecure() const { DARABONBA_PTR_GET_DEFAULT(insecure_, false) };
    inline PublicUpdateTemplateRegistryCertConfig& setInsecure(bool insecure) { DARABONBA_PTR_SET_VALUE(insecure_, insecure) };


  protected:
    // Specifies whether to skip the repository certificate check.
    shared_ptr<bool> insecure_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
