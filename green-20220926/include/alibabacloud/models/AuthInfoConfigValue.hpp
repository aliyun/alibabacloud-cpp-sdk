// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHINFOCONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_AUTHINFOCONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AuthInfoConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthInfoConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(PrivateDomain, privateDomain_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(PublicDomain, publicDomain_);
    };
    friend void from_json(const Darabonba::Json& j, AuthInfoConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(PrivateDomain, privateDomain_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(PublicDomain, publicDomain_);
    };
    AuthInfoConfigValue() = default ;
    AuthInfoConfigValue(const AuthInfoConfigValue &) = default ;
    AuthInfoConfigValue(AuthInfoConfigValue &&) = default ;
    AuthInfoConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthInfoConfigValue() = default ;
    AuthInfoConfigValue& operator=(const AuthInfoConfigValue &) = default ;
    AuthInfoConfigValue& operator=(AuthInfoConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->privateDomain_ == nullptr && this->project_ == nullptr && this->publicDomain_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline AuthInfoConfigValue& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // privateDomain Field Functions 
    bool hasPrivateDomain() const { return this->privateDomain_ != nullptr;};
    void deletePrivateDomain() { this->privateDomain_ = nullptr;};
    inline string getPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(privateDomain_, "") };
    inline AuthInfoConfigValue& setPrivateDomain(string privateDomain) { DARABONBA_PTR_SET_VALUE(privateDomain_, privateDomain) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline AuthInfoConfigValue& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline AuthInfoConfigValue& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


  protected:
    // The credential.
    shared_ptr<string> authToken_ {};
    // The private domain name.
    shared_ptr<string> privateDomain_ {};
    // The project space.
    shared_ptr<string> project_ {};
    // The public domain name.
    shared_ptr<string> publicDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
