// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseMountParameterGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseMountParameterGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamGroupCategory, paramGroupCategory_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseMountParameterGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamGroupCategory, paramGroupCategory_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeLakebaseMountParameterGroupsRequest() = default ;
    DescribeLakebaseMountParameterGroupsRequest(const DescribeLakebaseMountParameterGroupsRequest &) = default ;
    DescribeLakebaseMountParameterGroupsRequest(DescribeLakebaseMountParameterGroupsRequest &&) = default ;
    DescribeLakebaseMountParameterGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseMountParameterGroupsRequest() = default ;
    DescribeLakebaseMountParameterGroupsRequest& operator=(const DescribeLakebaseMountParameterGroupsRequest &) = default ;
    DescribeLakebaseMountParameterGroupsRequest& operator=(DescribeLakebaseMountParameterGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramGroupCategory_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // paramGroupCategory Field Functions 
    bool hasParamGroupCategory() const { return this->paramGroupCategory_ != nullptr;};
    void deleteParamGroupCategory() { this->paramGroupCategory_ = nullptr;};
    inline string getParamGroupCategory() const { DARABONBA_PTR_GET_DEFAULT(paramGroupCategory_, "") };
    inline DescribeLakebaseMountParameterGroupsRequest& setParamGroupCategory(string paramGroupCategory) { DARABONBA_PTR_SET_VALUE(paramGroupCategory_, paramGroupCategory) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribeLakebaseMountParameterGroupsRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLakebaseMountParameterGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance category. Valid values:
    // - basic: Basic Edition.
    // - high_performance: High-performance Edition.
    shared_ptr<string> paramGroupCategory_ {};
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
