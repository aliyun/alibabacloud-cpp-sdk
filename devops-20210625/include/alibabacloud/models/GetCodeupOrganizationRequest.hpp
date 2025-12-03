// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODEUPORGANIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCODEUPORGANIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCodeupOrganizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeupOrganizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetCodeupOrganizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
    };
    GetCodeupOrganizationRequest() = default ;
    GetCodeupOrganizationRequest(const GetCodeupOrganizationRequest &) = default ;
    GetCodeupOrganizationRequest(GetCodeupOrganizationRequest &&) = default ;
    GetCodeupOrganizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeupOrganizationRequest() = default ;
    GetCodeupOrganizationRequest& operator=(const GetCodeupOrganizationRequest &) = default ;
    GetCodeupOrganizationRequest& operator=(GetCodeupOrganizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GetCodeupOrganizationRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
