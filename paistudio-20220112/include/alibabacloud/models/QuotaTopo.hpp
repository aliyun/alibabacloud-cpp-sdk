// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTATOPO_HPP_
#define ALIBABACLOUD_MODELS_QUOTATOPO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaTopo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaTopo& obj) { 
      DARABONBA_PTR_TO_JSON(Depth, depth_);
      DARABONBA_PTR_TO_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_TO_JSON(QuotaDetails, quotaDetails_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(WorkloadDetails, workloadDetails_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaTopo& obj) { 
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaDetails, quotaDetails_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(WorkloadDetails, workloadDetails_);
    };
    QuotaTopo() = default ;
    QuotaTopo(const QuotaTopo &) = default ;
    QuotaTopo(QuotaTopo &&) = default ;
    QuotaTopo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaTopo() = default ;
    QuotaTopo& operator=(const QuotaTopo &) = default ;
    QuotaTopo& operator=(QuotaTopo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->depth_ != nullptr
        && this->parentQuotaId_ != nullptr && this->quotaDetails_ != nullptr && this->quotaId_ != nullptr && this->quotaName_ != nullptr && this->resourceType_ != nullptr
        && this->workloadDetails_ != nullptr; };
    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline string depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, "") };
    inline QuotaTopo& setDepth(string depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // parentQuotaId Field Functions 
    bool hasParentQuotaId() const { return this->parentQuotaId_ != nullptr;};
    void deleteParentQuotaId() { this->parentQuotaId_ = nullptr;};
    inline string parentQuotaId() const { DARABONBA_PTR_GET_DEFAULT(parentQuotaId_, "") };
    inline QuotaTopo& setParentQuotaId(string parentQuotaId) { DARABONBA_PTR_SET_VALUE(parentQuotaId_, parentQuotaId) };


    // quotaDetails Field Functions 
    bool hasQuotaDetails() const { return this->quotaDetails_ != nullptr;};
    void deleteQuotaDetails() { this->quotaDetails_ = nullptr;};
    inline const QuotaDetails & quotaDetails() const { DARABONBA_PTR_GET_CONST(quotaDetails_, QuotaDetails) };
    inline QuotaDetails quotaDetails() { DARABONBA_PTR_GET(quotaDetails_, QuotaDetails) };
    inline QuotaTopo& setQuotaDetails(const QuotaDetails & quotaDetails) { DARABONBA_PTR_SET_VALUE(quotaDetails_, quotaDetails) };
    inline QuotaTopo& setQuotaDetails(QuotaDetails && quotaDetails) { DARABONBA_PTR_SET_RVALUE(quotaDetails_, quotaDetails) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline QuotaTopo& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline QuotaTopo& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QuotaTopo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // workloadDetails Field Functions 
    bool hasWorkloadDetails() const { return this->workloadDetails_ != nullptr;};
    void deleteWorkloadDetails() { this->workloadDetails_ = nullptr;};
    inline const WorkloadDetails & workloadDetails() const { DARABONBA_PTR_GET_CONST(workloadDetails_, WorkloadDetails) };
    inline WorkloadDetails workloadDetails() { DARABONBA_PTR_GET(workloadDetails_, WorkloadDetails) };
    inline QuotaTopo& setWorkloadDetails(const WorkloadDetails & workloadDetails) { DARABONBA_PTR_SET_VALUE(workloadDetails_, workloadDetails) };
    inline QuotaTopo& setWorkloadDetails(WorkloadDetails && workloadDetails) { DARABONBA_PTR_SET_RVALUE(workloadDetails_, workloadDetails) };


  protected:
    std::shared_ptr<string> depth_ = nullptr;
    std::shared_ptr<string> parentQuotaId_ = nullptr;
    std::shared_ptr<QuotaDetails> quotaDetails_ = nullptr;
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> quotaName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<WorkloadDetails> workloadDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
