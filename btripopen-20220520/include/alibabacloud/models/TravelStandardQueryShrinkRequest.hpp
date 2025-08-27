// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardQueryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardQueryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_TO_JSON(service_type_list, serviceTypeListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardQueryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_FROM_JSON(service_type_list, serviceTypeListShrink_);
    };
    TravelStandardQueryShrinkRequest() = default ;
    TravelStandardQueryShrinkRequest(const TravelStandardQueryShrinkRequest &) = default ;
    TravelStandardQueryShrinkRequest(TravelStandardQueryShrinkRequest &&) = default ;
    TravelStandardQueryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardQueryShrinkRequest() = default ;
    TravelStandardQueryShrinkRequest& operator=(const TravelStandardQueryShrinkRequest &) = default ;
    TravelStandardQueryShrinkRequest& operator=(TravelStandardQueryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromGroup_ != nullptr
        && this->ruleCode_ != nullptr && this->serviceTypeListShrink_ != nullptr; };
    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardQueryShrinkRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // ruleCode Field Functions 
    bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
    void deleteRuleCode() { this->ruleCode_ = nullptr;};
    inline int64_t ruleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, 0L) };
    inline TravelStandardQueryShrinkRequest& setRuleCode(int64_t ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


    // serviceTypeListShrink Field Functions 
    bool hasServiceTypeListShrink() const { return this->serviceTypeListShrink_ != nullptr;};
    void deleteServiceTypeListShrink() { this->serviceTypeListShrink_ = nullptr;};
    inline string serviceTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceTypeListShrink_, "") };
    inline TravelStandardQueryShrinkRequest& setServiceTypeListShrink(string serviceTypeListShrink) { DARABONBA_PTR_SET_VALUE(serviceTypeListShrink_, serviceTypeListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> fromGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceTypeListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
