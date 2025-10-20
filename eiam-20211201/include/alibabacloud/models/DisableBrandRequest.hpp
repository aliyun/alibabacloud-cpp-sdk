// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEBRANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEBRANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableBrandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableBrandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandId, brandId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableBrandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableBrandRequest() = default ;
    DisableBrandRequest(const DisableBrandRequest &) = default ;
    DisableBrandRequest(DisableBrandRequest &&) = default ;
    DisableBrandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableBrandRequest() = default ;
    DisableBrandRequest& operator=(const DisableBrandRequest &) = default ;
    DisableBrandRequest& operator=(DisableBrandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // brandId Field Functions 
    bool hasBrandId() const { return this->brandId_ != nullptr;};
    void deleteBrandId() { this->brandId_ = nullptr;};
    inline string brandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
    inline DisableBrandRequest& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableBrandRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 品牌化Id
    // 
    // This parameter is required.
    std::shared_ptr<string> brandId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
