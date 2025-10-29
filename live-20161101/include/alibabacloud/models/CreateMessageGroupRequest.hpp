// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPREQUEST_HPP_
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
  class CreateMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
    };
    CreateMessageGroupRequest() = default ;
    CreateMessageGroupRequest(const CreateMessageGroupRequest &) = default ;
    CreateMessageGroupRequest(CreateMessageGroupRequest &&) = default ;
    CreateMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageGroupRequest() = default ;
    CreateMessageGroupRequest& operator=(const CreateMessageGroupRequest &) = default ;
    CreateMessageGroupRequest& operator=(CreateMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->creatorId_ == nullptr && return this->extension_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateMessageGroupRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const map<string, string> & extension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
    inline map<string, string> extension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
    inline CreateMessageGroupRequest& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline CreateMessageGroupRequest& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the creator. The ID can be up to 36 characters in length and can contain only letters and digits.
    // 
    // This parameter is required.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The extended field.
    std::shared_ptr<map<string, string>> extension_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
