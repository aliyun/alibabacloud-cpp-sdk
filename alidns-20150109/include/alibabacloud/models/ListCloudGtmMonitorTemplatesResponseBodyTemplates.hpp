// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    ListCloudGtmMonitorTemplatesResponseBodyTemplates() = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplates(const ListCloudGtmMonitorTemplatesResponseBodyTemplates &) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplates(ListCloudGtmMonitorTemplatesResponseBodyTemplates &&) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorTemplatesResponseBodyTemplates() = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplates& operator=(const ListCloudGtmMonitorTemplatesResponseBodyTemplates &) = default ;
    ListCloudGtmMonitorTemplatesResponseBodyTemplates& operator=(ListCloudGtmMonitorTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->template_ != nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate>) };
    inline vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate>) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplates& setTemplate(const vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline ListCloudGtmMonitorTemplatesResponseBodyTemplates& setTemplate(vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmMonitorTemplatesResponseBodyTemplatesTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
