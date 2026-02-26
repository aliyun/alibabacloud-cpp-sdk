// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Dataset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListDatasetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody(ListDatasetsResponseBody &&) = default ;
    ListDatasetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody& operator=(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody& operator=(ListDatasetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasets_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<Dataset> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<Dataset>) };
    inline vector<Dataset> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<Dataset>) };
    inline ListDatasetsResponseBody& setDatasets(const vector<Dataset> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline ListDatasetsResponseBody& setDatasets(vector<Dataset> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDatasetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The datasets.
    shared_ptr<vector<Dataset>> datasets_ {};
    // The pagination token. If the total number of datasets is greater than the value of MaxResults, you must specify this parameter. This parameter has a value only if not all the datasets that meet the conditions are returned.
    // 
    // Pass this value as the value of NextToken in the next call to query subsequent datasets.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
