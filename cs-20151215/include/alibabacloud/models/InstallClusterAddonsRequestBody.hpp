// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLUSTERADDONSREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class InstallClusterAddonsRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallClusterAddonsRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, InstallClusterAddonsRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    InstallClusterAddonsRequestBody() = default ;
    InstallClusterAddonsRequestBody(const InstallClusterAddonsRequestBody &) = default ;
    InstallClusterAddonsRequestBody(InstallClusterAddonsRequestBody &&) = default ;
    InstallClusterAddonsRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallClusterAddonsRequestBody() = default ;
    InstallClusterAddonsRequestBody& operator=(const InstallClusterAddonsRequestBody &) = default ;
    InstallClusterAddonsRequestBody& operator=(InstallClusterAddonsRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->name_ != nullptr && this->version_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline InstallClusterAddonsRequestBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InstallClusterAddonsRequestBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline InstallClusterAddonsRequestBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // 组件自定义参数，使用JSON字符串编码。
    std::shared_ptr<string> config_ = nullptr;
    // 组件名称。您可以通过[ListAddons](https://help.aliyun.com/document_detail/2667939.html)接口查询可用组件的信息，包括组件名称及版本等。
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // 组件版本。您可以通过[ListAddons](https://help.aliyun.com/document_detail/2667939.html)接口查询可用组件的信息，包括组件名称及版本等。
    // 
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
