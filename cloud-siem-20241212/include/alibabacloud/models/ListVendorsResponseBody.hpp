// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVENDORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVENDORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListVendorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVendorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, ListVendorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    ListVendorsResponseBody() = default ;
    ListVendorsResponseBody(const ListVendorsResponseBody &) = default ;
    ListVendorsResponseBody(ListVendorsResponseBody &&) = default ;
    ListVendorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVendorsResponseBody() = default ;
    ListVendorsResponseBody& operator=(const ListVendorsResponseBody &) = default ;
    ListVendorsResponseBody& operator=(ListVendorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vendors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vendors& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
        DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
        DARABONBA_PTR_TO_JSON(VendorType, vendorType_);
      };
      friend void from_json(const Darabonba::Json& j, Vendors& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
        DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
        DARABONBA_PTR_FROM_JSON(VendorType, vendorType_);
      };
      Vendors() = default ;
      Vendors(const Vendors &) = default ;
      Vendors(Vendors &&) = default ;
      Vendors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vendors() = default ;
      Vendors& operator=(const Vendors &) = default ;
      Vendors& operator=(Vendors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->updateTime_ == nullptr && this->vendorId_ == nullptr && this->vendorName_ == nullptr && this->vendorType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Vendors& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Vendors& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vendorId Field Functions 
      bool hasVendorId() const { return this->vendorId_ != nullptr;};
      void deleteVendorId() { this->vendorId_ = nullptr;};
      inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
      inline Vendors& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


      // vendorName Field Functions 
      bool hasVendorName() const { return this->vendorName_ != nullptr;};
      void deleteVendorName() { this->vendorName_ = nullptr;};
      inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
      inline Vendors& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


      // vendorType Field Functions 
      bool hasVendorType() const { return this->vendorType_ != nullptr;};
      void deleteVendorType() { this->vendorType_ = nullptr;};
      inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
      inline Vendors& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> vendorId_ {};
      shared_ptr<string> vendorName_ {};
      shared_ptr<string> vendorType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vendors_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVendorsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVendorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVendorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVendorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<ListVendorsResponseBody::Vendors> & getVendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<ListVendorsResponseBody::Vendors>) };
    inline vector<ListVendorsResponseBody::Vendors> getVendors() { DARABONBA_PTR_GET(vendors_, vector<ListVendorsResponseBody::Vendors>) };
    inline ListVendorsResponseBody& setVendors(const vector<ListVendorsResponseBody::Vendors> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline ListVendorsResponseBody& setVendors(vector<ListVendorsResponseBody::Vendors> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<ListVendorsResponseBody::Vendors>> vendors_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
