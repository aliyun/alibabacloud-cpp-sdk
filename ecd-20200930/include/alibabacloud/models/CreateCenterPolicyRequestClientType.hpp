// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTCLIENTTYPE_HPP_
#define ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTCLIENTTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCenterPolicyRequestClientType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenterPolicyRequestClientType& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenterPolicyRequestClientType& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateCenterPolicyRequestClientType() = default ;
    CreateCenterPolicyRequestClientType(const CreateCenterPolicyRequestClientType &) = default ;
    CreateCenterPolicyRequestClientType(CreateCenterPolicyRequestClientType &&) = default ;
    CreateCenterPolicyRequestClientType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenterPolicyRequestClientType() = default ;
    CreateCenterPolicyRequestClientType& operator=(const CreateCenterPolicyRequestClientType &) = default ;
    CreateCenterPolicyRequestClientType& operator=(CreateCenterPolicyRequestClientType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientType_ == nullptr
        && return this->status_ == nullptr; };
    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline CreateCenterPolicyRequestClientType& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCenterPolicyRequestClientType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the Alibaba Cloud Workspace client that end users can use to connect to cloud computers.
    // 
    // Valid values:
    // 
    // *   html5: the web client.
    // *   android: the Android client.
    // *   ios: the iOS client.
    // *   windows: the Windows client.
    // *   macos: the macOS client.
    std::shared_ptr<string> clientType_ = nullptr;
    // Specifies whether end users can use the specified type of Alibaba Cloud Workspace client to connect to cloud computers.
    // 
    // >  If you don\\"t specify `ClientType`, any client can be used to connect to cloud computers.
    // 
    // Valid values:
    // 
    // *   off: End users cannot use the specified type of Alibaba Cloud Workspace client to connect to cloud computers.
    // *   on: End users can use the specified type of Alibaba Cloud Workspace client to connect to cloud computers.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
