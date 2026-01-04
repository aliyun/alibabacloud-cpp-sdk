// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFULLLOGTTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFULLLOGTTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyFullLogTtlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFullLogTtlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFullLogTtlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    ModifyFullLogTtlRequest() = default ;
    ModifyFullLogTtlRequest(const ModifyFullLogTtlRequest &) = default ;
    ModifyFullLogTtlRequest(ModifyFullLogTtlRequest &&) = default ;
    ModifyFullLogTtlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFullLogTtlRequest() = default ;
    ModifyFullLogTtlRequest& operator=(const ModifyFullLogTtlRequest &) = default ;
    ModifyFullLogTtlRequest& operator=(ModifyFullLogTtlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && this->ttl_ == nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyFullLogTtlRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline ModifyFullLogTtlRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The log storage duration of a website. Valid values: **7** to **180**. Unit: days.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
