// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPATCHRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPATCHRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListDispatchRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDispatchRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(System, system_);
    };
    friend void from_json(const Darabonba::Json& j, ListDispatchRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(System, system_);
    };
    ListDispatchRuleRequest() = default ;
    ListDispatchRuleRequest(const ListDispatchRuleRequest &) = default ;
    ListDispatchRuleRequest(ListDispatchRuleRequest &&) = default ;
    ListDispatchRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDispatchRuleRequest() = default ;
    ListDispatchRuleRequest& operator=(const ListDispatchRuleRequest &) = default ;
    ListDispatchRuleRequest& operator=(ListDispatchRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->regionId_ == nullptr && this->system_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDispatchRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDispatchRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
    inline ListDispatchRuleRequest& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


  protected:
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> system_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
