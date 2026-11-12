// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MemberToUpdate, memberToUpdate_);
      DARABONBA_PTR_TO_JSON(UpdateType, updateType_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MemberToUpdate, memberToUpdate_);
      DARABONBA_PTR_FROM_JSON(UpdateType, updateType_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateServiceRequest() = default ;
    UpdateServiceRequest(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest(UpdateServiceRequest &&) = default ;
    UpdateServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequest() = default ;
    UpdateServiceRequest& operator=(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest& operator=(UpdateServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->memberToUpdate_ == nullptr && this->updateType_ == nullptr && this->body_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServiceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // memberToUpdate Field Functions 
    bool hasMemberToUpdate() const { return this->memberToUpdate_ != nullptr;};
    void deleteMemberToUpdate() { this->memberToUpdate_ = nullptr;};
    inline string getMemberToUpdate() const { DARABONBA_PTR_GET_DEFAULT(memberToUpdate_, "") };
    inline UpdateServiceRequest& setMemberToUpdate(string memberToUpdate) { DARABONBA_PTR_SET_VALUE(memberToUpdate_, memberToUpdate) };


    // updateType Field Functions 
    bool hasUpdateType() const { return this->updateType_ != nullptr;};
    void deleteUpdateType() { this->updateType_ = nullptr;};
    inline string getUpdateType() const { DARABONBA_PTR_GET_DEFAULT(updateType_, "") };
    inline UpdateServiceRequest& setUpdateType(string updateType) { DARABONBA_PTR_SET_VALUE(updateType_, updateType) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdateServiceRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The client token used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request.
    // 
    // - true: sends a precheck request without performing the actual operation. If the precheck fails, the corresponding error is returned. If the precheck succeeds, the error code DryRunOperation is returned.
    // 
    // - false: sends a normal request. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The type of the child service to update. Note: This parameter takes effect only for aggregated services.
    shared_ptr<string> memberToUpdate_ {};
    // The update type of the service. Both merge and replace modes are supported. If this parameter is not specified, the merge mode is used by default.
    // 
    // - merge: the merge mode. If the original service configuration JSON is
    // `{"a":"b"}` and the updated configuration is `{"c":"d"}`, the final configuration in merge mode is `{"a":"b","c":"d"}`.
    // - replace: the replace mode. If the original service configuration JSON is
    // `{"a":"b"}` and the updated configuration is `{"c":"d"}`, the final configuration in replace mode is `{"c":"d"}`.
    shared_ptr<string> updateType_ {};
    // The updated configuration. For more information about parameter settings, see [CreateService](https://help.aliyun.com/document_detail/412086.html).
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
