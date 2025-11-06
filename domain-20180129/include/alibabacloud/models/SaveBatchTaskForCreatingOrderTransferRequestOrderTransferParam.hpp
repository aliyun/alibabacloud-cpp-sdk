// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERTRANSFERREQUESTORDERTRANSFERPARAM_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERTRANSFERREQUESTORDERTRANSFERPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PermitPremiumTransfer, permitPremiumTransfer_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PermitPremiumTransfer, permitPremiumTransfer_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
    };
    SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam() = default ;
    SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam(const SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam &) = default ;
    SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam(SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam &&) = default ;
    SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam() = default ;
    SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& operator=(const SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam &) = default ;
    SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& operator=(SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && return this->domainName_ == nullptr && return this->permitPremiumTransfer_ == nullptr && return this->registrantProfileId_ == nullptr; };
    // authorizationCode Field Functions 
    bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
    void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
    inline string authorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
    inline SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // permitPremiumTransfer Field Functions 
    bool hasPermitPremiumTransfer() const { return this->permitPremiumTransfer_ != nullptr;};
    void deletePermitPremiumTransfer() { this->permitPremiumTransfer_ = nullptr;};
    inline bool permitPremiumTransfer() const { DARABONBA_PTR_GET_DEFAULT(permitPremiumTransfer_, false) };
    inline SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& setPermitPremiumTransfer(bool permitPremiumTransfer) { DARABONBA_PTR_SET_VALUE(permitPremiumTransfer_, permitPremiumTransfer) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


  protected:
    std::shared_ptr<string> authorizationCode_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<bool> permitPremiumTransfer_ = nullptr;
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
