// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESELLERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESELLERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListResellersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResellersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupplierInformation, supplierInformation_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResellersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupplierInformation, supplierInformation_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResellersResponseBody() = default ;
    ListResellersResponseBody(const ListResellersResponseBody &) = default ;
    ListResellersResponseBody(ListResellersResponseBody &&) = default ;
    ListResellersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResellersResponseBody() = default ;
    ListResellersResponseBody& operator=(const ListResellersResponseBody &) = default ;
    ListResellersResponseBody& operator=(ListResellersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupplierInformation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupplierInformation& obj) { 
        DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
        DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
        DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
        DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
      };
      friend void from_json(const Darabonba::Json& j, SupplierInformation& obj) { 
        DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
        DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
        DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
        DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
      };
      SupplierInformation() = default ;
      SupplierInformation(const SupplierInformation &) = default ;
      SupplierInformation(SupplierInformation &&) = default ;
      SupplierInformation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupplierInformation() = default ;
      SupplierInformation& operator=(const SupplierInformation &) = default ;
      SupplierInformation& operator=(SupplierInformation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->supplierDesc_ == nullptr
        && this->supplierLogo_ == nullptr && this->supplierName_ == nullptr && this->supplierUid_ == nullptr && this->supplierUrl_ == nullptr; };
      // supplierDesc Field Functions 
      bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
      void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
      inline string getSupplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
      inline SupplierInformation& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


      // supplierLogo Field Functions 
      bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
      void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
      inline string getSupplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
      inline SupplierInformation& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


      // supplierName Field Functions 
      bool hasSupplierName() const { return this->supplierName_ != nullptr;};
      void deleteSupplierName() { this->supplierName_ = nullptr;};
      inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
      inline SupplierInformation& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


      // supplierUid Field Functions 
      bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
      void deleteSupplierUid() { this->supplierUid_ = nullptr;};
      inline int64_t getSupplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
      inline SupplierInformation& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


      // supplierUrl Field Functions 
      bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
      void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
      inline string getSupplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
      inline SupplierInformation& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


    protected:
      // The description of distributor.
      shared_ptr<string> supplierDesc_ {};
      // The Logo of distributor
      shared_ptr<string> supplierLogo_ {};
      // The name of the distributor
      shared_ptr<string> supplierName_ {};
      // The Alibaba Cloud account ID of the distributor.
      shared_ptr<int64_t> supplierUid_ {};
      // The URL of the distributor.
      shared_ptr<string> supplierUrl_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->supplierInformation_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResellersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResellersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResellersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supplierInformation Field Functions 
    bool hasSupplierInformation() const { return this->supplierInformation_ != nullptr;};
    void deleteSupplierInformation() { this->supplierInformation_ = nullptr;};
    inline const vector<ListResellersResponseBody::SupplierInformation> & getSupplierInformation() const { DARABONBA_PTR_GET_CONST(supplierInformation_, vector<ListResellersResponseBody::SupplierInformation>) };
    inline vector<ListResellersResponseBody::SupplierInformation> getSupplierInformation() { DARABONBA_PTR_GET(supplierInformation_, vector<ListResellersResponseBody::SupplierInformation>) };
    inline ListResellersResponseBody& setSupplierInformation(const vector<ListResellersResponseBody::SupplierInformation> & supplierInformation) { DARABONBA_PTR_SET_VALUE(supplierInformation_, supplierInformation) };
    inline ListResellersResponseBody& setSupplierInformation(vector<ListResellersResponseBody::SupplierInformation> && supplierInformation) { DARABONBA_PTR_SET_RVALUE(supplierInformation_, supplierInformation) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResellersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // distributor informations
    shared_ptr<vector<ListResellersResponseBody::SupplierInformation>> supplierInformation_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
