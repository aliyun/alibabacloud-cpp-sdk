// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWATERMARKTEMPLATELISTRESPONSEBODYWATERMARKTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWATERMARKTEMPLATELISTRESPONSEBODYWATERMARKTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList() = default ;
    QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList(const QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList &) = default ;
    QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList(QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList &&) = default ;
    QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList() = default ;
    QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList& operator=(const QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList &) = default ;
    QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList& operator=(QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->waterMarkTemplate_ == nullptr; };
    // waterMarkTemplate Field Functions 
    bool hasWaterMarkTemplate() const { return this->waterMarkTemplate_ != nullptr;};
    void deleteWaterMarkTemplate() { this->waterMarkTemplate_ = nullptr;};
    inline const vector<Models::QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate> & waterMarkTemplate() const { DARABONBA_PTR_GET_CONST(waterMarkTemplate_, vector<Models::QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate>) };
    inline vector<Models::QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate> waterMarkTemplate() { DARABONBA_PTR_GET(waterMarkTemplate_, vector<Models::QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate>) };
    inline QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList& setWaterMarkTemplate(const vector<Models::QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate> & waterMarkTemplate) { DARABONBA_PTR_SET_VALUE(waterMarkTemplate_, waterMarkTemplate) };
    inline QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateList& setWaterMarkTemplate(vector<Models::QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate> && waterMarkTemplate) { DARABONBA_PTR_SET_RVALUE(waterMarkTemplate_, waterMarkTemplate) };


  protected:
    std::shared_ptr<vector<Models::QueryWaterMarkTemplateListResponseBodyWaterMarkTemplateListWaterMarkTemplate>> waterMarkTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
