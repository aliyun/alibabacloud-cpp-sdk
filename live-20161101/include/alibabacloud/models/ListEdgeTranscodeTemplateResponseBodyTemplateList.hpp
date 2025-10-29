// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGETRANSCODETEMPLATERESPONSEBODYTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGETRANSCODETEMPLATERESPONSEBODYTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEdgeTranscodeTemplateResponseBodyTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeTranscodeTemplateResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeTranscodeTemplateResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    ListEdgeTranscodeTemplateResponseBodyTemplateList() = default ;
    ListEdgeTranscodeTemplateResponseBodyTemplateList(const ListEdgeTranscodeTemplateResponseBodyTemplateList &) = default ;
    ListEdgeTranscodeTemplateResponseBodyTemplateList(ListEdgeTranscodeTemplateResponseBodyTemplateList &&) = default ;
    ListEdgeTranscodeTemplateResponseBodyTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeTranscodeTemplateResponseBodyTemplateList() = default ;
    ListEdgeTranscodeTemplateResponseBodyTemplateList& operator=(const ListEdgeTranscodeTemplateResponseBodyTemplateList &) = default ;
    ListEdgeTranscodeTemplateResponseBodyTemplateList& operator=(ListEdgeTranscodeTemplateResponseBodyTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate>) };
    inline vector<Models::ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate>) };
    inline ListEdgeTranscodeTemplateResponseBodyTemplateList& setTemplate(const vector<Models::ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline ListEdgeTranscodeTemplateResponseBodyTemplateList& setTemplate(vector<Models::ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::ListEdgeTranscodeTemplateResponseBodyTemplateListTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
