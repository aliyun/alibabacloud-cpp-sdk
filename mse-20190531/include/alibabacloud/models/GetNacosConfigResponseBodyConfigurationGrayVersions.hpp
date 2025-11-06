// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSCONFIGRESPONSEBODYCONFIGURATIONGRAYVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSCONFIGRESPONSEBODYCONFIGURATIONGRAYVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosConfigResponseBodyConfigurationGrayVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosConfigResponseBodyConfigurationGrayVersions& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosConfigResponseBodyConfigurationGrayVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetNacosConfigResponseBodyConfigurationGrayVersions() = default ;
    GetNacosConfigResponseBodyConfigurationGrayVersions(const GetNacosConfigResponseBodyConfigurationGrayVersions &) = default ;
    GetNacosConfigResponseBodyConfigurationGrayVersions(GetNacosConfigResponseBodyConfigurationGrayVersions &&) = default ;
    GetNacosConfigResponseBodyConfigurationGrayVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosConfigResponseBodyConfigurationGrayVersions() = default ;
    GetNacosConfigResponseBodyConfigurationGrayVersions& operator=(const GetNacosConfigResponseBodyConfigurationGrayVersions &) = default ;
    GetNacosConfigResponseBodyConfigurationGrayVersions& operator=(GetNacosConfigResponseBodyConfigurationGrayVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->priority_ == nullptr && return this->rule_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNacosConfigResponseBodyConfigurationGrayVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetNacosConfigResponseBodyConfigurationGrayVersions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetNacosConfigResponseBodyConfigurationGrayVersions& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNacosConfigResponseBodyConfigurationGrayVersions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Gray version name
    std::shared_ptr<string> name_ = nullptr;
    // The priority of the current gray rule.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Rules of the current gray version
    std::shared_ptr<string> rule_ = nullptr;
    // Gray type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
