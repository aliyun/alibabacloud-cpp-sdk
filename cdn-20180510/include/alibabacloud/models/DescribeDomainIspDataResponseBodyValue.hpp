// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINISPDATARESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINISPDATARESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainISPDataResponseBodyValueISPProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainISPDataResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainISPDataResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(ISPProportionData, ISPProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainISPDataResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ISPProportionData, ISPProportionData_);
    };
    DescribeDomainISPDataResponseBodyValue() = default ;
    DescribeDomainISPDataResponseBodyValue(const DescribeDomainISPDataResponseBodyValue &) = default ;
    DescribeDomainISPDataResponseBodyValue(DescribeDomainISPDataResponseBodyValue &&) = default ;
    DescribeDomainISPDataResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainISPDataResponseBodyValue() = default ;
    DescribeDomainISPDataResponseBodyValue& operator=(const DescribeDomainISPDataResponseBodyValue &) = default ;
    DescribeDomainISPDataResponseBodyValue& operator=(DescribeDomainISPDataResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ISPProportionData_ == nullptr; };
    // ISPProportionData Field Functions 
    bool hasISPProportionData() const { return this->ISPProportionData_ != nullptr;};
    void deleteISPProportionData() { this->ISPProportionData_ = nullptr;};
    inline const vector<Models::DescribeDomainISPDataResponseBodyValueISPProportionData> & ISPProportionData() const { DARABONBA_PTR_GET_CONST(ISPProportionData_, vector<Models::DescribeDomainISPDataResponseBodyValueISPProportionData>) };
    inline vector<Models::DescribeDomainISPDataResponseBodyValueISPProportionData> ISPProportionData() { DARABONBA_PTR_GET(ISPProportionData_, vector<Models::DescribeDomainISPDataResponseBodyValueISPProportionData>) };
    inline DescribeDomainISPDataResponseBodyValue& setISPProportionData(const vector<Models::DescribeDomainISPDataResponseBodyValueISPProportionData> & ISPProportionData) { DARABONBA_PTR_SET_VALUE(ISPProportionData_, ISPProportionData) };
    inline DescribeDomainISPDataResponseBodyValue& setISPProportionData(vector<Models::DescribeDomainISPDataResponseBodyValueISPProportionData> && ISPProportionData) { DARABONBA_PTR_SET_RVALUE(ISPProportionData_, ISPProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainISPDataResponseBodyValueISPProportionData>> ISPProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
