// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTEDSAGENTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTEDSAGENTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class ReportEdsAgentInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportEdsAgentInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EdsAgentInfo, edsAgentInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ReportEdsAgentInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EdsAgentInfo, edsAgentInfo_);
    };
    ReportEdsAgentInfoRequest() = default ;
    ReportEdsAgentInfoRequest(const ReportEdsAgentInfoRequest &) = default ;
    ReportEdsAgentInfoRequest(ReportEdsAgentInfoRequest &&) = default ;
    ReportEdsAgentInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportEdsAgentInfoRequest() = default ;
    ReportEdsAgentInfoRequest& operator=(const ReportEdsAgentInfoRequest &) = default ;
    ReportEdsAgentInfoRequest& operator=(ReportEdsAgentInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->desktopId_ != nullptr && this->ecsInstanceId_ != nullptr && this->edsAgentInfo_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ReportEdsAgentInfoRequest& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ReportEdsAgentInfoRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ReportEdsAgentInfoRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // edsAgentInfo Field Functions 
    bool hasEdsAgentInfo() const { return this->edsAgentInfo_ != nullptr;};
    void deleteEdsAgentInfo() { this->edsAgentInfo_ = nullptr;};
    inline string edsAgentInfo() const { DARABONBA_PTR_GET_DEFAULT(edsAgentInfo_, "") };
    inline ReportEdsAgentInfoRequest& setEdsAgentInfo(string edsAgentInfo) { DARABONBA_PTR_SET_VALUE(edsAgentInfo_, edsAgentInfo) };


  protected:
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    std::shared_ptr<string> edsAgentInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
