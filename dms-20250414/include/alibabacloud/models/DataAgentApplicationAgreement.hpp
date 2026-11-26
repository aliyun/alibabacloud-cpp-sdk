// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAAGENTAPPLICATIONAGREEMENT_HPP_
#define ALIBABACLOUD_MODELS_DATAAGENTAPPLICATIONAGREEMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DataAgentApplicationAgreement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataAgentApplicationAgreement& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SignedAt, signedAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DataAgentApplicationAgreement& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SignedAt, signedAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DataAgentApplicationAgreement() = default ;
    DataAgentApplicationAgreement(const DataAgentApplicationAgreement &) = default ;
    DataAgentApplicationAgreement(DataAgentApplicationAgreement &&) = default ;
    DataAgentApplicationAgreement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataAgentApplicationAgreement() = default ;
    DataAgentApplicationAgreement& operator=(const DataAgentApplicationAgreement &) = default ;
    DataAgentApplicationAgreement& operator=(DataAgentApplicationAgreement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiresAt_ == nullptr
        && this->regionId_ == nullptr && this->signedAt_ == nullptr && this->status_ == nullptr && this->workspaceId_ == nullptr; };
    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline DataAgentApplicationAgreement& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DataAgentApplicationAgreement& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // signedAt Field Functions 
    bool hasSignedAt() const { return this->signedAt_ != nullptr;};
    void deleteSignedAt() { this->signedAt_ = nullptr;};
    inline string getSignedAt() const { DARABONBA_PTR_GET_DEFAULT(signedAt_, "") };
    inline DataAgentApplicationAgreement& setSignedAt(string signedAt) { DARABONBA_PTR_SET_VALUE(signedAt_, signedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataAgentApplicationAgreement& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DataAgentApplicationAgreement& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The expiration time of the agreement in ISO 8601 UTC string format. This field is omitted if the agreement is unsigned. The agreement expires when this time is reached. The default validity period is 10 calendar years from the signing date.
    shared_ptr<string> expiresAt_ {};
    // The region of the workspace to which the agreement belongs.
    shared_ptr<string> regionId_ {};
    // The signing time in ISO 8601 UTC string format. This field is omitted if the agreement is unsigned. Repeated signing within the validity period retains the original time, and re-signing after expiration updates the time.
    shared_ptr<string> signedAt_ {};
    // The agreement status. Valid values: NOT_SIGNED (unsigned), EXPIRED (expired), and SIGNED (signed and valid). Both NOT_SIGNED and EXPIRED are business statuses returned upon a successful query.
    shared_ptr<string> status_ {};
    // The stable identifier of the workspace to which the agreement belongs.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
