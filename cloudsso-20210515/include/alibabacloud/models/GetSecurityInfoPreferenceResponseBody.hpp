// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYINFOPREFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYINFOPREFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetSecurityInfoPreferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityInfoPreferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityInfoPreference, securityInfoPreference_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityInfoPreferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityInfoPreference, securityInfoPreference_);
    };
    GetSecurityInfoPreferenceResponseBody() = default ;
    GetSecurityInfoPreferenceResponseBody(const GetSecurityInfoPreferenceResponseBody &) = default ;
    GetSecurityInfoPreferenceResponseBody(GetSecurityInfoPreferenceResponseBody &&) = default ;
    GetSecurityInfoPreferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityInfoPreferenceResponseBody() = default ;
    GetSecurityInfoPreferenceResponseBody& operator=(const GetSecurityInfoPreferenceResponseBody &) = default ;
    GetSecurityInfoPreferenceResponseBody& operator=(GetSecurityInfoPreferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityInfoPreference : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityInfoPreference& obj) { 
        DARABONBA_PTR_TO_JSON(AllowUserManageSecurityEmail, allowUserManageSecurityEmail_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityInfoPreference& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowUserManageSecurityEmail, allowUserManageSecurityEmail_);
      };
      SecurityInfoPreference() = default ;
      SecurityInfoPreference(const SecurityInfoPreference &) = default ;
      SecurityInfoPreference(SecurityInfoPreference &&) = default ;
      SecurityInfoPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityInfoPreference() = default ;
      SecurityInfoPreference& operator=(const SecurityInfoPreference &) = default ;
      SecurityInfoPreference& operator=(SecurityInfoPreference &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowUserManageSecurityEmail_ == nullptr; };
      // allowUserManageSecurityEmail Field Functions 
      bool hasAllowUserManageSecurityEmail() const { return this->allowUserManageSecurityEmail_ != nullptr;};
      void deleteAllowUserManageSecurityEmail() { this->allowUserManageSecurityEmail_ = nullptr;};
      inline bool getAllowUserManageSecurityEmail() const { DARABONBA_PTR_GET_DEFAULT(allowUserManageSecurityEmail_, false) };
      inline SecurityInfoPreference& setAllowUserManageSecurityEmail(bool allowUserManageSecurityEmail) { DARABONBA_PTR_SET_VALUE(allowUserManageSecurityEmail_, allowUserManageSecurityEmail) };


    protected:
      // Indicates whether CloudSSO users in the directory are allowed to manage their security email addresses in the CloudSSO user portal. Valid values:
      // 
      // - true: Allowed.
      // - false: Not allowed. This is the default value.
      shared_ptr<bool> allowUserManageSecurityEmail_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityInfoPreference_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityInfoPreferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityInfoPreference Field Functions 
    bool hasSecurityInfoPreference() const { return this->securityInfoPreference_ != nullptr;};
    void deleteSecurityInfoPreference() { this->securityInfoPreference_ = nullptr;};
    inline const GetSecurityInfoPreferenceResponseBody::SecurityInfoPreference & getSecurityInfoPreference() const { DARABONBA_PTR_GET_CONST(securityInfoPreference_, GetSecurityInfoPreferenceResponseBody::SecurityInfoPreference) };
    inline GetSecurityInfoPreferenceResponseBody::SecurityInfoPreference getSecurityInfoPreference() { DARABONBA_PTR_GET(securityInfoPreference_, GetSecurityInfoPreferenceResponseBody::SecurityInfoPreference) };
    inline GetSecurityInfoPreferenceResponseBody& setSecurityInfoPreference(const GetSecurityInfoPreferenceResponseBody::SecurityInfoPreference & securityInfoPreference) { DARABONBA_PTR_SET_VALUE(securityInfoPreference_, securityInfoPreference) };
    inline GetSecurityInfoPreferenceResponseBody& setSecurityInfoPreference(GetSecurityInfoPreferenceResponseBody::SecurityInfoPreference && securityInfoPreference) { DARABONBA_PTR_SET_RVALUE(securityInfoPreference_, securityInfoPreference) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The security information management preferences.
    shared_ptr<GetSecurityInfoPreferenceResponseBody::SecurityInfoPreference> securityInfoPreference_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
