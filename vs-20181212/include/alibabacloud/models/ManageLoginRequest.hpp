// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGELOGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGELOGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ManageLoginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageLoginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ManageLoginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    ManageLoginRequest() = default ;
    ManageLoginRequest(const ManageLoginRequest &) = default ;
    ManageLoginRequest(ManageLoginRequest &&) = default ;
    ManageLoginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageLoginRequest() = default ;
    ManageLoginRequest& operator=(const ManageLoginRequest &) = default ;
    ManageLoginRequest& operator=(ManageLoginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && this->keyGroup_ == nullptr && this->keyName_ == nullptr && this->renderingInstanceId_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline ManageLoginRequest& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string getKeyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline ManageLoginRequest& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ManageLoginRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ManageLoginRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    shared_ptr<string> actionName_ {};
    shared_ptr<string> keyGroup_ {};
    shared_ptr<string> keyName_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
