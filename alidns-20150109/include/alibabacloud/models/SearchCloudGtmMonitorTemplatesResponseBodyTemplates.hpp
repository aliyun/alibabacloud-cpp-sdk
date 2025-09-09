// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmMonitorTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmMonitorTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmMonitorTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    SearchCloudGtmMonitorTemplatesResponseBodyTemplates() = default ;
    SearchCloudGtmMonitorTemplatesResponseBodyTemplates(const SearchCloudGtmMonitorTemplatesResponseBodyTemplates &) = default ;
    SearchCloudGtmMonitorTemplatesResponseBodyTemplates(SearchCloudGtmMonitorTemplatesResponseBodyTemplates &&) = default ;
    SearchCloudGtmMonitorTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmMonitorTemplatesResponseBodyTemplates() = default ;
    SearchCloudGtmMonitorTemplatesResponseBodyTemplates& operator=(const SearchCloudGtmMonitorTemplatesResponseBodyTemplates &) = default ;
    SearchCloudGtmMonitorTemplatesResponseBodyTemplates& operator=(SearchCloudGtmMonitorTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->template_ != nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate>) };
    inline vector<Models::SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate>) };
    inline SearchCloudGtmMonitorTemplatesResponseBodyTemplates& setTemplate(const vector<Models::SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline SearchCloudGtmMonitorTemplatesResponseBodyTemplates& setTemplate(vector<Models::SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::SearchCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
