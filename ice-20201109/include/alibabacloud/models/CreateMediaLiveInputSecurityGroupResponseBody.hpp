// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSECURITYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSECURITYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveInputSecurityGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveInputSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveInputSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    CreateMediaLiveInputSecurityGroupResponseBody() = default ;
    CreateMediaLiveInputSecurityGroupResponseBody(const CreateMediaLiveInputSecurityGroupResponseBody &) = default ;
    CreateMediaLiveInputSecurityGroupResponseBody(CreateMediaLiveInputSecurityGroupResponseBody &&) = default ;
    CreateMediaLiveInputSecurityGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveInputSecurityGroupResponseBody() = default ;
    CreateMediaLiveInputSecurityGroupResponseBody& operator=(const CreateMediaLiveInputSecurityGroupResponseBody &) = default ;
    CreateMediaLiveInputSecurityGroupResponseBody& operator=(CreateMediaLiveInputSecurityGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityGroupId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMediaLiveInputSecurityGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateMediaLiveInputSecurityGroupResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
