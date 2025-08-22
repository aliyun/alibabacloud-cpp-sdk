// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINISPDATARESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINISPDATARESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainIspDataResponseBodyValueIspProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIspDataResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIspDataResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(IspProportionData, ispProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIspDataResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(IspProportionData, ispProportionData_);
    };
    DescribeDcdnDomainIspDataResponseBodyValue() = default ;
    DescribeDcdnDomainIspDataResponseBodyValue(const DescribeDcdnDomainIspDataResponseBodyValue &) = default ;
    DescribeDcdnDomainIspDataResponseBodyValue(DescribeDcdnDomainIspDataResponseBodyValue &&) = default ;
    DescribeDcdnDomainIspDataResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIspDataResponseBodyValue() = default ;
    DescribeDcdnDomainIspDataResponseBodyValue& operator=(const DescribeDcdnDomainIspDataResponseBodyValue &) = default ;
    DescribeDcdnDomainIspDataResponseBodyValue& operator=(DescribeDcdnDomainIspDataResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ispProportionData_ != nullptr; };
    // ispProportionData Field Functions 
    bool hasIspProportionData() const { return this->ispProportionData_ != nullptr;};
    void deleteIspProportionData() { this->ispProportionData_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainIspDataResponseBodyValueIspProportionData> & ispProportionData() const { DARABONBA_PTR_GET_CONST(ispProportionData_, vector<Models::DescribeDcdnDomainIspDataResponseBodyValueIspProportionData>) };
    inline vector<Models::DescribeDcdnDomainIspDataResponseBodyValueIspProportionData> ispProportionData() { DARABONBA_PTR_GET(ispProportionData_, vector<Models::DescribeDcdnDomainIspDataResponseBodyValueIspProportionData>) };
    inline DescribeDcdnDomainIspDataResponseBodyValue& setIspProportionData(const vector<Models::DescribeDcdnDomainIspDataResponseBodyValueIspProportionData> & ispProportionData) { DARABONBA_PTR_SET_VALUE(ispProportionData_, ispProportionData) };
    inline DescribeDcdnDomainIspDataResponseBodyValue& setIspProportionData(vector<Models::DescribeDcdnDomainIspDataResponseBodyValueIspProportionData> && ispProportionData) { DARABONBA_PTR_SET_RVALUE(ispProportionData_, ispProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainIspDataResponseBodyValueIspProportionData>> ispProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
