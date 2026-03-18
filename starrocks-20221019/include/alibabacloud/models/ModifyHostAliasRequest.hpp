// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyHostAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(hostAliases, hostAliases_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(hostAliases, hostAliases_);
    };
    ModifyHostAliasRequest() = default ;
    ModifyHostAliasRequest(const ModifyHostAliasRequest &) = default ;
    ModifyHostAliasRequest(ModifyHostAliasRequest &&) = default ;
    ModifyHostAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostAliasRequest() = default ;
    ModifyHostAliasRequest& operator=(const ModifyHostAliasRequest &) = default ;
    ModifyHostAliasRequest& operator=(ModifyHostAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostAliases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostAliases& obj) { 
        DARABONBA_PTR_TO_JSON(hostnames, hostnames_);
        DARABONBA_PTR_TO_JSON(ip, ip_);
      };
      friend void from_json(const Darabonba::Json& j, HostAliases& obj) { 
        DARABONBA_PTR_FROM_JSON(hostnames, hostnames_);
        DARABONBA_PTR_FROM_JSON(ip, ip_);
      };
      HostAliases() = default ;
      HostAliases(const HostAliases &) = default ;
      HostAliases(HostAliases &&) = default ;
      HostAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostAliases() = default ;
      HostAliases& operator=(const HostAliases &) = default ;
      HostAliases& operator=(HostAliases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostnames_ == nullptr
        && this->ip_ == nullptr; };
      // hostnames Field Functions 
      bool hasHostnames() const { return this->hostnames_ != nullptr;};
      void deleteHostnames() { this->hostnames_ = nullptr;};
      inline const vector<string> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
      inline vector<string> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
      inline HostAliases& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
      inline HostAliases& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline HostAliases& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    protected:
      shared_ptr<vector<string>> hostnames_ {};
      shared_ptr<string> ip_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->hostAliases_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHostAliasRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // hostAliases Field Functions 
    bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
    void deleteHostAliases() { this->hostAliases_ = nullptr;};
    inline const vector<ModifyHostAliasRequest::HostAliases> & getHostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<ModifyHostAliasRequest::HostAliases>) };
    inline vector<ModifyHostAliasRequest::HostAliases> getHostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<ModifyHostAliasRequest::HostAliases>) };
    inline ModifyHostAliasRequest& setHostAliases(const vector<ModifyHostAliasRequest::HostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
    inline ModifyHostAliasRequest& setHostAliases(vector<ModifyHostAliasRequest::HostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<ModifyHostAliasRequest::HostAliases>> hostAliases_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
