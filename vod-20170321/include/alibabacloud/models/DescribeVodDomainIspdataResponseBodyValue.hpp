// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINISPDATARESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINISPDATARESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainISPDataResponseBodyValueISPProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainISPDataResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainISPDataResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(ISPProportionData, ISPProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainISPDataResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ISPProportionData, ISPProportionData_);
    };
    DescribeVodDomainISPDataResponseBodyValue() = default ;
    DescribeVodDomainISPDataResponseBodyValue(const DescribeVodDomainISPDataResponseBodyValue &) = default ;
    DescribeVodDomainISPDataResponseBodyValue(DescribeVodDomainISPDataResponseBodyValue &&) = default ;
    DescribeVodDomainISPDataResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainISPDataResponseBodyValue() = default ;
    DescribeVodDomainISPDataResponseBodyValue& operator=(const DescribeVodDomainISPDataResponseBodyValue &) = default ;
    DescribeVodDomainISPDataResponseBodyValue& operator=(DescribeVodDomainISPDataResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ISPProportionData_ != nullptr; };
    // ISPProportionData Field Functions 
    bool hasISPProportionData() const { return this->ISPProportionData_ != nullptr;};
    void deleteISPProportionData() { this->ISPProportionData_ = nullptr;};
    inline const vector<Models::DescribeVodDomainISPDataResponseBodyValueISPProportionData> & ISPProportionData() const { DARABONBA_PTR_GET_CONST(ISPProportionData_, vector<Models::DescribeVodDomainISPDataResponseBodyValueISPProportionData>) };
    inline vector<Models::DescribeVodDomainISPDataResponseBodyValueISPProportionData> ISPProportionData() { DARABONBA_PTR_GET(ISPProportionData_, vector<Models::DescribeVodDomainISPDataResponseBodyValueISPProportionData>) };
    inline DescribeVodDomainISPDataResponseBodyValue& setISPProportionData(const vector<Models::DescribeVodDomainISPDataResponseBodyValueISPProportionData> & ISPProportionData) { DARABONBA_PTR_SET_VALUE(ISPProportionData_, ISPProportionData) };
    inline DescribeVodDomainISPDataResponseBodyValue& setISPProportionData(vector<Models::DescribeVodDomainISPDataResponseBodyValueISPProportionData> && ISPProportionData) { DARABONBA_PTR_SET_RVALUE(ISPProportionData_, ISPProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainISPDataResponseBodyValueISPProportionData>> ISPProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
