// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPCACACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPCACACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListPcaCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPcaCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPcaCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPcaCaCertificateResponseBody() = default ;
    ListPcaCaCertificateResponseBody(const ListPcaCaCertificateResponseBody &) = default ;
    ListPcaCaCertificateResponseBody(ListPcaCaCertificateResponseBody &&) = default ;
    ListPcaCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPcaCaCertificateResponseBody() = default ;
    ListPcaCaCertificateResponseBody& operator=(const ListPcaCaCertificateResponseBody &) = default ;
    ListPcaCaCertificateResponseBody& operator=(ListPcaCaCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(IssuerIdentifier, issuerIdentifier_);
        DARABONBA_PTR_TO_JSON(PrivateCaInstanceId, privateCaInstanceId_);
        DARABONBA_PTR_TO_JSON(PrivateCaRegionId, privateCaRegionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(IssuerIdentifier, issuerIdentifier_);
        DARABONBA_PTR_FROM_JSON(PrivateCaInstanceId, privateCaInstanceId_);
        DARABONBA_PTR_FROM_JSON(PrivateCaRegionId, privateCaRegionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->commonName_ == nullptr && this->issuerIdentifier_ == nullptr && this->privateCaInstanceId_ == nullptr && this->privateCaRegionId_ == nullptr && this->status_ == nullptr
        && this->userId_ == nullptr; };
      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline List& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline List& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // issuerIdentifier Field Functions 
      bool hasIssuerIdentifier() const { return this->issuerIdentifier_ != nullptr;};
      void deleteIssuerIdentifier() { this->issuerIdentifier_ = nullptr;};
      inline string getIssuerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(issuerIdentifier_, "") };
      inline List& setIssuerIdentifier(string issuerIdentifier) { DARABONBA_PTR_SET_VALUE(issuerIdentifier_, issuerIdentifier) };


      // privateCaInstanceId Field Functions 
      bool hasPrivateCaInstanceId() const { return this->privateCaInstanceId_ != nullptr;};
      void deletePrivateCaInstanceId() { this->privateCaInstanceId_ = nullptr;};
      inline string getPrivateCaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(privateCaInstanceId_, "") };
      inline List& setPrivateCaInstanceId(string privateCaInstanceId) { DARABONBA_PTR_SET_VALUE(privateCaInstanceId_, privateCaInstanceId) };


      // privateCaRegionId Field Functions 
      bool hasPrivateCaRegionId() const { return this->privateCaRegionId_ != nullptr;};
      void deletePrivateCaRegionId() { this->privateCaRegionId_ = nullptr;};
      inline string getPrivateCaRegionId() const { DARABONBA_PTR_GET_DEFAULT(privateCaRegionId_, "") };
      inline List& setPrivateCaRegionId(string privateCaRegionId) { DARABONBA_PTR_SET_VALUE(privateCaRegionId_, privateCaRegionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline List& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> certIdentifier_ {};
      shared_ptr<string> commonName_ {};
      shared_ptr<string> issuerIdentifier_ {};
      shared_ptr<string> privateCaInstanceId_ {};
      shared_ptr<string> privateCaRegionId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListPcaCaCertificateResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListPcaCaCertificateResponseBody::List>) };
    inline vector<ListPcaCaCertificateResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListPcaCaCertificateResponseBody::List>) };
    inline ListPcaCaCertificateResponseBody& setList(const vector<ListPcaCaCertificateResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListPcaCaCertificateResponseBody& setList(vector<ListPcaCaCertificateResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPcaCaCertificateResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPcaCaCertificateResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPcaCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPcaCaCertificateResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListPcaCaCertificateResponseBody::List>> list_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
