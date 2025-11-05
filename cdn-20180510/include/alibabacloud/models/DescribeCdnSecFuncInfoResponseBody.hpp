// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSECFUNCINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSECFUNCINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnSecFuncInfoResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSecFuncInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSecFuncInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSecFuncInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    DescribeCdnSecFuncInfoResponseBody() = default ;
    DescribeCdnSecFuncInfoResponseBody(const DescribeCdnSecFuncInfoResponseBody &) = default ;
    DescribeCdnSecFuncInfoResponseBody(DescribeCdnSecFuncInfoResponseBody &&) = default ;
    DescribeCdnSecFuncInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSecFuncInfoResponseBody() = default ;
    DescribeCdnSecFuncInfoResponseBody& operator=(const DescribeCdnSecFuncInfoResponseBody &) = default ;
    DescribeCdnSecFuncInfoResponseBody& operator=(DescribeCdnSecFuncInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->description_ == nullptr && return this->httpStatus_ == nullptr && return this->requestId_ == nullptr && return this->retCode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeCdnSecFuncInfoResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeCdnSecFuncInfoResponseBodyContent>) };
    inline vector<DescribeCdnSecFuncInfoResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<DescribeCdnSecFuncInfoResponseBodyContent>) };
    inline DescribeCdnSecFuncInfoResponseBody& setContent(const vector<DescribeCdnSecFuncInfoResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCdnSecFuncInfoResponseBody& setContent(vector<DescribeCdnSecFuncInfoResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCdnSecFuncInfoResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpStatus Field Functions 
    bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
    void deleteHttpStatus() { this->httpStatus_ = nullptr;};
    inline string httpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, "") };
    inline DescribeCdnSecFuncInfoResponseBody& setHttpStatus(string httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnSecFuncInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline string retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, "") };
    inline DescribeCdnSecFuncInfoResponseBody& setRetCode(string retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // Queried data.
    std::shared_ptr<vector<DescribeCdnSecFuncInfoResponseBodyContent>> content_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<string> httpStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The HTTP request response code.
    // 
    // *   0: OK.
    // *   Values other than 0: an error.
    std::shared_ptr<string> retCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
