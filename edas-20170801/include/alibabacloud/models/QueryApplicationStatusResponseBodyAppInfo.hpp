// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoApplication.hpp>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoDeployRecordList.hpp>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoEccList.hpp>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoEcuList.hpp>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(DeployRecordList, deployRecordList_);
      DARABONBA_PTR_TO_JSON(EccList, eccList_);
      DARABONBA_PTR_TO_JSON(EcuList, ecuList_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(DeployRecordList, deployRecordList_);
      DARABONBA_PTR_FROM_JSON(EccList, eccList_);
      DARABONBA_PTR_FROM_JSON(EcuList, ecuList_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
    };
    QueryApplicationStatusResponseBodyAppInfo() = default ;
    QueryApplicationStatusResponseBodyAppInfo(const QueryApplicationStatusResponseBodyAppInfo &) = default ;
    QueryApplicationStatusResponseBodyAppInfo(QueryApplicationStatusResponseBodyAppInfo &&) = default ;
    QueryApplicationStatusResponseBodyAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfo() = default ;
    QueryApplicationStatusResponseBodyAppInfo& operator=(const QueryApplicationStatusResponseBodyAppInfo &) = default ;
    QueryApplicationStatusResponseBodyAppInfo& operator=(QueryApplicationStatusResponseBodyAppInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->application_ == nullptr
        && return this->deployRecordList_ == nullptr && return this->eccList_ == nullptr && return this->ecuList_ == nullptr && return this->groupList_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const Models::QueryApplicationStatusResponseBodyAppInfoApplication & application() const { DARABONBA_PTR_GET_CONST(application_, Models::QueryApplicationStatusResponseBodyAppInfoApplication) };
    inline Models::QueryApplicationStatusResponseBodyAppInfoApplication application() { DARABONBA_PTR_GET(application_, Models::QueryApplicationStatusResponseBodyAppInfoApplication) };
    inline QueryApplicationStatusResponseBodyAppInfo& setApplication(const Models::QueryApplicationStatusResponseBodyAppInfoApplication & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline QueryApplicationStatusResponseBodyAppInfo& setApplication(Models::QueryApplicationStatusResponseBodyAppInfoApplication && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // deployRecordList Field Functions 
    bool hasDeployRecordList() const { return this->deployRecordList_ != nullptr;};
    void deleteDeployRecordList() { this->deployRecordList_ = nullptr;};
    inline const Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordList & deployRecordList() const { DARABONBA_PTR_GET_CONST(deployRecordList_, Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordList) };
    inline Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordList deployRecordList() { DARABONBA_PTR_GET(deployRecordList_, Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setDeployRecordList(const Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordList & deployRecordList) { DARABONBA_PTR_SET_VALUE(deployRecordList_, deployRecordList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setDeployRecordList(Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordList && deployRecordList) { DARABONBA_PTR_SET_RVALUE(deployRecordList_, deployRecordList) };


    // eccList Field Functions 
    bool hasEccList() const { return this->eccList_ != nullptr;};
    void deleteEccList() { this->eccList_ = nullptr;};
    inline const Models::QueryApplicationStatusResponseBodyAppInfoEccList & eccList() const { DARABONBA_PTR_GET_CONST(eccList_, Models::QueryApplicationStatusResponseBodyAppInfoEccList) };
    inline Models::QueryApplicationStatusResponseBodyAppInfoEccList eccList() { DARABONBA_PTR_GET(eccList_, Models::QueryApplicationStatusResponseBodyAppInfoEccList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setEccList(const Models::QueryApplicationStatusResponseBodyAppInfoEccList & eccList) { DARABONBA_PTR_SET_VALUE(eccList_, eccList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setEccList(Models::QueryApplicationStatusResponseBodyAppInfoEccList && eccList) { DARABONBA_PTR_SET_RVALUE(eccList_, eccList) };


    // ecuList Field Functions 
    bool hasEcuList() const { return this->ecuList_ != nullptr;};
    void deleteEcuList() { this->ecuList_ = nullptr;};
    inline const Models::QueryApplicationStatusResponseBodyAppInfoEcuList & ecuList() const { DARABONBA_PTR_GET_CONST(ecuList_, Models::QueryApplicationStatusResponseBodyAppInfoEcuList) };
    inline Models::QueryApplicationStatusResponseBodyAppInfoEcuList ecuList() { DARABONBA_PTR_GET(ecuList_, Models::QueryApplicationStatusResponseBodyAppInfoEcuList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setEcuList(const Models::QueryApplicationStatusResponseBodyAppInfoEcuList & ecuList) { DARABONBA_PTR_SET_VALUE(ecuList_, ecuList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setEcuList(Models::QueryApplicationStatusResponseBodyAppInfoEcuList && ecuList) { DARABONBA_PTR_SET_RVALUE(ecuList_, ecuList) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const Models::QueryApplicationStatusResponseBodyAppInfoGroupList & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, Models::QueryApplicationStatusResponseBodyAppInfoGroupList) };
    inline Models::QueryApplicationStatusResponseBodyAppInfoGroupList groupList() { DARABONBA_PTR_GET(groupList_, Models::QueryApplicationStatusResponseBodyAppInfoGroupList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setGroupList(const Models::QueryApplicationStatusResponseBodyAppInfoGroupList & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline QueryApplicationStatusResponseBodyAppInfo& setGroupList(Models::QueryApplicationStatusResponseBodyAppInfoGroupList && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


  protected:
    // The basic information about the application.
    std::shared_ptr<Models::QueryApplicationStatusResponseBodyAppInfoApplication> application_ = nullptr;
    // The information about deployment records.
    std::shared_ptr<Models::QueryApplicationStatusResponseBodyAppInfoDeployRecordList> deployRecordList_ = nullptr;
    // The information about elastic compute containers (ECCs).
    std::shared_ptr<Models::QueryApplicationStatusResponseBodyAppInfoEccList> eccList_ = nullptr;
    // The information about elastic compute units (ECUs).
    std::shared_ptr<Models::QueryApplicationStatusResponseBodyAppInfoEcuList> ecuList_ = nullptr;
    // The information about the instance groups.
    std::shared_ptr<Models::QueryApplicationStatusResponseBodyAppInfoGroupList> groupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
