// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTSECURITYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveInputSecurityGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveInputSecurityGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveInputSecurityGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    GetMediaLiveInputSecurityGroupRequest() = default ;
    GetMediaLiveInputSecurityGroupRequest(const GetMediaLiveInputSecurityGroupRequest &) = default ;
    GetMediaLiveInputSecurityGroupRequest(GetMediaLiveInputSecurityGroupRequest &&) = default ;
    GetMediaLiveInputSecurityGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveInputSecurityGroupRequest() = default ;
    GetMediaLiveInputSecurityGroupRequest& operator=(const GetMediaLiveInputSecurityGroupRequest &) = default ;
    GetMediaLiveInputSecurityGroupRequest& operator=(GetMediaLiveInputSecurityGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetMediaLiveInputSecurityGroupRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The ID of the security group.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
