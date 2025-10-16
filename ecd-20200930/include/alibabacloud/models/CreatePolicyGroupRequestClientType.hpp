// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTCLIENTTYPE_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTCLIENTTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreatePolicyGroupRequestClientType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyGroupRequestClientType& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyGroupRequestClientType& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreatePolicyGroupRequestClientType() = default ;
    CreatePolicyGroupRequestClientType(const CreatePolicyGroupRequestClientType &) = default ;
    CreatePolicyGroupRequestClientType(CreatePolicyGroupRequestClientType &&) = default ;
    CreatePolicyGroupRequestClientType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyGroupRequestClientType() = default ;
    CreatePolicyGroupRequestClientType& operator=(const CreatePolicyGroupRequestClientType &) = default ;
    CreatePolicyGroupRequestClientType& operator=(CreatePolicyGroupRequestClientType &&) = default ;
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
    inline CreatePolicyGroupRequestClientType& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePolicyGroupRequestClientType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the Alibaba Cloud Workspace client.
    // 
    // >  If you do not specify the `ClientType` parameter, all types of the client are allowed by default.
    // 
    // Valid values:
    // 
    // *   html5: web client
    // *   android: Android client
    // *   ios: iOS client
    // *   windows: Windows client
    // *   macos: macOS client
    std::shared_ptr<string> clientType_ = nullptr;
    // Specifies whether to allow end users to use a specific type of the client to connect to cloud computers.
    // 
    // >  If you do not specify the `ClientType` parameter, all types of the client are allowed by default.
    // 
    // Valid values:
    // 
    // *   OFF
    // *   ON
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
