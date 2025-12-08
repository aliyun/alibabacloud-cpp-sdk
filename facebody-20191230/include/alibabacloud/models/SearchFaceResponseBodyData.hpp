// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchFaceResponseBodyDataMatchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class SearchFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MatchList, matchList_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
    };
    SearchFaceResponseBodyData() = default ;
    SearchFaceResponseBodyData(const SearchFaceResponseBodyData &) = default ;
    SearchFaceResponseBodyData(SearchFaceResponseBodyData &&) = default ;
    SearchFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaceResponseBodyData() = default ;
    SearchFaceResponseBodyData& operator=(const SearchFaceResponseBodyData &) = default ;
    SearchFaceResponseBodyData& operator=(SearchFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchList_ == nullptr; };
    // matchList Field Functions 
    bool hasMatchList() const { return this->matchList_ != nullptr;};
    void deleteMatchList() { this->matchList_ = nullptr;};
    inline const vector<Models::SearchFaceResponseBodyDataMatchList> & matchList() const { DARABONBA_PTR_GET_CONST(matchList_, vector<Models::SearchFaceResponseBodyDataMatchList>) };
    inline vector<Models::SearchFaceResponseBodyDataMatchList> matchList() { DARABONBA_PTR_GET(matchList_, vector<Models::SearchFaceResponseBodyDataMatchList>) };
    inline SearchFaceResponseBodyData& setMatchList(const vector<Models::SearchFaceResponseBodyDataMatchList> & matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };
    inline SearchFaceResponseBodyData& setMatchList(vector<Models::SearchFaceResponseBodyDataMatchList> && matchList) { DARABONBA_PTR_SET_RVALUE(matchList_, matchList) };


  protected:
    std::shared_ptr<vector<Models::SearchFaceResponseBodyDataMatchList>> matchList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
