// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDPKBYHIDFORLOGINWITHLEGACYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDPKBYHIDFORLOGINWITHLEGACYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindPkByHidForLoginWithLegacyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindPkByHidForLoginWithLegacyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Hid, hid_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, FindPkByHidForLoginWithLegacyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hid, hid_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    FindPkByHidForLoginWithLegacyRequest() = default ;
    FindPkByHidForLoginWithLegacyRequest(const FindPkByHidForLoginWithLegacyRequest &) = default ;
    FindPkByHidForLoginWithLegacyRequest(FindPkByHidForLoginWithLegacyRequest &&) = default ;
    FindPkByHidForLoginWithLegacyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindPkByHidForLoginWithLegacyRequest() = default ;
    FindPkByHidForLoginWithLegacyRequest& operator=(const FindPkByHidForLoginWithLegacyRequest &) = default ;
    FindPkByHidForLoginWithLegacyRequest& operator=(FindPkByHidForLoginWithLegacyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hid_ == nullptr
        && this->securityToken_ == nullptr; };
    // hid Field Functions 
    bool hasHid() const { return this->hid_ != nullptr;};
    void deleteHid() { this->hid_ = nullptr;};
    inline string getHid() const { DARABONBA_PTR_GET_DEFAULT(hid_, "") };
    inline FindPkByHidForLoginWithLegacyRequest& setHid(string hid) { DARABONBA_PTR_SET_VALUE(hid_, hid) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline FindPkByHidForLoginWithLegacyRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    shared_ptr<string> hid_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
