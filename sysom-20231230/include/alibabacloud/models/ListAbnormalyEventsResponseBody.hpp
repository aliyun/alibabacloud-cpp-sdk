// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAbnormalyEventsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAbnormalyEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbnormalyEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbnormalyEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAbnormalyEventsResponseBody() = default ;
    ListAbnormalyEventsResponseBody(const ListAbnormalyEventsResponseBody &) = default ;
    ListAbnormalyEventsResponseBody(ListAbnormalyEventsResponseBody &&) = default ;
    ListAbnormalyEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbnormalyEventsResponseBody() = default ;
    ListAbnormalyEventsResponseBody& operator=(const ListAbnormalyEventsResponseBody &) = default ;
    ListAbnormalyEventsResponseBody& operator=(ListAbnormalyEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAbnormalyEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAbnormalyEventsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAbnormalyEventsResponseBodyData>) };
    inline vector<ListAbnormalyEventsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListAbnormalyEventsResponseBodyData>) };
    inline ListAbnormalyEventsResponseBody& setData(const vector<ListAbnormalyEventsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAbnormalyEventsResponseBody& setData(vector<ListAbnormalyEventsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAbnormalyEventsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAbnormalyEventsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<ListAbnormalyEventsResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
