// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERADDONINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterAddonInstanceResponseBodyLogging.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterAddonInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(logging, logging_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(logging, logging_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetClusterAddonInstanceResponseBody() = default ;
    GetClusterAddonInstanceResponseBody(const GetClusterAddonInstanceResponseBody &) = default ;
    GetClusterAddonInstanceResponseBody(GetClusterAddonInstanceResponseBody &&) = default ;
    GetClusterAddonInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterAddonInstanceResponseBody() = default ;
    GetClusterAddonInstanceResponseBody& operator=(const GetClusterAddonInstanceResponseBody &) = default ;
    GetClusterAddonInstanceResponseBody& operator=(GetClusterAddonInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->logging_ != nullptr && this->name_ != nullptr && this->state_ != nullptr && this->version_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetClusterAddonInstanceResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // logging Field Functions 
    bool hasLogging() const { return this->logging_ != nullptr;};
    void deleteLogging() { this->logging_ = nullptr;};
    inline const GetClusterAddonInstanceResponseBodyLogging & logging() const { DARABONBA_PTR_GET_CONST(logging_, GetClusterAddonInstanceResponseBodyLogging) };
    inline GetClusterAddonInstanceResponseBodyLogging logging() { DARABONBA_PTR_GET(logging_, GetClusterAddonInstanceResponseBodyLogging) };
    inline GetClusterAddonInstanceResponseBody& setLogging(const GetClusterAddonInstanceResponseBodyLogging & logging) { DARABONBA_PTR_SET_VALUE(logging_, logging) };
    inline GetClusterAddonInstanceResponseBody& setLogging(GetClusterAddonInstanceResponseBodyLogging && logging) { DARABONBA_PTR_SET_RVALUE(logging_, logging) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterAddonInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetClusterAddonInstanceResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetClusterAddonInstanceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The custom configurations of the component.
    std::shared_ptr<string> config_ = nullptr;
    // The status of Simple Log Service.
    std::shared_ptr<GetClusterAddonInstanceResponseBodyLogging> logging_ = nullptr;
    // The name of the component instance.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the component. Valid values:
    // 
    // *   active: The component is installed.
    // *   updating: The component is being modified.
    // *   upgrading: The component is being updated.
    // *   deleting: The component is being uninstalled.
    std::shared_ptr<string> state_ = nullptr;
    // The version of the component instance.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
