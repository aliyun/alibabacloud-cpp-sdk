// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERAPPUPLOADPROCESSINMSARESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETUSERAPPUPLOADPROCESSINMSARESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserAppUploadProcessInMsaResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetUserAppUploadProcessInMsaResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAppUploadProcessInMsaResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAppUploadProcessInMsaResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserAppUploadProcessInMsaResponseBodyResultContent() = default ;
    GetUserAppUploadProcessInMsaResponseBodyResultContent(const GetUserAppUploadProcessInMsaResponseBodyResultContent &) = default ;
    GetUserAppUploadProcessInMsaResponseBodyResultContent(GetUserAppUploadProcessInMsaResponseBodyResultContent &&) = default ;
    GetUserAppUploadProcessInMsaResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAppUploadProcessInMsaResponseBodyResultContent() = default ;
    GetUserAppUploadProcessInMsaResponseBodyResultContent& operator=(const GetUserAppUploadProcessInMsaResponseBodyResultContent &) = default ;
    GetUserAppUploadProcessInMsaResponseBodyResultContent& operator=(GetUserAppUploadProcessInMsaResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserAppUploadProcessInMsaResponseBodyResultContent& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetUserAppUploadProcessInMsaResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetUserAppUploadProcessInMsaResponseBodyResultContentData) };
    inline Models::GetUserAppUploadProcessInMsaResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::GetUserAppUploadProcessInMsaResponseBodyResultContentData) };
    inline GetUserAppUploadProcessInMsaResponseBodyResultContent& setData(const Models::GetUserAppUploadProcessInMsaResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUserAppUploadProcessInMsaResponseBodyResultContent& setData(Models::GetUserAppUploadProcessInMsaResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserAppUploadProcessInMsaResponseBodyResultContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserAppUploadProcessInMsaResponseBodyResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<Models::GetUserAppUploadProcessInMsaResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
