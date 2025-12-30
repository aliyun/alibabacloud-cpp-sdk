// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCustomizedListHeadersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedListHeadersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedListHeadersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomizedListHeadersResponseBody() = default ;
    DescribeCustomizedListHeadersResponseBody(const DescribeCustomizedListHeadersResponseBody &) = default ;
    DescribeCustomizedListHeadersResponseBody(DescribeCustomizedListHeadersResponseBody &&) = default ;
    DescribeCustomizedListHeadersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedListHeadersResponseBody() = default ;
    DescribeCustomizedListHeadersResponseBody& operator=(const DescribeCustomizedListHeadersResponseBody &) = default ;
    DescribeCustomizedListHeadersResponseBody& operator=(DescribeCustomizedListHeadersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayType, displayType_);
        DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
        DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayType, displayType_);
        DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
        DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayType_ == nullptr
        && this->headerKey_ == nullptr && this->headerName_ == nullptr; };
      // displayType Field Functions 
      bool hasDisplayType() const { return this->displayType_ != nullptr;};
      void deleteDisplayType() { this->displayType_ = nullptr;};
      inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
      inline Headers& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


      // headerKey Field Functions 
      bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
      void deleteHeaderKey() { this->headerKey_ = nullptr;};
      inline string getHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
      inline Headers& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


      // headerName Field Functions 
      bool hasHeaderName() const { return this->headerName_ != nullptr;};
      void deleteHeaderName() { this->headerName_ = nullptr;};
      inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
      inline Headers& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


    protected:
      shared_ptr<string> displayType_ {};
      shared_ptr<string> headerKey_ {};
      shared_ptr<string> headerName_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<DescribeCustomizedListHeadersResponseBody::Headers> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<DescribeCustomizedListHeadersResponseBody::Headers>) };
    inline vector<DescribeCustomizedListHeadersResponseBody::Headers> getHeaders() { DARABONBA_PTR_GET(headers_, vector<DescribeCustomizedListHeadersResponseBody::Headers>) };
    inline DescribeCustomizedListHeadersResponseBody& setHeaders(const vector<DescribeCustomizedListHeadersResponseBody::Headers> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeCustomizedListHeadersResponseBody& setHeaders(vector<DescribeCustomizedListHeadersResponseBody::Headers> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizedListHeadersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCustomizedListHeadersResponseBody::Headers>> headers_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
