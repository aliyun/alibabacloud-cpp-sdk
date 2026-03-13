// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTADETAILS_HPP_
#define ALIBABACLOUD_MODELS_QUOTADETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceAmount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class QuotaDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ActualMinQuota, actualMinQuota_);
      DARABONBA_PTR_TO_JSON(DesiredMinQuota, desiredMinQuota_);
      DARABONBA_PTR_TO_JSON(RequestedQuota, requestedQuota_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualMinQuota, actualMinQuota_);
      DARABONBA_PTR_FROM_JSON(DesiredMinQuota, desiredMinQuota_);
      DARABONBA_PTR_FROM_JSON(RequestedQuota, requestedQuota_);
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
    virtual bool empty() const override { return this->actualMinQuota_ == nullptr
        && this->desiredMinQuota_ == nullptr && this->requestedQuota_ == nullptr && this->usedQuota_ == nullptr; };
    // actualMinQuota Field Functions 
    bool hasActualMinQuota() const { return this->actualMinQuota_ != nullptr;};
    void deleteActualMinQuota() { this->actualMinQuota_ = nullptr;};
    inline const ResourceAmount & getActualMinQuota() const { DARABONBA_PTR_GET_CONST(actualMinQuota_, ResourceAmount) };
    inline ResourceAmount getActualMinQuota() { DARABONBA_PTR_GET(actualMinQuota_, ResourceAmount) };
    inline QuotaDetails& setActualMinQuota(const ResourceAmount & actualMinQuota) { DARABONBA_PTR_SET_VALUE(actualMinQuota_, actualMinQuota) };
    inline QuotaDetails& setActualMinQuota(ResourceAmount && actualMinQuota) { DARABONBA_PTR_SET_RVALUE(actualMinQuota_, actualMinQuota) };


    // desiredMinQuota Field Functions 
    bool hasDesiredMinQuota() const { return this->desiredMinQuota_ != nullptr;};
    void deleteDesiredMinQuota() { this->desiredMinQuota_ = nullptr;};
    inline const ResourceAmount & getDesiredMinQuota() const { DARABONBA_PTR_GET_CONST(desiredMinQuota_, ResourceAmount) };
    inline ResourceAmount getDesiredMinQuota() { DARABONBA_PTR_GET(desiredMinQuota_, ResourceAmount) };
    inline QuotaDetails& setDesiredMinQuota(const ResourceAmount & desiredMinQuota) { DARABONBA_PTR_SET_VALUE(desiredMinQuota_, desiredMinQuota) };
    inline QuotaDetails& setDesiredMinQuota(ResourceAmount && desiredMinQuota) { DARABONBA_PTR_SET_RVALUE(desiredMinQuota_, desiredMinQuota) };


    // requestedQuota Field Functions 
    bool hasRequestedQuota() const { return this->requestedQuota_ != nullptr;};
    void deleteRequestedQuota() { this->requestedQuota_ = nullptr;};
    inline const ResourceAmount & getRequestedQuota() const { DARABONBA_PTR_GET_CONST(requestedQuota_, ResourceAmount) };
    inline ResourceAmount getRequestedQuota() { DARABONBA_PTR_GET(requestedQuota_, ResourceAmount) };
    inline QuotaDetails& setRequestedQuota(const ResourceAmount & requestedQuota) { DARABONBA_PTR_SET_VALUE(requestedQuota_, requestedQuota) };
    inline QuotaDetails& setRequestedQuota(ResourceAmount && requestedQuota) { DARABONBA_PTR_SET_RVALUE(requestedQuota_, requestedQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline const ResourceAmount & getUsedQuota() const { DARABONBA_PTR_GET_CONST(usedQuota_, ResourceAmount) };
    inline ResourceAmount getUsedQuota() { DARABONBA_PTR_GET(usedQuota_, ResourceAmount) };
    inline QuotaDetails& setUsedQuota(const ResourceAmount & usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };
    inline QuotaDetails& setUsedQuota(ResourceAmount && usedQuota) { DARABONBA_PTR_SET_RVALUE(usedQuota_, usedQuota) };


  protected:
    shared_ptr<ResourceAmount> actualMinQuota_ {};
    shared_ptr<ResourceAmount> desiredMinQuota_ {};
    shared_ptr<ResourceAmount> requestedQuota_ {};
    shared_ptr<ResourceAmount> usedQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
