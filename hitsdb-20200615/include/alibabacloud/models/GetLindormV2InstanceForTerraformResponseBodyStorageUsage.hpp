// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEFORTERRAFORMRESPONSEBODYSTORAGEUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCEFORTERRAFORMRESPONSEBODYSTORAGEUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceForTerraformResponseBodyStorageUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceForTerraformResponseBodyStorageUsage& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityByDiskCategory, capacityByDiskCategory_);
      DARABONBA_ANY_TO_JSON(EngineUsage, engineUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceForTerraformResponseBodyStorageUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityByDiskCategory, capacityByDiskCategory_);
      DARABONBA_ANY_FROM_JSON(EngineUsage, engineUsage_);
    };
    GetLindormV2InstanceForTerraformResponseBodyStorageUsage() = default ;
    GetLindormV2InstanceForTerraformResponseBodyStorageUsage(const GetLindormV2InstanceForTerraformResponseBodyStorageUsage &) = default ;
    GetLindormV2InstanceForTerraformResponseBodyStorageUsage(GetLindormV2InstanceForTerraformResponseBodyStorageUsage &&) = default ;
    GetLindormV2InstanceForTerraformResponseBodyStorageUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceForTerraformResponseBodyStorageUsage() = default ;
    GetLindormV2InstanceForTerraformResponseBodyStorageUsage& operator=(const GetLindormV2InstanceForTerraformResponseBodyStorageUsage &) = default ;
    GetLindormV2InstanceForTerraformResponseBodyStorageUsage& operator=(GetLindormV2InstanceForTerraformResponseBodyStorageUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityByDiskCategory_ == nullptr
        && return this->engineUsage_ == nullptr; };
    // capacityByDiskCategory Field Functions 
    bool hasCapacityByDiskCategory() const { return this->capacityByDiskCategory_ != nullptr;};
    void deleteCapacityByDiskCategory() { this->capacityByDiskCategory_ = nullptr;};
    inline const vector<Darabonba::Json> & capacityByDiskCategory() const { DARABONBA_PTR_GET_CONST(capacityByDiskCategory_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> capacityByDiskCategory() { DARABONBA_PTR_GET(capacityByDiskCategory_, vector<Darabonba::Json>) };
    inline GetLindormV2InstanceForTerraformResponseBodyStorageUsage& setCapacityByDiskCategory(const vector<Darabonba::Json> & capacityByDiskCategory) { DARABONBA_PTR_SET_VALUE(capacityByDiskCategory_, capacityByDiskCategory) };
    inline GetLindormV2InstanceForTerraformResponseBodyStorageUsage& setCapacityByDiskCategory(vector<Darabonba::Json> && capacityByDiskCategory) { DARABONBA_PTR_SET_RVALUE(capacityByDiskCategory_, capacityByDiskCategory) };


    // engineUsage Field Functions 
    bool hasEngineUsage() const { return this->engineUsage_ != nullptr;};
    void deleteEngineUsage() { this->engineUsage_ = nullptr;};
    inline     const Darabonba::Json & engineUsage() const { DARABONBA_GET(engineUsage_) };
    Darabonba::Json & engineUsage() { DARABONBA_GET(engineUsage_) };
    inline GetLindormV2InstanceForTerraformResponseBodyStorageUsage& setEngineUsage(const Darabonba::Json & engineUsage) { DARABONBA_SET_VALUE(engineUsage_, engineUsage) };
    inline GetLindormV2InstanceForTerraformResponseBodyStorageUsage& setEngineUsage(Darabonba::Json & engineUsage) { DARABONBA_SET_RVALUE(engineUsage_, engineUsage) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> capacityByDiskCategory_ = nullptr;
    Darabonba::Json engineUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
