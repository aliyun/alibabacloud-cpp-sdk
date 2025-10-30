// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConnectorsResponseBodyConnectors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListConnectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connectors, connectors_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connectors, connectors_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListConnectorsResponseBody() = default ;
    ListConnectorsResponseBody(const ListConnectorsResponseBody &) = default ;
    ListConnectorsResponseBody(ListConnectorsResponseBody &&) = default ;
    ListConnectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsResponseBody() = default ;
    ListConnectorsResponseBody& operator=(const ListConnectorsResponseBody &) = default ;
    ListConnectorsResponseBody& operator=(ListConnectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectors_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr; };
    // connectors Field Functions 
    bool hasConnectors() const { return this->connectors_ != nullptr;};
    void deleteConnectors() { this->connectors_ = nullptr;};
    inline const vector<ListConnectorsResponseBodyConnectors> & connectors() const { DARABONBA_PTR_GET_CONST(connectors_, vector<ListConnectorsResponseBodyConnectors>) };
    inline vector<ListConnectorsResponseBodyConnectors> connectors() { DARABONBA_PTR_GET(connectors_, vector<ListConnectorsResponseBodyConnectors>) };
    inline ListConnectorsResponseBody& setConnectors(const vector<ListConnectorsResponseBodyConnectors> & connectors) { DARABONBA_PTR_SET_VALUE(connectors_, connectors) };
    inline ListConnectorsResponseBody& setConnectors(vector<ListConnectorsResponseBodyConnectors> && connectors) { DARABONBA_PTR_SET_RVALUE(connectors_, connectors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConnectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListConnectorsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // List of Connectors.
    std::shared_ptr<vector<ListConnectorsResponseBodyConnectors>> connectors_ = nullptr;
    // ID of the current request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of Connectors.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
