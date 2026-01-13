// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATERAGSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATERAGSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribePrivateRAGServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateRAGServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaCert, caCert_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateRAGServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCert, caCert_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrivateRAGServiceResponseBody() = default ;
    DescribePrivateRAGServiceResponseBody(const DescribePrivateRAGServiceResponseBody &) = default ;
    DescribePrivateRAGServiceResponseBody(DescribePrivateRAGServiceResponseBody &&) = default ;
    DescribePrivateRAGServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateRAGServiceResponseBody() = default ;
    DescribePrivateRAGServiceResponseBody& operator=(const DescribePrivateRAGServiceResponseBody &) = default ;
    DescribePrivateRAGServiceResponseBody& operator=(DescribePrivateRAGServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCert_ == nullptr
        && this->requestId_ == nullptr; };
    // caCert Field Functions 
    bool hasCaCert() const { return this->caCert_ != nullptr;};
    void deleteCaCert() { this->caCert_ = nullptr;};
    inline string getCaCert() const { DARABONBA_PTR_GET_DEFAULT(caCert_, "") };
    inline DescribePrivateRAGServiceResponseBody& setCaCert(string caCert) { DARABONBA_PTR_SET_VALUE(caCert_, caCert) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrivateRAGServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // CA certificate Info. The returned OSS link, valid for 2 hours.
    shared_ptr<string> caCert_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
