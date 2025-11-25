// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODYGROUPEDFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYRESPONSEBODYGROUPEDFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryResponseBodyGroupedFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryResponseBodyGroupedFields& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetSummaryMetas, cloudAssetSummaryMetas_);
      DARABONBA_PTR_TO_JSON(InstanceCountTotal, instanceCountTotal_);
      DARABONBA_PTR_TO_JSON(InstanceRiskCountTotal, instanceRiskCountTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryResponseBodyGroupedFields& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetSummaryMetas, cloudAssetSummaryMetas_);
      DARABONBA_PTR_FROM_JSON(InstanceCountTotal, instanceCountTotal_);
      DARABONBA_PTR_FROM_JSON(InstanceRiskCountTotal, instanceRiskCountTotal_);
    };
    GetCloudAssetSummaryResponseBodyGroupedFields() = default ;
    GetCloudAssetSummaryResponseBodyGroupedFields(const GetCloudAssetSummaryResponseBodyGroupedFields &) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFields(GetCloudAssetSummaryResponseBodyGroupedFields &&) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryResponseBodyGroupedFields() = default ;
    GetCloudAssetSummaryResponseBodyGroupedFields& operator=(const GetCloudAssetSummaryResponseBodyGroupedFields &) = default ;
    GetCloudAssetSummaryResponseBodyGroupedFields& operator=(GetCloudAssetSummaryResponseBodyGroupedFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAssetSummaryMetas_ == nullptr
        && return this->instanceCountTotal_ == nullptr && return this->instanceRiskCountTotal_ == nullptr; };
    // cloudAssetSummaryMetas Field Functions 
    bool hasCloudAssetSummaryMetas() const { return this->cloudAssetSummaryMetas_ != nullptr;};
    void deleteCloudAssetSummaryMetas() { this->cloudAssetSummaryMetas_ = nullptr;};
    inline const vector<Models::GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas> & cloudAssetSummaryMetas() const { DARABONBA_PTR_GET_CONST(cloudAssetSummaryMetas_, vector<Models::GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas>) };
    inline vector<Models::GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas> cloudAssetSummaryMetas() { DARABONBA_PTR_GET(cloudAssetSummaryMetas_, vector<Models::GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas>) };
    inline GetCloudAssetSummaryResponseBodyGroupedFields& setCloudAssetSummaryMetas(const vector<Models::GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas> & cloudAssetSummaryMetas) { DARABONBA_PTR_SET_VALUE(cloudAssetSummaryMetas_, cloudAssetSummaryMetas) };
    inline GetCloudAssetSummaryResponseBodyGroupedFields& setCloudAssetSummaryMetas(vector<Models::GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas> && cloudAssetSummaryMetas) { DARABONBA_PTR_SET_RVALUE(cloudAssetSummaryMetas_, cloudAssetSummaryMetas) };


    // instanceCountTotal Field Functions 
    bool hasInstanceCountTotal() const { return this->instanceCountTotal_ != nullptr;};
    void deleteInstanceCountTotal() { this->instanceCountTotal_ = nullptr;};
    inline int32_t instanceCountTotal() const { DARABONBA_PTR_GET_DEFAULT(instanceCountTotal_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFields& setInstanceCountTotal(int32_t instanceCountTotal) { DARABONBA_PTR_SET_VALUE(instanceCountTotal_, instanceCountTotal) };


    // instanceRiskCountTotal Field Functions 
    bool hasInstanceRiskCountTotal() const { return this->instanceRiskCountTotal_ != nullptr;};
    void deleteInstanceRiskCountTotal() { this->instanceRiskCountTotal_ = nullptr;};
    inline int32_t instanceRiskCountTotal() const { DARABONBA_PTR_GET_DEFAULT(instanceRiskCountTotal_, 0) };
    inline GetCloudAssetSummaryResponseBodyGroupedFields& setInstanceRiskCountTotal(int32_t instanceRiskCountTotal) { DARABONBA_PTR_SET_VALUE(instanceRiskCountTotal_, instanceRiskCountTotal) };


  protected:
    // List of cloud product statistics
    std::shared_ptr<vector<Models::GetCloudAssetSummaryResponseBodyGroupedFieldsCloudAssetSummaryMetas>> cloudAssetSummaryMetas_ = nullptr;
    // Total number of cloud product instances.
    std::shared_ptr<int32_t> instanceCountTotal_ = nullptr;
    // Total number of cloud product instances at risk
    std::shared_ptr<int32_t> instanceRiskCountTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
