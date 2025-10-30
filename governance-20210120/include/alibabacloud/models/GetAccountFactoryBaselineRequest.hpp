// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFACTORYBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFACTORYBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetAccountFactoryBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAccountFactoryBaselineRequest() = default ;
    GetAccountFactoryBaselineRequest(const GetAccountFactoryBaselineRequest &) = default ;
    GetAccountFactoryBaselineRequest(GetAccountFactoryBaselineRequest &&) = default ;
    GetAccountFactoryBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountFactoryBaselineRequest() = default ;
    GetAccountFactoryBaselineRequest& operator=(const GetAccountFactoryBaselineRequest &) = default ;
    GetAccountFactoryBaselineRequest& operator=(GetAccountFactoryBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->regionId_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline GetAccountFactoryBaselineRequest& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAccountFactoryBaselineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The baseline ID.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
