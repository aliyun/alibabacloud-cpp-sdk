// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList() = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList(const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList &) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList(SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList &&) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList() = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList& operator=(const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList &) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList& operator=(SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->waterMarkTemplate_ == nullptr; };
    // waterMarkTemplate Field Functions 
    bool hasWaterMarkTemplate() const { return this->waterMarkTemplate_ != nullptr;};
    void deleteWaterMarkTemplate() { this->waterMarkTemplate_ = nullptr;};
    inline const vector<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate> & waterMarkTemplate() const { DARABONBA_PTR_GET_CONST(waterMarkTemplate_, vector<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate>) };
    inline vector<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate> waterMarkTemplate() { DARABONBA_PTR_GET(waterMarkTemplate_, vector<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate>) };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList& setWaterMarkTemplate(const vector<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate> & waterMarkTemplate) { DARABONBA_PTR_SET_VALUE(waterMarkTemplate_, waterMarkTemplate) };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateList& setWaterMarkTemplate(vector<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate> && waterMarkTemplate) { DARABONBA_PTR_SET_RVALUE(waterMarkTemplate_, waterMarkTemplate) };


  protected:
    std::shared_ptr<vector<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate>> waterMarkTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
