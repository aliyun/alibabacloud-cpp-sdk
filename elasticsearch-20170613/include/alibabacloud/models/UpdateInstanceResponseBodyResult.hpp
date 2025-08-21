// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateInstanceResponseBodyResultKibanaConfiguration.hpp>
#include <alibabacloud/models/UpdateInstanceResponseBodyResultMasterConfiguration.hpp>
#include <alibabacloud/models/UpdateInstanceResponseBodyResultNodeSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateInstanceResponseBodyResult() = default ;
    UpdateInstanceResponseBodyResult(const UpdateInstanceResponseBodyResult &) = default ;
    UpdateInstanceResponseBodyResult(UpdateInstanceResponseBodyResult &&) = default ;
    UpdateInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceResponseBodyResult() = default ;
    UpdateInstanceResponseBodyResult& operator=(const UpdateInstanceResponseBodyResult &) = default ;
    UpdateInstanceResponseBodyResult& operator=(UpdateInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->description_ != nullptr && this->domain_ != nullptr && this->esVersion_ != nullptr && this->instanceId_ != nullptr && this->kibanaConfiguration_ != nullptr
        && this->masterConfiguration_ != nullptr && this->nodeAmount_ != nullptr && this->nodeSpec_ != nullptr && this->paymentType_ != nullptr && this->status_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline UpdateInstanceResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateInstanceResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateInstanceResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string esVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline UpdateInstanceResponseBodyResult& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const Models::UpdateInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Models::UpdateInstanceResponseBodyResultKibanaConfiguration) };
    inline Models::UpdateInstanceResponseBodyResultKibanaConfiguration kibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Models::UpdateInstanceResponseBodyResultKibanaConfiguration) };
    inline UpdateInstanceResponseBodyResult& setKibanaConfiguration(const Models::UpdateInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline UpdateInstanceResponseBodyResult& setKibanaConfiguration(Models::UpdateInstanceResponseBodyResultKibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const Models::UpdateInstanceResponseBodyResultMasterConfiguration & masterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Models::UpdateInstanceResponseBodyResultMasterConfiguration) };
    inline Models::UpdateInstanceResponseBodyResultMasterConfiguration masterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Models::UpdateInstanceResponseBodyResultMasterConfiguration) };
    inline UpdateInstanceResponseBodyResult& setMasterConfiguration(const Models::UpdateInstanceResponseBodyResultMasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline UpdateInstanceResponseBodyResult& setMasterConfiguration(Models::UpdateInstanceResponseBodyResultMasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline UpdateInstanceResponseBodyResult& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Models::UpdateInstanceResponseBodyResultNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Models::UpdateInstanceResponseBodyResultNodeSpec) };
    inline Models::UpdateInstanceResponseBodyResultNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Models::UpdateInstanceResponseBodyResultNodeSpec) };
    inline UpdateInstanceResponseBodyResult& setNodeSpec(const Models::UpdateInstanceResponseBodyResultNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline UpdateInstanceResponseBodyResult& setNodeSpec(Models::UpdateInstanceResponseBodyResultNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline UpdateInstanceResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateInstanceResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The private domain name of the instance.
    std::shared_ptr<string> createdAt_ = nullptr;
    // The configuration of data nodes.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> domain_ = nullptr;
    // The node specifications.
    std::shared_ptr<string> esVersion_ = nullptr;
    // The storage space of the node. Unit: GB.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The size of the node storage space.
    std::shared_ptr<Models::UpdateInstanceResponseBodyResultKibanaConfiguration> kibanaConfiguration_ = nullptr;
    // The storage space of the node. Unit: GB.
    std::shared_ptr<Models::UpdateInstanceResponseBodyResultMasterConfiguration> masterConfiguration_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   prepaid: subscription
    // *   postpaid: pay-as-you-go
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The storage type of the node. Valid values:
    // 
    // *   cloud_ssd: standard SSD
    // *   cloud_efficiency: ultra disk
    std::shared_ptr<Models::UpdateInstanceResponseBodyResultNodeSpec> nodeSpec_ = nullptr;
    // The edition of the dedicated KMS instance.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
