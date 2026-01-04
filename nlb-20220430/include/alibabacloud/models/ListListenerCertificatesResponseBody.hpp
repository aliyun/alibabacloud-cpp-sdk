// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERCERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERCERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListListenerCertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenerCertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenerCertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListListenerCertificatesResponseBody() = default ;
    ListListenerCertificatesResponseBody(const ListListenerCertificatesResponseBody &) = default ;
    ListListenerCertificatesResponseBody(ListListenerCertificatesResponseBody &&) = default ;
    ListListenerCertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenerCertificatesResponseBody() = default ;
    ListListenerCertificatesResponseBody& operator=(const ListListenerCertificatesResponseBody &) = default ;
    ListListenerCertificatesResponseBody& operator=(ListListenerCertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Certificates() = default ;
      Certificates(const Certificates &) = default ;
      Certificates(Certificates &&) = default ;
      Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certificates() = default ;
      Certificates& operator=(const Certificates &) = default ;
      Certificates& operator=(Certificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->certificateType_ == nullptr && this->isDefault_ == nullptr && this->status_ == nullptr; };
      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline Certificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
      inline Certificates& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Certificates& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Certificates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the certificate. Only one server certificate is supported.
      shared_ptr<string> certificateId_ {};
      // The type of the certificate.
      shared_ptr<string> certificateType_ {};
      // Indicates whether the certificate is the default certificate of the listener. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isDefault_ {};
      // Indicates whether the certificate is associated with the listener. Valid values:
      // 
      // *   **Associating**
      // *   **Associated**
      // *   **Diassociating**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->certificateIds_ == nullptr
        && this->certificates_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // certificateIds Field Functions 
    bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
    void deleteCertificateIds() { this->certificateIds_ = nullptr;};
    inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
    inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
    inline ListListenerCertificatesResponseBody& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
    inline ListListenerCertificatesResponseBody& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<ListListenerCertificatesResponseBody::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<ListListenerCertificatesResponseBody::Certificates>) };
    inline vector<ListListenerCertificatesResponseBody::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<ListListenerCertificatesResponseBody::Certificates>) };
    inline ListListenerCertificatesResponseBody& setCertificates(const vector<ListListenerCertificatesResponseBody::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ListListenerCertificatesResponseBody& setCertificates(vector<ListListenerCertificatesResponseBody::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListListenerCertificatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListListenerCertificatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListenerCertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListenerCertificatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The server certificates.
    shared_ptr<vector<string>> certificateIds_ {};
    // The certificates.
    shared_ptr<vector<ListListenerCertificatesResponseBody::Certificates>> certificates_ {};
    // The number of entries returned per page. Valid values: **1** to **50**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
