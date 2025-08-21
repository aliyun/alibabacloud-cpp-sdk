// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_TO_JSON(CodeProportionData, codeProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeProportionData, codeProportionData_);
    };
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &&) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& operator=(const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& operator=(DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeProportionData_ != nullptr; };
    // codeProportionData Field Functions 
    bool hasCodeProportionData() const { return this->codeProportionData_ != nullptr;};
    void deleteCodeProportionData() { this->codeProportionData_ = nullptr;};
    inline const vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> & codeProportionData() const { DARABONBA_PTR_GET_CONST(codeProportionData_, vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>) };
    inline vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> codeProportionData() { DARABONBA_PTR_GET(codeProportionData_, vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>) };
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& setCodeProportionData(const vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> & codeProportionData) { DARABONBA_PTR_SET_VALUE(codeProportionData_, codeProportionData) };
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& setCodeProportionData(vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> && codeProportionData) { DARABONBA_PTR_SET_RVALUE(codeProportionData_, codeProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>> codeProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
