// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateInstanceResponseBody() = default ;
    UpdateInstanceResponseBody(const UpdateInstanceResponseBody &) = default ;
    UpdateInstanceResponseBody(UpdateInstanceResponseBody &&) = default ;
    UpdateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceResponseBody() = default ;
    UpdateInstanceResponseBody& operator=(const UpdateInstanceResponseBody &) = default ;
    UpdateInstanceResponseBody& operator=(UpdateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
        };
        NodeSpec() = default ;
        NodeSpec(const NodeSpec &) = default ;
        NodeSpec(NodeSpec &&) = default ;
        NodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeSpec() = default ;
        NodeSpec& operator=(const NodeSpec &) = default ;
        NodeSpec& operator=(NodeSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->disk_ == nullptr
        && this->diskType_ == nullptr && this->spec_ == nullptr; };
        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline NodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline NodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline NodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      protected:
        // The node specifications.
        shared_ptr<int32_t> disk_ {};
        // The number of nodes.
        shared_ptr<string> diskType_ {};
        // The configuration of Kibana nodes.
        shared_ptr<string> spec_ {};
      };

      class MasterConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, MasterConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
        };
        MasterConfiguration() = default ;
        MasterConfiguration(const MasterConfiguration &) = default ;
        MasterConfiguration(MasterConfiguration &&) = default ;
        MasterConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterConfiguration() = default ;
        MasterConfiguration& operator=(const MasterConfiguration &) = default ;
        MasterConfiguration& operator=(MasterConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline MasterConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline MasterConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline MasterConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline MasterConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      protected:
        shared_ptr<int32_t> amount_ {};
        shared_ptr<int32_t> disk_ {};
        shared_ptr<string> diskType_ {};
        // The storage type of the node. Only cloud_ssd(SSD cloud disk) is supported.
        shared_ptr<string> spec_ {};
      };

      class KibanaConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KibanaConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, KibanaConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
        };
        KibanaConfiguration() = default ;
        KibanaConfiguration(const KibanaConfiguration &) = default ;
        KibanaConfiguration(KibanaConfiguration &&) = default ;
        KibanaConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KibanaConfiguration() = default ;
        KibanaConfiguration& operator=(const KibanaConfiguration &) = default ;
        KibanaConfiguration& operator=(KibanaConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline KibanaConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline KibanaConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline KibanaConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline KibanaConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      protected:
        // The configuration of dedicated master nodes.
        shared_ptr<int32_t> amount_ {};
        // The node specifications.
        shared_ptr<int32_t> disk_ {};
        // The number of nodes.
        shared_ptr<string> diskType_ {};
        // The storage type of the node. This parameter can be ignored.
        shared_ptr<string> spec_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->domain_ == nullptr && this->esVersion_ == nullptr && this->instanceId_ == nullptr && this->kibanaConfiguration_ == nullptr
        && this->masterConfiguration_ == nullptr && this->nodeAmount_ == nullptr && this->nodeSpec_ == nullptr && this->paymentType_ == nullptr && this->status_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Result& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Result& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // esVersion Field Functions 
      bool hasEsVersion() const { return this->esVersion_ != nullptr;};
      void deleteEsVersion() { this->esVersion_ = nullptr;};
      inline string getEsVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
      inline Result& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // kibanaConfiguration Field Functions 
      bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
      void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
      inline const Result::KibanaConfiguration & getKibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Result::KibanaConfiguration) };
      inline Result::KibanaConfiguration getKibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Result::KibanaConfiguration) };
      inline Result& setKibanaConfiguration(const Result::KibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
      inline Result& setKibanaConfiguration(Result::KibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


      // masterConfiguration Field Functions 
      bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
      void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
      inline const Result::MasterConfiguration & getMasterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Result::MasterConfiguration) };
      inline Result::MasterConfiguration getMasterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Result::MasterConfiguration) };
      inline Result& setMasterConfiguration(const Result::MasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
      inline Result& setMasterConfiguration(Result::MasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


      // nodeAmount Field Functions 
      bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
      void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
      inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
      inline Result& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


      // nodeSpec Field Functions 
      bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
      void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
      inline const Result::NodeSpec & getNodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Result::NodeSpec) };
      inline Result::NodeSpec getNodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Result::NodeSpec) };
      inline Result& setNodeSpec(const Result::NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
      inline Result& setNodeSpec(Result::NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Result& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The private domain name of the instance.
      shared_ptr<string> createdAt_ {};
      // The configuration of data nodes.
      shared_ptr<string> description_ {};
      // The ID of the instance.
      shared_ptr<string> domain_ {};
      // The node specifications.
      shared_ptr<string> esVersion_ {};
      // The storage space of the node. Unit: GB.
      shared_ptr<string> instanceId_ {};
      // The size of the node storage space.
      shared_ptr<Result::KibanaConfiguration> kibanaConfiguration_ {};
      // The storage space of the node. Unit: GB.
      shared_ptr<Result::MasterConfiguration> masterConfiguration_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   prepaid: subscription
      // *   postpaid: pay-as-you-go
      shared_ptr<int32_t> nodeAmount_ {};
      // The storage type of the node. Valid values:
      // 
      // *   cloud_ssd: standard SSD
      // *   cloud_efficiency: ultra disk
      shared_ptr<Result::NodeSpec> nodeSpec_ {};
      // The edition of the dedicated KMS instance.
      shared_ptr<string> paymentType_ {};
      // The name of the instance.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateInstanceResponseBody::Result) };
    inline UpdateInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateInstanceResponseBody::Result) };
    inline UpdateInstanceResponseBody& setResult(const UpdateInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateInstanceResponseBody& setResult(UpdateInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // The time when the instance was created.
    shared_ptr<string> requestId_ {};
    // The state of the instance. Valid values:
    // 
    // *   active: normal
    // *   activating: taking effect
    // *   inactive: frozen
    // *   invalid: invalid
    shared_ptr<UpdateInstanceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
