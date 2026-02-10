// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOSTPAYMODULESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOSTPAYMODULESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPostPayModuleSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPostPayModuleSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_TO_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitchObj, postPayModuleSwitchObj_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPostPayModuleSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_FROM_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_FROM_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_FROM_JSON(PostPayModuleSwitchObj, postPayModuleSwitchObj_);
    };
    ModifyPostPayModuleSwitchRequest() = default ;
    ModifyPostPayModuleSwitchRequest(const ModifyPostPayModuleSwitchRequest &) = default ;
    ModifyPostPayModuleSwitchRequest(ModifyPostPayModuleSwitchRequest &&) = default ;
    ModifyPostPayModuleSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPostPayModuleSwitchRequest() = default ;
    ModifyPostPayModuleSwitchRequest& operator=(const ModifyPostPayModuleSwitchRequest &) = default ;
    ModifyPostPayModuleSwitchRequest& operator=(ModifyPostPayModuleSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PostPayModuleSwitchObj : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PostPayModuleSwitchObj& obj) { 
        DARABONBA_PTR_TO_JSON(Agentless, agentless_);
        DARABONBA_PTR_TO_JSON(AiDigital, aiDigital_);
        DARABONBA_PTR_TO_JSON(AntiRansomware, antiRansomware_);
        DARABONBA_PTR_TO_JSON(BasicService, basicService_);
        DARABONBA_PTR_TO_JSON(Cspm, cspm_);
        DARABONBA_PTR_TO_JSON(Ctdr, ctdr_);
        DARABONBA_PTR_TO_JSON(CtdrStorage, ctdrStorage_);
        DARABONBA_PTR_TO_JSON(PostHost, postHost_);
        DARABONBA_PTR_TO_JSON(Rasp, rasp_);
        DARABONBA_PTR_TO_JSON(Sdk, sdk_);
        DARABONBA_PTR_TO_JSON(Serverless, serverless_);
        DARABONBA_PTR_TO_JSON(Vul, vul_);
        DARABONBA_PTR_TO_JSON(WebLock, webLock_);
      };
      friend void from_json(const Darabonba::Json& j, PostPayModuleSwitchObj& obj) { 
        DARABONBA_PTR_FROM_JSON(Agentless, agentless_);
        DARABONBA_PTR_FROM_JSON(AiDigital, aiDigital_);
        DARABONBA_PTR_FROM_JSON(AntiRansomware, antiRansomware_);
        DARABONBA_PTR_FROM_JSON(BasicService, basicService_);
        DARABONBA_PTR_FROM_JSON(Cspm, cspm_);
        DARABONBA_PTR_FROM_JSON(Ctdr, ctdr_);
        DARABONBA_PTR_FROM_JSON(CtdrStorage, ctdrStorage_);
        DARABONBA_PTR_FROM_JSON(PostHost, postHost_);
        DARABONBA_PTR_FROM_JSON(Rasp, rasp_);
        DARABONBA_PTR_FROM_JSON(Sdk, sdk_);
        DARABONBA_PTR_FROM_JSON(Serverless, serverless_);
        DARABONBA_PTR_FROM_JSON(Vul, vul_);
        DARABONBA_PTR_FROM_JSON(WebLock, webLock_);
      };
      PostPayModuleSwitchObj() = default ;
      PostPayModuleSwitchObj(const PostPayModuleSwitchObj &) = default ;
      PostPayModuleSwitchObj(PostPayModuleSwitchObj &&) = default ;
      PostPayModuleSwitchObj(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PostPayModuleSwitchObj() = default ;
      PostPayModuleSwitchObj& operator=(const PostPayModuleSwitchObj &) = default ;
      PostPayModuleSwitchObj& operator=(PostPayModuleSwitchObj &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentless_ == nullptr
        && this->aiDigital_ == nullptr && this->antiRansomware_ == nullptr && this->basicService_ == nullptr && this->cspm_ == nullptr && this->ctdr_ == nullptr
        && this->ctdrStorage_ == nullptr && this->postHost_ == nullptr && this->rasp_ == nullptr && this->sdk_ == nullptr && this->serverless_ == nullptr
        && this->vul_ == nullptr && this->webLock_ == nullptr; };
      // agentless Field Functions 
      bool hasAgentless() const { return this->agentless_ != nullptr;};
      void deleteAgentless() { this->agentless_ = nullptr;};
      inline int32_t getAgentless() const { DARABONBA_PTR_GET_DEFAULT(agentless_, 0) };
      inline PostPayModuleSwitchObj& setAgentless(int32_t agentless) { DARABONBA_PTR_SET_VALUE(agentless_, agentless) };


      // aiDigital Field Functions 
      bool hasAiDigital() const { return this->aiDigital_ != nullptr;};
      void deleteAiDigital() { this->aiDigital_ = nullptr;};
      inline int32_t getAiDigital() const { DARABONBA_PTR_GET_DEFAULT(aiDigital_, 0) };
      inline PostPayModuleSwitchObj& setAiDigital(int32_t aiDigital) { DARABONBA_PTR_SET_VALUE(aiDigital_, aiDigital) };


      // antiRansomware Field Functions 
      bool hasAntiRansomware() const { return this->antiRansomware_ != nullptr;};
      void deleteAntiRansomware() { this->antiRansomware_ = nullptr;};
      inline int32_t getAntiRansomware() const { DARABONBA_PTR_GET_DEFAULT(antiRansomware_, 0) };
      inline PostPayModuleSwitchObj& setAntiRansomware(int32_t antiRansomware) { DARABONBA_PTR_SET_VALUE(antiRansomware_, antiRansomware) };


      // basicService Field Functions 
      bool hasBasicService() const { return this->basicService_ != nullptr;};
      void deleteBasicService() { this->basicService_ = nullptr;};
      inline int32_t getBasicService() const { DARABONBA_PTR_GET_DEFAULT(basicService_, 0) };
      inline PostPayModuleSwitchObj& setBasicService(int32_t basicService) { DARABONBA_PTR_SET_VALUE(basicService_, basicService) };


      // cspm Field Functions 
      bool hasCspm() const { return this->cspm_ != nullptr;};
      void deleteCspm() { this->cspm_ = nullptr;};
      inline int32_t getCspm() const { DARABONBA_PTR_GET_DEFAULT(cspm_, 0) };
      inline PostPayModuleSwitchObj& setCspm(int32_t cspm) { DARABONBA_PTR_SET_VALUE(cspm_, cspm) };


      // ctdr Field Functions 
      bool hasCtdr() const { return this->ctdr_ != nullptr;};
      void deleteCtdr() { this->ctdr_ = nullptr;};
      inline int32_t getCtdr() const { DARABONBA_PTR_GET_DEFAULT(ctdr_, 0) };
      inline PostPayModuleSwitchObj& setCtdr(int32_t ctdr) { DARABONBA_PTR_SET_VALUE(ctdr_, ctdr) };


      // ctdrStorage Field Functions 
      bool hasCtdrStorage() const { return this->ctdrStorage_ != nullptr;};
      void deleteCtdrStorage() { this->ctdrStorage_ = nullptr;};
      inline int32_t getCtdrStorage() const { DARABONBA_PTR_GET_DEFAULT(ctdrStorage_, 0) };
      inline PostPayModuleSwitchObj& setCtdrStorage(int32_t ctdrStorage) { DARABONBA_PTR_SET_VALUE(ctdrStorage_, ctdrStorage) };


      // postHost Field Functions 
      bool hasPostHost() const { return this->postHost_ != nullptr;};
      void deletePostHost() { this->postHost_ = nullptr;};
      inline int32_t getPostHost() const { DARABONBA_PTR_GET_DEFAULT(postHost_, 0) };
      inline PostPayModuleSwitchObj& setPostHost(int32_t postHost) { DARABONBA_PTR_SET_VALUE(postHost_, postHost) };


      // rasp Field Functions 
      bool hasRasp() const { return this->rasp_ != nullptr;};
      void deleteRasp() { this->rasp_ = nullptr;};
      inline int32_t getRasp() const { DARABONBA_PTR_GET_DEFAULT(rasp_, 0) };
      inline PostPayModuleSwitchObj& setRasp(int32_t rasp) { DARABONBA_PTR_SET_VALUE(rasp_, rasp) };


      // sdk Field Functions 
      bool hasSdk() const { return this->sdk_ != nullptr;};
      void deleteSdk() { this->sdk_ = nullptr;};
      inline int32_t getSdk() const { DARABONBA_PTR_GET_DEFAULT(sdk_, 0) };
      inline PostPayModuleSwitchObj& setSdk(int32_t sdk) { DARABONBA_PTR_SET_VALUE(sdk_, sdk) };


      // serverless Field Functions 
      bool hasServerless() const { return this->serverless_ != nullptr;};
      void deleteServerless() { this->serverless_ = nullptr;};
      inline int32_t getServerless() const { DARABONBA_PTR_GET_DEFAULT(serverless_, 0) };
      inline PostPayModuleSwitchObj& setServerless(int32_t serverless) { DARABONBA_PTR_SET_VALUE(serverless_, serverless) };


      // vul Field Functions 
      bool hasVul() const { return this->vul_ != nullptr;};
      void deleteVul() { this->vul_ = nullptr;};
      inline int32_t getVul() const { DARABONBA_PTR_GET_DEFAULT(vul_, 0) };
      inline PostPayModuleSwitchObj& setVul(int32_t vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };


      // webLock Field Functions 
      bool hasWebLock() const { return this->webLock_ != nullptr;};
      void deleteWebLock() { this->webLock_ = nullptr;};
      inline int32_t getWebLock() const { DARABONBA_PTR_GET_DEFAULT(webLock_, 0) };
      inline PostPayModuleSwitchObj& setWebLock(int32_t webLock) { DARABONBA_PTR_SET_VALUE(webLock_, webLock) };


    protected:
      // Agentless Detection Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> agentless_ {};
      shared_ptr<int32_t> aiDigital_ {};
      // Anti-Ransomware Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> antiRansomware_ {};
      // Basic service module. Values:
      // - **0**: Off
      // - **1**: On
      // 
      // >Notice: The basic service module switch does not support active modification. When other modules are on, this module is also on. If all other modules are off, then this module is off.
      shared_ptr<int32_t> basicService_ {};
      // Cloud Security Configuration Check Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> cspm_ {};
      // Threat Analysis and Response Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> ctdr_ {};
      // Log Management Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> ctdrStorage_ {};
      // Host and Container Security Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> postHost_ {};
      // Application Protection Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> rasp_ {};
      // Malicious File Detection SDK Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> sdk_ {};
      // Serverless Security Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> serverless_ {};
      // Vulnerability Repair Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> vul_ {};
      // File Tamper Protection Module. Values:
      // - **0**: Off
      // - **1**: On
      shared_ptr<int32_t> webLock_ {};
    };

    virtual bool empty() const override { return this->postPaidHostAutoBind_ == nullptr
        && this->postPaidHostAutoBindVersion_ == nullptr && this->postPayInstanceId_ == nullptr && this->postPayModuleSwitch_ == nullptr && this->postPayModuleSwitchObj_ == nullptr; };
    // postPaidHostAutoBind Field Functions 
    bool hasPostPaidHostAutoBind() const { return this->postPaidHostAutoBind_ != nullptr;};
    void deletePostPaidHostAutoBind() { this->postPaidHostAutoBind_ = nullptr;};
    inline int32_t getPostPaidHostAutoBind() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBind_, 0) };
    inline ModifyPostPayModuleSwitchRequest& setPostPaidHostAutoBind(int32_t postPaidHostAutoBind) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBind_, postPaidHostAutoBind) };


    // postPaidHostAutoBindVersion Field Functions 
    bool hasPostPaidHostAutoBindVersion() const { return this->postPaidHostAutoBindVersion_ != nullptr;};
    void deletePostPaidHostAutoBindVersion() { this->postPaidHostAutoBindVersion_ = nullptr;};
    inline int32_t getPostPaidHostAutoBindVersion() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBindVersion_, 0) };
    inline ModifyPostPayModuleSwitchRequest& setPostPaidHostAutoBindVersion(int32_t postPaidHostAutoBindVersion) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBindVersion_, postPaidHostAutoBindVersion) };


    // postPayInstanceId Field Functions 
    bool hasPostPayInstanceId() const { return this->postPayInstanceId_ != nullptr;};
    void deletePostPayInstanceId() { this->postPayInstanceId_ = nullptr;};
    inline string getPostPayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postPayInstanceId_, "") };
    inline ModifyPostPayModuleSwitchRequest& setPostPayInstanceId(string postPayInstanceId) { DARABONBA_PTR_SET_VALUE(postPayInstanceId_, postPayInstanceId) };


    // postPayModuleSwitch Field Functions 
    bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
    void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
    inline string getPostPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
    inline ModifyPostPayModuleSwitchRequest& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


    // postPayModuleSwitchObj Field Functions 
    bool hasPostPayModuleSwitchObj() const { return this->postPayModuleSwitchObj_ != nullptr;};
    void deletePostPayModuleSwitchObj() { this->postPayModuleSwitchObj_ = nullptr;};
    inline const ModifyPostPayModuleSwitchRequest::PostPayModuleSwitchObj & getPostPayModuleSwitchObj() const { DARABONBA_PTR_GET_CONST(postPayModuleSwitchObj_, ModifyPostPayModuleSwitchRequest::PostPayModuleSwitchObj) };
    inline ModifyPostPayModuleSwitchRequest::PostPayModuleSwitchObj getPostPayModuleSwitchObj() { DARABONBA_PTR_GET(postPayModuleSwitchObj_, ModifyPostPayModuleSwitchRequest::PostPayModuleSwitchObj) };
    inline ModifyPostPayModuleSwitchRequest& setPostPayModuleSwitchObj(const ModifyPostPayModuleSwitchRequest::PostPayModuleSwitchObj & postPayModuleSwitchObj) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitchObj_, postPayModuleSwitchObj) };
    inline ModifyPostPayModuleSwitchRequest& setPostPayModuleSwitchObj(ModifyPostPayModuleSwitchRequest::PostPayModuleSwitchObj && postPayModuleSwitchObj) { DARABONBA_PTR_SET_RVALUE(postPayModuleSwitchObj_, postPayModuleSwitchObj) };


  protected:
    // Automatic binding switch for new assets in host and container protection. Values:
    // 
    // - **0**: Off
    // - **1**: On
    shared_ptr<int32_t> postPaidHostAutoBind_ {};
    // Version for automatic binding of new assets in host and container protection. Values:
    // - **1**: Free Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Antivirus Edition    
    // - **7**: Flagship Edition
    shared_ptr<int32_t> postPaidHostAutoBindVersion_ {};
    // Pay-as-you-go instance ID, which must be filled in.
    // 
    // > Call the [DescribeVersionConfig](~~DescribeVersionConfig~~) interface to obtain this parameter.
    shared_ptr<string> postPayInstanceId_ {};
    // Status of the pay-as-you-go module switch, in JsonString format. Values:
    // - Key:
    //   - **VUL**: Vulnerability Repair Module
    //   - **CSPM**: Cloud Security Posture Management Module
    //   - **AGENTLESS**: Agentless Detection Module
    //   - **SERVERLESS**: Serverless Security Module
    //   - **CTDR**: Threat Analysis and Response Module
    //   - **POST_HOST**: Host and Container Security Module
    //   - **SDK**: Malicious File Detection SDK Module
    //   - **RASP**: Application Protection Module
    //   - **CTDR_STORAGE**: Log Management Module
    //   - **ANTI_RANSOMWARE**: Anti-Ransomware Management
    // - Value: 0 means off, 1 means on
    // 
    // > The values of modules not passed will not change.
    // 
    // <notice>The meaning is the same as the PostPayModuleSwitchObj field. When both exist, the value of PostPayModuleSwitch takes precedence.
    shared_ptr<string> postPayModuleSwitch_ {};
    // Pay-as-you-go module switch.
    // >Notice:  The meaning is the same as the PostPayModuleSwitch field. When both exist, the value of PostPayModuleSwitch takes precedence.
    shared_ptr<ModifyPostPayModuleSwitchRequest::PostPayModuleSwitchObj> postPayModuleSwitchObj_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
