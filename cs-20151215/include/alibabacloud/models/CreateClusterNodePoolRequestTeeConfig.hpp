// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTTEECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTTEECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestTeeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestTeeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(tee_enable, teeEnable_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestTeeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(tee_enable, teeEnable_);
    };
    CreateClusterNodePoolRequestTeeConfig() = default ;
    CreateClusterNodePoolRequestTeeConfig(const CreateClusterNodePoolRequestTeeConfig &) = default ;
    CreateClusterNodePoolRequestTeeConfig(CreateClusterNodePoolRequestTeeConfig &&) = default ;
    CreateClusterNodePoolRequestTeeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestTeeConfig() = default ;
    CreateClusterNodePoolRequestTeeConfig& operator=(const CreateClusterNodePoolRequestTeeConfig &) = default ;
    CreateClusterNodePoolRequestTeeConfig& operator=(CreateClusterNodePoolRequestTeeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->teeEnable_ == nullptr; };
    // teeEnable Field Functions 
    bool hasTeeEnable() const { return this->teeEnable_ != nullptr;};
    void deleteTeeEnable() { this->teeEnable_ = nullptr;};
    inline bool teeEnable() const { DARABONBA_PTR_GET_DEFAULT(teeEnable_, false) };
    inline CreateClusterNodePoolRequestTeeConfig& setTeeEnable(bool teeEnable) { DARABONBA_PTR_SET_VALUE(teeEnable_, teeEnable) };


  protected:
    // Specifies whether to enable confidential computing for the cluster.
    std::shared_ptr<bool> teeEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
