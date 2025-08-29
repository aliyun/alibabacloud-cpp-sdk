// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTransferInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProposalId, proposalId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProposalId, proposalId_);
    };
    GetTransferInfoRequest() = default ;
    GetTransferInfoRequest(const GetTransferInfoRequest &) = default ;
    GetTransferInfoRequest(GetTransferInfoRequest &&) = default ;
    GetTransferInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferInfoRequest() = default ;
    GetTransferInfoRequest& operator=(const GetTransferInfoRequest &) = default ;
    GetTransferInfoRequest& operator=(GetTransferInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->proposalId_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTransferInfoRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // proposalId Field Functions 
    bool hasProposalId() const { return this->proposalId_ != nullptr;};
    void deleteProposalId() { this->proposalId_ = nullptr;};
    inline int64_t proposalId() const { DARABONBA_PTR_GET_DEFAULT(proposalId_, 0L) };
    inline GetTransferInfoRequest& setProposalId(int64_t proposalId) { DARABONBA_PTR_SET_VALUE(proposalId_, proposalId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> proposalId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
