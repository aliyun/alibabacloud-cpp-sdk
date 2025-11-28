// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLBIZCHAINCONTRACTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLBIZCHAINCONTRACTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllBizChainContractResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllBizChainContractResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ContractName, contractName_);
      DARABONBA_PTR_TO_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllBizChainContractResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ContractName, contractName_);
      DARABONBA_PTR_FROM_JSON(ContractTemplateId, contractTemplateId_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
    };
    ListAllBizChainContractResponseBodyData() = default ;
    ListAllBizChainContractResponseBodyData(const ListAllBizChainContractResponseBodyData &) = default ;
    ListAllBizChainContractResponseBodyData(ListAllBizChainContractResponseBodyData &&) = default ;
    ListAllBizChainContractResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllBizChainContractResponseBodyData() = default ;
    ListAllBizChainContractResponseBodyData& operator=(const ListAllBizChainContractResponseBodyData &) = default ;
    ListAllBizChainContractResponseBodyData& operator=(ListAllBizChainContractResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contractName_ == nullptr
        && return this->contractTemplateId_ == nullptr && return this->invokeType_ == nullptr; };
    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string contractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline ListAllBizChainContractResponseBodyData& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // contractTemplateId Field Functions 
    bool hasContractTemplateId() const { return this->contractTemplateId_ != nullptr;};
    void deleteContractTemplateId() { this->contractTemplateId_ = nullptr;};
    inline string contractTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contractTemplateId_, "") };
    inline ListAllBizChainContractResponseBodyData& setContractTemplateId(string contractTemplateId) { DARABONBA_PTR_SET_VALUE(contractTemplateId_, contractTemplateId) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline ListAllBizChainContractResponseBodyData& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


  protected:
    std::shared_ptr<string> contractName_ = nullptr;
    std::shared_ptr<string> contractTemplateId_ = nullptr;
    std::shared_ptr<string> invokeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
