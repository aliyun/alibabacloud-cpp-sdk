// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTADETAILS_HPP_
#define ALIBABACLOUD_MODELS_QUOTADETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ActualMinQuota, actualMinQuota_);
      DARABONBA_PTR_TO_JSON(AllocatedQuota, allocatedQuota_);
      DARABONBA_PTR_TO_JSON(AncestorsAllocatedQuota, ancestorsAllocatedQuota_);
      DARABONBA_PTR_TO_JSON(DescendantsAllocatedQuota, descendantsAllocatedQuota_);
      DARABONBA_PTR_TO_JSON(DesiredMinQuota, desiredMinQuota_);
      DARABONBA_PTR_TO_JSON(RequestedQuota, requestedQuota_);
      DARABONBA_PTR_TO_JSON(SelfAllocatedQuota, selfAllocatedQuota_);
      DARABONBA_PTR_TO_JSON(SelfSubmittedQuota, selfSubmittedQuota_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualMinQuota, actualMinQuota_);
      DARABONBA_PTR_FROM_JSON(AllocatedQuota, allocatedQuota_);
      DARABONBA_PTR_FROM_JSON(AncestorsAllocatedQuota, ancestorsAllocatedQuota_);
      DARABONBA_PTR_FROM_JSON(DescendantsAllocatedQuota, descendantsAllocatedQuota_);
      DARABONBA_PTR_FROM_JSON(DesiredMinQuota, desiredMinQuota_);
      DARABONBA_PTR_FROM_JSON(RequestedQuota, requestedQuota_);
      DARABONBA_PTR_FROM_JSON(SelfAllocatedQuota, selfAllocatedQuota_);
      DARABONBA_PTR_FROM_JSON(SelfSubmittedQuota, selfSubmittedQuota_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
    };
    QuotaDetails() = default ;
    QuotaDetails(const QuotaDetails &) = default ;
    QuotaDetails(QuotaDetails &&) = default ;
    QuotaDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaDetails() = default ;
    QuotaDetails& operator=(const QuotaDetails &) = default ;
    QuotaDetails& operator=(QuotaDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualMinQuota_ != nullptr
        && this->allocatedQuota_ != nullptr && this->ancestorsAllocatedQuota_ != nullptr && this->descendantsAllocatedQuota_ != nullptr && this->desiredMinQuota_ != nullptr && this->requestedQuota_ != nullptr
        && this->selfAllocatedQuota_ != nullptr && this->selfSubmittedQuota_ != nullptr && this->usedQuota_ != nullptr; };
    // actualMinQuota Field Functions 
    bool hasActualMinQuota() const { return this->actualMinQuota_ != nullptr;};
    void deleteActualMinQuota() { this->actualMinQuota_ = nullptr;};
    inline const ResourceAmount & actualMinQuota() const { DARABONBA_PTR_GET_CONST(actualMinQuota_, ResourceAmount) };
    inline ResourceAmount actualMinQuota() { DARABONBA_PTR_GET(actualMinQuota_, ResourceAmount) };
    inline QuotaDetails& setActualMinQuota(const ResourceAmount & actualMinQuota) { DARABONBA_PTR_SET_VALUE(actualMinQuota_, actualMinQuota) };
    inline QuotaDetails& setActualMinQuota(ResourceAmount && actualMinQuota) { DARABONBA_PTR_SET_RVALUE(actualMinQuota_, actualMinQuota) };


    // allocatedQuota Field Functions 
    bool hasAllocatedQuota() const { return this->allocatedQuota_ != nullptr;};
    void deleteAllocatedQuota() { this->allocatedQuota_ = nullptr;};
    inline const ResourceAmount & allocatedQuota() const { DARABONBA_PTR_GET_CONST(allocatedQuota_, ResourceAmount) };
    inline ResourceAmount allocatedQuota() { DARABONBA_PTR_GET(allocatedQuota_, ResourceAmount) };
    inline QuotaDetails& setAllocatedQuota(const ResourceAmount & allocatedQuota) { DARABONBA_PTR_SET_VALUE(allocatedQuota_, allocatedQuota) };
    inline QuotaDetails& setAllocatedQuota(ResourceAmount && allocatedQuota) { DARABONBA_PTR_SET_RVALUE(allocatedQuota_, allocatedQuota) };


    // ancestorsAllocatedQuota Field Functions 
    bool hasAncestorsAllocatedQuota() const { return this->ancestorsAllocatedQuota_ != nullptr;};
    void deleteAncestorsAllocatedQuota() { this->ancestorsAllocatedQuota_ = nullptr;};
    inline const ResourceAmount & ancestorsAllocatedQuota() const { DARABONBA_PTR_GET_CONST(ancestorsAllocatedQuota_, ResourceAmount) };
    inline ResourceAmount ancestorsAllocatedQuota() { DARABONBA_PTR_GET(ancestorsAllocatedQuota_, ResourceAmount) };
    inline QuotaDetails& setAncestorsAllocatedQuota(const ResourceAmount & ancestorsAllocatedQuota) { DARABONBA_PTR_SET_VALUE(ancestorsAllocatedQuota_, ancestorsAllocatedQuota) };
    inline QuotaDetails& setAncestorsAllocatedQuota(ResourceAmount && ancestorsAllocatedQuota) { DARABONBA_PTR_SET_RVALUE(ancestorsAllocatedQuota_, ancestorsAllocatedQuota) };


    // descendantsAllocatedQuota Field Functions 
    bool hasDescendantsAllocatedQuota() const { return this->descendantsAllocatedQuota_ != nullptr;};
    void deleteDescendantsAllocatedQuota() { this->descendantsAllocatedQuota_ = nullptr;};
    inline const ResourceAmount & descendantsAllocatedQuota() const { DARABONBA_PTR_GET_CONST(descendantsAllocatedQuota_, ResourceAmount) };
    inline ResourceAmount descendantsAllocatedQuota() { DARABONBA_PTR_GET(descendantsAllocatedQuota_, ResourceAmount) };
    inline QuotaDetails& setDescendantsAllocatedQuota(const ResourceAmount & descendantsAllocatedQuota) { DARABONBA_PTR_SET_VALUE(descendantsAllocatedQuota_, descendantsAllocatedQuota) };
    inline QuotaDetails& setDescendantsAllocatedQuota(ResourceAmount && descendantsAllocatedQuota) { DARABONBA_PTR_SET_RVALUE(descendantsAllocatedQuota_, descendantsAllocatedQuota) };


    // desiredMinQuota Field Functions 
    bool hasDesiredMinQuota() const { return this->desiredMinQuota_ != nullptr;};
    void deleteDesiredMinQuota() { this->desiredMinQuota_ = nullptr;};
    inline const ResourceAmount & desiredMinQuota() const { DARABONBA_PTR_GET_CONST(desiredMinQuota_, ResourceAmount) };
    inline ResourceAmount desiredMinQuota() { DARABONBA_PTR_GET(desiredMinQuota_, ResourceAmount) };
    inline QuotaDetails& setDesiredMinQuota(const ResourceAmount & desiredMinQuota) { DARABONBA_PTR_SET_VALUE(desiredMinQuota_, desiredMinQuota) };
    inline QuotaDetails& setDesiredMinQuota(ResourceAmount && desiredMinQuota) { DARABONBA_PTR_SET_RVALUE(desiredMinQuota_, desiredMinQuota) };


    // requestedQuota Field Functions 
    bool hasRequestedQuota() const { return this->requestedQuota_ != nullptr;};
    void deleteRequestedQuota() { this->requestedQuota_ = nullptr;};
    inline const ResourceAmount & requestedQuota() const { DARABONBA_PTR_GET_CONST(requestedQuota_, ResourceAmount) };
    inline ResourceAmount requestedQuota() { DARABONBA_PTR_GET(requestedQuota_, ResourceAmount) };
    inline QuotaDetails& setRequestedQuota(const ResourceAmount & requestedQuota) { DARABONBA_PTR_SET_VALUE(requestedQuota_, requestedQuota) };
    inline QuotaDetails& setRequestedQuota(ResourceAmount && requestedQuota) { DARABONBA_PTR_SET_RVALUE(requestedQuota_, requestedQuota) };


    // selfAllocatedQuota Field Functions 
    bool hasSelfAllocatedQuota() const { return this->selfAllocatedQuota_ != nullptr;};
    void deleteSelfAllocatedQuota() { this->selfAllocatedQuota_ = nullptr;};
    inline const ResourceAmount & selfAllocatedQuota() const { DARABONBA_PTR_GET_CONST(selfAllocatedQuota_, ResourceAmount) };
    inline ResourceAmount selfAllocatedQuota() { DARABONBA_PTR_GET(selfAllocatedQuota_, ResourceAmount) };
    inline QuotaDetails& setSelfAllocatedQuota(const ResourceAmount & selfAllocatedQuota) { DARABONBA_PTR_SET_VALUE(selfAllocatedQuota_, selfAllocatedQuota) };
    inline QuotaDetails& setSelfAllocatedQuota(ResourceAmount && selfAllocatedQuota) { DARABONBA_PTR_SET_RVALUE(selfAllocatedQuota_, selfAllocatedQuota) };


    // selfSubmittedQuota Field Functions 
    bool hasSelfSubmittedQuota() const { return this->selfSubmittedQuota_ != nullptr;};
    void deleteSelfSubmittedQuota() { this->selfSubmittedQuota_ = nullptr;};
    inline const ResourceAmount & selfSubmittedQuota() const { DARABONBA_PTR_GET_CONST(selfSubmittedQuota_, ResourceAmount) };
    inline ResourceAmount selfSubmittedQuota() { DARABONBA_PTR_GET(selfSubmittedQuota_, ResourceAmount) };
    inline QuotaDetails& setSelfSubmittedQuota(const ResourceAmount & selfSubmittedQuota) { DARABONBA_PTR_SET_VALUE(selfSubmittedQuota_, selfSubmittedQuota) };
    inline QuotaDetails& setSelfSubmittedQuota(ResourceAmount && selfSubmittedQuota) { DARABONBA_PTR_SET_RVALUE(selfSubmittedQuota_, selfSubmittedQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline const ResourceAmount & usedQuota() const { DARABONBA_PTR_GET_CONST(usedQuota_, ResourceAmount) };
    inline ResourceAmount usedQuota() { DARABONBA_PTR_GET(usedQuota_, ResourceAmount) };
    inline QuotaDetails& setUsedQuota(const ResourceAmount & usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };
    inline QuotaDetails& setUsedQuota(ResourceAmount && usedQuota) { DARABONBA_PTR_SET_RVALUE(usedQuota_, usedQuota) };


  protected:
    std::shared_ptr<ResourceAmount> actualMinQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> allocatedQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> ancestorsAllocatedQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> descendantsAllocatedQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> desiredMinQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> requestedQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> selfAllocatedQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> selfSubmittedQuota_ = nullptr;
    std::shared_ptr<ResourceAmount> usedQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
