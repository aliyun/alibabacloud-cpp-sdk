// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGTYPERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGTYPERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSLSRealTimeLogTypeResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSLSRealTimeLogTypeResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Business, business_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSLSRealTimeLogTypeResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Business, business_);
    };
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContent() = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContent(const DescribeDcdnSLSRealTimeLogTypeResponseBodyContent &) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContent(DescribeDcdnSLSRealTimeLogTypeResponseBodyContent &&) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSLSRealTimeLogTypeResponseBodyContent() = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContent& operator=(const DescribeDcdnSLSRealTimeLogTypeResponseBodyContent &) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContent& operator=(DescribeDcdnSLSRealTimeLogTypeResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->business_ != nullptr; };
    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline const vector<Models::DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness> & business() const { DARABONBA_PTR_GET_CONST(business_, vector<Models::DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness>) };
    inline vector<Models::DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness> business() { DARABONBA_PTR_GET(business_, vector<Models::DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness>) };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBodyContent& setBusiness(const vector<Models::DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness> & business) { DARABONBA_PTR_SET_VALUE(business_, business) };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBodyContent& setBusiness(vector<Models::DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness> && business) { DARABONBA_PTR_SET_RVALUE(business_, business) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness>> business_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
