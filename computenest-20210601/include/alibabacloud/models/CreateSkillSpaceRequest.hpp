// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateSkillSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(SkillSpaceDescription, skillSpaceDescription_);
      DARABONBA_PTR_TO_JSON(SkillSpaceName, skillSpaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceDescription, skillSpaceDescription_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceName, skillSpaceName_);
    };
    CreateSkillSpaceRequest() = default ;
    CreateSkillSpaceRequest(const CreateSkillSpaceRequest &) = default ;
    CreateSkillSpaceRequest(CreateSkillSpaceRequest &&) = default ;
    CreateSkillSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillSpaceRequest() = default ;
    CreateSkillSpaceRequest& operator=(const CreateSkillSpaceRequest &) = default ;
    CreateSkillSpaceRequest& operator=(CreateSkillSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->skillSpaceDescription_ == nullptr && this->skillSpaceName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSkillSpaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // skillSpaceDescription Field Functions 
    bool hasSkillSpaceDescription() const { return this->skillSpaceDescription_ != nullptr;};
    void deleteSkillSpaceDescription() { this->skillSpaceDescription_ = nullptr;};
    inline string getSkillSpaceDescription() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceDescription_, "") };
    inline CreateSkillSpaceRequest& setSkillSpaceDescription(string skillSpaceDescription) { DARABONBA_PTR_SET_VALUE(skillSpaceDescription_, skillSpaceDescription) };


    // skillSpaceName Field Functions 
    bool hasSkillSpaceName() const { return this->skillSpaceName_ != nullptr;};
    void deleteSkillSpaceName() { this->skillSpaceName_ = nullptr;};
    inline string getSkillSpaceName() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceName_, "") };
    inline CreateSkillSpaceRequest& setSkillSpaceName(string skillSpaceName) { DARABONBA_PTR_SET_VALUE(skillSpaceName_, skillSpaceName) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> skillSpaceDescription_ {};
    // This parameter is required.
    shared_ptr<string> skillSpaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
