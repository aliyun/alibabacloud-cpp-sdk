// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPHYSICALNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPHYSICALNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResumePhysicalNodeResponseBodyNodeOperateResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ResumePhysicalNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumePhysicalNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeOperateResultList, nodeOperateResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ResumePhysicalNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeOperateResultList, nodeOperateResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ResumePhysicalNodeResponseBody() = default ;
    ResumePhysicalNodeResponseBody(const ResumePhysicalNodeResponseBody &) = default ;
    ResumePhysicalNodeResponseBody(ResumePhysicalNodeResponseBody &&) = default ;
    ResumePhysicalNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumePhysicalNodeResponseBody() = default ;
    ResumePhysicalNodeResponseBody& operator=(const ResumePhysicalNodeResponseBody &) = default ;
    ResumePhysicalNodeResponseBody& operator=(ResumePhysicalNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->nodeOperateResultList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResumePhysicalNodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ResumePhysicalNodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResumePhysicalNodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeOperateResultList Field Functions 
    bool hasNodeOperateResultList() const { return this->nodeOperateResultList_ != nullptr;};
    void deleteNodeOperateResultList() { this->nodeOperateResultList_ = nullptr;};
    inline const vector<ResumePhysicalNodeResponseBodyNodeOperateResultList> & nodeOperateResultList() const { DARABONBA_PTR_GET_CONST(nodeOperateResultList_, vector<ResumePhysicalNodeResponseBodyNodeOperateResultList>) };
    inline vector<ResumePhysicalNodeResponseBodyNodeOperateResultList> nodeOperateResultList() { DARABONBA_PTR_GET(nodeOperateResultList_, vector<ResumePhysicalNodeResponseBodyNodeOperateResultList>) };
    inline ResumePhysicalNodeResponseBody& setNodeOperateResultList(const vector<ResumePhysicalNodeResponseBodyNodeOperateResultList> & nodeOperateResultList) { DARABONBA_PTR_SET_VALUE(nodeOperateResultList_, nodeOperateResultList) };
    inline ResumePhysicalNodeResponseBody& setNodeOperateResultList(vector<ResumePhysicalNodeResponseBodyNodeOperateResultList> && nodeOperateResultList) { DARABONBA_PTR_SET_RVALUE(nodeOperateResultList_, nodeOperateResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResumePhysicalNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ResumePhysicalNodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<ResumePhysicalNodeResponseBodyNodeOperateResultList>> nodeOperateResultList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
