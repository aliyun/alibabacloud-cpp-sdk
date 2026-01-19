// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITIDBYEXTERNALIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITIDBYEXTERNALIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetOrganizationalUnitIdByExternalIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationalUnitIdByExternalIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(organizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitSourceId, organizationalUnitSourceId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitSourceType, organizationalUnitSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationalUnitIdByExternalIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(organizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitSourceId, organizationalUnitSourceId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitSourceType, organizationalUnitSourceType_);
    };
    GetOrganizationalUnitIdByExternalIdRequest() = default ;
    GetOrganizationalUnitIdByExternalIdRequest(const GetOrganizationalUnitIdByExternalIdRequest &) = default ;
    GetOrganizationalUnitIdByExternalIdRequest(GetOrganizationalUnitIdByExternalIdRequest &&) = default ;
    GetOrganizationalUnitIdByExternalIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationalUnitIdByExternalIdRequest() = default ;
    GetOrganizationalUnitIdByExternalIdRequest& operator=(const GetOrganizationalUnitIdByExternalIdRequest &) = default ;
    GetOrganizationalUnitIdByExternalIdRequest& operator=(GetOrganizationalUnitIdByExternalIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->organizationalUnitExternalId_ == nullptr
        && this->organizationalUnitSourceId_ == nullptr && this->organizationalUnitSourceType_ == nullptr; };
    // organizationalUnitExternalId Field Functions 
    bool hasOrganizationalUnitExternalId() const { return this->organizationalUnitExternalId_ != nullptr;};
    void deleteOrganizationalUnitExternalId() { this->organizationalUnitExternalId_ = nullptr;};
    inline string getOrganizationalUnitExternalId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitExternalId_, "") };
    inline GetOrganizationalUnitIdByExternalIdRequest& setOrganizationalUnitExternalId(string organizationalUnitExternalId) { DARABONBA_PTR_SET_VALUE(organizationalUnitExternalId_, organizationalUnitExternalId) };


    // organizationalUnitSourceId Field Functions 
    bool hasOrganizationalUnitSourceId() const { return this->organizationalUnitSourceId_ != nullptr;};
    void deleteOrganizationalUnitSourceId() { this->organizationalUnitSourceId_ = nullptr;};
    inline string getOrganizationalUnitSourceId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceId_, "") };
    inline GetOrganizationalUnitIdByExternalIdRequest& setOrganizationalUnitSourceId(string organizationalUnitSourceId) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceId_, organizationalUnitSourceId) };


    // organizationalUnitSourceType Field Functions 
    bool hasOrganizationalUnitSourceType() const { return this->organizationalUnitSourceType_ != nullptr;};
    void deleteOrganizationalUnitSourceType() { this->organizationalUnitSourceType_ = nullptr;};
    inline string getOrganizationalUnitSourceType() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitSourceType_, "") };
    inline GetOrganizationalUnitIdByExternalIdRequest& setOrganizationalUnitSourceType(string organizationalUnitSourceType) { DARABONBA_PTR_SET_VALUE(organizationalUnitSourceType_, organizationalUnitSourceType) };


  protected:
    // The external ID of the organizational unit. The external ID can be used to map external data to the data of the organizational unit in Employee Identity and Access Management (EIAM) of Identity as a Service (IDaaS). By default, the external ID is the organizational unit ID.
    // 
    // Note: For organizational units with the same source type and source ID, each organizational unit has a unique external ID.
    // 
    // This parameter is required.
    shared_ptr<string> organizationalUnitExternalId_ {};
    // The source ID of the organizational unit.
    // 
    // If the organizational unit was created in IDaaS, its source ID is the ID of the IDaaS instance. If the organizational unit was imported, its source ID is the enterprise ID in the source. For example, if the organizational unit was imported from DingTalk, its source ID is the corpId value of the enterprise in DingTalk.
    // 
    // This parameter is required.
    shared_ptr<string> organizationalUnitSourceId_ {};
    // The source type of the organizational unit. Valid values:
    // 
    // *   build_in: The organizational unit was created in IDaaS.
    // *   ding_talk: The organizational unit was imported from DingTalk.
    // *   ad: The organizational unit was imported from Microsoft Active Directory (AD).
    // *   ldap: The organizational unit was imported from a Lightweight Directory Access Protocol (LDAP) service.
    // 
    // This parameter is required.
    shared_ptr<string> organizationalUnitSourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
