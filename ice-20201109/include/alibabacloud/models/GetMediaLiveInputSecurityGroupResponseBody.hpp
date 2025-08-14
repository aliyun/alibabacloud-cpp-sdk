// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaLiveInputSecurityGroupResponseBodySecurityGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveInputSecurityGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveInputSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveInputSecurityGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
    };
    GetMediaLiveInputSecurityGroupResponseBody() = default ;
    GetMediaLiveInputSecurityGroupResponseBody(const GetMediaLiveInputSecurityGroupResponseBody &) = default ;
    GetMediaLiveInputSecurityGroupResponseBody(GetMediaLiveInputSecurityGroupResponseBody &&) = default ;
    GetMediaLiveInputSecurityGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveInputSecurityGroupResponseBody() = default ;
    GetMediaLiveInputSecurityGroupResponseBody& operator=(const GetMediaLiveInputSecurityGroupResponseBody &) = default ;
    GetMediaLiveInputSecurityGroupResponseBody& operator=(GetMediaLiveInputSecurityGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityGroup_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaLiveInputSecurityGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline const GetMediaLiveInputSecurityGroupResponseBodySecurityGroup & securityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, GetMediaLiveInputSecurityGroupResponseBodySecurityGroup) };
    inline GetMediaLiveInputSecurityGroupResponseBodySecurityGroup securityGroup() { DARABONBA_PTR_GET(securityGroup_, GetMediaLiveInputSecurityGroupResponseBodySecurityGroup) };
    inline GetMediaLiveInputSecurityGroupResponseBody& setSecurityGroup(const GetMediaLiveInputSecurityGroupResponseBodySecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
    inline GetMediaLiveInputSecurityGroupResponseBody& setSecurityGroup(GetMediaLiveInputSecurityGroupResponseBodySecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security group information.
    std::shared_ptr<GetMediaLiveInputSecurityGroupResponseBodySecurityGroup> securityGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
