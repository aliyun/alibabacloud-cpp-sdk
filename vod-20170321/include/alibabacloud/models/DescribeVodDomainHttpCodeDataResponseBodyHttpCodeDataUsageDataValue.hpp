// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATAUSAGEDATAVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_TO_JSON(CodeProportionData, codeProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeProportionData, codeProportionData_);
    };
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &&) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue() = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& operator=(const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& operator=(DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeProportionData_ != nullptr; };
    // codeProportionData Field Functions 
    bool hasCodeProportionData() const { return this->codeProportionData_ != nullptr;};
    void deleteCodeProportionData() { this->codeProportionData_ = nullptr;};
    inline const vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> & codeProportionData() const { DARABONBA_PTR_GET_CONST(codeProportionData_, vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>) };
    inline vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> codeProportionData() { DARABONBA_PTR_GET(codeProportionData_, vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>) };
    inline DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& setCodeProportionData(const vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> & codeProportionData) { DARABONBA_PTR_SET_VALUE(codeProportionData_, codeProportionData) };
    inline DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValue& setCodeProportionData(vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData> && codeProportionData) { DARABONBA_PTR_SET_RVALUE(codeProportionData_, codeProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageDataValueCodeProportionData>> codeProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
