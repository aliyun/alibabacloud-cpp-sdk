// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTTEECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUESTTEECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolRequestTeeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequestTeeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(tee_enable, teeEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequestTeeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(tee_enable, teeEnable_);
    };
    ModifyClusterNodePoolRequestTeeConfig() = default ;
    ModifyClusterNodePoolRequestTeeConfig(const ModifyClusterNodePoolRequestTeeConfig &) = default ;
    ModifyClusterNodePoolRequestTeeConfig(ModifyClusterNodePoolRequestTeeConfig &&) = default ;
    ModifyClusterNodePoolRequestTeeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequestTeeConfig() = default ;
    ModifyClusterNodePoolRequestTeeConfig& operator=(const ModifyClusterNodePoolRequestTeeConfig &) = default ;
    ModifyClusterNodePoolRequestTeeConfig& operator=(ModifyClusterNodePoolRequestTeeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->teeEnable_ != nullptr; };
    // teeEnable Field Functions 
    bool hasTeeEnable() const { return this->teeEnable_ != nullptr;};
    void deleteTeeEnable() { this->teeEnable_ = nullptr;};
    inline bool teeEnable() const { DARABONBA_PTR_GET_DEFAULT(teeEnable_, false) };
    inline ModifyClusterNodePoolRequestTeeConfig& setTeeEnable(bool teeEnable) { DARABONBA_PTR_SET_VALUE(teeEnable_, teeEnable) };


  protected:
    // Specifies whether to enable confidential computing for the cluster. Valid values:
    // 
    // *   `true`: enables confidential computing for the cluster.
    // *   `false`: disables confidential computing for the cluster.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> teeEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
