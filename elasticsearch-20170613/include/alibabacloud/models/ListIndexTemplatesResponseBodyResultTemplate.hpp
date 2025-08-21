// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXTEMPLATESRESPONSEBODYRESULTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXTEMPLATESRESPONSEBODYRESULTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListIndexTemplatesResponseBodyResultTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexTemplatesResponseBodyResultTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(aliases, aliases_);
      DARABONBA_PTR_TO_JSON(mappings, mappings_);
      DARABONBA_PTR_TO_JSON(settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexTemplatesResponseBodyResultTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(mappings, mappings_);
      DARABONBA_PTR_FROM_JSON(settings, settings_);
    };
    ListIndexTemplatesResponseBodyResultTemplate() = default ;
    ListIndexTemplatesResponseBodyResultTemplate(const ListIndexTemplatesResponseBodyResultTemplate &) = default ;
    ListIndexTemplatesResponseBodyResultTemplate(ListIndexTemplatesResponseBodyResultTemplate &&) = default ;
    ListIndexTemplatesResponseBodyResultTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexTemplatesResponseBodyResultTemplate() = default ;
    ListIndexTemplatesResponseBodyResultTemplate& operator=(const ListIndexTemplatesResponseBodyResultTemplate &) = default ;
    ListIndexTemplatesResponseBodyResultTemplate& operator=(ListIndexTemplatesResponseBodyResultTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliases_ != nullptr
        && this->mappings_ != nullptr && this->settings_ != nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline string aliases() const { DARABONBA_PTR_GET_DEFAULT(aliases_, "") };
    inline ListIndexTemplatesResponseBodyResultTemplate& setAliases(string aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };


    // mappings Field Functions 
    bool hasMappings() const { return this->mappings_ != nullptr;};
    void deleteMappings() { this->mappings_ = nullptr;};
    inline string mappings() const { DARABONBA_PTR_GET_DEFAULT(mappings_, "") };
    inline ListIndexTemplatesResponseBodyResultTemplate& setMappings(string mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string settings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline ListIndexTemplatesResponseBodyResultTemplate& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


  protected:
    std::shared_ptr<string> aliases_ = nullptr;
    std::shared_ptr<string> mappings_ = nullptr;
    std::shared_ptr<string> settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
