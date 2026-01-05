// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEENTRIESFROMACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEENTRIESFROMACLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class RemoveEntriesFromAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveEntriesFromAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Entries, entries_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveEntriesFromAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
    };
    RemoveEntriesFromAclRequest() = default ;
    RemoveEntriesFromAclRequest(const RemoveEntriesFromAclRequest &) = default ;
    RemoveEntriesFromAclRequest(RemoveEntriesFromAclRequest &&) = default ;
    RemoveEntriesFromAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveEntriesFromAclRequest() = default ;
    RemoveEntriesFromAclRequest& operator=(const RemoveEntriesFromAclRequest &) = default ;
    RemoveEntriesFromAclRequest& operator=(RemoveEntriesFromAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->entries_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline RemoveEntriesFromAclRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveEntriesFromAclRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveEntriesFromAclRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<string> & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, vector<string>) };
    inline vector<string> getEntries() { DARABONBA_PTR_GET(entries_, vector<string>) };
    inline RemoveEntriesFromAclRequest& setEntries(const vector<string> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline RemoveEntriesFromAclRequest& setEntries(vector<string> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


  protected:
    // The ID of the ACL.
    // 
    // This parameter is required.
    shared_ptr<string> aclId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The entries that you want to remove. You can remove up to 20 entries in each call.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> entries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
