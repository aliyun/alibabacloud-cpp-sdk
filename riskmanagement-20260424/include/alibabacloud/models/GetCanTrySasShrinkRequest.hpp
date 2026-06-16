// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCANTRYSASSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCANTRYSASSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetCanTrySasShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCanTrySasShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequestShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetCanTrySasShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequestShrink_);
    };
    GetCanTrySasShrinkRequest() = default ;
    GetCanTrySasShrinkRequest(const GetCanTrySasShrinkRequest &) = default ;
    GetCanTrySasShrinkRequest(GetCanTrySasShrinkRequest &&) = default ;
    GetCanTrySasShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCanTrySasShrinkRequest() = default ;
    GetCanTrySasShrinkRequest& operator=(const GetCanTrySasShrinkRequest &) = default ;
    GetCanTrySasShrinkRequest& operator=(GetCanTrySasShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequestShrink_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCanTrySasShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequestShrink Field Functions 
    bool hasSdkRequestShrink() const { return this->sdkRequestShrink_ != nullptr;};
    void deleteSdkRequestShrink() { this->sdkRequestShrink_ = nullptr;};
    inline string getSdkRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(sdkRequestShrink_, "") };
    inline GetCanTrySasShrinkRequest& setSdkRequestShrink(string sdkRequestShrink) { DARABONBA_PTR_SET_VALUE(sdkRequestShrink_, sdkRequestShrink) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sdkRequestShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
