// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNDACCOUNTRESPONSEBODY_HPP_
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
  class ListFundAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFundAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFundAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFundAccountResponseBody() = default ;
    ListFundAccountResponseBody(const ListFundAccountResponseBody &) = default ;
    ListFundAccountResponseBody(ListFundAccountResponseBody &&) = default ;
    ListFundAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFundAccountResponseBody() = default ;
    ListFundAccountResponseBody& operator=(const ListFundAccountResponseBody &) = default ;
    ListFundAccountResponseBody& operator=(ListFundAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->fundAccountAdminAccountId_ == nullptr && this->fundAccountAdminAccountName_ == nullptr && this->fundAccountId_ == nullptr && this->fundAccountName_ == nullptr && this->fundAccountOwnerAccountId_ == nullptr
        && this->fundAccountStatus_ == nullptr && this->fundAccountType_ == nullptr && this->nbid_ == nullptr && this->permissions_ == nullptr && this->site_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Data& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // fundAccountAdminAccountId Field Functions 
      bool hasFundAccountAdminAccountId() const { return this->fundAccountAdminAccountId_ != nullptr;};
      void deleteFundAccountAdminAccountId() { this->fundAccountAdminAccountId_ = nullptr;};
      inline string getFundAccountAdminAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountAdminAccountId_, "") };
      inline Data& setFundAccountAdminAccountId(string fundAccountAdminAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountAdminAccountId_, fundAccountAdminAccountId) };


      // fundAccountAdminAccountName Field Functions 
      bool hasFundAccountAdminAccountName() const { return this->fundAccountAdminAccountName_ != nullptr;};
      void deleteFundAccountAdminAccountName() { this->fundAccountAdminAccountName_ = nullptr;};
      inline string getFundAccountAdminAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountAdminAccountName_, "") };
      inline Data& setFundAccountAdminAccountName(string fundAccountAdminAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountAdminAccountName_, fundAccountAdminAccountName) };


      // fundAccountId Field Functions 
      bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
      void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
      inline string getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
      inline Data& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


      // fundAccountName Field Functions 
      bool hasFundAccountName() const { return this->fundAccountName_ != nullptr;};
      void deleteFundAccountName() { this->fundAccountName_ = nullptr;};
      inline string getFundAccountName() const { DARABONBA_PTR_GET_DEFAULT(fundAccountName_, "") };
      inline Data& setFundAccountName(string fundAccountName) { DARABONBA_PTR_SET_VALUE(fundAccountName_, fundAccountName) };


      // fundAccountOwnerAccountId Field Functions 
      bool hasFundAccountOwnerAccountId() const { return this->fundAccountOwnerAccountId_ != nullptr;};
      void deleteFundAccountOwnerAccountId() { this->fundAccountOwnerAccountId_ = nullptr;};
      inline string getFundAccountOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountOwnerAccountId_, "") };
      inline Data& setFundAccountOwnerAccountId(string fundAccountOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountOwnerAccountId_, fundAccountOwnerAccountId) };


      // fundAccountStatus Field Functions 
      bool hasFundAccountStatus() const { return this->fundAccountStatus_ != nullptr;};
      void deleteFundAccountStatus() { this->fundAccountStatus_ = nullptr;};
      inline string getFundAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(fundAccountStatus_, "") };
      inline Data& setFundAccountStatus(string fundAccountStatus) { DARABONBA_PTR_SET_VALUE(fundAccountStatus_, fundAccountStatus) };


      // fundAccountType Field Functions 
      bool hasFundAccountType() const { return this->fundAccountType_ != nullptr;};
      void deleteFundAccountType() { this->fundAccountType_ = nullptr;};
      inline string getFundAccountType() const { DARABONBA_PTR_GET_DEFAULT(fundAccountType_, "") };
      inline Data& setFundAccountType(string fundAccountType) { DARABONBA_PTR_SET_VALUE(fundAccountType_, fundAccountType) };


      // nbid Field Functions 
      bool hasNbid() const { return this->nbid_ != nullptr;};
      void deleteNbid() { this->nbid_ = nullptr;};
      inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
      inline Data& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
      inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
      inline Data& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline Data& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline Data& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    protected:
      shared_ptr<string> createDate_ {};
      shared_ptr<string> fundAccountAdminAccountId_ {};
      shared_ptr<string> fundAccountAdminAccountName_ {};
      shared_ptr<string> fundAccountId_ {};
      shared_ptr<string> fundAccountName_ {};
      shared_ptr<string> fundAccountOwnerAccountId_ {};
      shared_ptr<string> fundAccountStatus_ {};
      shared_ptr<string> fundAccountType_ {};
      shared_ptr<string> nbid_ {};
      shared_ptr<vector<string>> permissions_ {};
      shared_ptr<string> site_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListFundAccountResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListFundAccountResponseBody::Data>) };
    inline vector<ListFundAccountResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListFundAccountResponseBody::Data>) };
    inline ListFundAccountResponseBody& setData(const vector<ListFundAccountResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFundAccountResponseBody& setData(vector<ListFundAccountResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline ListFundAccountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListFundAccountResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFundAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFundAccountResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
