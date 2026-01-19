// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTIDSHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTIDSHEADERS_HPP_
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
  class ListOrganizationalUnitParentIdsHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitParentIdsHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitParentIdsHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
    };
    ListOrganizationalUnitParentIdsHeaders() = default ;
    ListOrganizationalUnitParentIdsHeaders(const ListOrganizationalUnitParentIdsHeaders &) = default ;
    ListOrganizationalUnitParentIdsHeaders(ListOrganizationalUnitParentIdsHeaders &&) = default ;
    ListOrganizationalUnitParentIdsHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitParentIdsHeaders() = default ;
    ListOrganizationalUnitParentIdsHeaders& operator=(const ListOrganizationalUnitParentIdsHeaders &) = default ;
    ListOrganizationalUnitParentIdsHeaders& operator=(ListOrganizationalUnitParentIdsHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->authorization_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline ListOrganizationalUnitParentIdsHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ListOrganizationalUnitParentIdsHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string getAuthorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline ListOrganizationalUnitParentIdsHeaders& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // The authentication information. Format: Bearer ${access_token}. Example: Bearer ATxxxx.
    // 
    // This parameter is required.
    shared_ptr<string> authorization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
