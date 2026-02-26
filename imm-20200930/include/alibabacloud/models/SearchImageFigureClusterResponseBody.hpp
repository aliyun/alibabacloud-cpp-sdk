// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Boundary.hpp>
#include <vector>
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
    class Clusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
        DARABONBA_PTR_TO_JSON(Boundary, boundary_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Similarity, similarity_);
      };
      friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
        DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
      };
      Clusters() = default ;
      Clusters(const Clusters &) = default ;
      Clusters(Clusters &&) = default ;
      Clusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clusters() = default ;
      Clusters& operator=(const Clusters &) = default ;
      Clusters& operator=(Clusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->boundary_ == nullptr
        && this->clusterId_ == nullptr && this->similarity_ == nullptr; };
      // boundary Field Functions 
      bool hasBoundary() const { return this->boundary_ != nullptr;};
      void deleteBoundary() { this->boundary_ = nullptr;};
      inline const Boundary & getBoundary() const { DARABONBA_PTR_GET_CONST(boundary_, Boundary) };
      inline Boundary getBoundary() { DARABONBA_PTR_GET(boundary_, Boundary) };
      inline Clusters& setBoundary(const Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
      inline Clusters& setBoundary(Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Clusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // similarity Field Functions 
      bool hasSimilarity() const { return this->similarity_ != nullptr;};
      void deleteSimilarity() { this->similarity_ = nullptr;};
      inline float getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, 0.0) };
      inline Clusters& setSimilarity(float similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


    protected:
      // The bounding box of the face.
      shared_ptr<Boundary> boundary_ {};
      // The ID of the face cluster that contains faces similar to the face within the bounding box.
      shared_ptr<string> clusterId_ {};
      // The similarity between the face within the bounding box and the face cluster. Valid value: 0 to 1.
      shared_ptr<float> similarity_ {};
    };

    virtual bool empty() const override { return this->clusters_ == nullptr
        && this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<SearchImageFigureClusterResponseBody::Clusters> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<SearchImageFigureClusterResponseBody::Clusters>) };
    inline vector<SearchImageFigureClusterResponseBody::Clusters> getClusters() { DARABONBA_PTR_GET(clusters_, vector<SearchImageFigureClusterResponseBody::Clusters>) };
    inline SearchImageFigureClusterResponseBody& setClusters(const vector<SearchImageFigureClusterResponseBody::Clusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline SearchImageFigureClusterResponseBody& setClusters(vector<SearchImageFigureClusterResponseBody::Clusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchImageFigureClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The face clusters.
    shared_ptr<vector<SearchImageFigureClusterResponseBody::Clusters>> clusters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
