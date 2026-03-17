// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENTERPRISECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENTERPRISECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DeleteEnterpriseCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnterpriseCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnterpriseCode, enterpriseCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnterpriseCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnterpriseCode, enterpriseCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteEnterpriseCodeRequest() = default ;
    DeleteEnterpriseCodeRequest(const DeleteEnterpriseCodeRequest &) = default ;
    DeleteEnterpriseCodeRequest(DeleteEnterpriseCodeRequest &&) = default ;
    DeleteEnterpriseCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnterpriseCodeRequest() = default ;
    DeleteEnterpriseCodeRequest& operator=(const DeleteEnterpriseCodeRequest &) = default ;
    DeleteEnterpriseCodeRequest& operator=(DeleteEnterpriseCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->enterpriseCode_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteEnterpriseCodeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enterpriseCode Field Functions 
    bool hasEnterpriseCode() const { return this->enterpriseCode_ != nullptr;};
    void deleteEnterpriseCode() { this->enterpriseCode_ = nullptr;};
    inline string getEnterpriseCode() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCode_, "") };
    inline DeleteEnterpriseCodeRequest& setEnterpriseCode(string enterpriseCode) { DARABONBA_PTR_SET_VALUE(enterpriseCode_, enterpriseCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEnterpriseCodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The enterprise code that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> enterpriseCode_ {};
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
