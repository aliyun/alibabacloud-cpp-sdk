// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGERESPONSEBODYIMAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGERESPONSEBODYIMAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchImageResponseBodyImageResponseImageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SearchImageResponseBodyImageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageResponseBodyImageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageResponseBodyImageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    SearchImageResponseBodyImageResponse() = default ;
    SearchImageResponseBodyImageResponse(const SearchImageResponseBodyImageResponse &) = default ;
    SearchImageResponseBodyImageResponse(SearchImageResponseBodyImageResponse &&) = default ;
    SearchImageResponseBodyImageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageResponseBodyImageResponse() = default ;
    SearchImageResponseBodyImageResponse& operator=(const SearchImageResponseBodyImageResponse &) = default ;
    SearchImageResponseBodyImageResponse& operator=(SearchImageResponseBodyImageResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<Models::SearchImageResponseBodyImageResponseImageList> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<Models::SearchImageResponseBodyImageResponseImageList>) };
    inline vector<Models::SearchImageResponseBodyImageResponseImageList> imageList() { DARABONBA_PTR_GET(imageList_, vector<Models::SearchImageResponseBodyImageResponseImageList>) };
    inline SearchImageResponseBodyImageResponse& setImageList(const vector<Models::SearchImageResponseBodyImageResponseImageList> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline SearchImageResponseBodyImageResponse& setImageList(vector<Models::SearchImageResponseBodyImageResponseImageList> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchImageResponseBodyImageResponse& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchImageResponseBodyImageResponse& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<Models::SearchImageResponseBodyImageResponseImageList>> imageList_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
