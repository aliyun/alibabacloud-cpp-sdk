// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComponentIndicesResponseBodyResultContentTemplateSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBodyResultContentTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBodyResultContentTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBodyResultContentTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(settings, settings_);
    };
    ListComponentIndicesResponseBodyResultContentTemplate() = default ;
    ListComponentIndicesResponseBodyResultContentTemplate(const ListComponentIndicesResponseBodyResultContentTemplate &) = default ;
    ListComponentIndicesResponseBodyResultContentTemplate(ListComponentIndicesResponseBodyResultContentTemplate &&) = default ;
    ListComponentIndicesResponseBodyResultContentTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBodyResultContentTemplate() = default ;
    ListComponentIndicesResponseBodyResultContentTemplate& operator=(const ListComponentIndicesResponseBodyResultContentTemplate &) = default ;
    ListComponentIndicesResponseBodyResultContentTemplate& operator=(ListComponentIndicesResponseBodyResultContentTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->settings_ != nullptr; };
    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const Models::ListComponentIndicesResponseBodyResultContentTemplateSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, Models::ListComponentIndicesResponseBodyResultContentTemplateSettings) };
    inline Models::ListComponentIndicesResponseBodyResultContentTemplateSettings settings() { DARABONBA_PTR_GET(settings_, Models::ListComponentIndicesResponseBodyResultContentTemplateSettings) };
    inline ListComponentIndicesResponseBodyResultContentTemplate& setSettings(const Models::ListComponentIndicesResponseBodyResultContentTemplateSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline ListComponentIndicesResponseBodyResultContentTemplate& setSettings(Models::ListComponentIndicesResponseBodyResultContentTemplateSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    std::shared_ptr<Models::ListComponentIndicesResponseBodyResultContentTemplateSettings> settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
