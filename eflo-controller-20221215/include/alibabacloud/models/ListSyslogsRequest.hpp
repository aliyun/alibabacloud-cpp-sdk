// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListSyslogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyslogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromTime, fromTime_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(ToTime, toTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyslogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromTime, fromTime_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(ToTime, toTime_);
    };
    ListSyslogsRequest() = default ;
    ListSyslogsRequest(const ListSyslogsRequest &) = default ;
    ListSyslogsRequest(ListSyslogsRequest &&) = default ;
    ListSyslogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyslogsRequest() = default ;
    ListSyslogsRequest& operator=(const ListSyslogsRequest &) = default ;
    ListSyslogsRequest& operator=(ListSyslogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromTime_ == nullptr
        && this->nextToken_ == nullptr && this->nodeId_ == nullptr && this->query_ == nullptr && this->reverse_ == nullptr && this->toTime_ == nullptr; };
    // fromTime Field Functions 
    bool hasFromTime() const { return this->fromTime_ != nullptr;};
    void deleteFromTime() { this->fromTime_ = nullptr;};
    inline string getFromTime() const { DARABONBA_PTR_GET_DEFAULT(fromTime_, "") };
    inline ListSyslogsRequest& setFromTime(string fromTime) { DARABONBA_PTR_SET_VALUE(fromTime_, fromTime) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSyslogsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListSyslogsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListSyslogsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline ListSyslogsRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // toTime Field Functions 
    bool hasToTime() const { return this->toTime_ != nullptr;};
    void deleteToTime() { this->toTime_ = nullptr;};
    inline string getToTime() const { DARABONBA_PTR_GET_DEFAULT(toTime_, "") };
    inline ListSyslogsRequest& setToTime(string toTime) { DARABONBA_PTR_SET_VALUE(toTime_, toTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> fromTime_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> query_ {};
    shared_ptr<bool> reverse_ {};
    // This parameter is required.
    shared_ptr<string> toTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
