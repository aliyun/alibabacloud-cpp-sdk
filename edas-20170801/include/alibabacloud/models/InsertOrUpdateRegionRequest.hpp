// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTORUPDATEREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTORUPDATEREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertOrUpdateRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertOrUpdateRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DebugEnable, debugEnable_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(RegionTag, regionTag_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
    };
    friend void from_json(const Darabonba::Json& j, InsertOrUpdateRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DebugEnable, debugEnable_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(RegionTag, regionTag_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
    };
    InsertOrUpdateRegionRequest() = default ;
    InsertOrUpdateRegionRequest(const InsertOrUpdateRegionRequest &) = default ;
    InsertOrUpdateRegionRequest(InsertOrUpdateRegionRequest &&) = default ;
    InsertOrUpdateRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertOrUpdateRegionRequest() = default ;
    InsertOrUpdateRegionRequest& operator=(const InsertOrUpdateRegionRequest &) = default ;
    InsertOrUpdateRegionRequest& operator=(InsertOrUpdateRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debugEnable_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->mseInstanceId_ == nullptr && return this->regionName_ == nullptr && return this->regionTag_ == nullptr
        && return this->registryType_ == nullptr; };
    // debugEnable Field Functions 
    bool hasDebugEnable() const { return this->debugEnable_ != nullptr;};
    void deleteDebugEnable() { this->debugEnable_ = nullptr;};
    inline bool debugEnable() const { DARABONBA_PTR_GET_DEFAULT(debugEnable_, false) };
    inline InsertOrUpdateRegionRequest& setDebugEnable(bool debugEnable) { DARABONBA_PTR_SET_VALUE(debugEnable_, debugEnable) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline InsertOrUpdateRegionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline InsertOrUpdateRegionRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mseInstanceId Field Functions 
    bool hasMseInstanceId() const { return this->mseInstanceId_ != nullptr;};
    void deleteMseInstanceId() { this->mseInstanceId_ = nullptr;};
    inline string mseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mseInstanceId_, "") };
    inline InsertOrUpdateRegionRequest& setMseInstanceId(string mseInstanceId) { DARABONBA_PTR_SET_VALUE(mseInstanceId_, mseInstanceId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline InsertOrUpdateRegionRequest& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // regionTag Field Functions 
    bool hasRegionTag() const { return this->regionTag_ != nullptr;};
    void deleteRegionTag() { this->regionTag_ = nullptr;};
    inline string regionTag() const { DARABONBA_PTR_GET_DEFAULT(regionTag_, "") };
    inline InsertOrUpdateRegionRequest& setRegionTag(string regionTag) { DARABONBA_PTR_SET_VALUE(regionTag_, regionTag) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline InsertOrUpdateRegionRequest& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


  protected:
    // Specifies whether to enable remote debugging. Valid values:
    // 
    // *   true: enables remote debugging.
    // *   false: disables remote debugging.
    std::shared_ptr<bool> debugEnable_ = nullptr;
    // The description of the namespace. The description can be up to 128 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to create or modify the namespace. If this parameter is left empty or is set to 0, the namespace is created. Otherwise, the namespace is modified.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the MSE registry.
    std::shared_ptr<string> mseInstanceId_ = nullptr;
    // The name of the namespace. The name can be up to 63 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionName_ = nullptr;
    // The ID of the namespace.
    // 
    // *   The ID of a custom namespace is in the `Region ID:Namespace identifier` format. Example: cn-beijing:tdy218.
    // *   The ID of the default namespace is in the `region ID` format. Example: cn-beijing.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionTag_ = nullptr;
    // The type of the registry.
    // 
    // *   default: the shared registry of Enterprise Distributed Application Service (EDAS)
    // *   exclusive_mse: a Microservices Engine (MSE) registry
    std::shared_ptr<string> registryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
