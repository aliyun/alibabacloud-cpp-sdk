// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLBACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLBACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallbacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallbacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallbacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Callbacks, callbacks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCallbacksResponseBody() = default ;
    DescribeCallbacksResponseBody(const DescribeCallbacksResponseBody &) = default ;
    DescribeCallbacksResponseBody(DescribeCallbacksResponseBody &&) = default ;
    DescribeCallbacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallbacksResponseBody() = default ;
    DescribeCallbacksResponseBody& operator=(const DescribeCallbacksResponseBody &) = default ;
    DescribeCallbacksResponseBody& operator=(DescribeCallbacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Callbacks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Callbacks& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Conf, conf_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubEvent, subEvent_);
      };
      friend void from_json(const Darabonba::Json& j, Callbacks& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Conf, conf_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubEvent, subEvent_);
      };
      Callbacks() = default ;
      Callbacks(const Callbacks &) = default ;
      Callbacks(Callbacks &&) = default ;
      Callbacks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Callbacks() = default ;
      Callbacks& operator=(const Callbacks &) = default ;
      Callbacks& operator=(Callbacks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->checkStatus_ == nullptr && this->code_ == nullptr && this->conf_ == nullptr && this->msg_ == nullptr && this->status_ == nullptr
        && this->subEvent_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Callbacks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // checkStatus Field Functions 
      bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
      void deleteCheckStatus() { this->checkStatus_ = nullptr;};
      inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
      inline Callbacks& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Callbacks& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // conf Field Functions 
      bool hasConf() const { return this->conf_ != nullptr;};
      void deleteConf() { this->conf_ = nullptr;};
      inline string getConf() const { DARABONBA_PTR_GET_DEFAULT(conf_, "") };
      inline Callbacks& setConf(string conf) { DARABONBA_PTR_SET_VALUE(conf_, conf) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Callbacks& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Callbacks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subEvent Field Functions 
      bool hasSubEvent() const { return this->subEvent_ != nullptr;};
      void deleteSubEvent() { this->subEvent_ = nullptr;};
      inline const vector<int32_t> & getSubEvent() const { DARABONBA_PTR_GET_CONST(subEvent_, vector<int32_t>) };
      inline vector<int32_t> getSubEvent() { DARABONBA_PTR_GET(subEvent_, vector<int32_t>) };
      inline Callbacks& setSubEvent(const vector<int32_t> & subEvent) { DARABONBA_PTR_SET_VALUE(subEvent_, subEvent) };
      inline Callbacks& setSubEvent(vector<int32_t> && subEvent) { DARABONBA_PTR_SET_RVALUE(subEvent_, subEvent) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> checkStatus_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> conf_ {};
      shared_ptr<string> msg_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<vector<int32_t>> subEvent_ {};
    };

    virtual bool empty() const override { return this->callbacks_ == nullptr
        && this->requestId_ == nullptr; };
    // callbacks Field Functions 
    bool hasCallbacks() const { return this->callbacks_ != nullptr;};
    void deleteCallbacks() { this->callbacks_ = nullptr;};
    inline const vector<DescribeCallbacksResponseBody::Callbacks> & getCallbacks() const { DARABONBA_PTR_GET_CONST(callbacks_, vector<DescribeCallbacksResponseBody::Callbacks>) };
    inline vector<DescribeCallbacksResponseBody::Callbacks> getCallbacks() { DARABONBA_PTR_GET(callbacks_, vector<DescribeCallbacksResponseBody::Callbacks>) };
    inline DescribeCallbacksResponseBody& setCallbacks(const vector<DescribeCallbacksResponseBody::Callbacks> & callbacks) { DARABONBA_PTR_SET_VALUE(callbacks_, callbacks) };
    inline DescribeCallbacksResponseBody& setCallbacks(vector<DescribeCallbacksResponseBody::Callbacks> && callbacks) { DARABONBA_PTR_SET_RVALUE(callbacks_, callbacks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCallbacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCallbacksResponseBody::Callbacks>> callbacks_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
