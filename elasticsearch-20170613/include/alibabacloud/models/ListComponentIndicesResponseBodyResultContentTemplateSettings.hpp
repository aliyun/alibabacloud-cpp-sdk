// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENTTEMPLATESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENTTEMPLATESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBodyResultContentTemplateSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBodyResultContentTemplateSettings& obj) { 
      DARABONBA_PTR_TO_JSON(index, index_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBodyResultContentTemplateSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(index, index_);
    };
    ListComponentIndicesResponseBodyResultContentTemplateSettings() = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettings(const ListComponentIndicesResponseBodyResultContentTemplateSettings &) = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettings(ListComponentIndicesResponseBodyResultContentTemplateSettings &&) = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBodyResultContentTemplateSettings() = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettings& operator=(const ListComponentIndicesResponseBodyResultContentTemplateSettings &) = default ;
    ListComponentIndicesResponseBodyResultContentTemplateSettings& operator=(ListComponentIndicesResponseBodyResultContentTemplateSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline const Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex & index() const { DARABONBA_PTR_GET_CONST(index_, Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex) };
    inline Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex index() { DARABONBA_PTR_GET(index_, Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex) };
    inline ListComponentIndicesResponseBodyResultContentTemplateSettings& setIndex(const Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex & index) { DARABONBA_PTR_SET_VALUE(index_, index) };
    inline ListComponentIndicesResponseBodyResultContentTemplateSettings& setIndex(Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex && index) { DARABONBA_PTR_SET_RVALUE(index_, index) };


  protected:
    std::shared_ptr<Models::ListComponentIndicesResponseBodyResultContentTemplateSettingsIndex> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
