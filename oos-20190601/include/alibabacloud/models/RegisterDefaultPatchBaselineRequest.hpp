// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERDEFAULTPATCHBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERDEFAULTPATCHBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class RegisterDefaultPatchBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterDefaultPatchBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterDefaultPatchBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RegisterDefaultPatchBaselineRequest() = default ;
    RegisterDefaultPatchBaselineRequest(const RegisterDefaultPatchBaselineRequest &) = default ;
    RegisterDefaultPatchBaselineRequest(RegisterDefaultPatchBaselineRequest &&) = default ;
    RegisterDefaultPatchBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterDefaultPatchBaselineRequest() = default ;
    RegisterDefaultPatchBaselineRequest& operator=(const RegisterDefaultPatchBaselineRequest &) = default ;
    RegisterDefaultPatchBaselineRequest& operator=(RegisterDefaultPatchBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->regionId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RegisterDefaultPatchBaselineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RegisterDefaultPatchBaselineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the patch baseline.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
