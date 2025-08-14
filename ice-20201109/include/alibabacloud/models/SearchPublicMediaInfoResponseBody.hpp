// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchPublicMediaInfoResponseBodyPublicMediaInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchPublicMediaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPublicMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicMediaInfos, publicMediaInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPublicMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicMediaInfos, publicMediaInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchPublicMediaInfoResponseBody() = default ;
    SearchPublicMediaInfoResponseBody(const SearchPublicMediaInfoResponseBody &) = default ;
    SearchPublicMediaInfoResponseBody(SearchPublicMediaInfoResponseBody &&) = default ;
    SearchPublicMediaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPublicMediaInfoResponseBody() = default ;
    SearchPublicMediaInfoResponseBody& operator=(const SearchPublicMediaInfoResponseBody &) = default ;
    SearchPublicMediaInfoResponseBody& operator=(SearchPublicMediaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publicMediaInfos_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // publicMediaInfos Field Functions 
    bool hasPublicMediaInfos() const { return this->publicMediaInfos_ != nullptr;};
    void deletePublicMediaInfos() { this->publicMediaInfos_ = nullptr;};
    inline const vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos> & publicMediaInfos() const { DARABONBA_PTR_GET_CONST(publicMediaInfos_, vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos>) };
    inline vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos> publicMediaInfos() { DARABONBA_PTR_GET(publicMediaInfos_, vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos>) };
    inline SearchPublicMediaInfoResponseBody& setPublicMediaInfos(const vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos> & publicMediaInfos) { DARABONBA_PTR_SET_VALUE(publicMediaInfos_, publicMediaInfos) };
    inline SearchPublicMediaInfoResponseBody& setPublicMediaInfos(vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos> && publicMediaInfos) { DARABONBA_PTR_SET_RVALUE(publicMediaInfos_, publicMediaInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchPublicMediaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchPublicMediaInfoResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<SearchPublicMediaInfoResponseBodyPublicMediaInfos>> publicMediaInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
