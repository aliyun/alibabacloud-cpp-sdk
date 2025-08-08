// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class BuildConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildConfig& obj) { 
      DARABONBA_PTR_TO_JSON(default, default_);
    };
    friend void from_json(const Darabonba::Json& j, BuildConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(default, default_);
    };
    BuildConfig() = default ;
    BuildConfig(const BuildConfig &) = default ;
    BuildConfig(BuildConfig &&) = default ;
    BuildConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildConfig() = default ;
    BuildConfig& operator=(const BuildConfig &) = default ;
    BuildConfig& operator=(BuildConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->default_ != nullptr; };
    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline const DefaultBuilderConfig & _default() const { DARABONBA_PTR_GET_CONST(default_, DefaultBuilderConfig) };
    inline DefaultBuilderConfig _default() { DARABONBA_PTR_GET(default_, DefaultBuilderConfig) };
    inline BuildConfig& setDefault(const DefaultBuilderConfig & _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };
    inline BuildConfig& setDefault(DefaultBuilderConfig && _default) { DARABONBA_PTR_SET_RVALUE(default_, _default) };


  protected:
    std::shared_ptr<DefaultBuilderConfig> default_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
