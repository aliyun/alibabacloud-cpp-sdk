// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESKILLSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESKILLSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class DeleteSkillSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSkillSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(SkillSpaceId, skillSpaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSkillSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceId, skillSpaceId_);
    };
    DeleteSkillSpaceRequest() = default ;
    DeleteSkillSpaceRequest(const DeleteSkillSpaceRequest &) = default ;
    DeleteSkillSpaceRequest(DeleteSkillSpaceRequest &&) = default ;
    DeleteSkillSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSkillSpaceRequest() = default ;
    DeleteSkillSpaceRequest& operator=(const DeleteSkillSpaceRequest &) = default ;
    DeleteSkillSpaceRequest& operator=(DeleteSkillSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->skillSpaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteSkillSpaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // skillSpaceId Field Functions 
    bool hasSkillSpaceId() const { return this->skillSpaceId_ != nullptr;};
    void deleteSkillSpaceId() { this->skillSpaceId_ = nullptr;};
    inline string getSkillSpaceId() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceId_, "") };
    inline DeleteSkillSpaceRequest& setSkillSpaceId(string skillSpaceId) { DARABONBA_PTR_SET_VALUE(skillSpaceId_, skillSpaceId) };


  protected:
    // A client-generated token to ensure the idempotence of the request. The value must be unique for each request. The **ClientToken** supports only ASCII characters and can be up to 64 characters long.
    shared_ptr<string> clientToken_ {};
    // The ID of the SkillSpace.
    // 
    // This parameter is required.
    shared_ptr<string> skillSpaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
