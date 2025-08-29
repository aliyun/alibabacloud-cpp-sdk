// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTARGETITEMREPORTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryTrafficControlTargetItemReportDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTargetItemReportDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTargetItemReportDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    QueryTrafficControlTargetItemReportDetailRequest() = default ;
    QueryTrafficControlTargetItemReportDetailRequest(const QueryTrafficControlTargetItemReportDetailRequest &) = default ;
    QueryTrafficControlTargetItemReportDetailRequest(QueryTrafficControlTargetItemReportDetailRequest &&) = default ;
    QueryTrafficControlTargetItemReportDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTargetItemReportDetailRequest() = default ;
    QueryTrafficControlTargetItemReportDetailRequest& operator=(const QueryTrafficControlTargetItemReportDetailRequest &) = default ;
    QueryTrafficControlTargetItemReportDetailRequest& operator=(QueryTrafficControlTargetItemReportDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->environment_ != nullptr && this->instanceId_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline QueryTrafficControlTargetItemReportDetailRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline QueryTrafficControlTargetItemReportDetailRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTrafficControlTargetItemReportDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> environment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
