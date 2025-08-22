// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGTYPERESPONSEBODYCONTENTBUSINESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGTYPERESPONSEBODYCONTENTBUSINESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
    };
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness() = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness(const DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness &) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness(DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness &&) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness() = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness& operator=(const DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness &) = default ;
    DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness& operator=(DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->desc_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeDcdnSLSRealTimeLogTypeResponseBodyContentBusiness& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


  protected:
    // The type of real-time logs. Valid values:
    // 
    // *   **dcdn_log_access_l1**: access logs.
    // *   **dcdn_log_er**: EdgeRoutine logs
    // *   **dcdn_log_waf**: WAF interception logs
    std::shared_ptr<string> businessType_ = nullptr;
    // The description of the real-time log type.
    std::shared_ptr<string> desc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
