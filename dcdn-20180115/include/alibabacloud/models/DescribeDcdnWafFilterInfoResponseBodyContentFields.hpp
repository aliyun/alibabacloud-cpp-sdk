// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENTFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafFilterInfoResponseBodyContentFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafFilterInfoResponseBodyContentFields& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendField, extendField_);
      DARABONBA_PTR_TO_JSON(LogicalSymbol, logicalSymbol_);
      DARABONBA_PTR_TO_JSON(MatchField, matchField_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafFilterInfoResponseBodyContentFields& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendField, extendField_);
      DARABONBA_PTR_FROM_JSON(LogicalSymbol, logicalSymbol_);
      DARABONBA_PTR_FROM_JSON(MatchField, matchField_);
    };
    DescribeDcdnWafFilterInfoResponseBodyContentFields() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFields(const DescribeDcdnWafFilterInfoResponseBodyContentFields &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFields(DescribeDcdnWafFilterInfoResponseBodyContentFields &&) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafFilterInfoResponseBodyContentFields() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFields& operator=(const DescribeDcdnWafFilterInfoResponseBodyContentFields &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFields& operator=(DescribeDcdnWafFilterInfoResponseBodyContentFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendField_ != nullptr
        && this->logicalSymbol_ != nullptr && this->matchField_ != nullptr; };
    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFields& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // logicalSymbol Field Functions 
    bool hasLogicalSymbol() const { return this->logicalSymbol_ != nullptr;};
    void deleteLogicalSymbol() { this->logicalSymbol_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol> & logicalSymbol() const { DARABONBA_PTR_GET_CONST(logicalSymbol_, vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol>) };
    inline vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol> logicalSymbol() { DARABONBA_PTR_GET(logicalSymbol_, vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol>) };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFields& setLogicalSymbol(const vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol> & logicalSymbol) { DARABONBA_PTR_SET_VALUE(logicalSymbol_, logicalSymbol) };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFields& setLogicalSymbol(vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol> && logicalSymbol) { DARABONBA_PTR_SET_RVALUE(logicalSymbol_, logicalSymbol) };


    // matchField Field Functions 
    bool hasMatchField() const { return this->matchField_ != nullptr;};
    void deleteMatchField() { this->matchField_ = nullptr;};
    inline string matchField() const { DARABONBA_PTR_GET_DEFAULT(matchField_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFields& setMatchField(string matchField) { DARABONBA_PTR_SET_VALUE(matchField_, matchField) };


  protected:
    // The description of the match field. This parameter is not returned or is empty if no match fields are found.
    std::shared_ptr<string> extendField_ = nullptr;
    // The information about the logical symbol.
    std::shared_ptr<vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol>> logicalSymbol_ = nullptr;
    // The match field.
    std::shared_ptr<string> matchField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
