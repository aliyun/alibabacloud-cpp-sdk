// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODYDATACONTENTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODYDATACONTENTTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags& obj) { 
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags() = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags(const ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags(ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags &&) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags() = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags& operator=(const ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags& operator=(ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagName_ != nullptr
        && this->tags_ != nullptr; };
    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> tagName_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
