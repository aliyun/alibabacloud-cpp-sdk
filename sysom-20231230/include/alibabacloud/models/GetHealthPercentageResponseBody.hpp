// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHEALTHPERCENTAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHEALTHPERCENTAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHealthPercentageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHealthPercentageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHealthPercentageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetHealthPercentageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    GetHealthPercentageResponseBody() = default ;
    GetHealthPercentageResponseBody(const GetHealthPercentageResponseBody &) = default ;
    GetHealthPercentageResponseBody(GetHealthPercentageResponseBody &&) = default ;
    GetHealthPercentageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHealthPercentageResponseBody() = default ;
    GetHealthPercentageResponseBody& operator=(const GetHealthPercentageResponseBody &) = default ;
    GetHealthPercentageResponseBody& operator=(GetHealthPercentageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHealthPercentageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetHealthPercentageResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetHealthPercentageResponseBodyData>) };
    inline vector<GetHealthPercentageResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetHealthPercentageResponseBodyData>) };
    inline GetHealthPercentageResponseBody& setData(const vector<GetHealthPercentageResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHealthPercentageResponseBody& setData(vector<GetHealthPercentageResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHealthPercentageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<GetHealthPercentageResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
