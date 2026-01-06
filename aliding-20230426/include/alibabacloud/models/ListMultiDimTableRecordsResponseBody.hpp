// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMultiDimTableRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiDimTableRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiDimTableRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListMultiDimTableRecordsResponseBody() = default ;
    ListMultiDimTableRecordsResponseBody(const ListMultiDimTableRecordsResponseBody &) = default ;
    ListMultiDimTableRecordsResponseBody(ListMultiDimTableRecordsResponseBody &&) = default ;
    ListMultiDimTableRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiDimTableRecordsResponseBody() = default ;
    ListMultiDimTableRecordsResponseBody& operator=(const ListMultiDimTableRecordsResponseBody &) = default ;
    ListMultiDimTableRecordsResponseBody& operator=(ListMultiDimTableRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_ANY_TO_JSON(Fields, fields_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastModifiedBy, lastModifiedBy_);
        DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_ANY_FROM_JSON(Fields, fields_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastModifiedBy, lastModifiedBy_);
        DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LastModifiedBy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastModifiedBy& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, LastModifiedBy& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        LastModifiedBy() = default ;
        LastModifiedBy(const LastModifiedBy &) = default ;
        LastModifiedBy(LastModifiedBy &&) = default ;
        LastModifiedBy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastModifiedBy() = default ;
        LastModifiedBy& operator=(const LastModifiedBy &) = default ;
        LastModifiedBy& operator=(LastModifiedBy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline LastModifiedBy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> userId_ {};
      };

      class CreatedBy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreatedBy& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, CreatedBy& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        CreatedBy() = default ;
        CreatedBy(const CreatedBy &) = default ;
        CreatedBy(CreatedBy &&) = default ;
        CreatedBy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreatedBy() = default ;
        CreatedBy& operator=(const CreatedBy &) = default ;
        CreatedBy& operator=(CreatedBy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline CreatedBy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->createdBy_ == nullptr
        && this->createdTime_ == nullptr && this->fields_ == nullptr && this->id_ == nullptr && this->lastModifiedBy_ == nullptr && this->lastModifiedTime_ == nullptr; };
      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline const Records::CreatedBy & getCreatedBy() const { DARABONBA_PTR_GET_CONST(createdBy_, Records::CreatedBy) };
      inline Records::CreatedBy getCreatedBy() { DARABONBA_PTR_GET(createdBy_, Records::CreatedBy) };
      inline Records& setCreatedBy(const Records::CreatedBy & createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };
      inline Records& setCreatedBy(Records::CreatedBy && createdBy) { DARABONBA_PTR_SET_RVALUE(createdBy_, createdBy) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Records& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline       const Darabonba::Json & getFields() const { DARABONBA_GET(fields_) };
      Darabonba::Json & getFields() { DARABONBA_GET(fields_) };
      inline Records& setFields(const Darabonba::Json & fields) { DARABONBA_SET_VALUE(fields_, fields) };
      inline Records& setFields(Darabonba::Json && fields) { DARABONBA_SET_RVALUE(fields_, fields) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Records& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastModifiedBy Field Functions 
      bool hasLastModifiedBy() const { return this->lastModifiedBy_ != nullptr;};
      void deleteLastModifiedBy() { this->lastModifiedBy_ = nullptr;};
      inline const Records::LastModifiedBy & getLastModifiedBy() const { DARABONBA_PTR_GET_CONST(lastModifiedBy_, Records::LastModifiedBy) };
      inline Records::LastModifiedBy getLastModifiedBy() { DARABONBA_PTR_GET(lastModifiedBy_, Records::LastModifiedBy) };
      inline Records& setLastModifiedBy(const Records::LastModifiedBy & lastModifiedBy) { DARABONBA_PTR_SET_VALUE(lastModifiedBy_, lastModifiedBy) };
      inline Records& setLastModifiedBy(Records::LastModifiedBy && lastModifiedBy) { DARABONBA_PTR_SET_RVALUE(lastModifiedBy_, lastModifiedBy) };


      // lastModifiedTime Field Functions 
      bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
      void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
      inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
      inline Records& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    protected:
      shared_ptr<Records::CreatedBy> createdBy_ {};
      shared_ptr<int64_t> createdTime_ {};
      Darabonba::Json fields_ {};
      shared_ptr<string> id_ {};
      shared_ptr<Records::LastModifiedBy> lastModifiedBy_ {};
      shared_ptr<int64_t> lastModifiedTime_ {};
    };

    virtual bool empty() const override { return this->hasMore_ == nullptr
        && this->nextToken_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMultiDimTableRecordsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiDimTableRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListMultiDimTableRecordsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ListMultiDimTableRecordsResponseBody::Records>) };
    inline vector<ListMultiDimTableRecordsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ListMultiDimTableRecordsResponseBody::Records>) };
    inline ListMultiDimTableRecordsResponseBody& setRecords(const vector<ListMultiDimTableRecordsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListMultiDimTableRecordsResponseBody& setRecords(vector<ListMultiDimTableRecordsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiDimTableRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListMultiDimTableRecordsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListMultiDimTableRecordsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<bool> hasMore_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListMultiDimTableRecordsResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
