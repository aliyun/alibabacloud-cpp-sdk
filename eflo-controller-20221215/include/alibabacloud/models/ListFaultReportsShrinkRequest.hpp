// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFAULTREPORTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFAULTREPORTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFaultReportsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaultReportsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaultReportsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListFaultReportsShrinkRequest() = default ;
    ListFaultReportsShrinkRequest(const ListFaultReportsShrinkRequest &) = default ;
    ListFaultReportsShrinkRequest(ListFaultReportsShrinkRequest &&) = default ;
    ListFaultReportsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaultReportsShrinkRequest() = default ;
    ListFaultReportsShrinkRequest& operator=(const ListFaultReportsShrinkRequest &) = default ;
    ListFaultReportsShrinkRequest& operator=(ListFaultReportsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodesShrink_ == nullptr && this->status_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListFaultReportsShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFaultReportsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodesShrink Field Functions 
    bool hasNodesShrink() const { return this->nodesShrink_ != nullptr;};
    void deleteNodesShrink() { this->nodesShrink_ = nullptr;};
    inline string getNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodesShrink_, "") };
    inline ListFaultReportsShrinkRequest& setNodesShrink(string nodesShrink) { DARABONBA_PTR_SET_VALUE(nodesShrink_, nodesShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFaultReportsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The maximum number of results to return.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The list of nodes.
    shared_ptr<string> nodesShrink_ {};
    // The status of the fault report.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
