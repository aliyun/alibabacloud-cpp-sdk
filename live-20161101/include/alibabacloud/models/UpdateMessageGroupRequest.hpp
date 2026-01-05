// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESSAGEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    UpdateMessageGroupRequest() = default ;
    UpdateMessageGroupRequest(const UpdateMessageGroupRequest &) = default ;
    UpdateMessageGroupRequest(UpdateMessageGroupRequest &&) = default ;
    UpdateMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMessageGroupRequest() = default ;
    UpdateMessageGroupRequest& operator=(const UpdateMessageGroupRequest &) = default ;
    UpdateMessageGroupRequest& operator=(UpdateMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->extension_ == nullptr && this->groupId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const map<string, string> & getExtension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
    inline map<string, string> getExtension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
    inline UpdateMessageGroupRequest& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline UpdateMessageGroupRequest& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateMessageGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The extended field.
    shared_ptr<map<string, string>> extension_ {};
    // The ID of the message group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
