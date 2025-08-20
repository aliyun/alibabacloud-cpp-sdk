// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUESTRAYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUESTRAYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBResourceGroupRequestRayConfigWorkerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateDBResourceGroupRequestRayConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBResourceGroupRequestRayConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EnableUserEni, enableUserEni_);
      DARABONBA_PTR_TO_JSON(HeadAllocateUnit, headAllocateUnit_);
      DARABONBA_PTR_TO_JSON(HeadDiskCapacity, headDiskCapacity_);
      DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(HeadSpecType, headSpecType_);
      DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResourceGroupRequestRayConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EnableUserEni, enableUserEni_);
      DARABONBA_PTR_FROM_JSON(HeadAllocateUnit, headAllocateUnit_);
      DARABONBA_PTR_FROM_JSON(HeadDiskCapacity, headDiskCapacity_);
      DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(HeadSpecType, headSpecType_);
      DARABONBA_PTR_FROM_JSON(WorkerGroups, workerGroups_);
    };
    CreateDBResourceGroupRequestRayConfig() = default ;
    CreateDBResourceGroupRequestRayConfig(const CreateDBResourceGroupRequestRayConfig &) = default ;
    CreateDBResourceGroupRequestRayConfig(CreateDBResourceGroupRequestRayConfig &&) = default ;
    CreateDBResourceGroupRequestRayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBResourceGroupRequestRayConfig() = default ;
    CreateDBResourceGroupRequestRayConfig& operator=(const CreateDBResourceGroupRequestRayConfig &) = default ;
    CreateDBResourceGroupRequestRayConfig& operator=(CreateDBResourceGroupRequestRayConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->enableUserEni_ != nullptr && this->headAllocateUnit_ != nullptr && this->headDiskCapacity_ != nullptr && this->headSpec_ != nullptr && this->headSpecType_ != nullptr
        && this->workerGroups_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateDBResourceGroupRequestRayConfig& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // enableUserEni Field Functions 
    bool hasEnableUserEni() const { return this->enableUserEni_ != nullptr;};
    void deleteEnableUserEni() { this->enableUserEni_ = nullptr;};
    inline bool enableUserEni() const { DARABONBA_PTR_GET_DEFAULT(enableUserEni_, false) };
    inline CreateDBResourceGroupRequestRayConfig& setEnableUserEni(bool enableUserEni) { DARABONBA_PTR_SET_VALUE(enableUserEni_, enableUserEni) };


    // headAllocateUnit Field Functions 
    bool hasHeadAllocateUnit() const { return this->headAllocateUnit_ != nullptr;};
    void deleteHeadAllocateUnit() { this->headAllocateUnit_ = nullptr;};
    inline string headAllocateUnit() const { DARABONBA_PTR_GET_DEFAULT(headAllocateUnit_, "") };
    inline CreateDBResourceGroupRequestRayConfig& setHeadAllocateUnit(string headAllocateUnit) { DARABONBA_PTR_SET_VALUE(headAllocateUnit_, headAllocateUnit) };


    // headDiskCapacity Field Functions 
    bool hasHeadDiskCapacity() const { return this->headDiskCapacity_ != nullptr;};
    void deleteHeadDiskCapacity() { this->headDiskCapacity_ = nullptr;};
    inline string headDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(headDiskCapacity_, "") };
    inline CreateDBResourceGroupRequestRayConfig& setHeadDiskCapacity(string headDiskCapacity) { DARABONBA_PTR_SET_VALUE(headDiskCapacity_, headDiskCapacity) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline string headSpec() const { DARABONBA_PTR_GET_DEFAULT(headSpec_, "") };
    inline CreateDBResourceGroupRequestRayConfig& setHeadSpec(string headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };


    // headSpecType Field Functions 
    bool hasHeadSpecType() const { return this->headSpecType_ != nullptr;};
    void deleteHeadSpecType() { this->headSpecType_ = nullptr;};
    inline string headSpecType() const { DARABONBA_PTR_GET_DEFAULT(headSpecType_, "") };
    inline CreateDBResourceGroupRequestRayConfig& setHeadSpecType(string headSpecType) { DARABONBA_PTR_SET_VALUE(headSpecType_, headSpecType) };


    // workerGroups Field Functions 
    bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
    void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
    inline const vector<Models::CreateDBResourceGroupRequestRayConfigWorkerGroups> & workerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<Models::CreateDBResourceGroupRequestRayConfigWorkerGroups>) };
    inline vector<Models::CreateDBResourceGroupRequestRayConfigWorkerGroups> workerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<Models::CreateDBResourceGroupRequestRayConfigWorkerGroups>) };
    inline CreateDBResourceGroupRequestRayConfig& setWorkerGroups(const vector<Models::CreateDBResourceGroupRequestRayConfigWorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
    inline CreateDBResourceGroupRequestRayConfig& setWorkerGroups(vector<Models::CreateDBResourceGroupRequestRayConfigWorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<bool> enableUserEni_ = nullptr;
    std::shared_ptr<string> headAllocateUnit_ = nullptr;
    std::shared_ptr<string> headDiskCapacity_ = nullptr;
    std::shared_ptr<string> headSpec_ = nullptr;
    std::shared_ptr<string> headSpecType_ = nullptr;
    std::shared_ptr<vector<Models::CreateDBResourceGroupRequestRayConfigWorkerGroups>> workerGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
