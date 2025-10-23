// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTITEM_HPP_
#define ALIBABACLOUD_MODELS_CONTENTITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContentItemExtInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ContentItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentItem& obj) { 
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ContentItem& obj) { 
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ContentItem() = default ;
    ContentItem(const ContentItem &) = default ;
    ContentItem(ContentItem &&) = default ;
    ContentItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentItem() = default ;
    ContentItem& operator=(const ContentItem &) = default ;
    ContentItem& operator=(ContentItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extInfo_ == nullptr
        && return this->score_ == nullptr && return this->text_ == nullptr && return this->type_ == nullptr; };
    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline const vector<ContentItemExtInfo> & extInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, vector<ContentItemExtInfo>) };
    inline vector<ContentItemExtInfo> extInfo() { DARABONBA_PTR_GET(extInfo_, vector<ContentItemExtInfo>) };
    inline ContentItem& setExtInfo(const vector<ContentItemExtInfo> & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline ContentItem& setExtInfo(vector<ContentItemExtInfo> && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ContentItem& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ContentItem& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ContentItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<ContentItemExtInfo>> extInfo_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
