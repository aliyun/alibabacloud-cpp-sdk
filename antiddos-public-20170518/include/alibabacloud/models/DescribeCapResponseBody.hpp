// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeCapResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CapUrl, capUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CapUrl, capUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCapResponseBody() = default ;
    DescribeCapResponseBody(const DescribeCapResponseBody &) = default ;
    DescribeCapResponseBody(DescribeCapResponseBody &&) = default ;
    DescribeCapResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapResponseBody() = default ;
    DescribeCapResponseBody& operator=(const DescribeCapResponseBody &) = default ;
    DescribeCapResponseBody& operator=(DescribeCapResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CapUrl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapUrl& obj) { 
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, CapUrl& obj) { 
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      CapUrl() = default ;
      CapUrl(const CapUrl &) = default ;
      CapUrl(CapUrl &&) = default ;
      CapUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapUrl() = default ;
      CapUrl& operator=(const CapUrl &) = default ;
      CapUrl& operator=(CapUrl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->url_ == nullptr; };
      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline CapUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The download link to the traffic data.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->capUrl_ == nullptr
        && this->requestId_ == nullptr; };
    // capUrl Field Functions 
    bool hasCapUrl() const { return this->capUrl_ != nullptr;};
    void deleteCapUrl() { this->capUrl_ = nullptr;};
    inline const DescribeCapResponseBody::CapUrl & getCapUrl() const { DARABONBA_PTR_GET_CONST(capUrl_, DescribeCapResponseBody::CapUrl) };
    inline DescribeCapResponseBody::CapUrl getCapUrl() { DARABONBA_PTR_GET(capUrl_, DescribeCapResponseBody::CapUrl) };
    inline DescribeCapResponseBody& setCapUrl(const DescribeCapResponseBody::CapUrl & capUrl) { DARABONBA_PTR_SET_VALUE(capUrl_, capUrl) };
    inline DescribeCapResponseBody& setCapUrl(DescribeCapResponseBody::CapUrl && capUrl) { DARABONBA_PTR_SET_RVALUE(capUrl_, capUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCapResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The download link to the traffic data that is captured when a DDoS attack event occurs.
    shared_ptr<DescribeCapResponseBody::CapUrl> capUrl_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
