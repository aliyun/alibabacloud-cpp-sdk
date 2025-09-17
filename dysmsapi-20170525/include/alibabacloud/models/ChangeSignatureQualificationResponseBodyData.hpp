// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESIGNATUREQUALIFICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGESIGNATUREQUALIFICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class ChangeSignatureQualificationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSignatureQualificationResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSignatureQualificationResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ChangeSignatureQualificationResponseBodyData() = default ;
    ChangeSignatureQualificationResponseBodyData(const ChangeSignatureQualificationResponseBodyData &) = default ;
    ChangeSignatureQualificationResponseBodyData(ChangeSignatureQualificationResponseBodyData &&) = default ;
    ChangeSignatureQualificationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSignatureQualificationResponseBodyData() = default ;
    ChangeSignatureQualificationResponseBodyData& operator=(const ChangeSignatureQualificationResponseBodyData &) = default ;
    ChangeSignatureQualificationResponseBodyData& operator=(ChangeSignatureQualificationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline ChangeSignatureQualificationResponseBodyData& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline ChangeSignatureQualificationResponseBodyData& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ChangeSignatureQualificationResponseBodyData& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ChangeSignatureQualificationResponseBodyData& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChangeSignatureQualificationResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    Darabonba::Json data_ = nullptr;
    std::shared_ptr<string> errCode_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
