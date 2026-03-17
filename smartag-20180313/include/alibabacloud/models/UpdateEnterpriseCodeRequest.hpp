// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENTERPRISECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENTERPRISECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateEnterpriseCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnterpriseCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnterpriseCode, enterpriseCode_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnterpriseCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnterpriseCode, enterpriseCode_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateEnterpriseCodeRequest() = default ;
    UpdateEnterpriseCodeRequest(const UpdateEnterpriseCodeRequest &) = default ;
    UpdateEnterpriseCodeRequest(UpdateEnterpriseCodeRequest &&) = default ;
    UpdateEnterpriseCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnterpriseCodeRequest() = default ;
    UpdateEnterpriseCodeRequest& operator=(const UpdateEnterpriseCodeRequest &) = default ;
    UpdateEnterpriseCodeRequest& operator=(UpdateEnterpriseCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->enterpriseCode_ == nullptr && this->isDefault_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEnterpriseCodeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enterpriseCode Field Functions 
    bool hasEnterpriseCode() const { return this->enterpriseCode_ != nullptr;};
    void deleteEnterpriseCode() { this->enterpriseCode_ = nullptr;};
    inline string getEnterpriseCode() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCode_, "") };
    inline UpdateEnterpriseCodeRequest& setEnterpriseCode(string enterpriseCode) { DARABONBA_PTR_SET_VALUE(enterpriseCode_, enterpriseCode) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline UpdateEnterpriseCodeRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEnterpriseCodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The enterprise code.
    // 
    // This parameter is required.
    shared_ptr<string> enterpriseCode_ {};
    // Specifies whether to specify the enterprise code as the default one. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    // 
    // This parameter is required.
    shared_ptr<bool> isDefault_ {};
    // The ID of the region to which the enterprise code belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
