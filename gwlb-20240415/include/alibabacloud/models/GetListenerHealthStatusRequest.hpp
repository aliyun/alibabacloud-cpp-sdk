// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class GetListenerHealthStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
    };
    GetListenerHealthStatusRequest() = default ;
    GetListenerHealthStatusRequest(const GetListenerHealthStatusRequest &) = default ;
    GetListenerHealthStatusRequest(GetListenerHealthStatusRequest &&) = default ;
    GetListenerHealthStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusRequest() = default ;
    GetListenerHealthStatusRequest& operator=(const GetListenerHealthStatusRequest &) = default ;
    GetListenerHealthStatusRequest& operator=(GetListenerHealthStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->values_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filter& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filter& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The filter condition name. You can filter by one or more filter condition names. The URL must meet the following requirements:
      // 
      // *   **Status**: the health status.
      // *   **ReasonCode**: the cause of an unhealthy server.
      // *   **ServerId**: the ID of the backend server.
      // *   **ServerIp**: the IP address of the backend server.
      shared_ptr<string> name_ {};
      // The filter condition values. You can specify at most 20 condition values.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->listenerId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->skip_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetListenerHealthStatusRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetListenerHealthStatusRequest::Filter>) };
    inline vector<GetListenerHealthStatusRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<GetListenerHealthStatusRequest::Filter>) };
    inline GetListenerHealthStatusRequest& setFilter(const vector<GetListenerHealthStatusRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetListenerHealthStatusRequest& setFilter(vector<GetListenerHealthStatusRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline GetListenerHealthStatusRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetListenerHealthStatusRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetListenerHealthStatusRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline GetListenerHealthStatusRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


  protected:
    // The filter conditions. You can specify at most 20 filter conditions.
    shared_ptr<vector<GetListenerHealthStatusRequest::Filter>> filter_ {};
    // The listener ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The number of entries per page. Valid values: 1 to 1000. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The number of entries to be skipped in the call.
    shared_ptr<int32_t> skip_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
