// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITSASMODULERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITSASMODULERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class InitSasModuleRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitSasModuleRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InitSasModuleRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(Instances, instancesShrink_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InitSasModuleRuleShrinkRequest() = default ;
    InitSasModuleRuleShrinkRequest(const InitSasModuleRuleShrinkRequest &) = default ;
    InitSasModuleRuleShrinkRequest(InitSasModuleRuleShrinkRequest &&) = default ;
    InitSasModuleRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitSasModuleRuleShrinkRequest() = default ;
    InitSasModuleRuleShrinkRequest& operator=(const InitSasModuleRuleShrinkRequest &) = default ;
    InitSasModuleRuleShrinkRequest& operator=(InitSasModuleRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBind_ == nullptr
        && this->instancesShrink_ == nullptr && this->isTrial_ == nullptr && this->regionId_ == nullptr; };
    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline InitSasModuleRuleShrinkRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // instancesShrink Field Functions 
    bool hasInstancesShrink() const { return this->instancesShrink_ != nullptr;};
    void deleteInstancesShrink() { this->instancesShrink_ = nullptr;};
    inline string getInstancesShrink() const { DARABONBA_PTR_GET_DEFAULT(instancesShrink_, "") };
    inline InitSasModuleRuleShrinkRequest& setInstancesShrink(string instancesShrink) { DARABONBA_PTR_SET_VALUE(instancesShrink_, instancesShrink) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool getIsTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline InitSasModuleRuleShrinkRequest& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InitSasModuleRuleShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<int32_t> autoBind_ {};
    shared_ptr<string> instancesShrink_ {};
    shared_ptr<bool> isTrial_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
