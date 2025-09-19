// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTLESSTASKCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTLESSTASKCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAgentlessTaskCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentlessTaskCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentlessTaskCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetAgentlessTaskCountRequest() = default ;
    GetAgentlessTaskCountRequest(const GetAgentlessTaskCountRequest &) = default ;
    GetAgentlessTaskCountRequest(GetAgentlessTaskCountRequest &&) = default ;
    GetAgentlessTaskCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentlessTaskCountRequest() = default ;
    GetAgentlessTaskCountRequest& operator=(const GetAgentlessTaskCountRequest &) = default ;
    GetAgentlessTaskCountRequest& operator=(GetAgentlessTaskCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr
        && this->targetType_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetAgentlessTaskCountRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline GetAgentlessTaskCountRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The instance ID of the asset.
    std::shared_ptr<string> target_ = nullptr;
    // Specifies the type of the object being inspected. Valid values:
    // 
    // *   **3**: User Snapshot.
    // *   **4**: User Image.
    std::shared_ptr<int32_t> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
