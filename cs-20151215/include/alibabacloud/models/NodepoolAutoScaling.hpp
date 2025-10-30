// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLAUTOSCALING_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLAUTOSCALING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolAutoScaling : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolAutoScaling& obj) { 
      DARABONBA_PTR_TO_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_TO_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_TO_JSON(min_instances, minInstances_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolAutoScaling& obj) { 
      DARABONBA_PTR_FROM_JSON(eip_bandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(eip_internet_charge_type, eipInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(is_bond_eip, isBondEip_);
      DARABONBA_PTR_FROM_JSON(max_instances, maxInstances_);
      DARABONBA_PTR_FROM_JSON(min_instances, minInstances_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    NodepoolAutoScaling() = default ;
    NodepoolAutoScaling(const NodepoolAutoScaling &) = default ;
    NodepoolAutoScaling(NodepoolAutoScaling &&) = default ;
    NodepoolAutoScaling(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolAutoScaling() = default ;
    NodepoolAutoScaling& operator=(const NodepoolAutoScaling &) = default ;
    NodepoolAutoScaling& operator=(NodepoolAutoScaling &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipBandwidth_ == nullptr
        && return this->eipInternetChargeType_ == nullptr && return this->enable_ == nullptr && return this->isBondEip_ == nullptr && return this->maxInstances_ == nullptr && return this->minInstances_ == nullptr
        && return this->type_ == nullptr; };
    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int64_t eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0L) };
    inline NodepoolAutoScaling& setEipBandwidth(int64_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // eipInternetChargeType Field Functions 
    bool hasEipInternetChargeType() const { return this->eipInternetChargeType_ != nullptr;};
    void deleteEipInternetChargeType() { this->eipInternetChargeType_ = nullptr;};
    inline string eipInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(eipInternetChargeType_, "") };
    inline NodepoolAutoScaling& setEipInternetChargeType(string eipInternetChargeType) { DARABONBA_PTR_SET_VALUE(eipInternetChargeType_, eipInternetChargeType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline NodepoolAutoScaling& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // isBondEip Field Functions 
    bool hasIsBondEip() const { return this->isBondEip_ != nullptr;};
    void deleteIsBondEip() { this->isBondEip_ = nullptr;};
    inline bool isBondEip() const { DARABONBA_PTR_GET_DEFAULT(isBondEip_, false) };
    inline NodepoolAutoScaling& setIsBondEip(bool isBondEip) { DARABONBA_PTR_SET_VALUE(isBondEip_, isBondEip) };


    // maxInstances Field Functions 
    bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
    void deleteMaxInstances() { this->maxInstances_ = nullptr;};
    inline int64_t maxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0L) };
    inline NodepoolAutoScaling& setMaxInstances(int64_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t minInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline NodepoolAutoScaling& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NodepoolAutoScaling& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> eipBandwidth_ = nullptr;
    std::shared_ptr<string> eipInternetChargeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<bool> isBondEip_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> maxInstances_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> minInstances_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
