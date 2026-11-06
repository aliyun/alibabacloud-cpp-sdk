// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLARFSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLARFSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyPolarFsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolarFsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomOssAk, customOssAk_);
      DARABONBA_PTR_TO_JSON(CustomOssSk, customOssSk_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolarFsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomOssAk, customOssAk_);
      DARABONBA_PTR_FROM_JSON(CustomOssSk, customOssSk_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    ModifyPolarFsRequest() = default ;
    ModifyPolarFsRequest(const ModifyPolarFsRequest &) = default ;
    ModifyPolarFsRequest(ModifyPolarFsRequest &&) = default ;
    ModifyPolarFsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolarFsRequest() = default ;
    ModifyPolarFsRequest& operator=(const ModifyPolarFsRequest &) = default ;
    ModifyPolarFsRequest& operator=(ModifyPolarFsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customOssAk_ == nullptr
        && this->customOssSk_ == nullptr && this->DBClusterId_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // customOssAk Field Functions 
    bool hasCustomOssAk() const { return this->customOssAk_ != nullptr;};
    void deleteCustomOssAk() { this->customOssAk_ = nullptr;};
    inline string getCustomOssAk() const { DARABONBA_PTR_GET_DEFAULT(customOssAk_, "") };
    inline ModifyPolarFsRequest& setCustomOssAk(string customOssAk) { DARABONBA_PTR_SET_VALUE(customOssAk_, customOssAk) };


    // customOssSk Field Functions 
    bool hasCustomOssSk() const { return this->customOssSk_ != nullptr;};
    void deleteCustomOssSk() { this->customOssSk_ = nullptr;};
    inline string getCustomOssSk() const { DARABONBA_PTR_GET_DEFAULT(customOssSk_, "") };
    inline ModifyPolarFsRequest& setCustomOssSk(string customOssSk) { DARABONBA_PTR_SET_VALUE(customOssSk_, customOssSk) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyPolarFsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline ModifyPolarFsRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    // The custom OSS AccessKey ID. You must specify this parameter together with CustomOssSk when you call the ModifyPolarFs operation. Otherwise, the InvalidCustomIdentityInfo.Malformed (400) error is returned.
    shared_ptr<string> customOssAk_ {};
    // The custom OSS AccessKey Secret. You must specify this parameter together with CustomOssAk when you call the ModifyPolarFs operation. Otherwise, the InvalidCustomIdentityInfo.Malformed (400) error is returned.
    shared_ptr<string> customOssSk_ {};
    // The cluster ID.
    // >You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query information about all clusters in the specified region, including cluster IDs.
    shared_ptr<string> DBClusterId_ {};
    // The PolarFs instance ID.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
