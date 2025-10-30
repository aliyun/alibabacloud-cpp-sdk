// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTFACTORYBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTFACTORYBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAccountFactoryBaselineRequestBaselineItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class UpdateAccountFactoryBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateAccountFactoryBaselineRequest() = default ;
    UpdateAccountFactoryBaselineRequest(const UpdateAccountFactoryBaselineRequest &) = default ;
    UpdateAccountFactoryBaselineRequest(UpdateAccountFactoryBaselineRequest &&) = default ;
    UpdateAccountFactoryBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountFactoryBaselineRequest() = default ;
    UpdateAccountFactoryBaselineRequest& operator=(const UpdateAccountFactoryBaselineRequest &) = default ;
    UpdateAccountFactoryBaselineRequest& operator=(UpdateAccountFactoryBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->baselineItems_ == nullptr && return this->baselineName_ == nullptr && return this->description_ == nullptr && return this->regionId_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline UpdateAccountFactoryBaselineRequest& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<UpdateAccountFactoryBaselineRequestBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<UpdateAccountFactoryBaselineRequestBaselineItems>) };
    inline vector<UpdateAccountFactoryBaselineRequestBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<UpdateAccountFactoryBaselineRequestBaselineItems>) };
    inline UpdateAccountFactoryBaselineRequest& setBaselineItems(const vector<UpdateAccountFactoryBaselineRequestBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline UpdateAccountFactoryBaselineRequest& setBaselineItems(vector<UpdateAccountFactoryBaselineRequestBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline UpdateAccountFactoryBaselineRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAccountFactoryBaselineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAccountFactoryBaselineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The baseline ID.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The baseline items.
    // 
    // You can call the [ListAccountFactoryBaselineItems](~~ListAccountFactoryBaselineItems~~) operation to query a list of baseline items supported by the account factory in Cloud Governance Center.
    std::shared_ptr<vector<UpdateAccountFactoryBaselineRequestBaselineItems>> baselineItems_ = nullptr;
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
