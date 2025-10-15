// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkZoneIds, networkZoneIds_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneIds, networkZoneIds_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
    };
    ListNetworkZonesRequest() = default ;
    ListNetworkZonesRequest(const ListNetworkZonesRequest &) = default ;
    ListNetworkZonesRequest(ListNetworkZonesRequest &&) = default ;
    ListNetworkZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkZonesRequest() = default ;
    ListNetworkZonesRequest& operator=(const ListNetworkZonesRequest &) = default ;
    ListNetworkZonesRequest& operator=(ListNetworkZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->maxResults_ == nullptr && return this->networkZoneIds_ == nullptr && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkZonesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListNetworkZonesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkZoneIds Field Functions 
    bool hasNetworkZoneIds() const { return this->networkZoneIds_ != nullptr;};
    void deleteNetworkZoneIds() { this->networkZoneIds_ = nullptr;};
    inline const vector<string> & networkZoneIds() const { DARABONBA_PTR_GET_CONST(networkZoneIds_, vector<string>) };
    inline vector<string> networkZoneIds() { DARABONBA_PTR_GET(networkZoneIds_, vector<string>) };
    inline ListNetworkZonesRequest& setNetworkZoneIds(const vector<string> & networkZoneIds) { DARABONBA_PTR_SET_VALUE(networkZoneIds_, networkZoneIds) };
    inline ListNetworkZonesRequest& setNetworkZoneIds(vector<string> && networkZoneIds) { DARABONBA_PTR_SET_RVALUE(networkZoneIds_, networkZoneIds) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkZonesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListNetworkZonesRequest& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 分页查询时每页行数。默认值为20，最大值为100。
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // 网络ID集合
    std::shared_ptr<vector<string>> networkZoneIds_ = nullptr;
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> previousToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
