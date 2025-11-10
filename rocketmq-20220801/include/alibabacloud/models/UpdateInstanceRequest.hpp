// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateInstanceRequestAclInfo.hpp>
#include <alibabacloud/models/UpdateInstanceRequestNetworkInfo.hpp>
#include <alibabacloud/models/UpdateInstanceRequestProductInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(productInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(productInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclInfo_ == nullptr
        && return this->instanceName_ == nullptr && return this->networkInfo_ == nullptr && return this->productInfo_ == nullptr && return this->remark_ == nullptr; };
    // aclInfo Field Functions 
    bool hasAclInfo() const { return this->aclInfo_ != nullptr;};
    void deleteAclInfo() { this->aclInfo_ = nullptr;};
    inline const UpdateInstanceRequestAclInfo & aclInfo() const { DARABONBA_PTR_GET_CONST(aclInfo_, UpdateInstanceRequestAclInfo) };
    inline UpdateInstanceRequestAclInfo aclInfo() { DARABONBA_PTR_GET(aclInfo_, UpdateInstanceRequestAclInfo) };
    inline UpdateInstanceRequest& setAclInfo(const UpdateInstanceRequestAclInfo & aclInfo) { DARABONBA_PTR_SET_VALUE(aclInfo_, aclInfo) };
    inline UpdateInstanceRequest& setAclInfo(UpdateInstanceRequestAclInfo && aclInfo) { DARABONBA_PTR_SET_RVALUE(aclInfo_, aclInfo) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const UpdateInstanceRequestNetworkInfo & networkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, UpdateInstanceRequestNetworkInfo) };
    inline UpdateInstanceRequestNetworkInfo networkInfo() { DARABONBA_PTR_GET(networkInfo_, UpdateInstanceRequestNetworkInfo) };
    inline UpdateInstanceRequest& setNetworkInfo(const UpdateInstanceRequestNetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline UpdateInstanceRequest& setNetworkInfo(UpdateInstanceRequestNetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const UpdateInstanceRequestProductInfo & productInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, UpdateInstanceRequestProductInfo) };
    inline UpdateInstanceRequestProductInfo productInfo() { DARABONBA_PTR_GET(productInfo_, UpdateInstanceRequestProductInfo) };
    inline UpdateInstanceRequest& setProductInfo(const UpdateInstanceRequestProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline UpdateInstanceRequest& setProductInfo(UpdateInstanceRequestProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateInstanceRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The access control list for the instance.
    std::shared_ptr<UpdateInstanceRequestAclInfo> aclInfo_ = nullptr;
    // The updated name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The updated network information about the instance.
    std::shared_ptr<UpdateInstanceRequestNetworkInfo> networkInfo_ = nullptr;
    // Additional configurations of the instance.
    std::shared_ptr<UpdateInstanceRequestProductInfo> productInfo_ = nullptr;
    // The updated description of the instance.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
