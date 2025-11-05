// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_TO_JSON(CodeProportionData, codeProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeProportionData, codeProportionData_);
    };
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &&) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& operator=(const DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& operator=(DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeProportionData_ == nullptr; };
    // codeProportionData Field Functions 
    bool hasCodeProportionData() const { return this->codeProportionData_ != nullptr;};
    void deleteCodeProportionData() { this->codeProportionData_ = nullptr;};
    inline const vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> & codeProportionData() const { DARABONBA_PTR_GET_CONST(codeProportionData_, vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>) };
    inline vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> codeProportionData() { DARABONBA_PTR_GET(codeProportionData_, vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>) };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& setCodeProportionData(const vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> & codeProportionData) { DARABONBA_PTR_SET_VALUE(codeProportionData_, codeProportionData) };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& setCodeProportionData(vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> && codeProportionData) { DARABONBA_PTR_SET_RVALUE(codeProportionData_, codeProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>> codeProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
