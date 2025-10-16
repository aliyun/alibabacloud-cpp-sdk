// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaPendingDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaPendingDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FotaPendingDesktops, fotaPendingDesktops_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaPendingDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FotaPendingDesktops, fotaPendingDesktops_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFotaPendingDesktopsResponseBody() = default ;
    DescribeFotaPendingDesktopsResponseBody(const DescribeFotaPendingDesktopsResponseBody &) = default ;
    DescribeFotaPendingDesktopsResponseBody(DescribeFotaPendingDesktopsResponseBody &&) = default ;
    DescribeFotaPendingDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaPendingDesktopsResponseBody() = default ;
    DescribeFotaPendingDesktopsResponseBody& operator=(const DescribeFotaPendingDesktopsResponseBody &) = default ;
    DescribeFotaPendingDesktopsResponseBody& operator=(DescribeFotaPendingDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->fotaPendingDesktops_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // fotaPendingDesktops Field Functions 
    bool hasFotaPendingDesktops() const { return this->fotaPendingDesktops_ != nullptr;};
    void deleteFotaPendingDesktops() { this->fotaPendingDesktops_ = nullptr;};
    inline const vector<DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops> & fotaPendingDesktops() const { DARABONBA_PTR_GET_CONST(fotaPendingDesktops_, vector<DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops>) };
    inline vector<DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops> fotaPendingDesktops() { DARABONBA_PTR_GET(fotaPendingDesktops_, vector<DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops>) };
    inline DescribeFotaPendingDesktopsResponseBody& setFotaPendingDesktops(const vector<DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops> & fotaPendingDesktops) { DARABONBA_PTR_SET_VALUE(fotaPendingDesktops_, fotaPendingDesktops) };
    inline DescribeFotaPendingDesktopsResponseBody& setFotaPendingDesktops(vector<DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops> && fotaPendingDesktops) { DARABONBA_PTR_SET_RVALUE(fotaPendingDesktops_, fotaPendingDesktops) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFotaPendingDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The cloud computers whose images can be and are pending to be updated to the version specified in `TaskUid`.
    std::shared_ptr<vector<DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops>> fotaPendingDesktops_ = nullptr;
    // The returned message.
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
