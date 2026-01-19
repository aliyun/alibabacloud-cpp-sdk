// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
    };
    ModifyLogConfigRequest() = default ;
    ModifyLogConfigRequest(const ModifyLogConfigRequest &) = default ;
    ModifyLogConfigRequest(ModifyLogConfigRequest &&) = default ;
    ModifyLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLogConfigRequest() = default ;
    ModifyLogConfigRequest& operator=(const ModifyLogConfigRequest &) = default ;
    ModifyLogConfigRequest& operator=(ModifyLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logType_ == nullptr
        && this->securityToken_ == nullptr && this->slsLogStore_ == nullptr && this->slsProject_ == nullptr; };
    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ModifyLogConfigRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyLogConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // slsLogStore Field Functions 
    bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
    void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
    inline string getSlsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
    inline ModifyLogConfigRequest& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline ModifyLogConfigRequest& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


  protected:
    // The log type. Valid values:
    // 
    // *   **log**: other logs
    // *   **survey**: inspection logs
    // 
    // Enumeration value:
    // 
    // *   PROVIDER
    shared_ptr<string> logType_ {};
    shared_ptr<string> securityToken_ {};
    // The name of the Logstore.
    // 
    // This parameter is required.
    shared_ptr<string> slsLogStore_ {};
    // The name of the Log Service project.
    // 
    // This parameter is required.
    shared_ptr<string> slsProject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
