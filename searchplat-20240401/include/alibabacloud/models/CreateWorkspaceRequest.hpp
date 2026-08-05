// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class CreateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(engineType, engineType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(engineType, engineType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest(CreateWorkspaceRequest &&) = default ;
    CreateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRequest() = default ;
    CreateWorkspaceRequest& operator=(const CreateWorkspaceRequest &) = default ;
    CreateWorkspaceRequest& operator=(CreateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
        DARABONBA_PTR_TO_JSON(docSize, docSize_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
        DARABONBA_PTR_FROM_JSON(docSize, docSize_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->docSize_ == nullptr && this->spec_ == nullptr; };
      // computeResource Field Functions 
      bool hasComputeResource() const { return this->computeResource_ != nullptr;};
      void deleteComputeResource() { this->computeResource_ = nullptr;};
      inline int32_t getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, 0) };
      inline Quota& setComputeResource(int32_t computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


      // docSize Field Functions 
      bool hasDocSize() const { return this->docSize_ != nullptr;};
      void deleteDocSize() { this->docSize_ = nullptr;};
      inline int32_t getDocSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
      inline Quota& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Quota& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      // Compute resource (unit: LCU)
      shared_ptr<int32_t> computeResource_ {};
      // Storage capacity (unit: GB)
      shared_ptr<int32_t> docSize_ {};
      // Specification
      // - rag.share.common
      shared_ptr<string> spec_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->engineType_ == nullptr && this->name_ == nullptr && this->quota_ == nullptr && this->type_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateWorkspaceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreateWorkspaceRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkspaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const CreateWorkspaceRequest::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, CreateWorkspaceRequest::Quota) };
    inline CreateWorkspaceRequest::Quota getQuota() { DARABONBA_PTR_GET(quota_, CreateWorkspaceRequest::Quota) };
    inline CreateWorkspaceRequest& setQuota(const CreateWorkspaceRequest::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline CreateWorkspaceRequest& setQuota(CreateWorkspaceRequest::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkspaceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Billing type
    // - POSTPAY: Pay-as-you-go
    shared_ptr<string> chargeType_ {};
    // Engine type
    // - rag
    shared_ptr<string> engineType_ {};
    // Workspace name
    shared_ptr<string> name_ {};
    // Quota
    shared_ptr<CreateWorkspaceRequest::Quota> quota_ {};
    // Type
    // - standard
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
