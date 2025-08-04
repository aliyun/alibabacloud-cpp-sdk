// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERLISTRESPONSEBODYUSERLISTFAULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERLISTRESPONSEBODYUSERLISTFAULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserListResponseBodyUserListFaultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserListResponseBodyUserListFaultList& obj) { 
      DARABONBA_PTR_TO_JSON(FaultType, faultType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserListResponseBodyUserListFaultList& obj) { 
      DARABONBA_PTR_FROM_JSON(FaultType, faultType_);
    };
    DescribeFaultDiagnosisUserListResponseBodyUserListFaultList() = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserListFaultList(const DescribeFaultDiagnosisUserListResponseBodyUserListFaultList &) = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserListFaultList(DescribeFaultDiagnosisUserListResponseBodyUserListFaultList &&) = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserListFaultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserListResponseBodyUserListFaultList() = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserListFaultList& operator=(const DescribeFaultDiagnosisUserListResponseBodyUserListFaultList &) = default ;
    DescribeFaultDiagnosisUserListResponseBodyUserListFaultList& operator=(DescribeFaultDiagnosisUserListResponseBodyUserListFaultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faultType_ != nullptr; };
    // faultType Field Functions 
    bool hasFaultType() const { return this->faultType_ != nullptr;};
    void deleteFaultType() { this->faultType_ = nullptr;};
    inline string faultType() const { DARABONBA_PTR_GET_DEFAULT(faultType_, "") };
    inline DescribeFaultDiagnosisUserListResponseBodyUserListFaultList& setFaultType(string faultType) { DARABONBA_PTR_SET_VALUE(faultType_, faultType) };


  protected:
    std::shared_ptr<string> faultType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
