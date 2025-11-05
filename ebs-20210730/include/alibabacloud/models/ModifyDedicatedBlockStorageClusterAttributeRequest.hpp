// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDBLOCKSTORAGECLUSTERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDBLOCKSTORAGECLUSTERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ModifyDedicatedBlockStorageClusterAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedBlockStorageClusterAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DbscId, dbscId_);
      DARABONBA_PTR_TO_JSON(DbscName, dbscName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedBlockStorageClusterAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DbscId, dbscId_);
      DARABONBA_PTR_FROM_JSON(DbscName, dbscName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDedicatedBlockStorageClusterAttributeRequest() = default ;
    ModifyDedicatedBlockStorageClusterAttributeRequest(const ModifyDedicatedBlockStorageClusterAttributeRequest &) = default ;
    ModifyDedicatedBlockStorageClusterAttributeRequest(ModifyDedicatedBlockStorageClusterAttributeRequest &&) = default ;
    ModifyDedicatedBlockStorageClusterAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedBlockStorageClusterAttributeRequest() = default ;
    ModifyDedicatedBlockStorageClusterAttributeRequest& operator=(const ModifyDedicatedBlockStorageClusterAttributeRequest &) = default ;
    ModifyDedicatedBlockStorageClusterAttributeRequest& operator=(ModifyDedicatedBlockStorageClusterAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dbscId_ == nullptr && return this->dbscName_ == nullptr && return this->description_ == nullptr && return this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDedicatedBlockStorageClusterAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dbscId Field Functions 
    bool hasDbscId() const { return this->dbscId_ != nullptr;};
    void deleteDbscId() { this->dbscId_ = nullptr;};
    inline string dbscId() const { DARABONBA_PTR_GET_DEFAULT(dbscId_, "") };
    inline ModifyDedicatedBlockStorageClusterAttributeRequest& setDbscId(string dbscId) { DARABONBA_PTR_SET_VALUE(dbscId_, dbscId) };


    // dbscName Field Functions 
    bool hasDbscName() const { return this->dbscName_ != nullptr;};
    void deleteDbscName() { this->dbscName_ = nullptr;};
    inline string dbscName() const { DARABONBA_PTR_GET_DEFAULT(dbscName_, "") };
    inline ModifyDedicatedBlockStorageClusterAttributeRequest& setDbscName(string dbscName) { DARABONBA_PTR_SET_VALUE(dbscName_, dbscName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDedicatedBlockStorageClusterAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDedicatedBlockStorageClusterAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests.
    // 
    // The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure idempotence ](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbscId_ = nullptr;
    // The new name of the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbscName_ = nullptr;
    // The new description of dedicated block storage cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The region ID of the dedicated block storage cluster. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
