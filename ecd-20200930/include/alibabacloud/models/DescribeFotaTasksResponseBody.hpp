// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFotaTasksResponseBodyFotaTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FotaTasks, fotaTasks_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FotaTasks, fotaTasks_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFotaTasksResponseBody() = default ;
    DescribeFotaTasksResponseBody(const DescribeFotaTasksResponseBody &) = default ;
    DescribeFotaTasksResponseBody(DescribeFotaTasksResponseBody &&) = default ;
    DescribeFotaTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaTasksResponseBody() = default ;
    DescribeFotaTasksResponseBody& operator=(const DescribeFotaTasksResponseBody &) = default ;
    DescribeFotaTasksResponseBody& operator=(DescribeFotaTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->fotaTasks_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFotaTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // fotaTasks Field Functions 
    bool hasFotaTasks() const { return this->fotaTasks_ != nullptr;};
    void deleteFotaTasks() { this->fotaTasks_ = nullptr;};
    inline const vector<DescribeFotaTasksResponseBodyFotaTasks> & fotaTasks() const { DARABONBA_PTR_GET_CONST(fotaTasks_, vector<DescribeFotaTasksResponseBodyFotaTasks>) };
    inline vector<DescribeFotaTasksResponseBodyFotaTasks> fotaTasks() { DARABONBA_PTR_GET(fotaTasks_, vector<DescribeFotaTasksResponseBodyFotaTasks>) };
    inline DescribeFotaTasksResponseBody& setFotaTasks(const vector<DescribeFotaTasksResponseBodyFotaTasks> & fotaTasks) { DARABONBA_PTR_SET_VALUE(fotaTasks_, fotaTasks) };
    inline DescribeFotaTasksResponseBody& setFotaTasks(vector<DescribeFotaTasksResponseBodyFotaTasks> && fotaTasks) { DARABONBA_PTR_SET_RVALUE(fotaTasks_, fotaTasks) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFotaTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFotaTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFotaTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned message. If the request was successful, a `success` is returned. If the request failed, an error message is returned.
    std::shared_ptr<string> code_ = nullptr;
    // Details about the image update task.
    std::shared_ptr<vector<DescribeFotaTasksResponseBodyFotaTasks>> fotaTasks_ = nullptr;
    // The returned error message. This parameter is not returned if the Code value is a `success` message.
    std::shared_ptr<string> message_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
