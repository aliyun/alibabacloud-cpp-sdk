// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPDISABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPDISABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageAppDisableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageAppDisableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(Disable, disable_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageAppDisableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(Disable, disable_);
    };
    ModifyLiveMessageAppDisableRequest() = default ;
    ModifyLiveMessageAppDisableRequest(const ModifyLiveMessageAppDisableRequest &) = default ;
    ModifyLiveMessageAppDisableRequest(ModifyLiveMessageAppDisableRequest &&) = default ;
    ModifyLiveMessageAppDisableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageAppDisableRequest() = default ;
    ModifyLiveMessageAppDisableRequest& operator=(const ModifyLiveMessageAppDisableRequest &) = default ;
    ModifyLiveMessageAppDisableRequest& operator=(ModifyLiveMessageAppDisableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->dataCenter_ == nullptr && this->disable_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageAppDisableRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageAppDisableRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline bool getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, false) };
    inline ModifyLiveMessageAppDisableRequest& setDisable(bool disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
    // Specifies whether to disable the interactive messaging application.
    shared_ptr<bool> disable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
