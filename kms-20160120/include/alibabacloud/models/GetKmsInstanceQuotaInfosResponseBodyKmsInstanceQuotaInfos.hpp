// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSRESPONSEBODYKMSINSTANCEQUOTAINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSRESPONSEBODYKMSINSTANCEQUOTAINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceQuota, resourceQuota_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UsedQuantity, usedQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceQuota, resourceQuota_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UsedQuantity, usedQuantity_);
    };
    GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos() = default ;
    GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos(const GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos &) = default ;
    GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos(GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos &&) = default ;
    GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos() = default ;
    GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos& operator=(const GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos &) = default ;
    GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos& operator=(GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceQuota_ == nullptr
        && return this->resourceType_ == nullptr && return this->usedQuantity_ == nullptr; };
    // resourceQuota Field Functions 
    bool hasResourceQuota() const { return this->resourceQuota_ != nullptr;};
    void deleteResourceQuota() { this->resourceQuota_ = nullptr;};
    inline int64_t resourceQuota() const { DARABONBA_PTR_GET_DEFAULT(resourceQuota_, 0L) };
    inline GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos& setResourceQuota(int64_t resourceQuota) { DARABONBA_PTR_SET_VALUE(resourceQuota_, resourceQuota) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // usedQuantity Field Functions 
    bool hasUsedQuantity() const { return this->usedQuantity_ != nullptr;};
    void deleteUsedQuantity() { this->usedQuantity_ = nullptr;};
    inline int64_t usedQuantity() const { DARABONBA_PTR_GET_DEFAULT(usedQuantity_, 0L) };
    inline GetKmsInstanceQuotaInfosResponseBodyKmsInstanceQuotaInfos& setUsedQuantity(int64_t usedQuantity) { DARABONBA_PTR_SET_VALUE(usedQuantity_, usedQuantity) };


  protected:
    std::shared_ptr<int64_t> resourceQuota_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<int64_t> usedQuantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
