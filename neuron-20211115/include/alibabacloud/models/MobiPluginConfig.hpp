// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBIPLUGINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MOBIPLUGINCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppConfigMapping.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MobiPluginConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobiPluginConfig& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(mappings, mappings_);
    };
    friend void from_json(const Darabonba::Json& j, MobiPluginConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(mappings, mappings_);
    };
    MobiPluginConfig() = default ;
    MobiPluginConfig(const MobiPluginConfig &) = default ;
    MobiPluginConfig(MobiPluginConfig &&) = default ;
    MobiPluginConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobiPluginConfig() = default ;
    MobiPluginConfig& operator=(const MobiPluginConfig &) = default ;
    MobiPluginConfig& operator=(MobiPluginConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->mappings_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline MobiPluginConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // mappings Field Functions 
    bool hasMappings() const { return this->mappings_ != nullptr;};
    void deleteMappings() { this->mappings_ = nullptr;};
    inline const vector<AppConfigMapping> & getMappings() const { DARABONBA_PTR_GET_CONST(mappings_, vector<AppConfigMapping>) };
    inline vector<AppConfigMapping> getMappings() { DARABONBA_PTR_GET(mappings_, vector<AppConfigMapping>) };
    inline MobiPluginConfig& setMappings(const vector<AppConfigMapping> & mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };
    inline MobiPluginConfig& setMappings(vector<AppConfigMapping> && mappings) { DARABONBA_PTR_SET_RVALUE(mappings_, mappings) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<vector<AppConfigMapping>> mappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
