// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSlr, createSlr_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSlr, createSlr_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
    };
    CreateLogConfigRequest() = default ;
    CreateLogConfigRequest(const CreateLogConfigRequest &) = default ;
    CreateLogConfigRequest(CreateLogConfigRequest &&) = default ;
    CreateLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogConfigRequest() = default ;
    CreateLogConfigRequest& operator=(const CreateLogConfigRequest &) = default ;
    CreateLogConfigRequest& operator=(CreateLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createSlr_ == nullptr
        && return this->logType_ == nullptr && return this->securityToken_ == nullptr && return this->slsLogStore_ == nullptr && return this->slsProject_ == nullptr; };
    // createSlr Field Functions 
    bool hasCreateSlr() const { return this->createSlr_ != nullptr;};
    void deleteCreateSlr() { this->createSlr_ = nullptr;};
    inline bool createSlr() const { DARABONBA_PTR_GET_DEFAULT(createSlr_, false) };
    inline CreateLogConfigRequest& setCreateSlr(bool createSlr) { DARABONBA_PTR_SET_VALUE(createSlr_, createSlr) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline CreateLogConfigRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateLogConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // slsLogStore Field Functions 
    bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
    void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
    inline string slsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
    inline CreateLogConfigRequest& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline CreateLogConfigRequest& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


  protected:
    // Specifies to create a service-linked role.
    std::shared_ptr<bool> createSlr_ = nullptr;
    // The log type.
    // 
    // Valid values:
    // 
    // *   PROVIDER
    std::shared_ptr<string> logType_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // slslogstore
    // 
    // This parameter is required.
    std::shared_ptr<string> slsLogStore_ = nullptr;
    // The name of the Log Service project.
    // 
    // This parameter is required.
    std::shared_ptr<string> slsProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
