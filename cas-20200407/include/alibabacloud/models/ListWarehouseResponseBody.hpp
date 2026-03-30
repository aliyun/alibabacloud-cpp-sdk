// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListWarehouseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehouseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehouseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWarehouseResponseBody() = default ;
    ListWarehouseResponseBody(const ListWarehouseResponseBody &) = default ;
    ListWarehouseResponseBody(ListWarehouseResponseBody &&) = default ;
    ListWarehouseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehouseResponseBody() = default ;
    ListWarehouseResponseBody& operator=(const ListWarehouseResponseBody &) = default ;
    ListWarehouseResponseBody& operator=(ListWarehouseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(WarehouseInstanceId, warehouseInstanceId_);
        DARABONBA_PTR_TO_JSON(WarehouseName, warehouseName_);
        DARABONBA_PTR_TO_JSON(WarehouseType, warehouseType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(WarehouseInstanceId, warehouseInstanceId_);
        DARABONBA_PTR_FROM_JSON(WarehouseName, warehouseName_);
        DARABONBA_PTR_FROM_JSON(WarehouseType, warehouseType_);
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
      virtual bool empty() const override { return this->warehouseInstanceId_ == nullptr
        && this->warehouseName_ == nullptr && this->warehouseType_ == nullptr; };
      // warehouseInstanceId Field Functions 
      bool hasWarehouseInstanceId() const { return this->warehouseInstanceId_ != nullptr;};
      void deleteWarehouseInstanceId() { this->warehouseInstanceId_ = nullptr;};
      inline string getWarehouseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(warehouseInstanceId_, "") };
      inline Data& setWarehouseInstanceId(string warehouseInstanceId) { DARABONBA_PTR_SET_VALUE(warehouseInstanceId_, warehouseInstanceId) };


      // warehouseName Field Functions 
      bool hasWarehouseName() const { return this->warehouseName_ != nullptr;};
      void deleteWarehouseName() { this->warehouseName_ = nullptr;};
      inline string getWarehouseName() const { DARABONBA_PTR_GET_DEFAULT(warehouseName_, "") };
      inline Data& setWarehouseName(string warehouseName) { DARABONBA_PTR_SET_VALUE(warehouseName_, warehouseName) };


      // warehouseType Field Functions 
      bool hasWarehouseType() const { return this->warehouseType_ != nullptr;};
      void deleteWarehouseType() { this->warehouseType_ = nullptr;};
      inline string getWarehouseType() const { DARABONBA_PTR_GET_DEFAULT(warehouseType_, "") };
      inline Data& setWarehouseType(string warehouseType) { DARABONBA_PTR_SET_VALUE(warehouseType_, warehouseType) };


    protected:
      shared_ptr<string> warehouseInstanceId_ {};
      shared_ptr<string> warehouseName_ {};
      shared_ptr<string> warehouseType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListWarehouseResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListWarehouseResponseBody::Data>) };
    inline vector<ListWarehouseResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListWarehouseResponseBody::Data>) };
    inline ListWarehouseResponseBody& setData(const vector<ListWarehouseResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWarehouseResponseBody& setData(vector<ListWarehouseResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWarehouseResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWarehouseResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarehouseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWarehouseResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListWarehouseResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
