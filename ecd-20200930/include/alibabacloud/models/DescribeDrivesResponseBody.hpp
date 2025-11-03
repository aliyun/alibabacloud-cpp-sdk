// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRIVESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRIVESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrivesResponseBodyDrives.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDrivesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrivesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Drives, drives_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrivesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Drives, drives_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDrivesResponseBody() = default ;
    DescribeDrivesResponseBody(const DescribeDrivesResponseBody &) = default ;
    DescribeDrivesResponseBody(DescribeDrivesResponseBody &&) = default ;
    DescribeDrivesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrivesResponseBody() = default ;
    DescribeDrivesResponseBody& operator=(const DescribeDrivesResponseBody &) = default ;
    DescribeDrivesResponseBody& operator=(DescribeDrivesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->count_ == nullptr && return this->drives_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDrivesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeDrivesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // drives Field Functions 
    bool hasDrives() const { return this->drives_ != nullptr;};
    void deleteDrives() { this->drives_ = nullptr;};
    inline const vector<DescribeDrivesResponseBodyDrives> & drives() const { DARABONBA_PTR_GET_CONST(drives_, vector<DescribeDrivesResponseBodyDrives>) };
    inline vector<DescribeDrivesResponseBodyDrives> drives() { DARABONBA_PTR_GET(drives_, vector<DescribeDrivesResponseBodyDrives>) };
    inline DescribeDrivesResponseBody& setDrives(const vector<DescribeDrivesResponseBodyDrives> & drives) { DARABONBA_PTR_SET_VALUE(drives_, drives) };
    inline DescribeDrivesResponseBody& setDrives(vector<DescribeDrivesResponseBodyDrives> && drives) { DARABONBA_PTR_SET_RVALUE(drives_, drives) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDrivesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDrivesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrivesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDrivesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The value 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The total number of storage resources.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The user-level storage resources.
    std::shared_ptr<vector<DescribeDrivesResponseBodyDrives>> drives_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
