// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGESCANNUMINPERIODREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetImageScanNumInPeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageScanNumInPeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PastDay, pastDay_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageScanNumInPeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PastDay, pastDay_);
    };
    GetImageScanNumInPeriodRequest() = default ;
    GetImageScanNumInPeriodRequest(const GetImageScanNumInPeriodRequest &) = default ;
    GetImageScanNumInPeriodRequest(GetImageScanNumInPeriodRequest &&) = default ;
    GetImageScanNumInPeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageScanNumInPeriodRequest() = default ;
    GetImageScanNumInPeriodRequest& operator=(const GetImageScanNumInPeriodRequest &) = default ;
    GetImageScanNumInPeriodRequest& operator=(GetImageScanNumInPeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pastDay_ == nullptr; };
    // pastDay Field Functions 
    bool hasPastDay() const { return this->pastDay_ != nullptr;};
    void deletePastDay() { this->pastDay_ = nullptr;};
    inline string getPastDay() const { DARABONBA_PTR_GET_DEFAULT(pastDay_, "") };
    inline GetImageScanNumInPeriodRequest& setPastDay(string pastDay) { DARABONBA_PTR_SET_VALUE(pastDay_, pastDay) };


  protected:
    // The number of days.
    // 
    // This parameter is required.
    shared_ptr<string> pastDay_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
