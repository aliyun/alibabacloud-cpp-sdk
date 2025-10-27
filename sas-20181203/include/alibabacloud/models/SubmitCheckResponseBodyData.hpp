// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHECKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHECKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitCheckResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCheckResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_TO_JSON(ThrottlingTimeSecond, throttlingTimeSecond_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCheckResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_FROM_JSON(ThrottlingTimeSecond, throttlingTimeSecond_);
    };
    SubmitCheckResponseBodyData() = default ;
    SubmitCheckResponseBodyData(const SubmitCheckResponseBodyData &) = default ;
    SubmitCheckResponseBodyData(SubmitCheckResponseBodyData &&) = default ;
    SubmitCheckResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCheckResponseBodyData() = default ;
    SubmitCheckResponseBodyData& operator=(const SubmitCheckResponseBodyData &) = default ;
    SubmitCheckResponseBodyData& operator=(SubmitCheckResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateCode_ == nullptr
        && return this->throttlingTimeSecond_ == nullptr; };
    // operateCode Field Functions 
    bool hasOperateCode() const { return this->operateCode_ != nullptr;};
    void deleteOperateCode() { this->operateCode_ = nullptr;};
    inline string operateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
    inline SubmitCheckResponseBodyData& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


    // throttlingTimeSecond Field Functions 
    bool hasThrottlingTimeSecond() const { return this->throttlingTimeSecond_ != nullptr;};
    void deleteThrottlingTimeSecond() { this->throttlingTimeSecond_ = nullptr;};
    inline int32_t throttlingTimeSecond() const { DARABONBA_PTR_GET_DEFAULT(throttlingTimeSecond_, 0) };
    inline SubmitCheckResponseBodyData& setThrottlingTimeSecond(int32_t throttlingTimeSecond) { DARABONBA_PTR_SET_VALUE(throttlingTimeSecond_, throttlingTimeSecond) };


  protected:
    // The operation code of the configuration assessment task.
    // 
    // *   **Throttling**: frequency limit
    // *   **AuthorizationExhaust**: insufficient quota
    std::shared_ptr<string> operateCode_ = nullptr;
    // The throttling duration. Unit: seconds.
    std::shared_ptr<int32_t> throttlingTimeSecond_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
