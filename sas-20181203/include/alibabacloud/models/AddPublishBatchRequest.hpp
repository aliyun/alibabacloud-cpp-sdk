// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPUBLISHBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPUBLISHBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddPublishBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPublishBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchName, batchName_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OperationBase, operationBase_);
      DARABONBA_PTR_TO_JSON(UpgradeVersion, upgradeVersion_);
    };
    friend void from_json(const Darabonba::Json& j, AddPublishBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchName, batchName_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OperationBase, operationBase_);
      DARABONBA_PTR_FROM_JSON(UpgradeVersion, upgradeVersion_);
    };
    AddPublishBatchRequest() = default ;
    AddPublishBatchRequest(const AddPublishBatchRequest &) = default ;
    AddPublishBatchRequest(AddPublishBatchRequest &&) = default ;
    AddPublishBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPublishBatchRequest() = default ;
    AddPublishBatchRequest& operator=(const AddPublishBatchRequest &) = default ;
    AddPublishBatchRequest& operator=(AddPublishBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchName_ != nullptr
        && this->interval_ != nullptr && this->operationBase_ != nullptr && this->upgradeVersion_ != nullptr; };
    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string batchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline AddPublishBatchRequest& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline AddPublishBatchRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // operationBase Field Functions 
    bool hasOperationBase() const { return this->operationBase_ != nullptr;};
    void deleteOperationBase() { this->operationBase_ = nullptr;};
    inline int32_t operationBase() const { DARABONBA_PTR_GET_DEFAULT(operationBase_, 0) };
    inline AddPublishBatchRequest& setOperationBase(int32_t operationBase) { DARABONBA_PTR_SET_VALUE(operationBase_, operationBase) };


    // upgradeVersion Field Functions 
    bool hasUpgradeVersion() const { return this->upgradeVersion_ != nullptr;};
    void deleteUpgradeVersion() { this->upgradeVersion_ = nullptr;};
    inline string upgradeVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeVersion_, "") };
    inline AddPublishBatchRequest& setUpgradeVersion(string upgradeVersion) { DARABONBA_PTR_SET_VALUE(upgradeVersion_, upgradeVersion) };


  protected:
    // The name of the release batch.
    // 
    // This parameter is required.
    std::shared_ptr<string> batchName_ = nullptr;
    // The interval between two release batches.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The dimension based on which the asset is selected. Valid values:
    // 
    // *   **0**: selects the asset by instance.
    // *   **1**: selects the asset by machine group.
    // *   **2**: selects the asset by the ID of the instance that is deployed in the virtual private cloud (VPC).
    std::shared_ptr<int32_t> operationBase_ = nullptr;
    // The version to which you want to upgrade the agent.
    // 
    // This parameter is required.
    std::shared_ptr<string> upgradeVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
