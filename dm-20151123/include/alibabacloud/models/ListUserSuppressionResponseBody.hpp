// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListUserSuppressionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSuppressionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSuppressionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserSuppressionResponseBody() = default ;
    ListUserSuppressionResponseBody(const ListUserSuppressionResponseBody &) = default ;
    ListUserSuppressionResponseBody(ListUserSuppressionResponseBody &&) = default ;
    ListUserSuppressionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSuppressionResponseBody() = default ;
    ListUserSuppressionResponseBody& operator=(const ListUserSuppressionResponseBody &) = default ;
    ListUserSuppressionResponseBody& operator=(ListUserSuppressionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(UserSuppressions, userSuppressions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(UserSuppressions, userSuppressions_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserSuppressions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserSuppressions& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(LastBounceTime, lastBounceTime_);
          DARABONBA_PTR_TO_JSON(SuppressionId, suppressionId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, UserSuppressions& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(LastBounceTime, lastBounceTime_);
          DARABONBA_PTR_FROM_JSON(SuppressionId, suppressionId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        UserSuppressions() = default ;
        UserSuppressions(const UserSuppressions &) = default ;
        UserSuppressions(UserSuppressions &&) = default ;
        UserSuppressions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserSuppressions() = default ;
        UserSuppressions& operator=(const UserSuppressions &) = default ;
        UserSuppressions& operator=(UserSuppressions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->createTime_ == nullptr && this->lastBounceTime_ == nullptr && this->suppressionId_ == nullptr && this->type_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline UserSuppressions& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int32_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
        inline UserSuppressions& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // lastBounceTime Field Functions 
        bool hasLastBounceTime() const { return this->lastBounceTime_ != nullptr;};
        void deleteLastBounceTime() { this->lastBounceTime_ = nullptr;};
        inline int32_t getLastBounceTime() const { DARABONBA_PTR_GET_DEFAULT(lastBounceTime_, 0) };
        inline UserSuppressions& setLastBounceTime(int32_t lastBounceTime) { DARABONBA_PTR_SET_VALUE(lastBounceTime_, lastBounceTime) };


        // suppressionId Field Functions 
        bool hasSuppressionId() const { return this->suppressionId_ != nullptr;};
        void deleteSuppressionId() { this->suppressionId_ = nullptr;};
        inline int32_t getSuppressionId() const { DARABONBA_PTR_GET_DEFAULT(suppressionId_, 0) };
        inline UserSuppressions& setSuppressionId(int32_t suppressionId) { DARABONBA_PTR_SET_VALUE(suppressionId_, suppressionId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline UserSuppressions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Email address or domain name
        shared_ptr<string> address_ {};
        // Creation time, timestamp, accurate to the second.
        shared_ptr<int32_t> createTime_ {};
        // Last bounce hit time, timestamp, accurate to the second.
        shared_ptr<int32_t> lastBounceTime_ {};
        // Invalid address ID
        shared_ptr<int32_t> suppressionId_ {};
        // Source of entry, invalid address type
        // - system
        // - user
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->userSuppressions_ == nullptr; };
      // userSuppressions Field Functions 
      bool hasUserSuppressions() const { return this->userSuppressions_ != nullptr;};
      void deleteUserSuppressions() { this->userSuppressions_ = nullptr;};
      inline const vector<Data::UserSuppressions> & getUserSuppressions() const { DARABONBA_PTR_GET_CONST(userSuppressions_, vector<Data::UserSuppressions>) };
      inline vector<Data::UserSuppressions> getUserSuppressions() { DARABONBA_PTR_GET(userSuppressions_, vector<Data::UserSuppressions>) };
      inline Data& setUserSuppressions(const vector<Data::UserSuppressions> & userSuppressions) { DARABONBA_PTR_SET_VALUE(userSuppressions_, userSuppressions) };
      inline Data& setUserSuppressions(vector<Data::UserSuppressions> && userSuppressions) { DARABONBA_PTR_SET_RVALUE(userSuppressions_, userSuppressions) };


    protected:
      shared_ptr<vector<Data::UserSuppressions>> userSuppressions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListUserSuppressionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListUserSuppressionResponseBody::Data) };
    inline ListUserSuppressionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListUserSuppressionResponseBody::Data) };
    inline ListUserSuppressionResponseBody& setData(const ListUserSuppressionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUserSuppressionResponseBody& setData(ListUserSuppressionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUserSuppressionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserSuppressionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserSuppressionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserSuppressionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Returned results.
    shared_ptr<ListUserSuppressionResponseBody::Data> data_ {};
    // Page number
    shared_ptr<int32_t> pageNumber_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
