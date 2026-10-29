// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDNSSWITCHRULECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SDNSSWITCHRULECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class SdnsSwitchRuleCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdnsSwitchRuleCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, SdnsSwitchRuleCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    SdnsSwitchRuleCategoryRequest() = default ;
    SdnsSwitchRuleCategoryRequest(const SdnsSwitchRuleCategoryRequest &) = default ;
    SdnsSwitchRuleCategoryRequest(SdnsSwitchRuleCategoryRequest &&) = default ;
    SdnsSwitchRuleCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdnsSwitchRuleCategoryRequest() = default ;
    SdnsSwitchRuleCategoryRequest& operator=(const SdnsSwitchRuleCategoryRequest &) = default ;
    SdnsSwitchRuleCategoryRequest& operator=(SdnsSwitchRuleCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->id_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline SdnsSwitchRuleCategoryRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SdnsSwitchRuleCategoryRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
