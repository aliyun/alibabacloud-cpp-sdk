// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONTRACKEVENTTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONTRACKEVENTTYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListActionTrackEventTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionTrackEventTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionTrackEventTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
    };
    ListActionTrackEventTypesRequest() = default ;
    ListActionTrackEventTypesRequest(const ListActionTrackEventTypesRequest &) = default ;
    ListActionTrackEventTypesRequest(ListActionTrackEventTypesRequest &&) = default ;
    ListActionTrackEventTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionTrackEventTypesRequest() = default ;
    ListActionTrackEventTypesRequest& operator=(const ListActionTrackEventTypesRequest &) = default ;
    ListActionTrackEventTypesRequest& operator=(ListActionTrackEventTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->previousToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListActionTrackEventTypesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListActionTrackEventTypesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionTrackEventTypesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListActionTrackEventTypesRequest& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 分页查询时每页行数。默认值为20，最大值为100。
    shared_ptr<int64_t> maxResults_ {};
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    shared_ptr<string> nextToken_ {};
    // 查询上一页凭证（Token），取值为上一次API调用返回的previousToken参数值。
    shared_ptr<string> previousToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
