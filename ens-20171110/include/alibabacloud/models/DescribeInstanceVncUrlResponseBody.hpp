// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEVNCURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEVNCURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceVncUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceVncUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VncUrl, vncUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceVncUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VncUrl, vncUrl_);
    };
    DescribeInstanceVncUrlResponseBody() = default ;
    DescribeInstanceVncUrlResponseBody(const DescribeInstanceVncUrlResponseBody &) = default ;
    DescribeInstanceVncUrlResponseBody(DescribeInstanceVncUrlResponseBody &&) = default ;
    DescribeInstanceVncUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceVncUrlResponseBody() = default ;
    DescribeInstanceVncUrlResponseBody& operator=(const DescribeInstanceVncUrlResponseBody &) = default ;
    DescribeInstanceVncUrlResponseBody& operator=(DescribeInstanceVncUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vncUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceVncUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vncUrl Field Functions 
    bool hasVncUrl() const { return this->vncUrl_ != nullptr;};
    void deleteVncUrl() { this->vncUrl_ = nullptr;};
    inline string getVncUrl() const { DARABONBA_PTR_GET_DEFAULT(vncUrl_, "") };
    inline DescribeInstanceVncUrlResponseBody& setVncUrl(string vncUrl) { DARABONBA_PTR_SET_VALUE(vncUrl_, vncUrl) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The URL of the VNC management terminal.
    shared_ptr<string> vncUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
