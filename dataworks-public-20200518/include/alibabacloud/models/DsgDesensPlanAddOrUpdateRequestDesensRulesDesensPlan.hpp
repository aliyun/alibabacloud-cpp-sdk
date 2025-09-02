// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUESTDESENSRULESDESENSPLAN_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATEREQUESTDESENSRULESDESENSPLAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan& obj) { 
      DARABONBA_PTR_TO_JSON(DesensPlanType, desensPlanType_);
      DARABONBA_ANY_TO_JSON(ExtParam, extParam_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensPlanType, desensPlanType_);
      DARABONBA_ANY_FROM_JSON(ExtParam, extParam_);
    };
    DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan() = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan(const DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan &) = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan(DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan &&) = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan() = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan& operator=(const DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan &) = default ;
    DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan& operator=(DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desensPlanType_ != nullptr
        && this->extParam_ != nullptr; };
    // desensPlanType Field Functions 
    bool hasDesensPlanType() const { return this->desensPlanType_ != nullptr;};
    void deleteDesensPlanType() { this->desensPlanType_ = nullptr;};
    inline string desensPlanType() const { DARABONBA_PTR_GET_DEFAULT(desensPlanType_, "") };
    inline DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan& setDesensPlanType(string desensPlanType) { DARABONBA_PTR_SET_VALUE(desensPlanType_, desensPlanType) };


    // extParam Field Functions 
    bool hasExtParam() const { return this->extParam_ != nullptr;};
    void deleteExtParam() { this->extParam_ = nullptr;};
    inline     const Darabonba::Json & extParam() const { DARABONBA_GET(extParam_) };
    Darabonba::Json & extParam() { DARABONBA_GET(extParam_) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan& setExtParam(const Darabonba::Json & extParam) { DARABONBA_SET_VALUE(extParam_, extParam) };
    inline DsgDesensPlanAddOrUpdateRequestDesensRulesDesensPlan& setExtParam(Darabonba::Json & extParam) { DARABONBA_SET_RVALUE(extParam_, extParam) };


  protected:
    // The masking method configured in the data masking rule. Valid values:
    // 
    // *   hash
    // *   mapping
    // *   mask
    // *   charreplacement
    // *   intervalselect
    // *   decimalpoint
    // *   emptydesens
    // 
    // This parameter is required.
    std::shared_ptr<string> desensPlanType_ = nullptr;
    // The parameters for the data masking rule.
    Darabonba::Json extParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
