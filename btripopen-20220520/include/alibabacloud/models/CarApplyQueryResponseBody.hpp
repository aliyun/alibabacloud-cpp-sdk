// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarApplyQueryResponseBodyApplyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apply_list, applyList_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_list, applyList_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CarApplyQueryResponseBody() = default ;
    CarApplyQueryResponseBody(const CarApplyQueryResponseBody &) = default ;
    CarApplyQueryResponseBody(CarApplyQueryResponseBody &&) = default ;
    CarApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyQueryResponseBody() = default ;
    CarApplyQueryResponseBody& operator=(const CarApplyQueryResponseBody &) = default ;
    CarApplyQueryResponseBody& operator=(CarApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyList_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->total_ != nullptr
        && this->traceId_ != nullptr; };
    // applyList Field Functions 
    bool hasApplyList() const { return this->applyList_ != nullptr;};
    void deleteApplyList() { this->applyList_ = nullptr;};
    inline const vector<CarApplyQueryResponseBodyApplyList> & applyList() const { DARABONBA_PTR_GET_CONST(applyList_, vector<CarApplyQueryResponseBodyApplyList>) };
    inline vector<CarApplyQueryResponseBodyApplyList> applyList() { DARABONBA_PTR_GET(applyList_, vector<CarApplyQueryResponseBodyApplyList>) };
    inline CarApplyQueryResponseBody& setApplyList(const vector<CarApplyQueryResponseBodyApplyList> & applyList) { DARABONBA_PTR_SET_VALUE(applyList_, applyList) };
    inline CarApplyQueryResponseBody& setApplyList(vector<CarApplyQueryResponseBodyApplyList> && applyList) { DARABONBA_PTR_SET_RVALUE(applyList_, applyList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CarApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CarApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CarApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CarApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline CarApplyQueryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CarApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<vector<CarApplyQueryResponseBodyApplyList>> applyList_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
