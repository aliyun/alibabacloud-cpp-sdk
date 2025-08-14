// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNDACCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNDACCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListFundAccountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFundAccountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(FundAccountAdminAccountId, fundAccountAdminAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountAdminAccountName, fundAccountAdminAccountName_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_TO_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(FundAccountStatus, fundAccountStatus_);
      DARABONBA_PTR_TO_JSON(FundAccountType, fundAccountType_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(Site, site_);
    };
    friend void from_json(const Darabonba::Json& j, ListFundAccountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(FundAccountAdminAccountId, fundAccountAdminAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountAdminAccountName, fundAccountAdminAccountName_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountName, fundAccountName_);
      DARABONBA_PTR_FROM_JSON(FundAccountOwnerAccountId, fundAccountOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(FundAccountStatus, fundAccountStatus_);
      DARABONBA_PTR_FROM_JSON(FundAccountType, fundAccountType_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
    };
    ListFundAccountResponseBodyData() = default ;
    ListFundAccountResponseBodyData(const ListFundAccountResponseBodyData &) = default ;
    ListFundAccountResponseBodyData(ListFundAccountResponseBodyData &&) = default ;
    ListFundAccountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFundAccountResponseBodyData() = default ;
    ListFundAccountResponseBodyData& operator=(const ListFundAccountResponseBodyData &) = default ;
    ListFundAccountResponseBodyData& operator=(ListFundAccountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createDate_ != nullptr
        && this->fundAccountAdminAccountId_ != nullptr && this->fundAccountAdminAccountName_ != nullptr && this->fundAccountId_ != nullptr && this->fundAccountName_ != nullptr && this->fundAccountOwnerAccountId_ != nullptr
        && this->fundAccountStatus_ != nullptr && this->fundAccountType_ != nullptr && this->nbid_ != nullptr && this->permissions_ != nullptr && this->site_ != nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListFundAccountResponseBodyData& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // fundAccountAdminAccountId Field Functions 
    bool hasFundAccountAdminAccountId() const { return this->fundAccountAdminAccountId_ != nullptr;};
    void deleteFundAccountAdminAccountId() { this->fundAccountAdminAccountId_ = nullptr;};
    inline string fundAccountAdminAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountAdminAccountId_, "") };
    inline ListFundAccountResponseBodyData& setFundAccountAdminAccountId(string fundAccountAdminAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountAdminAccountId_, fundAccountAdminAccountId) };


    // fundAccountAdminAccountName Field Functions 
    bool hasFundAccountAdminAccountName() const { return this->fundAccountAdminAccountName_ != nullptr;};
    void deleteFundAccountAdminAccountName() { this->fundAccountAdminAccountName_ = nullptr;};
    inline string fundAccountAdminAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountAdminAccountName_, "") };
    inline ListFundAccountResponseBodyData& setFundAccountAdminAccountName(string fundAccountAdminAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountAdminAccountName_, fundAccountAdminAccountName) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline ListFundAccountResponseBodyData& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // fundAccountName Field Functions 
    bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
    void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
    inline string fundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
    inline ListFundAccountResponseBodyData& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


    // fundAccountOwnerAccountId Field Functions 
    bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
    void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
    inline string fundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
    inline ListFundAccountResponseBodyData& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


    // fundAccountStatus Field Functions 
    bool hasFundAccountStatus() const { return this->fundAccountStatus_ != nullptr;};
    void deleteFundAccountStatus() { this->fundAccountStatus_ = nullptr;};
    inline string fundAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(fundAccountStatus_, "") };
    inline ListFundAccountResponseBodyData& setFundAccountStatus(string fundAccountStatus) { DARABONBA_PTR_SET_VALUE(fundAccountStatus_, fundAccountStatus) };


    // fundAccountType Field Functions 
    bool hasFundAccountType() const { return this->fundAccountType_ != nullptr;};
    void deleteFundAccountType() { this->fundAccountType_ = nullptr;};
    inline string fundAccountType() const { DARABONBA_PTR_GET_DEFAULT(fundAccountType_, "") };
    inline ListFundAccountResponseBodyData& setFundAccountType(string fundAccountType) { DARABONBA_PTR_SET_VALUE(fundAccountType_, fundAccountType) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListFundAccountResponseBodyData& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<string> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
    inline vector<string> permissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
    inline ListFundAccountResponseBodyData& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline ListFundAccountResponseBodyData& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string site() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline ListFundAccountResponseBodyData& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


  protected:
    std::shared_ptr<string> createDate_ = nullptr;
    std::shared_ptr<string> fundAccountAdminAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountAdminAccountName_ = nullptr;
    std::shared_ptr<string> fundAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountName_ = nullptr;
    std::shared_ptr<string> fundAccountOwnerAccountId_ = nullptr;
    std::shared_ptr<string> fundAccountStatus_ = nullptr;
    std::shared_ptr<string> fundAccountType_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<vector<string>> permissions_ = nullptr;
    std::shared_ptr<string> site_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
