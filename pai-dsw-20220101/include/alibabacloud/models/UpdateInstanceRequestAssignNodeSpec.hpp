// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTASSIGNNODESPEC_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTASSIGNNODESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequestAssignNodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestAssignNodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestAssignNodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AntiAffinityNodeNames, antiAffinityNodeNames_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
    };
    UpdateInstanceRequestAssignNodeSpec() = default ;
    UpdateInstanceRequestAssignNodeSpec(const UpdateInstanceRequestAssignNodeSpec &) = default ;
    UpdateInstanceRequestAssignNodeSpec(UpdateInstanceRequestAssignNodeSpec &&) = default ;
    UpdateInstanceRequestAssignNodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestAssignNodeSpec() = default ;
    UpdateInstanceRequestAssignNodeSpec& operator=(const UpdateInstanceRequestAssignNodeSpec &) = default ;
    UpdateInstanceRequestAssignNodeSpec& operator=(UpdateInstanceRequestAssignNodeSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->antiAffinityNodeNames_ != nullptr
        && this->nodeNames_ != nullptr; };
    // antiAffinityNodeNames Field Functions 
    bool hasAntiAffinityNodeNames() const { return this->antiAffinityNodeNames_ != nullptr;};
    void deleteAntiAffinityNodeNames() { this->antiAffinityNodeNames_ = nullptr;};
    inline string antiAffinityNodeNames() const { DARABONBA_PTR_GET_DEFAULT(antiAffinityNodeNames_, "") };
    inline UpdateInstanceRequestAssignNodeSpec& setAntiAffinityNodeNames(string antiAffinityNodeNames) { DARABONBA_PTR_SET_VALUE(antiAffinityNodeNames_, antiAffinityNodeNames) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline string nodeNames() const { DARABONBA_PTR_GET_DEFAULT(nodeNames_, "") };
    inline UpdateInstanceRequestAssignNodeSpec& setNodeNames(string nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };


  protected:
    std::shared_ptr<string> antiAffinityNodeNames_ = nullptr;
    std::shared_ptr<string> nodeNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
