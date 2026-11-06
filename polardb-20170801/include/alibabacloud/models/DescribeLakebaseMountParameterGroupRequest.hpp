// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseMountParameterGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseMountParameterGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseMountParameterGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeLakebaseMountParameterGroupRequest() = default ;
    DescribeLakebaseMountParameterGroupRequest(const DescribeLakebaseMountParameterGroupRequest &) = default ;
    DescribeLakebaseMountParameterGroupRequest(DescribeLakebaseMountParameterGroupRequest &&) = default ;
    DescribeLakebaseMountParameterGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseMountParameterGroupRequest() = default ;
    DescribeLakebaseMountParameterGroupRequest& operator=(const DescribeLakebaseMountParameterGroupRequest &) = default ;
    DescribeLakebaseMountParameterGroupRequest& operator=(DescribeLakebaseMountParameterGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterGroupId_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline DescribeLakebaseMountParameterGroupRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribeLakebaseMountParameterGroupRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLakebaseMountParameterGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The parameter template ID.
    // 
    // This parameter is required.
    shared_ptr<string> parameterGroupId_ {};
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
