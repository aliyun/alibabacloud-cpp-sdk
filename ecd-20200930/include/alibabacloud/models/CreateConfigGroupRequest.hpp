// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateConfigGroupRequestConfigTimers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateConfigGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigTimers, configTimers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConfigGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigTimers, configTimers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateConfigGroupRequest() = default ;
    CreateConfigGroupRequest(const CreateConfigGroupRequest &) = default ;
    CreateConfigGroupRequest(CreateConfigGroupRequest &&) = default ;
    CreateConfigGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigGroupRequest() = default ;
    CreateConfigGroupRequest& operator=(const CreateConfigGroupRequest &) = default ;
    CreateConfigGroupRequest& operator=(CreateConfigGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configTimers_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->productType_ == nullptr && return this->regionId_ == nullptr && return this->type_ == nullptr; };
    // configTimers Field Functions 
    bool hasConfigTimers() const { return this->configTimers_ != nullptr;};
    void deleteConfigTimers() { this->configTimers_ = nullptr;};
    inline const vector<CreateConfigGroupRequestConfigTimers> & configTimers() const { DARABONBA_PTR_GET_CONST(configTimers_, vector<CreateConfigGroupRequestConfigTimers>) };
    inline vector<CreateConfigGroupRequestConfigTimers> configTimers() { DARABONBA_PTR_GET(configTimers_, vector<CreateConfigGroupRequestConfigTimers>) };
    inline CreateConfigGroupRequest& setConfigTimers(const vector<CreateConfigGroupRequestConfigTimers> & configTimers) { DARABONBA_PTR_SET_VALUE(configTimers_, configTimers) };
    inline CreateConfigGroupRequest& setConfigTimers(vector<CreateConfigGroupRequestConfigTimers> && configTimers) { DARABONBA_PTR_SET_RVALUE(configTimers_, configTimers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConfigGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateConfigGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateConfigGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateConfigGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateConfigGroupRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The scheduled task groups.
    std::shared_ptr<vector<CreateConfigGroupRequestConfigTimers>> configTimers_ = nullptr;
    // The description of the configuration group.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the configuration group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The service type of the configuration group.
    // 
    // Valid value:
    // 
    // *   CLOUD_DESKTOP: the cloud computer service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the region. Set the value to `cn-shanghai`.
    std::shared_ptr<string> regionId_ = nullptr;
    // The group type.
    // 
    // Valid value:
    // 
    // *   Timer: a scheduled task group.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
