// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETABNORMALEVENTSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAbnormalEventsCountResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAbnormalEventsCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAbnormalEventsCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetAbnormalEventsCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    GetAbnormalEventsCountResponseBody() = default ;
    GetAbnormalEventsCountResponseBody(const GetAbnormalEventsCountResponseBody &) = default ;
    GetAbnormalEventsCountResponseBody(GetAbnormalEventsCountResponseBody &&) = default ;
    GetAbnormalEventsCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAbnormalEventsCountResponseBody() = default ;
    GetAbnormalEventsCountResponseBody& operator=(const GetAbnormalEventsCountResponseBody &) = default ;
    GetAbnormalEventsCountResponseBody& operator=(GetAbnormalEventsCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAbnormalEventsCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAbnormalEventsCountResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAbnormalEventsCountResponseBodyData>) };
    inline vector<GetAbnormalEventsCountResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetAbnormalEventsCountResponseBodyData>) };
    inline GetAbnormalEventsCountResponseBody& setData(const vector<GetAbnormalEventsCountResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAbnormalEventsCountResponseBody& setData(vector<GetAbnormalEventsCountResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAbnormalEventsCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<GetAbnormalEventsCountResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
