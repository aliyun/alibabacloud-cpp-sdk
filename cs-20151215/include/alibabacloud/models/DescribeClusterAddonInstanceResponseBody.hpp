// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterAddonInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAddonInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeClusterAddonInstanceResponseBody() = default ;
    DescribeClusterAddonInstanceResponseBody(const DescribeClusterAddonInstanceResponseBody &) = default ;
    DescribeClusterAddonInstanceResponseBody(DescribeClusterAddonInstanceResponseBody &&) = default ;
    DescribeClusterAddonInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAddonInstanceResponseBody() = default ;
    DescribeClusterAddonInstanceResponseBody& operator=(const DescribeClusterAddonInstanceResponseBody &) = default ;
    DescribeClusterAddonInstanceResponseBody& operator=(DescribeClusterAddonInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->state_ == nullptr && this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeClusterAddonInstanceResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterAddonInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterAddonInstanceResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeClusterAddonInstanceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The component configuration.
    shared_ptr<string> config_ {};
    // The component name.
    shared_ptr<string> name_ {};
    // The component status. Valid values:
    // 
    // - initial: installing
    // - active: installed
    // - unhealthy: abnormal
    // - upgrading: upgrading
    // - updating: updating
    // - deleting: uninstalling
    // - deleted: deleted.
    shared_ptr<string> state_ {};
    // The component version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
