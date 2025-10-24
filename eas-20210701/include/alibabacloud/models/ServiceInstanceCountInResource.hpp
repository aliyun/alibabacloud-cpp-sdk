// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEINSTANCECOUNTINRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_SERVICEINSTANCECOUNTINRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ServiceInstanceCountInResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceInstanceCountInResource& obj) { 
      DARABONBA_PTR_TO_JSON(Dedicated, dedicated_);
      DARABONBA_PTR_TO_JSON(Public, public_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceInstanceCountInResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Dedicated, dedicated_);
      DARABONBA_PTR_FROM_JSON(Public, public_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
    };
    ServiceInstanceCountInResource() = default ;
    ServiceInstanceCountInResource(const ServiceInstanceCountInResource &) = default ;
    ServiceInstanceCountInResource(ServiceInstanceCountInResource &&) = default ;
    ServiceInstanceCountInResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceInstanceCountInResource() = default ;
    ServiceInstanceCountInResource& operator=(const ServiceInstanceCountInResource &) = default ;
    ServiceInstanceCountInResource& operator=(ServiceInstanceCountInResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicated_ == nullptr
        && return this->public_ == nullptr && return this->quota_ == nullptr; };
    // dedicated Field Functions 
    bool hasDedicated() const { return this->dedicated_ != nullptr;};
    void deleteDedicated() { this->dedicated_ = nullptr;};
    inline int32_t dedicated() const { DARABONBA_PTR_GET_DEFAULT(dedicated_, 0) };
    inline ServiceInstanceCountInResource& setDedicated(int32_t dedicated) { DARABONBA_PTR_SET_VALUE(dedicated_, dedicated) };


    // public Field Functions 
    bool hasPublic() const { return this->public_ != nullptr;};
    void deletePublic() { this->public_ = nullptr;};
    inline int32_t _public() const { DARABONBA_PTR_GET_DEFAULT(public_, 0) };
    inline ServiceInstanceCountInResource& setPublic(int32_t _public) { DARABONBA_PTR_SET_VALUE(public_, _public) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline ServiceInstanceCountInResource& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


  protected:
    std::shared_ptr<int32_t> dedicated_ = nullptr;
    std::shared_ptr<int32_t> public_ = nullptr;
    std::shared_ptr<int32_t> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
