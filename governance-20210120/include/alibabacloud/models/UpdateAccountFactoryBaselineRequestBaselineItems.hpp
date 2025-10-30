// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTFACTORYBASELINEREQUESTBASELINEITEMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTFACTORYBASELINEREQUESTBASELINEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class UpdateAccountFactoryBaselineRequestBaselineItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountFactoryBaselineRequestBaselineItems& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountFactoryBaselineRequestBaselineItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateAccountFactoryBaselineRequestBaselineItems() = default ;
    UpdateAccountFactoryBaselineRequestBaselineItems(const UpdateAccountFactoryBaselineRequestBaselineItems &) = default ;
    UpdateAccountFactoryBaselineRequestBaselineItems(UpdateAccountFactoryBaselineRequestBaselineItems &&) = default ;
    UpdateAccountFactoryBaselineRequestBaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountFactoryBaselineRequestBaselineItems() = default ;
    UpdateAccountFactoryBaselineRequestBaselineItems& operator=(const UpdateAccountFactoryBaselineRequestBaselineItems &) = default ;
    UpdateAccountFactoryBaselineRequestBaselineItems& operator=(UpdateAccountFactoryBaselineRequestBaselineItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->name_ == nullptr && return this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateAccountFactoryBaselineRequestBaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAccountFactoryBaselineRequestBaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateAccountFactoryBaselineRequestBaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The configurations of the baseline item. The value of this parameter is a JSON string.
    std::shared_ptr<string> config_ = nullptr;
    // The name of the baseline item.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the baseline item.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
