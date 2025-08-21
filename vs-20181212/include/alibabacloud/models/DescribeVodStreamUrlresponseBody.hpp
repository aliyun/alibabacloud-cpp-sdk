// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTREAMURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTREAMURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVodStreamURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStreamURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStreamURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OutProtocol, outProtocol_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeVodStreamURLResponseBody() = default ;
    DescribeVodStreamURLResponseBody(const DescribeVodStreamURLResponseBody &) = default ;
    DescribeVodStreamURLResponseBody(DescribeVodStreamURLResponseBody &&) = default ;
    DescribeVodStreamURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStreamURLResponseBody() = default ;
    DescribeVodStreamURLResponseBody& operator=(const DescribeVodStreamURLResponseBody &) = default ;
    DescribeVodStreamURLResponseBody& operator=(DescribeVodStreamURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outProtocol_ != nullptr
        && this->port_ != nullptr && this->requestId_ != nullptr && this->url_ != nullptr; };
    // outProtocol Field Functions 
    bool hasOutProtocol() const { return this->outProtocol_ != nullptr;};
    void deleteOutProtocol() { this->outProtocol_ = nullptr;};
    inline string outProtocol() const { DARABONBA_PTR_GET_DEFAULT(outProtocol_, "") };
    inline DescribeVodStreamURLResponseBody& setOutProtocol(string outProtocol) { DARABONBA_PTR_SET_VALUE(outProtocol_, outProtocol) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline DescribeVodStreamURLResponseBody& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodStreamURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeVodStreamURLResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> outProtocol_ = nullptr;
    std::shared_ptr<int64_t> port_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
