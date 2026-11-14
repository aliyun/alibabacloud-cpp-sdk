// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPCHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPCHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupModel, appInstanceGroupModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupModel, appInstanceGroupModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyAppInstanceGroupChargeTypeResponseBody() = default ;
    ModifyAppInstanceGroupChargeTypeResponseBody(const ModifyAppInstanceGroupChargeTypeResponseBody &) = default ;
    ModifyAppInstanceGroupChargeTypeResponseBody(ModifyAppInstanceGroupChargeTypeResponseBody &&) = default ;
    ModifyAppInstanceGroupChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupChargeTypeResponseBody() = default ;
    ModifyAppInstanceGroupChargeTypeResponseBody& operator=(const ModifyAppInstanceGroupChargeTypeResponseBody &) = default ;
    ModifyAppInstanceGroupChargeTypeResponseBody& operator=(ModifyAppInstanceGroupChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInstanceGroupModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInstanceGroupModel& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, AppInstanceGroupModel& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      AppInstanceGroupModel() = default ;
      AppInstanceGroupModel(const AppInstanceGroupModel &) = default ;
      AppInstanceGroupModel(AppInstanceGroupModel &&) = default ;
      AppInstanceGroupModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInstanceGroupModel() = default ;
      AppInstanceGroupModel& operator=(const AppInstanceGroupModel &) = default ;
      AppInstanceGroupModel& operator=(AppInstanceGroupModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->taskId_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline AppInstanceGroupModel& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The ID of the billing conversion order task, used to associate with this conversion. It is returned only when a related order task is required and created. It does not indicate that the payment is completed or the new billing method has taken effect.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupModel_ == nullptr
        && this->requestId_ == nullptr; };
    // appInstanceGroupModel Field Functions 
    bool hasAppInstanceGroupModel() const { return this->appInstanceGroupModel_ != nullptr;};
    void deleteAppInstanceGroupModel() { this->appInstanceGroupModel_ = nullptr;};
    inline const ModifyAppInstanceGroupChargeTypeResponseBody::AppInstanceGroupModel & getAppInstanceGroupModel() const { DARABONBA_PTR_GET_CONST(appInstanceGroupModel_, ModifyAppInstanceGroupChargeTypeResponseBody::AppInstanceGroupModel) };
    inline ModifyAppInstanceGroupChargeTypeResponseBody::AppInstanceGroupModel getAppInstanceGroupModel() { DARABONBA_PTR_GET(appInstanceGroupModel_, ModifyAppInstanceGroupChargeTypeResponseBody::AppInstanceGroupModel) };
    inline ModifyAppInstanceGroupChargeTypeResponseBody& setAppInstanceGroupModel(const ModifyAppInstanceGroupChargeTypeResponseBody::AppInstanceGroupModel & appInstanceGroupModel) { DARABONBA_PTR_SET_VALUE(appInstanceGroupModel_, appInstanceGroupModel) };
    inline ModifyAppInstanceGroupChargeTypeResponseBody& setAppInstanceGroupModel(ModifyAppInstanceGroupChargeTypeResponseBody::AppInstanceGroupModel && appInstanceGroupModel) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupModel_, appInstanceGroupModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAppInstanceGroupChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The task information for this billing method conversion.
    shared_ptr<ModifyAppInstanceGroupChargeTypeResponseBody::AppInstanceGroupModel> appInstanceGroupModel_ {};
    // The unique ID of the request. You can use this ID to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
