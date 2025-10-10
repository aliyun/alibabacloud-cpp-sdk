// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDENTRIESTOACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDENTRIESTOACLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddEntriesToAclRequestAclEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
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
    };
    friend void from_json(const Darabonba::Json& j, AddEntriesToAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
    virtual bool empty() const override { this->aclEntries_ != nullptr
        && this->aclId_ != nullptr && this->clientToken_ != nullptr && this->dryRun_ != nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const vector<AddEntriesToAclRequestAclEntries> & aclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, vector<AddEntriesToAclRequestAclEntries>) };
    inline vector<AddEntriesToAclRequestAclEntries> aclEntries() { DARABONBA_PTR_GET(aclEntries_, vector<AddEntriesToAclRequestAclEntries>) };
    inline AddEntriesToAclRequest& setAclEntries(const vector<AddEntriesToAclRequestAclEntries> & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline AddEntriesToAclRequest& setAclEntries(vector<AddEntriesToAclRequestAclEntries> && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline AddEntriesToAclRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddEntriesToAclRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AddEntriesToAclRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The ACL entries that you want to add. You can add at most 20 entries in each call.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddEntriesToAclRequestAclEntries>> aclEntries_ = nullptr;
    // The ID of the ACL.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
