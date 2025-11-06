// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATASLSCONFIGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATASLSCONFIGDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayConfigResponseBodyDataSlsConfigDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayConfigResponseBodyDataSlsConfigDetails& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogOn, logOn_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(NginxCompatible, nginxCompatible_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayConfigResponseBodyDataSlsConfigDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogOn, logOn_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(NginxCompatible, nginxCompatible_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    GetGatewayConfigResponseBodyDataSlsConfigDetails() = default ;
    GetGatewayConfigResponseBodyDataSlsConfigDetails(const GetGatewayConfigResponseBodyDataSlsConfigDetails &) = default ;
    GetGatewayConfigResponseBodyDataSlsConfigDetails(GetGatewayConfigResponseBodyDataSlsConfigDetails &&) = default ;
    GetGatewayConfigResponseBodyDataSlsConfigDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayConfigResponseBodyDataSlsConfigDetails() = default ;
    GetGatewayConfigResponseBodyDataSlsConfigDetails& operator=(const GetGatewayConfigResponseBodyDataSlsConfigDetails &) = default ;
    GetGatewayConfigResponseBodyDataSlsConfigDetails& operator=(GetGatewayConfigResponseBodyDataSlsConfigDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->logOn_ == nullptr
        && return this->logStoreName_ == nullptr && return this->nginxCompatible_ == nullptr && return this->projectName_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logOn Field Functions 
    bool hasLogOn() const { return this->logOn_ != nullptr;};
    void deleteLogOn() { this->logOn_ = nullptr;};
    inline bool logOn() const { DARABONBA_PTR_GET_DEFAULT(logOn_, false) };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setLogOn(bool logOn) { DARABONBA_PTR_SET_VALUE(logOn_, logOn) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // nginxCompatible Field Functions 
    bool hasNginxCompatible() const { return this->nginxCompatible_ != nullptr;};
    void deleteNginxCompatible() { this->nginxCompatible_ = nullptr;};
    inline bool nginxCompatible() const { DARABONBA_PTR_GET_DEFAULT(nginxCompatible_, false) };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setNginxCompatible(bool nginxCompatible) { DARABONBA_PTR_SET_VALUE(nginxCompatible_, nginxCompatible) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetGatewayConfigResponseBodyDataSlsConfigDetails& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> logOn_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<bool> nginxCompatible_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
