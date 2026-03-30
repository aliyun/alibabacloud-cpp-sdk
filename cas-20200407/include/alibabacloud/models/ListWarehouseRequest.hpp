// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSEREQUEST_HPP_
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
  class ListWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(WarehouseInstanceIds, warehouseInstanceIds_);
      DARABONBA_PTR_TO_JSON(WarehouseTypes, warehouseTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(WarehouseInstanceIds, warehouseInstanceIds_);
      DARABONBA_PTR_FROM_JSON(WarehouseTypes, warehouseTypes_);
    };
    ListWarehouseRequest() = default ;
    ListWarehouseRequest(const ListWarehouseRequest &) = default ;
    ListWarehouseRequest(ListWarehouseRequest &&) = default ;
    ListWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehouseRequest() = default ;
    ListWarehouseRequest& operator=(const ListWarehouseRequest &) = default ;
    ListWarehouseRequest& operator=(ListWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->warehouseInstanceIds_ == nullptr && this->warehouseTypes_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWarehouseRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWarehouseRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // warehouseInstanceIds Field Functions 
    bool hasWarehouseInstanceIds() const { return this->warehouseInstanceIds_ != nullptr;};
    void deleteWarehouseInstanceIds() { this->warehouseInstanceIds_ = nullptr;};
    inline const vector<string> & getWarehouseInstanceIds() const { DARABONBA_PTR_GET_CONST(warehouseInstanceIds_, vector<string>) };
    inline vector<string> getWarehouseInstanceIds() { DARABONBA_PTR_GET(warehouseInstanceIds_, vector<string>) };
    inline ListWarehouseRequest& setWarehouseInstanceIds(const vector<string> & warehouseInstanceIds) { DARABONBA_PTR_SET_VALUE(warehouseInstanceIds_, warehouseInstanceIds) };
    inline ListWarehouseRequest& setWarehouseInstanceIds(vector<string> && warehouseInstanceIds) { DARABONBA_PTR_SET_RVALUE(warehouseInstanceIds_, warehouseInstanceIds) };


    // warehouseTypes Field Functions 
    bool hasWarehouseTypes() const { return this->warehouseTypes_ != nullptr;};
    void deleteWarehouseTypes() { this->warehouseTypes_ = nullptr;};
    inline const vector<string> & getWarehouseTypes() const { DARABONBA_PTR_GET_CONST(warehouseTypes_, vector<string>) };
    inline vector<string> getWarehouseTypes() { DARABONBA_PTR_GET(warehouseTypes_, vector<string>) };
    inline ListWarehouseRequest& setWarehouseTypes(const vector<string> & warehouseTypes) { DARABONBA_PTR_SET_VALUE(warehouseTypes_, warehouseTypes) };
    inline ListWarehouseRequest& setWarehouseTypes(vector<string> && warehouseTypes) { DARABONBA_PTR_SET_RVALUE(warehouseTypes_, warehouseTypes) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<string>> warehouseInstanceIds_ {};
    shared_ptr<vector<string>> warehouseTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
