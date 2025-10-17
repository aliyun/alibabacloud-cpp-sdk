// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTCLOCKOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTCLOCKOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestClockOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestClockOptions& obj) { 
      DARABONBA_PTR_TO_JSON(PtpStatus, ptpStatus_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestClockOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(PtpStatus, ptpStatus_);
    };
    RunInstancesRequestClockOptions() = default ;
    RunInstancesRequestClockOptions(const RunInstancesRequestClockOptions &) = default ;
    RunInstancesRequestClockOptions(RunInstancesRequestClockOptions &&) = default ;
    RunInstancesRequestClockOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestClockOptions() = default ;
    RunInstancesRequestClockOptions& operator=(const RunInstancesRequestClockOptions &) = default ;
    RunInstancesRequestClockOptions& operator=(RunInstancesRequestClockOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ptpStatus_ == nullptr; };
    // ptpStatus Field Functions 
    bool hasPtpStatus() const { return this->ptpStatus_ != nullptr;};
    void deletePtpStatus() { this->ptpStatus_ = nullptr;};
    inline string ptpStatus() const { DARABONBA_PTR_GET_DEFAULT(ptpStatus_, "") };
    inline RunInstancesRequestClockOptions& setPtpStatus(string ptpStatus) { DARABONBA_PTR_SET_VALUE(ptpStatus_, ptpStatus) };


  protected:
    std::shared_ptr<string> ptpStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
