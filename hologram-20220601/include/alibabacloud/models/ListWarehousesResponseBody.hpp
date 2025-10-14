// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAREHOUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAREHOUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWarehousesResponseBodyWarehouseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListWarehousesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarehousesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(WarehouseList, warehouseList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarehousesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(WarehouseList, warehouseList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListWarehousesResponseBody() = default ;
    ListWarehousesResponseBody(const ListWarehousesResponseBody &) = default ;
    ListWarehousesResponseBody(ListWarehousesResponseBody &&) = default ;
    ListWarehousesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarehousesResponseBody() = default ;
    ListWarehousesResponseBody& operator=(const ListWarehousesResponseBody &) = default ;
    ListWarehousesResponseBody& operator=(ListWarehousesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->warehouseList_ == nullptr
        && return this->requestId_ == nullptr; };
    // warehouseList Field Functions 
    bool hasWarehouseList() const { return this->warehouseList_ != nullptr;};
    void deleteWarehouseList() { this->warehouseList_ = nullptr;};
    inline const vector<ListWarehousesResponseBodyWarehouseList> & warehouseList() const { DARABONBA_PTR_GET_CONST(warehouseList_, vector<ListWarehousesResponseBodyWarehouseList>) };
    inline vector<ListWarehousesResponseBodyWarehouseList> warehouseList() { DARABONBA_PTR_GET(warehouseList_, vector<ListWarehousesResponseBodyWarehouseList>) };
    inline ListWarehousesResponseBody& setWarehouseList(const vector<ListWarehousesResponseBodyWarehouseList> & warehouseList) { DARABONBA_PTR_SET_VALUE(warehouseList_, warehouseList) };
    inline ListWarehousesResponseBody& setWarehouseList(vector<ListWarehousesResponseBodyWarehouseList> && warehouseList) { DARABONBA_PTR_SET_RVALUE(warehouseList_, warehouseList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarehousesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of virtual warehouse instances.
    std::shared_ptr<vector<ListWarehousesResponseBodyWarehouseList>> warehouseList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
