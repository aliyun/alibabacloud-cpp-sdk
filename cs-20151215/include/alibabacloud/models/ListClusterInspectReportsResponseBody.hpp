// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERINSPECTREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERINSPECTREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterInspectReportsResponseBodyReports.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterInspectReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterInspectReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(reports, reports_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterInspectReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(reports, reports_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListClusterInspectReportsResponseBody() = default ;
    ListClusterInspectReportsResponseBody(const ListClusterInspectReportsResponseBody &) = default ;
    ListClusterInspectReportsResponseBody(ListClusterInspectReportsResponseBody &&) = default ;
    ListClusterInspectReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterInspectReportsResponseBody() = default ;
    ListClusterInspectReportsResponseBody& operator=(const ListClusterInspectReportsResponseBody &) = default ;
    ListClusterInspectReportsResponseBody& operator=(ListClusterInspectReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->reports_ == nullptr && return this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListClusterInspectReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<ListClusterInspectReportsResponseBodyReports> & reports() const { DARABONBA_PTR_GET_CONST(reports_, vector<ListClusterInspectReportsResponseBodyReports>) };
    inline vector<ListClusterInspectReportsResponseBodyReports> reports() { DARABONBA_PTR_GET(reports_, vector<ListClusterInspectReportsResponseBodyReports>) };
    inline ListClusterInspectReportsResponseBody& setReports(const vector<ListClusterInspectReportsResponseBodyReports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline ListClusterInspectReportsResponseBody& setReports(vector<ListClusterInspectReportsResponseBodyReports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterInspectReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The list of inspection reports.
    std::shared_ptr<vector<ListClusterInspectReportsResponseBodyReports>> reports_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
