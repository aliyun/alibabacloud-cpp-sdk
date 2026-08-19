// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListTrusteeOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrusteeOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrusteeOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    ListTrusteeOrderRequest() = default ;
    ListTrusteeOrderRequest(const ListTrusteeOrderRequest &) = default ;
    ListTrusteeOrderRequest(ListTrusteeOrderRequest &&) = default ;
    ListTrusteeOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrusteeOrderRequest() = default ;
    ListTrusteeOrderRequest& operator=(const ListTrusteeOrderRequest &) = default ;
    ListTrusteeOrderRequest& operator=(ListTrusteeOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline int64_t getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0L) };
    inline ListTrusteeOrderRequest& setCertificateId(int64_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrusteeOrderRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrusteeOrderRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListTrusteeOrderRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The certificate ID.
    shared_ptr<int64_t> certificateId_ {};
    // The maximum number of records to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. If NextToken is empty, no more results are available.
    shared_ptr<string> nextToken_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
