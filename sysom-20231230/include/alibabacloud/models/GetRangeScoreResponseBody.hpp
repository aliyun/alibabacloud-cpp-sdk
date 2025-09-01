// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANGESCORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRANGESCORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRangeScoreResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetRangeScoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRangeScoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetRangeScoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetRangeScoreResponseBody() = default ;
    GetRangeScoreResponseBody(const GetRangeScoreResponseBody &) = default ;
    GetRangeScoreResponseBody(GetRangeScoreResponseBody &&) = default ;
    GetRangeScoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRangeScoreResponseBody() = default ;
    GetRangeScoreResponseBody& operator=(const GetRangeScoreResponseBody &) = default ;
    GetRangeScoreResponseBody& operator=(GetRangeScoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRangeScoreResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetRangeScoreResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetRangeScoreResponseBodyData>) };
    inline vector<GetRangeScoreResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetRangeScoreResponseBodyData>) };
    inline GetRangeScoreResponseBody& setData(const vector<GetRangeScoreResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRangeScoreResponseBody& setData(vector<GetRangeScoreResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRangeScoreResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRangeScoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline float total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
    inline GetRangeScoreResponseBody& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 代表资源一级ID的资源属性字段
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<GetRangeScoreResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<float> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
