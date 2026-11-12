// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAKEUPAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WAKEUPAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class WakeUpAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WakeUpAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, WakeUpAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
    };
    WakeUpAppRequest() = default ;
    WakeUpAppRequest(const WakeUpAppRequest &) = default ;
    WakeUpAppRequest(WakeUpAppRequest &&) = default ;
    WakeUpAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WakeUpAppRequest() = default ;
    WakeUpAppRequest& operator=(const WakeUpAppRequest &) = default ;
    WakeUpAppRequest& operator=(WakeUpAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(TargetIdentity, targetIdentity_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, TargetInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(TargetIdentity, targetIdentity_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      TargetInfo() = default ;
      TargetInfo(const TargetInfo &) = default ;
      TargetInfo(TargetInfo &&) = default ;
      TargetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetInfo() = default ;
      TargetInfo& operator=(const TargetInfo &) = default ;
      TargetInfo& operator=(TargetInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->organizationId_ == nullptr && this->targetIdentity_ == nullptr && this->targetType_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline TargetInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline TargetInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline TargetInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // targetIdentity Field Functions 
      bool hasTargetIdentity() const { return this->targetIdentity_ != nullptr;};
      void deleteTargetIdentity() { this->targetIdentity_ = nullptr;};
      inline string getTargetIdentity() const { DARABONBA_PTR_GET_DEFAULT(targetIdentity_, "") };
      inline TargetInfo& setTargetIdentity(string targetIdentity) { DARABONBA_PTR_SET_VALUE(targetIdentity_, targetIdentity) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline TargetInfo& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The value corresponding to the encoding type.  
      // - When the encoding type is SKILLID, the value is the skill ID obtained from the webhook service.  
      // - When the encoding type is PACKAGENAME, the value is the packageName of the corresponding client application.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the MeowGenie device ID, and each method corresponds to a different encoding type:  
      // - PACKAGE_NAME: APK package name  
      // - SKILL_ID: Skill ID
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Organization ID. This is required only when the push type is `XX_UNION_XX`. If you have multiple methods to obtain MeowGenie device IDs and need interoperability among them, you must request an organization from the platform. After approval, the platform will assign an organization ID.
      shared_ptr<string> organizationId_ {};
      // The identity value corresponding to the Push Target Type.
      // 
      // This parameter is required.
      shared_ptr<string> targetIdentity_ {};
      // Push Target Type, which indicates the type of the obtained device identity:  
      // - `DEVICE_UNION_ID`: Device unionId  
      // - `DEVICE_OPEN_ID`: Device openId
      // 
      // This parameter is required.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->isDebug_ == nullptr
        && this->path_ == nullptr && this->targetInfo_ == nullptr; };
    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool getIsDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline WakeUpAppRequest& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline WakeUpAppRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline const WakeUpAppRequest::TargetInfo & getTargetInfo() const { DARABONBA_PTR_GET_CONST(targetInfo_, WakeUpAppRequest::TargetInfo) };
    inline WakeUpAppRequest::TargetInfo getTargetInfo() { DARABONBA_PTR_GET(targetInfo_, WakeUpAppRequest::TargetInfo) };
    inline WakeUpAppRequest& setTargetInfo(const WakeUpAppRequest::TargetInfo & targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };
    inline WakeUpAppRequest& setTargetInfo(WakeUpAppRequest::TargetInfo && targetInfo) { DARABONBA_PTR_SET_RVALUE(targetInfo_, targetInfo) };


  protected:
    // The debug identity. When the skill application is in the debugging phase, this setting determines whether the retrieved skill application information is from the editing state or the online state.
    shared_ptr<bool> isDebug_ {};
    // The path to launch the application, similar to the Link you enter in the skill application console.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // Device Information of the target to be launched.
    // 
    // This parameter is required.
    shared_ptr<WakeUpAppRequest::TargetInfo> targetInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
