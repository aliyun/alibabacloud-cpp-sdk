// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTRUNTIMEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTRUNTIMEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestRuntimePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestRuntimePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(DebugMode, debugMode_);
      DARABONBA_PTR_TO_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_TO_JSON(PersistentAppInstanceScheduleMode, persistentAppInstanceScheduleMode_);
      DARABONBA_PTR_TO_JSON(SessionPreOpen, sessionPreOpen_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
      DARABONBA_PTR_TO_JSON(SessionUserGenerationMode, sessionUserGenerationMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestRuntimePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(DebugMode, debugMode_);
      DARABONBA_PTR_FROM_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_FROM_JSON(PersistentAppInstanceScheduleMode, persistentAppInstanceScheduleMode_);
      DARABONBA_PTR_FROM_JSON(SessionPreOpen, sessionPreOpen_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
      DARABONBA_PTR_FROM_JSON(SessionUserGenerationMode, sessionUserGenerationMode_);
    };
    CreateAppInstanceGroupRequestRuntimePolicy() = default ;
    CreateAppInstanceGroupRequestRuntimePolicy(const CreateAppInstanceGroupRequestRuntimePolicy &) = default ;
    CreateAppInstanceGroupRequestRuntimePolicy(CreateAppInstanceGroupRequestRuntimePolicy &&) = default ;
    CreateAppInstanceGroupRequestRuntimePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestRuntimePolicy() = default ;
    CreateAppInstanceGroupRequestRuntimePolicy& operator=(const CreateAppInstanceGroupRequestRuntimePolicy &) = default ;
    CreateAppInstanceGroupRequestRuntimePolicy& operator=(CreateAppInstanceGroupRequestRuntimePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debugMode_ == nullptr
        && return this->perSessionPerApp_ == nullptr && return this->persistentAppInstanceScheduleMode_ == nullptr && return this->sessionPreOpen_ == nullptr && return this->sessionType_ == nullptr && return this->sessionUserGenerationMode_ == nullptr; };
    // debugMode Field Functions 
    bool hasDebugMode() const { return this->debugMode_ != nullptr;};
    void deleteDebugMode() { this->debugMode_ = nullptr;};
    inline string debugMode() const { DARABONBA_PTR_GET_DEFAULT(debugMode_, "") };
    inline CreateAppInstanceGroupRequestRuntimePolicy& setDebugMode(string debugMode) { DARABONBA_PTR_SET_VALUE(debugMode_, debugMode) };


    // perSessionPerApp Field Functions 
    bool hasPerSessionPerApp() const { return this->perSessionPerApp_ != nullptr;};
    void deletePerSessionPerApp() { this->perSessionPerApp_ = nullptr;};
    inline bool perSessionPerApp() const { DARABONBA_PTR_GET_DEFAULT(perSessionPerApp_, false) };
    inline CreateAppInstanceGroupRequestRuntimePolicy& setPerSessionPerApp(bool perSessionPerApp) { DARABONBA_PTR_SET_VALUE(perSessionPerApp_, perSessionPerApp) };


    // persistentAppInstanceScheduleMode Field Functions 
    bool hasPersistentAppInstanceScheduleMode() const { return this->persistentAppInstanceScheduleMode_ != nullptr;};
    void deletePersistentAppInstanceScheduleMode() { this->persistentAppInstanceScheduleMode_ = nullptr;};
    inline string persistentAppInstanceScheduleMode() const { DARABONBA_PTR_GET_DEFAULT(persistentAppInstanceScheduleMode_, "") };
    inline CreateAppInstanceGroupRequestRuntimePolicy& setPersistentAppInstanceScheduleMode(string persistentAppInstanceScheduleMode) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceScheduleMode_, persistentAppInstanceScheduleMode) };


    // sessionPreOpen Field Functions 
    bool hasSessionPreOpen() const { return this->sessionPreOpen_ != nullptr;};
    void deleteSessionPreOpen() { this->sessionPreOpen_ = nullptr;};
    inline string sessionPreOpen() const { DARABONBA_PTR_GET_DEFAULT(sessionPreOpen_, "") };
    inline CreateAppInstanceGroupRequestRuntimePolicy& setSessionPreOpen(string sessionPreOpen) { DARABONBA_PTR_SET_VALUE(sessionPreOpen_, sessionPreOpen) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline CreateAppInstanceGroupRequestRuntimePolicy& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


    // sessionUserGenerationMode Field Functions 
    bool hasSessionUserGenerationMode() const { return this->sessionUserGenerationMode_ != nullptr;};
    void deleteSessionUserGenerationMode() { this->sessionUserGenerationMode_ = nullptr;};
    inline string sessionUserGenerationMode() const { DARABONBA_PTR_GET_DEFAULT(sessionUserGenerationMode_, "") };
    inline CreateAppInstanceGroupRequestRuntimePolicy& setSessionUserGenerationMode(string sessionUserGenerationMode) { DARABONBA_PTR_SET_VALUE(sessionUserGenerationMode_, sessionUserGenerationMode) };


  protected:
    std::shared_ptr<string> debugMode_ = nullptr;
    std::shared_ptr<bool> perSessionPerApp_ = nullptr;
    std::shared_ptr<string> persistentAppInstanceScheduleMode_ = nullptr;
    std::shared_ptr<string> sessionPreOpen_ = nullptr;
    // 会话类型。
    std::shared_ptr<string> sessionType_ = nullptr;
    std::shared_ptr<string> sessionUserGenerationMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
