// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECFUNCINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECFUNCINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnSecFuncInfoResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSecFuncInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSecFuncInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSecFuncInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    DescribeDcdnSecFuncInfoResponseBody() = default ;
    DescribeDcdnSecFuncInfoResponseBody(const DescribeDcdnSecFuncInfoResponseBody &) = default ;
    DescribeDcdnSecFuncInfoResponseBody(DescribeDcdnSecFuncInfoResponseBody &&) = default ;
    DescribeDcdnSecFuncInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSecFuncInfoResponseBody() = default ;
    DescribeDcdnSecFuncInfoResponseBody& operator=(const DescribeDcdnSecFuncInfoResponseBody &) = default ;
    DescribeDcdnSecFuncInfoResponseBody& operator=(DescribeDcdnSecFuncInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->description_ != nullptr && this->httpStatus_ != nullptr && this->requestId_ != nullptr && this->retCode_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnSecFuncInfoResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnSecFuncInfoResponseBodyContent>) };
    inline vector<DescribeDcdnSecFuncInfoResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnSecFuncInfoResponseBodyContent>) };
    inline DescribeDcdnSecFuncInfoResponseBody& setContent(const vector<DescribeDcdnSecFuncInfoResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnSecFuncInfoResponseBody& setContent(vector<DescribeDcdnSecFuncInfoResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnSecFuncInfoResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpStatus Field Functions 
    bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
    void deleteHttpStatus() { this->httpStatus_ = nullptr;};
    inline string httpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, "") };
    inline DescribeDcdnSecFuncInfoResponseBody& setHttpStatus(string httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnSecFuncInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline string retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, "") };
    inline DescribeDcdnSecFuncInfoResponseBody& setRetCode(string retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // The parameters required by the code.
    std::shared_ptr<vector<DescribeDcdnSecFuncInfoResponseBodyContent>> content_ = nullptr;
    // The description of HTTP responses.
    std::shared_ptr<string> description_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The return value for HTTP requests. Valid values:
    // 
    // *   0: OK.
    // *   Values other than 0: an error.
    std::shared_ptr<string> retCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
