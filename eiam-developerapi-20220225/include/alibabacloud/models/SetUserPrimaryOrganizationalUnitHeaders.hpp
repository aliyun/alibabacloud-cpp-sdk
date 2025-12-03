// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPRIMARYORGANIZATIONALUNITHEADERS_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPRIMARYORGANIZATIONALUNITHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class SetUserPrimaryOrganizationalUnitHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserPrimaryOrganizationalUnitHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserPrimaryOrganizationalUnitHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
    };
    SetUserPrimaryOrganizationalUnitHeaders() = default ;
    SetUserPrimaryOrganizationalUnitHeaders(const SetUserPrimaryOrganizationalUnitHeaders &) = default ;
    SetUserPrimaryOrganizationalUnitHeaders(SetUserPrimaryOrganizationalUnitHeaders &&) = default ;
    SetUserPrimaryOrganizationalUnitHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserPrimaryOrganizationalUnitHeaders() = default ;
    SetUserPrimaryOrganizationalUnitHeaders& operator=(const SetUserPrimaryOrganizationalUnitHeaders &) = default ;
    SetUserPrimaryOrganizationalUnitHeaders& operator=(SetUserPrimaryOrganizationalUnitHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && return this->authorization_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline SetUserPrimaryOrganizationalUnitHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline SetUserPrimaryOrganizationalUnitHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string authorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline SetUserPrimaryOrganizationalUnitHeaders& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> authorization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
