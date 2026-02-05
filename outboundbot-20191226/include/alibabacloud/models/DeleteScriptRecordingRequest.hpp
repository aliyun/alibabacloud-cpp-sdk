// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCRIPTRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCRIPTRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteScriptRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScriptRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(UuidsJson, uuidsJson_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScriptRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(UuidsJson, uuidsJson_);
    };
    DeleteScriptRecordingRequest() = default ;
    DeleteScriptRecordingRequest(const DeleteScriptRecordingRequest &) = default ;
    DeleteScriptRecordingRequest(DeleteScriptRecordingRequest &&) = default ;
    DeleteScriptRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScriptRecordingRequest() = default ;
    DeleteScriptRecordingRequest& operator=(const DeleteScriptRecordingRequest &) = default ;
    DeleteScriptRecordingRequest& operator=(DeleteScriptRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->scriptId_ == nullptr && this->uuidsJson_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteScriptRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DeleteScriptRecordingRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // uuidsJson Field Functions 
    bool hasUuidsJson() const { return this->uuidsJson_ != nullptr;};
    void deleteUuidsJson() { this->uuidsJson_ = nullptr;};
    inline string getUuidsJson() const { DARABONBA_PTR_GET_DEFAULT(uuidsJson_, "") };
    inline DeleteScriptRecordingRequest& setUuidsJson(string uuidsJson) { DARABONBA_PTR_SET_VALUE(uuidsJson_, uuidsJson) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> uuidsJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
