// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetYzdInstanceTaskResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetYzdInstanceTaskResultResponseBody() = default ;
    GetYzdInstanceTaskResultResponseBody(const GetYzdInstanceTaskResultResponseBody &) = default ;
    GetYzdInstanceTaskResultResponseBody(GetYzdInstanceTaskResultResponseBody &&) = default ;
    GetYzdInstanceTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultResponseBody() = default ;
    GetYzdInstanceTaskResultResponseBody& operator=(const GetYzdInstanceTaskResultResponseBody &) = default ;
    GetYzdInstanceTaskResultResponseBody& operator=(GetYzdInstanceTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->msg_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline bool code() const { DARABONBA_PTR_GET_DEFAULT(code_, false) };
    inline GetYzdInstanceTaskResultResponseBody& setCode(bool code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetYzdInstanceTaskResultResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetYzdInstanceTaskResultResponseBodyData>) };
    inline vector<GetYzdInstanceTaskResultResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetYzdInstanceTaskResultResponseBodyData>) };
    inline GetYzdInstanceTaskResultResponseBody& setData(const vector<GetYzdInstanceTaskResultResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetYzdInstanceTaskResultResponseBody& setData(vector<GetYzdInstanceTaskResultResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetYzdInstanceTaskResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYzdInstanceTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetYzdInstanceTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> code_ = nullptr;
    std::shared_ptr<vector<GetYzdInstanceTaskResultResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
