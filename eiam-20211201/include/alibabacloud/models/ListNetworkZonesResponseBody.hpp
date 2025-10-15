// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetworkZonesResponseBodyNetworkZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNetworkZonesResponseBody() = default ;
    ListNetworkZonesResponseBody(const ListNetworkZonesResponseBody &) = default ;
    ListNetworkZonesResponseBody(ListNetworkZonesResponseBody &&) = default ;
    ListNetworkZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkZonesResponseBody() = default ;
    ListNetworkZonesResponseBody& operator=(const ListNetworkZonesResponseBody &) = default ;
    ListNetworkZonesResponseBody& operator=(ListNetworkZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkZones_ == nullptr
        && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const vector<ListNetworkZonesResponseBodyNetworkZones> & networkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, vector<ListNetworkZonesResponseBodyNetworkZones>) };
    inline vector<ListNetworkZonesResponseBodyNetworkZones> networkZones() { DARABONBA_PTR_GET(networkZones_, vector<ListNetworkZonesResponseBodyNetworkZones>) };
    inline ListNetworkZonesResponseBody& setNetworkZones(const vector<ListNetworkZonesResponseBodyNetworkZones> & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline ListNetworkZonesResponseBody& setNetworkZones(vector<ListNetworkZonesResponseBodyNetworkZones> && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkZonesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListNetworkZonesResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNetworkZonesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListNetworkZonesResponseBodyNetworkZones>> networkZones_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> previousToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
