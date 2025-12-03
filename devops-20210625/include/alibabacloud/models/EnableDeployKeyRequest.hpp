// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDEPLOYKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDEPLOYKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class EnableDeployKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDeployKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDeployKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    EnableDeployKeyRequest() = default ;
    EnableDeployKeyRequest(const EnableDeployKeyRequest &) = default ;
    EnableDeployKeyRequest(EnableDeployKeyRequest &&) = default ;
    EnableDeployKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDeployKeyRequest() = default ;
    EnableDeployKeyRequest& operator=(const EnableDeployKeyRequest &) = default ;
    EnableDeployKeyRequest& operator=(EnableDeployKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline EnableDeployKeyRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline EnableDeployKeyRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
