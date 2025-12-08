// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFACERESPONSEBODYDATAMATCHLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFACERESPONSEBODYDATAMATCHLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchFaceResponseBodyDataMatchListFaceItems.hpp>
#include <alibabacloud/models/SearchFaceResponseBodyDataMatchListLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class SearchFaceResponseBodyDataMatchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaceResponseBodyDataMatchList& obj) { 
      DARABONBA_PTR_TO_JSON(FaceItems, faceItems_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(QualitieScore, qualitieScore_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFaceResponseBodyDataMatchList& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceItems, faceItems_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(QualitieScore, qualitieScore_);
    };
    SearchFaceResponseBodyDataMatchList() = default ;
    SearchFaceResponseBodyDataMatchList(const SearchFaceResponseBodyDataMatchList &) = default ;
    SearchFaceResponseBodyDataMatchList(SearchFaceResponseBodyDataMatchList &&) = default ;
    SearchFaceResponseBodyDataMatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaceResponseBodyDataMatchList() = default ;
    SearchFaceResponseBodyDataMatchList& operator=(const SearchFaceResponseBodyDataMatchList &) = default ;
    SearchFaceResponseBodyDataMatchList& operator=(SearchFaceResponseBodyDataMatchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceItems_ == nullptr
        && return this->location_ == nullptr && return this->qualitieScore_ == nullptr; };
    // faceItems Field Functions 
    bool hasFaceItems() const { return this->faceItems_ != nullptr;};
    void deleteFaceItems() { this->faceItems_ = nullptr;};
    inline const vector<Models::SearchFaceResponseBodyDataMatchListFaceItems> & faceItems() const { DARABONBA_PTR_GET_CONST(faceItems_, vector<Models::SearchFaceResponseBodyDataMatchListFaceItems>) };
    inline vector<Models::SearchFaceResponseBodyDataMatchListFaceItems> faceItems() { DARABONBA_PTR_GET(faceItems_, vector<Models::SearchFaceResponseBodyDataMatchListFaceItems>) };
    inline SearchFaceResponseBodyDataMatchList& setFaceItems(const vector<Models::SearchFaceResponseBodyDataMatchListFaceItems> & faceItems) { DARABONBA_PTR_SET_VALUE(faceItems_, faceItems) };
    inline SearchFaceResponseBodyDataMatchList& setFaceItems(vector<Models::SearchFaceResponseBodyDataMatchListFaceItems> && faceItems) { DARABONBA_PTR_SET_RVALUE(faceItems_, faceItems) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::SearchFaceResponseBodyDataMatchListLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::SearchFaceResponseBodyDataMatchListLocation) };
    inline Models::SearchFaceResponseBodyDataMatchListLocation location() { DARABONBA_PTR_GET(location_, Models::SearchFaceResponseBodyDataMatchListLocation) };
    inline SearchFaceResponseBodyDataMatchList& setLocation(const Models::SearchFaceResponseBodyDataMatchListLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline SearchFaceResponseBodyDataMatchList& setLocation(Models::SearchFaceResponseBodyDataMatchListLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // qualitieScore Field Functions 
    bool hasQualitieScore() const { return this->qualitieScore_ != nullptr;};
    void deleteQualitieScore() { this->qualitieScore_ = nullptr;};
    inline float qualitieScore() const { DARABONBA_PTR_GET_DEFAULT(qualitieScore_, 0.0) };
    inline SearchFaceResponseBodyDataMatchList& setQualitieScore(float qualitieScore) { DARABONBA_PTR_SET_VALUE(qualitieScore_, qualitieScore) };


  protected:
    std::shared_ptr<vector<Models::SearchFaceResponseBodyDataMatchListFaceItems>> faceItems_ = nullptr;
    std::shared_ptr<Models::SearchFaceResponseBodyDataMatchListLocation> location_ = nullptr;
    std::shared_ptr<float> qualitieScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
