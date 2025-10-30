// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTFACTORYBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTFACTORYBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAccountFactoryBaselineRequestBaselineItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class CreateAccountFactoryBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateAccountFactoryBaselineRequest() = default ;
    CreateAccountFactoryBaselineRequest(const CreateAccountFactoryBaselineRequest &) = default ;
    CreateAccountFactoryBaselineRequest(CreateAccountFactoryBaselineRequest &&) = default ;
    CreateAccountFactoryBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountFactoryBaselineRequest() = default ;
    CreateAccountFactoryBaselineRequest& operator=(const CreateAccountFactoryBaselineRequest &) = default ;
    CreateAccountFactoryBaselineRequest& operator=(CreateAccountFactoryBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineItems_ == nullptr
        && return this->baselineName_ == nullptr && return this->description_ == nullptr && return this->regionId_ == nullptr; };
    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<CreateAccountFactoryBaselineRequestBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<CreateAccountFactoryBaselineRequestBaselineItems>) };
    inline vector<CreateAccountFactoryBaselineRequestBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<CreateAccountFactoryBaselineRequestBaselineItems>) };
    inline CreateAccountFactoryBaselineRequest& setBaselineItems(const vector<CreateAccountFactoryBaselineRequestBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline CreateAccountFactoryBaselineRequest& setBaselineItems(vector<CreateAccountFactoryBaselineRequestBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline CreateAccountFactoryBaselineRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAccountFactoryBaselineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAccountFactoryBaselineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // An array that contains the baseline items.
    // 
    // You can call the [ListAccountFactoryBaselineItems](~~ListAccountFactoryBaselineItems~~) operation to query a list of baseline items supported by the account factory in Cloud Governance Center.
    std::shared_ptr<vector<CreateAccountFactoryBaselineRequestBaselineItems>> baselineItems_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The description of the baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
