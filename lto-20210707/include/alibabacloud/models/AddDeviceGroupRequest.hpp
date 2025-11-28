// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AddDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, AddDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedCount, authorizedCount_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    AddDeviceGroupRequest() = default ;
    AddDeviceGroupRequest(const AddDeviceGroupRequest &) = default ;
    AddDeviceGroupRequest(AddDeviceGroupRequest &&) = default ;
    AddDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDeviceGroupRequest() = default ;
    AddDeviceGroupRequest& operator=(const AddDeviceGroupRequest &) = default ;
    AddDeviceGroupRequest& operator=(AddDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedCount_ == nullptr
        && return this->productKey_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr; };
    // authorizedCount Field Functions 
    bool hasAuthorizedCount() const { return this->authorizedCount_ != nullptr;};
    void deleteAuthorizedCount() { this->authorizedCount_ = nullptr;};
    inline int32_t authorizedCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedCount_, 0) };
    inline AddDeviceGroupRequest& setAuthorizedCount(int32_t authorizedCount) { DARABONBA_PTR_SET_VALUE(authorizedCount_, authorizedCount) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline AddDeviceGroupRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddDeviceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddDeviceGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<int32_t> authorizedCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productKey_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
