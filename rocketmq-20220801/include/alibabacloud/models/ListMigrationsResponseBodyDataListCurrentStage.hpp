// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALISTCURRENTSTAGE_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALISTCURRENTSTAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationsResponseBodyDataListCurrentStage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBodyDataListCurrentStage& obj) { 
      DARABONBA_ANY_TO_JSON(stageData, stageData_);
      DARABONBA_PTR_TO_JSON(stageStatus, stageStatus_);
      DARABONBA_PTR_TO_JSON(stageType, stageType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBodyDataListCurrentStage& obj) { 
      DARABONBA_ANY_FROM_JSON(stageData, stageData_);
      DARABONBA_PTR_FROM_JSON(stageStatus, stageStatus_);
      DARABONBA_PTR_FROM_JSON(stageType, stageType_);
    };
    ListMigrationsResponseBodyDataListCurrentStage() = default ;
    ListMigrationsResponseBodyDataListCurrentStage(const ListMigrationsResponseBodyDataListCurrentStage &) = default ;
    ListMigrationsResponseBodyDataListCurrentStage(ListMigrationsResponseBodyDataListCurrentStage &&) = default ;
    ListMigrationsResponseBodyDataListCurrentStage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBodyDataListCurrentStage() = default ;
    ListMigrationsResponseBodyDataListCurrentStage& operator=(const ListMigrationsResponseBodyDataListCurrentStage &) = default ;
    ListMigrationsResponseBodyDataListCurrentStage& operator=(ListMigrationsResponseBodyDataListCurrentStage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stageData_ == nullptr
        && return this->stageStatus_ == nullptr && return this->stageType_ == nullptr; };
    // stageData Field Functions 
    bool hasStageData() const { return this->stageData_ != nullptr;};
    void deleteStageData() { this->stageData_ = nullptr;};
    inline     const Darabonba::Json & stageData() const { DARABONBA_GET(stageData_) };
    Darabonba::Json & stageData() { DARABONBA_GET(stageData_) };
    inline ListMigrationsResponseBodyDataListCurrentStage& setStageData(const Darabonba::Json & stageData) { DARABONBA_SET_VALUE(stageData_, stageData) };
    inline ListMigrationsResponseBodyDataListCurrentStage& setStageData(Darabonba::Json & stageData) { DARABONBA_SET_RVALUE(stageData_, stageData) };


    // stageStatus Field Functions 
    bool hasStageStatus() const { return this->stageStatus_ != nullptr;};
    void deleteStageStatus() { this->stageStatus_ = nullptr;};
    inline string stageStatus() const { DARABONBA_PTR_GET_DEFAULT(stageStatus_, "") };
    inline ListMigrationsResponseBodyDataListCurrentStage& setStageStatus(string stageStatus) { DARABONBA_PTR_SET_VALUE(stageStatus_, stageStatus) };


    // stageType Field Functions 
    bool hasStageType() const { return this->stageType_ != nullptr;};
    void deleteStageType() { this->stageType_ = nullptr;};
    inline string stageType() const { DARABONBA_PTR_GET_DEFAULT(stageType_, "") };
    inline ListMigrationsResponseBodyDataListCurrentStage& setStageType(string stageType) { DARABONBA_PTR_SET_VALUE(stageType_, stageType) };


  protected:
    Darabonba::Json stageData_ = nullptr;
    std::shared_ptr<string> stageStatus_ = nullptr;
    std::shared_ptr<string> stageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
