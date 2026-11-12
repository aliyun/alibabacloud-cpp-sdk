// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERTEMPLATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERTEMPLATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseMountParameterTemplateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseMountParameterTemplateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ParamGroupCategory, paramGroupCategory_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseMountParameterTemplateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ParamGroupCategory, paramGroupCategory_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeLakebaseMountParameterTemplateListRequest() = default ;
    DescribeLakebaseMountParameterTemplateListRequest(const DescribeLakebaseMountParameterTemplateListRequest &) = default ;
    DescribeLakebaseMountParameterTemplateListRequest(DescribeLakebaseMountParameterTemplateListRequest &&) = default ;
    DescribeLakebaseMountParameterTemplateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseMountParameterTemplateListRequest() = default ;
    DescribeLakebaseMountParameterTemplateListRequest& operator=(const DescribeLakebaseMountParameterTemplateListRequest &) = default ;
    DescribeLakebaseMountParameterTemplateListRequest& operator=(DescribeLakebaseMountParameterTemplateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && this->paramGroupCategory_ == nullptr && this->polarFsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeLakebaseMountParameterTemplateListRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // paramGroupCategory Field Functions 
    bool hasParamGroupCategory() const { return this->paramGroupCategory_ != nullptr;};
    void deleteParamGroupCategory() { this->paramGroupCategory_ = nullptr;};
    inline string getParamGroupCategory() const { DARABONBA_PTR_GET_DEFAULT(paramGroupCategory_, "") };
    inline DescribeLakebaseMountParameterTemplateListRequest& setParamGroupCategory(string paramGroupCategory) { DARABONBA_PTR_SET_VALUE(paramGroupCategory_, paramGroupCategory) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribeLakebaseMountParameterTemplateListRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLakebaseMountParameterTemplateListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The engine. Set the value to polar_3fs.
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The instance category. Valid values: basic (Basic Edition) and high_performance (High-performance Edition).
    shared_ptr<string> paramGroupCategory_ {};
    // The PolarFS instance ID. You can call DescribePolarFs to query available PolarFS instances and use the returned PolarFsInstanceId.
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
