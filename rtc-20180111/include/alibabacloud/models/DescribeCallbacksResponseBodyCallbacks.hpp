// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLBACKSRESPONSEBODYCALLBACKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLBACKSRESPONSEBODYCALLBACKS_HPP_
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
  class DescribeCallbacksResponseBodyCallbacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallbacksResponseBodyCallbacks& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Conf, conf_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubEvent, subEvent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallbacksResponseBodyCallbacks& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Conf, conf_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubEvent, subEvent_);
    };
    DescribeCallbacksResponseBodyCallbacks() = default ;
    DescribeCallbacksResponseBodyCallbacks(const DescribeCallbacksResponseBodyCallbacks &) = default ;
    DescribeCallbacksResponseBodyCallbacks(DescribeCallbacksResponseBodyCallbacks &&) = default ;
    DescribeCallbacksResponseBodyCallbacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallbacksResponseBodyCallbacks() = default ;
    DescribeCallbacksResponseBodyCallbacks& operator=(const DescribeCallbacksResponseBodyCallbacks &) = default ;
    DescribeCallbacksResponseBodyCallbacks& operator=(DescribeCallbacksResponseBodyCallbacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->checkStatus_ != nullptr && this->code_ != nullptr && this->conf_ != nullptr && this->msg_ != nullptr && this->status_ != nullptr
        && this->subEvent_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeCallbacksResponseBodyCallbacks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline string checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
    inline DescribeCallbacksResponseBodyCallbacks& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCallbacksResponseBodyCallbacks& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // conf Field Functions 
    bool hasConf() const { return this->conf_ != nullptr;};
    void deleteConf() { this->conf_ = nullptr;};
    inline string conf() const { DARABONBA_PTR_GET_DEFAULT(conf_, "") };
    inline DescribeCallbacksResponseBodyCallbacks& setConf(string conf) { DARABONBA_PTR_SET_VALUE(conf_, conf) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeCallbacksResponseBodyCallbacks& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCallbacksResponseBodyCallbacks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subEvent Field Functions 
    bool hasSubEvent() const { return this->subEvent_ != nullptr;};
    void deleteSubEvent() { this->subEvent_ = nullptr;};
    inline const vector<int32_t> & subEvent() const { DARABONBA_PTR_GET_CONST(subEvent_, vector<int32_t>) };
    inline vector<int32_t> subEvent() { DARABONBA_PTR_GET(subEvent_, vector<int32_t>) };
    inline DescribeCallbacksResponseBodyCallbacks& setSubEvent(const vector<int32_t> & subEvent) { DARABONBA_PTR_SET_VALUE(subEvent_, subEvent) };
    inline DescribeCallbacksResponseBodyCallbacks& setSubEvent(vector<int32_t> && subEvent) { DARABONBA_PTR_SET_RVALUE(subEvent_, subEvent) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> checkStatus_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> conf_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<vector<int32_t>> subEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
