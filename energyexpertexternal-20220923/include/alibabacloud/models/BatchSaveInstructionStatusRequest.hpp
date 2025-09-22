// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSAVEINSTRUCTIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSAVEINSTRUCTIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class BatchSaveInstructionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSaveInstructionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
      DARABONBA_PTR_TO_JSON(pKey, pKey_);
      DARABONBA_PTR_TO_JSON(statusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSaveInstructionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
      DARABONBA_PTR_FROM_JSON(pKey, pKey_);
      DARABONBA_PTR_FROM_JSON(statusList, statusList_);
    };
    BatchSaveInstructionStatusRequest() = default ;
    BatchSaveInstructionStatusRequest(const BatchSaveInstructionStatusRequest &) = default ;
    BatchSaveInstructionStatusRequest(BatchSaveInstructionStatusRequest &&) = default ;
    BatchSaveInstructionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSaveInstructionStatusRequest() = default ;
    BatchSaveInstructionStatusRequest& operator=(const BatchSaveInstructionStatusRequest &) = default ;
    BatchSaveInstructionStatusRequest& operator=(BatchSaveInstructionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->factoryId_ != nullptr
        && this->pKey_ != nullptr && this->statusList_ != nullptr; };
    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string factoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline BatchSaveInstructionStatusRequest& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


    // pKey Field Functions 
    bool hasPKey() const { return this->pKey_ != nullptr;};
    void deletePKey() { this->pKey_ = nullptr;};
    inline string pKey() const { DARABONBA_PTR_GET_DEFAULT(pKey_, "") };
    inline BatchSaveInstructionStatusRequest& setPKey(string pKey) { DARABONBA_PTR_SET_VALUE(pKey_, pKey) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string statusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline BatchSaveInstructionStatusRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> factoryId_ = nullptr;
    std::shared_ptr<string> pKey_ = nullptr;
    std::shared_ptr<string> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
