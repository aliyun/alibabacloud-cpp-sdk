// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTQUOTA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppResponseBodyResultQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResultQuota& obj) { 
      DARABONBA_PTR_TO_JSON(computeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(docSize, docSize_);
      DARABONBA_PTR_TO_JSON(qps, qps_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(usedComputeResource, usedComputeResource_);
      DARABONBA_PTR_TO_JSON(usedDocSize, usedDocSize_);
      DARABONBA_PTR_TO_JSON(usedQps, usedQps_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResultQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(computeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(docSize, docSize_);
      DARABONBA_PTR_FROM_JSON(qps, qps_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(usedComputeResource, usedComputeResource_);
      DARABONBA_PTR_FROM_JSON(usedDocSize, usedDocSize_);
      DARABONBA_PTR_FROM_JSON(usedQps, usedQps_);
    };
    CreateAppResponseBodyResultQuota() = default ;
    CreateAppResponseBodyResultQuota(const CreateAppResponseBodyResultQuota &) = default ;
    CreateAppResponseBodyResultQuota(CreateAppResponseBodyResultQuota &&) = default ;
    CreateAppResponseBodyResultQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResultQuota() = default ;
    CreateAppResponseBodyResultQuota& operator=(const CreateAppResponseBodyResultQuota &) = default ;
    CreateAppResponseBodyResultQuota& operator=(CreateAppResponseBodyResultQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->docSize_ == nullptr && return this->qps_ == nullptr && return this->spec_ == nullptr && return this->usedComputeResource_ == nullptr && return this->usedDocSize_ == nullptr
        && return this->usedQps_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline int32_t computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, 0) };
    inline CreateAppResponseBodyResultQuota& setComputeResource(int32_t computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // docSize Field Functions 
    bool hasDocSize() const { return this->docSize_ != nullptr;};
    void deleteDocSize() { this->docSize_ = nullptr;};
    inline int32_t docSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
    inline CreateAppResponseBodyResultQuota& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int32_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
    inline CreateAppResponseBodyResultQuota& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateAppResponseBodyResultQuota& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // usedComputeResource Field Functions 
    bool hasUsedComputeResource() const { return this->usedComputeResource_ != nullptr;};
    void deleteUsedComputeResource() { this->usedComputeResource_ = nullptr;};
    inline int32_t usedComputeResource() const { DARABONBA_PTR_GET_DEFAULT(usedComputeResource_, 0) };
    inline CreateAppResponseBodyResultQuota& setUsedComputeResource(int32_t usedComputeResource) { DARABONBA_PTR_SET_VALUE(usedComputeResource_, usedComputeResource) };


    // usedDocSize Field Functions 
    bool hasUsedDocSize() const { return this->usedDocSize_ != nullptr;};
    void deleteUsedDocSize() { this->usedDocSize_ = nullptr;};
    inline double usedDocSize() const { DARABONBA_PTR_GET_DEFAULT(usedDocSize_, 0.0) };
    inline CreateAppResponseBodyResultQuota& setUsedDocSize(double usedDocSize) { DARABONBA_PTR_SET_VALUE(usedDocSize_, usedDocSize) };


    // usedQps Field Functions 
    bool hasUsedQps() const { return this->usedQps_ != nullptr;};
    void deleteUsedQps() { this->usedQps_ = nullptr;};
    inline int32_t usedQps() const { DARABONBA_PTR_GET_DEFAULT(usedQps_, 0) };
    inline CreateAppResponseBodyResultQuota& setUsedQps(int32_t usedQps) { DARABONBA_PTR_SET_VALUE(usedQps_, usedQps) };


  protected:
    // The computing resources.
    std::shared_ptr<int32_t> computeResource_ = nullptr;
    // The storage capacity.
    std::shared_ptr<int32_t> docSize_ = nullptr;
    // The search request.
    std::shared_ptr<int32_t> qps_ = nullptr;
    // The specifications. Valid values:
    // 
    // *   opensearch.share.junior: basic
    // *   opensearch.share.common: shared general-purpose
    // *   opensearch.share.compute: shared computing
    // *   opensearch.share.storage: shared storage
    // *   opensearch.private.common: exclusive general-purpose
    // *   opensearch.private.compute: exclusive computing
    // *   opensearch.private.storage: exclusive storage
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<int32_t> usedComputeResource_ = nullptr;
    std::shared_ptr<double> usedDocSize_ = nullptr;
    std::shared_ptr<int32_t> usedQps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
