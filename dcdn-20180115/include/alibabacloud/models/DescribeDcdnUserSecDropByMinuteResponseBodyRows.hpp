// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPBYMINUTERESPONSEBODYROWS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERSECDROPBYMINUTERESPONSEBODYROWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserSecDropByMinuteResponseBodyRows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserSecDropByMinuteResponseBodyRows& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Drops, drops_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SecFunc, secFunc_);
      DARABONBA_PTR_TO_JSON(TmStr, tmStr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserSecDropByMinuteResponseBodyRows& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Drops, drops_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SecFunc, secFunc_);
      DARABONBA_PTR_FROM_JSON(TmStr, tmStr_);
    };
    DescribeDcdnUserSecDropByMinuteResponseBodyRows() = default ;
    DescribeDcdnUserSecDropByMinuteResponseBodyRows(const DescribeDcdnUserSecDropByMinuteResponseBodyRows &) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBodyRows(DescribeDcdnUserSecDropByMinuteResponseBodyRows &&) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBodyRows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserSecDropByMinuteResponseBodyRows() = default ;
    DescribeDcdnUserSecDropByMinuteResponseBodyRows& operator=(const DescribeDcdnUserSecDropByMinuteResponseBodyRows &) = default ;
    DescribeDcdnUserSecDropByMinuteResponseBodyRows& operator=(DescribeDcdnUserSecDropByMinuteResponseBodyRows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->drops_ != nullptr && this->object_ != nullptr && this->ruleName_ != nullptr && this->secFunc_ != nullptr && this->tmStr_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBodyRows& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // drops Field Functions 
    bool hasDrops() const { return this->drops_ != nullptr;};
    void deleteDrops() { this->drops_ = nullptr;};
    inline int32_t drops() const { DARABONBA_PTR_GET_DEFAULT(drops_, 0) };
    inline DescribeDcdnUserSecDropByMinuteResponseBodyRows& setDrops(int32_t drops) { DARABONBA_PTR_SET_VALUE(drops_, drops) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBodyRows& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBodyRows& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // secFunc Field Functions 
    bool hasSecFunc() const { return this->secFunc_ != nullptr;};
    void deleteSecFunc() { this->secFunc_ = nullptr;};
    inline string secFunc() const { DARABONBA_PTR_GET_DEFAULT(secFunc_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBodyRows& setSecFunc(string secFunc) { DARABONBA_PTR_SET_VALUE(secFunc_, secFunc) };


    // tmStr Field Functions 
    bool hasTmStr() const { return this->tmStr_ != nullptr;};
    void deleteTmStr() { this->tmStr_ = nullptr;};
    inline string tmStr() const { DARABONBA_PTR_GET_DEFAULT(tmStr_, "") };
    inline DescribeDcdnUserSecDropByMinuteResponseBodyRows& setTmStr(string tmStr) { DARABONBA_PTR_SET_VALUE(tmStr_, tmStr) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The number of packets blocked within 5 minutes.
    std::shared_ptr<int32_t> drops_ = nullptr;
    // The object that triggered rate limiting.
    std::shared_ptr<string> object_ = nullptr;
    // The rule that was triggered.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The security feature that blocked the packets.
    std::shared_ptr<string> secFunc_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> tmStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
