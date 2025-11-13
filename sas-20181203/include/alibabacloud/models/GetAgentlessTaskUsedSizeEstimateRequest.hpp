// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTLESSTASKUSEDSIZEESTIMATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTLESSTASKUSEDSIZEESTIMATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAgentlessTaskUsedSizeEstimateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentlessTaskUsedSizeEstimateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetSelectionType, assetSelectionType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentlessTaskUsedSizeEstimateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetSelectionType, assetSelectionType_);
    };
    GetAgentlessTaskUsedSizeEstimateRequest() = default ;
    GetAgentlessTaskUsedSizeEstimateRequest(const GetAgentlessTaskUsedSizeEstimateRequest &) = default ;
    GetAgentlessTaskUsedSizeEstimateRequest(GetAgentlessTaskUsedSizeEstimateRequest &&) = default ;
    GetAgentlessTaskUsedSizeEstimateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentlessTaskUsedSizeEstimateRequest() = default ;
    GetAgentlessTaskUsedSizeEstimateRequest& operator=(const GetAgentlessTaskUsedSizeEstimateRequest &) = default ;
    GetAgentlessTaskUsedSizeEstimateRequest& operator=(GetAgentlessTaskUsedSizeEstimateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetSelectionType_ == nullptr; };
    // assetSelectionType Field Functions 
    bool hasAssetSelectionType() const { return this->assetSelectionType_ != nullptr;};
    void deleteAssetSelectionType() { this->assetSelectionType_ = nullptr;};
    inline string assetSelectionType() const { DARABONBA_PTR_GET_DEFAULT(assetSelectionType_, "") };
    inline GetAgentlessTaskUsedSizeEstimateRequest& setAssetSelectionType(string assetSelectionType) { DARABONBA_PTR_SET_VALUE(assetSelectionType_, assetSelectionType) };


  protected:
    // Asset selection identifier.
    // 
    // This parameter is required.
    std::shared_ptr<string> assetSelectionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
