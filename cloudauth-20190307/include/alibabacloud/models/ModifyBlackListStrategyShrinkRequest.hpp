// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyBlackListStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBlackListStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlackListStrategy, blackListStrategyShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBlackListStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackListStrategy, blackListStrategyShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyBlackListStrategyShrinkRequest() = default ;
    ModifyBlackListStrategyShrinkRequest(const ModifyBlackListStrategyShrinkRequest &) = default ;
    ModifyBlackListStrategyShrinkRequest(ModifyBlackListStrategyShrinkRequest &&) = default ;
    ModifyBlackListStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBlackListStrategyShrinkRequest() = default ;
    ModifyBlackListStrategyShrinkRequest& operator=(const ModifyBlackListStrategyShrinkRequest &) = default ;
    ModifyBlackListStrategyShrinkRequest& operator=(ModifyBlackListStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackListStrategyShrink_ == nullptr
        && this->regionId_ == nullptr; };
    // blackListStrategyShrink Field Functions 
    bool hasBlackListStrategyShrink() const { return this->blackListStrategyShrink_ != nullptr;};
    void deleteBlackListStrategyShrink() { this->blackListStrategyShrink_ = nullptr;};
    inline string getBlackListStrategyShrink() const { DARABONBA_PTR_GET_DEFAULT(blackListStrategyShrink_, "") };
    inline ModifyBlackListStrategyShrinkRequest& setBlackListStrategyShrink(string blackListStrategyShrink) { DARABONBA_PTR_SET_VALUE(blackListStrategyShrink_, blackListStrategyShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyBlackListStrategyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Blacklist rule.
    shared_ptr<string> blackListStrategyShrink_ {};
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
