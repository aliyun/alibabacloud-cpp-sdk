// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCARDSMSTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCARDSMSTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryCardSmsTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCardSmsTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCardSmsTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    QueryCardSmsTemplateResponseBodyData() = default ;
    QueryCardSmsTemplateResponseBodyData(const QueryCardSmsTemplateResponseBodyData &) = default ;
    QueryCardSmsTemplateResponseBodyData(QueryCardSmsTemplateResponseBodyData &&) = default ;
    QueryCardSmsTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCardSmsTemplateResponseBodyData() = default ;
    QueryCardSmsTemplateResponseBodyData& operator=(const QueryCardSmsTemplateResponseBodyData &) = default ;
    QueryCardSmsTemplateResponseBodyData& operator=(QueryCardSmsTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templates_ == nullptr; };
    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Darabonba::Json> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> templates() { DARABONBA_PTR_GET(templates_, vector<Darabonba::Json>) };
    inline QueryCardSmsTemplateResponseBodyData& setTemplates(const vector<Darabonba::Json> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline QueryCardSmsTemplateResponseBodyData& setTemplates(vector<Darabonba::Json> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The array of objects.
    std::shared_ptr<vector<Darabonba::Json>> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
