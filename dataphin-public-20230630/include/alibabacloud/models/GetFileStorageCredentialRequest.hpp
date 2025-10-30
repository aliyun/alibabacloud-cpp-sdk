// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILESTORAGECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILESTORAGECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetFileStorageCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileStorageCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Purpose, purpose_);
      DARABONBA_PTR_TO_JSON(UseVpcEndpoint, useVpcEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileStorageCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Purpose, purpose_);
      DARABONBA_PTR_FROM_JSON(UseVpcEndpoint, useVpcEndpoint_);
    };
    GetFileStorageCredentialRequest() = default ;
    GetFileStorageCredentialRequest(const GetFileStorageCredentialRequest &) = default ;
    GetFileStorageCredentialRequest(GetFileStorageCredentialRequest &&) = default ;
    GetFileStorageCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileStorageCredentialRequest() = default ;
    GetFileStorageCredentialRequest& operator=(const GetFileStorageCredentialRequest &) = default ;
    GetFileStorageCredentialRequest& operator=(GetFileStorageCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->projectId_ == nullptr && return this->purpose_ == nullptr && return this->useVpcEndpoint_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetFileStorageCredentialRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetFileStorageCredentialRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // purpose Field Functions 
    bool hasPurpose() const { return this->purpose_ != nullptr;};
    void deletePurpose() { this->purpose_ = nullptr;};
    inline string purpose() const { DARABONBA_PTR_GET_DEFAULT(purpose_, "") };
    inline GetFileStorageCredentialRequest& setPurpose(string purpose) { DARABONBA_PTR_SET_VALUE(purpose_, purpose) };


    // useVpcEndpoint Field Functions 
    bool hasUseVpcEndpoint() const { return this->useVpcEndpoint_ != nullptr;};
    void deleteUseVpcEndpoint() { this->useVpcEndpoint_ = nullptr;};
    inline bool useVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(useVpcEndpoint_, false) };
    inline GetFileStorageCredentialRequest& setUseVpcEndpoint(bool useVpcEndpoint) { DARABONBA_PTR_SET_VALUE(useVpcEndpoint_, useVpcEndpoint) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> purpose_ = nullptr;
    std::shared_ptr<bool> useVpcEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
