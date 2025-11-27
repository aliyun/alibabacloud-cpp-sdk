// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOACTIVITYINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOACTIVITYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoActivityInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoActivityInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CheckErrMsg, checkErrMsg_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoActivityInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckErrMsg, checkErrMsg_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribePriceResponseBodyPriceInfoActivityInfo() = default ;
    DescribePriceResponseBodyPriceInfoActivityInfo(const DescribePriceResponseBodyPriceInfoActivityInfo &) = default ;
    DescribePriceResponseBodyPriceInfoActivityInfo(DescribePriceResponseBodyPriceInfoActivityInfo &&) = default ;
    DescribePriceResponseBodyPriceInfoActivityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoActivityInfo() = default ;
    DescribePriceResponseBodyPriceInfoActivityInfo& operator=(const DescribePriceResponseBodyPriceInfoActivityInfo &) = default ;
    DescribePriceResponseBodyPriceInfoActivityInfo& operator=(DescribePriceResponseBodyPriceInfoActivityInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkErrMsg_ == nullptr
        && return this->errorCode_ == nullptr && return this->success_ == nullptr; };
    // checkErrMsg Field Functions 
    bool hasCheckErrMsg() const { return this->checkErrMsg_ != nullptr;};
    void deleteCheckErrMsg() { this->checkErrMsg_ = nullptr;};
    inline string checkErrMsg() const { DARABONBA_PTR_GET_DEFAULT(checkErrMsg_, "") };
    inline DescribePriceResponseBodyPriceInfoActivityInfo& setCheckErrMsg(string checkErrMsg) { DARABONBA_PTR_SET_VALUE(checkErrMsg_, checkErrMsg) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribePriceResponseBodyPriceInfoActivityInfo& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribePriceResponseBodyPriceInfoActivityInfo& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned message.
    std::shared_ptr<string> checkErrMsg_ = nullptr;
    // The error code that is returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
