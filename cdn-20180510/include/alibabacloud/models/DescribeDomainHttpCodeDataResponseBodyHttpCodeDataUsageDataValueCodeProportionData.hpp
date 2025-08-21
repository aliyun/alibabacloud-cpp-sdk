// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUECODEPROPORTIONDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUECODEPROPORTIONDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Proportion, proportion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
    };
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData(const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData(DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData &&) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData& operator=(const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData& operator=(DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->count_ != nullptr && this->proportion_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // proportion Field Functions 
    bool hasProportion() const { return this->proportion_ != nullptr;};
    void deleteProportion() { this->proportion_ = nullptr;};
    inline string proportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


  protected:
    // The HTTP status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The count of each HTTP status code.
    std::shared_ptr<string> count_ = nullptr;
    // The proportion of the HTTP status code.
    std::shared_ptr<string> proportion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
