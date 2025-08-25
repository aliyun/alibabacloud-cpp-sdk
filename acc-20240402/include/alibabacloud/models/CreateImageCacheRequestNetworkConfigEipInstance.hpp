// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUESTNETWORKCONFIGEIPINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUESTNETWORKCONFIGEIPINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheRequestNetworkConfigEipInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheRequestNetworkConfigEipInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreate, autoCreate_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheRequestNetworkConfigEipInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreate, autoCreate_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateImageCacheRequestNetworkConfigEipInstance() = default ;
    CreateImageCacheRequestNetworkConfigEipInstance(const CreateImageCacheRequestNetworkConfigEipInstance &) = default ;
    CreateImageCacheRequestNetworkConfigEipInstance(CreateImageCacheRequestNetworkConfigEipInstance &&) = default ;
    CreateImageCacheRequestNetworkConfigEipInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheRequestNetworkConfigEipInstance() = default ;
    CreateImageCacheRequestNetworkConfigEipInstance& operator=(const CreateImageCacheRequestNetworkConfigEipInstance &) = default ;
    CreateImageCacheRequestNetworkConfigEipInstance& operator=(CreateImageCacheRequestNetworkConfigEipInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoCreate_ != nullptr
        && this->bandwidth_ != nullptr && this->instanceId_ != nullptr; };
    // autoCreate Field Functions 
    bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
    void deleteAutoCreate() { this->autoCreate_ = nullptr;};
    inline bool autoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, false) };
    inline CreateImageCacheRequestNetworkConfigEipInstance& setAutoCreate(bool autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateImageCacheRequestNetworkConfigEipInstance& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateImageCacheRequestNetworkConfigEipInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<bool> autoCreate_ = nullptr;
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
