// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchImageFigureClusterResponseBodyClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SearchImageFigureClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageFigureClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageFigureClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchImageFigureClusterResponseBody() = default ;
    SearchImageFigureClusterResponseBody(const SearchImageFigureClusterResponseBody &) = default ;
    SearchImageFigureClusterResponseBody(SearchImageFigureClusterResponseBody &&) = default ;
    SearchImageFigureClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageFigureClusterResponseBody() = default ;
    SearchImageFigureClusterResponseBody& operator=(const SearchImageFigureClusterResponseBody &) = default ;
    SearchImageFigureClusterResponseBody& operator=(SearchImageFigureClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusters_ != nullptr
        && this->requestId_ != nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<SearchImageFigureClusterResponseBodyClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<SearchImageFigureClusterResponseBodyClusters>) };
    inline vector<SearchImageFigureClusterResponseBodyClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<SearchImageFigureClusterResponseBodyClusters>) };
    inline SearchImageFigureClusterResponseBody& setClusters(const vector<SearchImageFigureClusterResponseBodyClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline SearchImageFigureClusterResponseBody& setClusters(vector<SearchImageFigureClusterResponseBodyClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchImageFigureClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The face clusters.
    std::shared_ptr<vector<SearchImageFigureClusterResponseBodyClusters>> clusters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
