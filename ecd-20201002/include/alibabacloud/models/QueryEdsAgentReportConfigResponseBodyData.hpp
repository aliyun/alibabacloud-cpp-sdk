// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEDSAGENTREPORTCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYEDSAGENTREPORTCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class QueryEdsAgentReportConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEdsAgentReportConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEdsAgentReportConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
    };
    QueryEdsAgentReportConfigResponseBodyData() = default ;
    QueryEdsAgentReportConfigResponseBodyData(const QueryEdsAgentReportConfigResponseBodyData &) = default ;
    QueryEdsAgentReportConfigResponseBodyData(QueryEdsAgentReportConfigResponseBodyData &&) = default ;
    QueryEdsAgentReportConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEdsAgentReportConfigResponseBodyData() = default ;
    QueryEdsAgentReportConfigResponseBodyData& operator=(const QueryEdsAgentReportConfigResponseBodyData &) = default ;
    QueryEdsAgentReportConfigResponseBodyData& operator=(QueryEdsAgentReportConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline QueryEdsAgentReportConfigResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
