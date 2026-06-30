// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDENTRIESTOACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDENTRIESTOACLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class AddEntriesToAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEntriesToAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEntriesToAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddEntriesToAclRequest() = default ;
    AddEntriesToAclRequest(const AddEntriesToAclRequest &) = default ;
    AddEntriesToAclRequest(AddEntriesToAclRequest &&) = default ;
    AddEntriesToAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEntriesToAclRequest() = default ;
    AddEntriesToAclRequest& operator=(const AddEntriesToAclRequest &) = default ;
    AddEntriesToAclRequest& operator=(AddEntriesToAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Entry, entry_);
        DARABONBA_PTR_TO_JSON(EntryDescription, entryDescription_);
      };
      friend void from_json(const Darabonba::Json& j, AclEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Entry, entry_);
        DARABONBA_PTR_FROM_JSON(EntryDescription, entryDescription_);
      };
      AclEntries() = default ;
      AclEntries(const AclEntries &) = default ;
      AclEntries(AclEntries &&) = default ;
      AclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclEntries() = default ;
      AclEntries& operator=(const AclEntries &) = default ;
      AclEntries& operator=(AclEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entry_ == nullptr
        && this->entryDescription_ == nullptr; };
      // entry Field Functions 
      bool hasEntry() const { return this->entry_ != nullptr;};
      void deleteEntry() { this->entry_ = nullptr;};
      inline string getEntry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
      inline AclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


      // entryDescription Field Functions 
      bool hasEntryDescription() const { return this->entryDescription_ != nullptr;};
      void deleteEntryDescription() { this->entryDescription_ = nullptr;};
      inline string getEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(entryDescription_, "") };
      inline AclEntries& setEntryDescription(string entryDescription) { DARABONBA_PTR_SET_VALUE(entryDescription_, entryDescription) };


    protected:
      // The access control policy group entry to add. An entry can be an IP address or a CIDR block. You can add up to 50 entries at a time.
      // 
      // > This parameter is required.
      shared_ptr<string> entry_ {};
      // The description of the access control policy group entry.
      // 
      // You can add descriptions for up to 50 entries at a time.
      // 
      // The description must be 1 to 256 characters in length and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_). Chinese characters are supported.
      shared_ptr<string> entryDescription_ {};
    };

    virtual bool empty() const override { return this->aclEntries_ == nullptr
        && this->aclId_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<AddEntriesToAclRequest::AclEntries> & getAclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<AddEntriesToAclRequest::AclEntries>) };
    inline vector<AddEntriesToAclRequest::AclEntries> getAclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<AddEntriesToAclRequest::AclEntries>) };
    inline AddEntriesToAclRequest& setAclEntries(const vector<AddEntriesToAclRequest::AclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline AddEntriesToAclRequest& setAclEntries(vector<AddEntriesToAclRequest::AclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline AddEntriesToAclRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddEntriesToAclRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AddEntriesToAclRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddEntriesToAclRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The access control policy group entries to add. An entry can be an IP address or a CIDR block.
    // 
    // You can add up to 50 entries at a time.
    // 
    // This parameter is required.
    shared_ptr<vector<AddEntriesToAclRequest::AclEntries>> aclEntries_ {};
    // The ID of the access control policy group.
    // 
    // This parameter is required.
    shared_ptr<string> aclId_ {};
    // The client token that is used to ensure the idempotence of a request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** value as the **ClientToken** value. The **RequestId** value is different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - **true**: performs a dry run. The system checks the required parameters, request format, and business limitations without actually adding IP entries to the access control policy group. If the check fails, the corresponding error is returned. If the check succeeds, the `DryRunOperation` error code is returned.
    // - **false** (default): sends a normal request. If the check succeeds, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
