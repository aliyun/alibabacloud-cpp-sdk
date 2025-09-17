// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCARDSMSTEMPLATEREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCARDSMSTEMPLATEREPORTRESPONSEBODYDATA_HPP_
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
  class QueryCardSmsTemplateReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCardSmsTemplateReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(model, model_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCardSmsTemplateReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(model, model_);
    };
    QueryCardSmsTemplateReportResponseBodyData() = default ;
    QueryCardSmsTemplateReportResponseBodyData(const QueryCardSmsTemplateReportResponseBodyData &) = default ;
    QueryCardSmsTemplateReportResponseBodyData(QueryCardSmsTemplateReportResponseBodyData &&) = default ;
    QueryCardSmsTemplateReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCardSmsTemplateReportResponseBodyData() = default ;
    QueryCardSmsTemplateReportResponseBodyData& operator=(const QueryCardSmsTemplateReportResponseBodyData &) = default ;
    QueryCardSmsTemplateReportResponseBodyData& operator=(QueryCardSmsTemplateReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->model_ != nullptr; };
    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const vector<Darabonba::Json> & model() const { DARABONBA_PTR_GET_CONST(model_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> model() { DARABONBA_PTR_GET(model_, vector<Darabonba::Json>) };
    inline QueryCardSmsTemplateReportResponseBodyData& setModel(const vector<Darabonba::Json> & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline QueryCardSmsTemplateReportResponseBodyData& setModel(vector<Darabonba::Json> && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


  protected:
    // The details of the data returned.
    std::shared_ptr<vector<Darabonba::Json>> model_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
