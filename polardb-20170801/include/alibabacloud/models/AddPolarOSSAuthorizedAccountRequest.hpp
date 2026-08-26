// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPOLAROSSAUTHORIZEDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPOLAROSSAUTHORIZEDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AddPolarOSSAuthorizedAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPolarOSSAuthorizedAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPolarOSSAuthorizedAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddPolarOSSAuthorizedAccountRequest() = default ;
    AddPolarOSSAuthorizedAccountRequest(const AddPolarOSSAuthorizedAccountRequest &) = default ;
    AddPolarOSSAuthorizedAccountRequest(AddPolarOSSAuthorizedAccountRequest &&) = default ;
    AddPolarOSSAuthorizedAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPolarOSSAuthorizedAccountRequest() = default ;
    AddPolarOSSAuthorizedAccountRequest& operator=(const AddPolarOSSAuthorizedAccountRequest &) = default ;
    AddPolarOSSAuthorizedAccountRequest& operator=(AddPolarOSSAuthorizedAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedUserIds_ == nullptr
        && this->DBClusterId_ == nullptr && this->pfsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // authorizedUserIds Field Functions 
    bool hasAuthorizedUserIds() const { return this->authorizedUserIds_ != nullptr;};
    void deleteAuthorizedUserIds() { this->authorizedUserIds_ = nullptr;};
    inline string getAuthorizedUserIds() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserIds_, "") };
    inline AddPolarOSSAuthorizedAccountRequest& setAuthorizedUserIds(string authorizedUserIds) { DARABONBA_PTR_SET_VALUE(authorizedUserIds_, authorizedUserIds) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline AddPolarOSSAuthorizedAccountRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pfsInstanceId Field Functions 
    bool hasPfsInstanceId() const { return this->pfsInstanceId_ != nullptr;};
    void deletePfsInstanceId() { this->pfsInstanceId_ = nullptr;};
    inline string getPfsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pfsInstanceId_, "") };
    inline AddPolarOSSAuthorizedAccountRequest& setPfsInstanceId(string pfsInstanceId) { DARABONBA_PTR_SET_VALUE(pfsInstanceId_, pfsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddPolarOSSAuthorizedAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of authorized accounts to add, separated by commas. You can pass in UIDs and RAM role ARNs in mixed parameter notation.
    // 
    // This parameter is required.
    shared_ptr<string> authorizedUserIds_ {};
    // The ID of the PolarDB cluster.
    shared_ptr<string> DBClusterId_ {};
    // The cold storage instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> pfsInstanceId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
