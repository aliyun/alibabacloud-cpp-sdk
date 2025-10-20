// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBRANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBRANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateBrandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBrandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandName, brandName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBrandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandName, brandName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateBrandRequest() = default ;
    CreateBrandRequest(const CreateBrandRequest &) = default ;
    CreateBrandRequest(CreateBrandRequest &&) = default ;
    CreateBrandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBrandRequest() = default ;
    CreateBrandRequest& operator=(const CreateBrandRequest &) = default ;
    CreateBrandRequest& operator=(CreateBrandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandName_ == nullptr
        && return this->instanceId_ == nullptr; };
    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string brandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline CreateBrandRequest& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBrandRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 品牌化名称
    // 
    // This parameter is required.
    std::shared_ptr<string> brandName_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
