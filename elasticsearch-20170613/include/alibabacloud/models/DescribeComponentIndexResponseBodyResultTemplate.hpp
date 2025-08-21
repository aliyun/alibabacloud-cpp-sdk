// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTINDEXRESPONSEBODYRESULTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTINDEXRESPONSEBODYRESULTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeComponentIndexResponseBodyResultTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentIndexResponseBodyResultTemplate& obj) { 
      DARABONBA_ANY_TO_JSON(aliases, aliases_);
      DARABONBA_ANY_TO_JSON(mappings, mappings_);
      DARABONBA_ANY_TO_JSON(settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentIndexResponseBodyResultTemplate& obj) { 
      DARABONBA_ANY_FROM_JSON(aliases, aliases_);
      DARABONBA_ANY_FROM_JSON(mappings, mappings_);
      DARABONBA_ANY_FROM_JSON(settings, settings_);
    };
    DescribeComponentIndexResponseBodyResultTemplate() = default ;
    DescribeComponentIndexResponseBodyResultTemplate(const DescribeComponentIndexResponseBodyResultTemplate &) = default ;
    DescribeComponentIndexResponseBodyResultTemplate(DescribeComponentIndexResponseBodyResultTemplate &&) = default ;
    DescribeComponentIndexResponseBodyResultTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentIndexResponseBodyResultTemplate() = default ;
    DescribeComponentIndexResponseBodyResultTemplate& operator=(const DescribeComponentIndexResponseBodyResultTemplate &) = default ;
    DescribeComponentIndexResponseBodyResultTemplate& operator=(DescribeComponentIndexResponseBodyResultTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliases_ != nullptr
        && this->mappings_ != nullptr && this->settings_ != nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline     const Darabonba::Json & aliases() const { DARABONBA_GET(aliases_) };
    Darabonba::Json & aliases() { DARABONBA_GET(aliases_) };
    inline DescribeComponentIndexResponseBodyResultTemplate& setAliases(const Darabonba::Json & aliases) { DARABONBA_SET_VALUE(aliases_, aliases) };
    inline DescribeComponentIndexResponseBodyResultTemplate& setAliases(Darabonba::Json & aliases) { DARABONBA_SET_RVALUE(aliases_, aliases) };


    // mappings Field Functions 
    bool hasMappings() const { return this->mappings_ != nullptr;};
    void deleteMappings() { this->mappings_ = nullptr;};
    inline     const Darabonba::Json & mappings() const { DARABONBA_GET(mappings_) };
    Darabonba::Json & mappings() { DARABONBA_GET(mappings_) };
    inline DescribeComponentIndexResponseBodyResultTemplate& setMappings(const Darabonba::Json & mappings) { DARABONBA_SET_VALUE(mappings_, mappings) };
    inline DescribeComponentIndexResponseBodyResultTemplate& setMappings(Darabonba::Json & mappings) { DARABONBA_SET_RVALUE(mappings_, mappings) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline     const Darabonba::Json & settings() const { DARABONBA_GET(settings_) };
    Darabonba::Json & settings() { DARABONBA_GET(settings_) };
    inline DescribeComponentIndexResponseBodyResultTemplate& setSettings(const Darabonba::Json & settings) { DARABONBA_SET_VALUE(settings_, settings) };
    inline DescribeComponentIndexResponseBodyResultTemplate& setSettings(Darabonba::Json & settings) { DARABONBA_SET_RVALUE(settings_, settings) };


  protected:
    Darabonba::Json aliases_ = nullptr;
    Darabonba::Json mappings_ = nullptr;
    Darabonba::Json settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
