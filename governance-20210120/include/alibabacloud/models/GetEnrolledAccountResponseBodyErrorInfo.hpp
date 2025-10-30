// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODYERRORINFO_HPP_
#define ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODYERRORINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetEnrolledAccountResponseBodyErrorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnrolledAccountResponseBodyErrorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Recommend, recommend_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnrolledAccountResponseBodyErrorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Recommend, recommend_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEnrolledAccountResponseBodyErrorInfo() = default ;
    GetEnrolledAccountResponseBodyErrorInfo(const GetEnrolledAccountResponseBodyErrorInfo &) = default ;
    GetEnrolledAccountResponseBodyErrorInfo(GetEnrolledAccountResponseBodyErrorInfo &&) = default ;
    GetEnrolledAccountResponseBodyErrorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnrolledAccountResponseBodyErrorInfo() = default ;
    GetEnrolledAccountResponseBodyErrorInfo& operator=(const GetEnrolledAccountResponseBodyErrorInfo &) = default ;
    GetEnrolledAccountResponseBodyErrorInfo& operator=(GetEnrolledAccountResponseBodyErrorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->recommend_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEnrolledAccountResponseBodyErrorInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEnrolledAccountResponseBodyErrorInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // recommend Field Functions 
    bool hasRecommend() const { return this->recommend_ != nullptr;};
    void deleteRecommend() { this->recommend_ = nullptr;};
    inline string recommend() const { DARABONBA_PTR_GET_DEFAULT(recommend_, "") };
    inline GetEnrolledAccountResponseBodyErrorInfo& setRecommend(string recommend) { DARABONBA_PTR_SET_VALUE(recommend_, recommend) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEnrolledAccountResponseBodyErrorInfo& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The recommended solution.
    std::shared_ptr<string> recommend_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
