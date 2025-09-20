// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Boundary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SearchImageFigureClusterResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageFigureClusterResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(Boundary, boundary_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageFigureClusterResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(Boundary, boundary_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
    };
    SearchImageFigureClusterResponseBodyClusters() = default ;
    SearchImageFigureClusterResponseBodyClusters(const SearchImageFigureClusterResponseBodyClusters &) = default ;
    SearchImageFigureClusterResponseBodyClusters(SearchImageFigureClusterResponseBodyClusters &&) = default ;
    SearchImageFigureClusterResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageFigureClusterResponseBodyClusters() = default ;
    SearchImageFigureClusterResponseBodyClusters& operator=(const SearchImageFigureClusterResponseBodyClusters &) = default ;
    SearchImageFigureClusterResponseBodyClusters& operator=(SearchImageFigureClusterResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boundary_ != nullptr
        && this->clusterId_ != nullptr && this->similarity_ != nullptr; };
    // boundary Field Functions 
    bool hasBoundary() const { return this->boundary_ != nullptr;};
    void deleteBoundary() { this->boundary_ = nullptr;};
    inline const Models::Boundary & boundary() const { DARABONBA_PTR_GET_CONST(boundary_, Models::Boundary) };
    inline Models::Boundary boundary() { DARABONBA_PTR_GET(boundary_, Models::Boundary) };
    inline SearchImageFigureClusterResponseBodyClusters& setBoundary(const Models::Boundary & boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };
    inline SearchImageFigureClusterResponseBodyClusters& setBoundary(Models::Boundary && boundary) { DARABONBA_PTR_SET_RVALUE(boundary_, boundary) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline SearchImageFigureClusterResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline float similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, 0.0) };
    inline SearchImageFigureClusterResponseBodyClusters& setSimilarity(float similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    // The bounding box of the face.
    std::shared_ptr<Models::Boundary> boundary_ = nullptr;
    // The ID of the face cluster that contains faces similar to the face within the bounding box.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The similarity between the face within the bounding box and the face cluster. Valid value: 0 to 1.
    std::shared_ptr<float> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
