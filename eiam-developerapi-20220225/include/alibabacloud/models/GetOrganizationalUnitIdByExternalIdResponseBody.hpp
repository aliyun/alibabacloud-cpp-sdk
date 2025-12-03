// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITIDBYEXTERNALIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITIDBYEXTERNALIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetOrganizationalUnitIdByExternalIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationalUnitIdByExternalIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(organizationalUnitId, organizationalUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationalUnitIdByExternalIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationalUnitId, organizationalUnitId_);
    };
    GetOrganizationalUnitIdByExternalIdResponseBody() = default ;
    GetOrganizationalUnitIdByExternalIdResponseBody(const GetOrganizationalUnitIdByExternalIdResponseBody &) = default ;
    GetOrganizationalUnitIdByExternalIdResponseBody(GetOrganizationalUnitIdByExternalIdResponseBody &&) = default ;
    GetOrganizationalUnitIdByExternalIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationalUnitIdByExternalIdResponseBody() = default ;
    GetOrganizationalUnitIdByExternalIdResponseBody& operator=(const GetOrganizationalUnitIdByExternalIdResponseBody &) = default ;
    GetOrganizationalUnitIdByExternalIdResponseBody& operator=(GetOrganizationalUnitIdByExternalIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitId_ == nullptr; };
    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline GetOrganizationalUnitIdByExternalIdResponseBody& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


  protected:
    // The ID of the organizational unit.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
