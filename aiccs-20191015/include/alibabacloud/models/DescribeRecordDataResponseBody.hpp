// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class DescribeRecordDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OssLink, ossLink_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OssLink, ossLink_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRecordDataResponseBody() = default ;
    DescribeRecordDataResponseBody(const DescribeRecordDataResponseBody &) = default ;
    DescribeRecordDataResponseBody(DescribeRecordDataResponseBody &&) = default ;
    DescribeRecordDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordDataResponseBody() = default ;
    DescribeRecordDataResponseBody& operator=(const DescribeRecordDataResponseBody &) = default ;
    DescribeRecordDataResponseBody& operator=(DescribeRecordDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acid_ == nullptr
        && return this->agentId_ == nullptr && return this->code_ == nullptr && return this->message_ == nullptr && return this->ossLink_ == nullptr && return this->requestId_ == nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline DescribeRecordDataResponseBody& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribeRecordDataResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRecordDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRecordDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ossLink Field Functions 
    bool hasOssLink() const { return this->ossLink_ != nullptr;};
    void deleteOssLink() { this->ossLink_ = nullptr;};
    inline string ossLink() const { DARABONBA_PTR_GET_DEFAULT(ossLink_, "") };
    inline DescribeRecordDataResponseBody& setOssLink(string ossLink) { DARABONBA_PTR_SET_VALUE(ossLink_, ossLink) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> ossLink_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
