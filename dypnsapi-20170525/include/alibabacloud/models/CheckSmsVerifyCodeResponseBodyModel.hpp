// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSMSVERIFYCODERESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_CHECKSMSVERIFYCODERESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class CheckSmsVerifyCodeResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSmsVerifyCodeResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSmsVerifyCodeResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    CheckSmsVerifyCodeResponseBodyModel() = default ;
    CheckSmsVerifyCodeResponseBodyModel(const CheckSmsVerifyCodeResponseBodyModel &) = default ;
    CheckSmsVerifyCodeResponseBodyModel(CheckSmsVerifyCodeResponseBodyModel &&) = default ;
    CheckSmsVerifyCodeResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSmsVerifyCodeResponseBodyModel() = default ;
    CheckSmsVerifyCodeResponseBodyModel& operator=(const CheckSmsVerifyCodeResponseBodyModel &) = default ;
    CheckSmsVerifyCodeResponseBodyModel& operator=(CheckSmsVerifyCodeResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outId_ != nullptr
        && this->verifyResult_ != nullptr; };
    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline CheckSmsVerifyCodeResponseBodyModel& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline string verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
    inline CheckSmsVerifyCodeResponseBodyModel& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    // The external ID.
    std::shared_ptr<string> outId_ = nullptr;
    // The verification results. Valid values:
    // 
    // *   PASS: The verification is successful.
    // *   UNKNOWN: The verification failed.
    std::shared_ptr<string> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
