// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEDSAGENTREPORTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEDSAGENTREPORTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class QueryEdsAgentReportConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEdsAgentReportConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEdsAgentReportConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
    };
    QueryEdsAgentReportConfigRequest() = default ;
    QueryEdsAgentReportConfigRequest(const QueryEdsAgentReportConfigRequest &) = default ;
    QueryEdsAgentReportConfigRequest(QueryEdsAgentReportConfigRequest &&) = default ;
    QueryEdsAgentReportConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEdsAgentReportConfigRequest() = default ;
    QueryEdsAgentReportConfigRequest& operator=(const QueryEdsAgentReportConfigRequest &) = default ;
    QueryEdsAgentReportConfigRequest& operator=(QueryEdsAgentReportConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->desktopId_ == nullptr && this->ecsInstanceId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline QueryEdsAgentReportConfigRequest& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline QueryEdsAgentReportConfigRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline QueryEdsAgentReportConfigRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


  protected:
    shared_ptr<int64_t> aliUid_ {};
    shared_ptr<string> desktopId_ {};
    shared_ptr<string> ecsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
