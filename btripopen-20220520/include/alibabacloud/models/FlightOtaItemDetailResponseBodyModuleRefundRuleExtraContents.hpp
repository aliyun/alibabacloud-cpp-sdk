// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEREFUNDRULEEXTRACONTENTS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEREFUNDRULEEXTRACONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents() = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents(const FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents &) = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents(FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents &&) = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents() = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents& operator=(const FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents &) = default ;
    FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents& operator=(FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightOtaItemDetailResponseBodyModuleRefundRuleExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
