// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORQUITLANECMD_HPP_
#define ALIBABACLOUD_MODELS_ADDORQUITLANECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AddOrQuitLaneCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrQuitLaneCmd& obj) { 
      DARABONBA_PTR_TO_JSON(laneIds, laneIds_);
      DARABONBA_PTR_TO_JSON(operateType, operateType_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrQuitLaneCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(laneIds, laneIds_);
      DARABONBA_PTR_FROM_JSON(operateType, operateType_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
    };
    AddOrQuitLaneCmd() = default ;
    AddOrQuitLaneCmd(const AddOrQuitLaneCmd &) = default ;
    AddOrQuitLaneCmd(AddOrQuitLaneCmd &&) = default ;
    AddOrQuitLaneCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrQuitLaneCmd() = default ;
    AddOrQuitLaneCmd& operator=(const AddOrQuitLaneCmd &) = default ;
    AddOrQuitLaneCmd& operator=(AddOrQuitLaneCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->laneIds_ == nullptr
        && this->operateType_ == nullptr && this->serviceGroupId_ == nullptr; };
    // laneIds Field Functions 
    bool hasLaneIds() const { return this->laneIds_ != nullptr;};
    void deleteLaneIds() { this->laneIds_ = nullptr;};
    inline string getLaneIds() const { DARABONBA_PTR_GET_DEFAULT(laneIds_, "") };
    inline AddOrQuitLaneCmd& setLaneIds(string laneIds) { DARABONBA_PTR_SET_VALUE(laneIds_, laneIds) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline AddOrQuitLaneCmd& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline AddOrQuitLaneCmd& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> laneIds_ {};
    // This parameter is required.
    shared_ptr<string> operateType_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
