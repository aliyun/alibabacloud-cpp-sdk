// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKDORISPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASINKSINKDORISPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSinkSinkDorisParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSinkSinkDorisParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BeHttpEndpoint, beHttpEndpoint_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(FeHttpEndpoint, feHttpEndpoint_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(QueryEndpoint, queryEndpoint_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSinkSinkDorisParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BeHttpEndpoint, beHttpEndpoint_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(FeHttpEndpoint, feHttpEndpoint_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(QueryEndpoint, queryEndpoint_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetEventStreamingResponseBodyDataSinkSinkDorisParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkDorisParameters(const GetEventStreamingResponseBodyDataSinkSinkDorisParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDorisParameters(GetEventStreamingResponseBodyDataSinkSinkDorisParameters &&) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDorisParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSinkSinkDorisParameters() = default ;
    GetEventStreamingResponseBodyDataSinkSinkDorisParameters& operator=(const GetEventStreamingResponseBodyDataSinkSinkDorisParameters &) = default ;
    GetEventStreamingResponseBodyDataSinkSinkDorisParameters& operator=(GetEventStreamingResponseBodyDataSinkSinkDorisParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beHttpEndpoint_ != nullptr
        && this->body_ != nullptr && this->database_ != nullptr && this->feHttpEndpoint_ != nullptr && this->networkType_ != nullptr && this->password_ != nullptr
        && this->queryEndpoint_ != nullptr && this->securityGroupId_ != nullptr && this->table_ != nullptr && this->userName_ != nullptr && this->vSwitchIds_ != nullptr
        && this->vpcId_ != nullptr; };
    // beHttpEndpoint Field Functions 
    bool hasBeHttpEndpoint() const { return this->beHttpEndpoint_ != nullptr;};
    void deleteBeHttpEndpoint() { this->beHttpEndpoint_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint() const { DARABONBA_PTR_GET_CONST(beHttpEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint beHttpEndpoint() { DARABONBA_PTR_GET(beHttpEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setBeHttpEndpoint(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint) { DARABONBA_PTR_SET_VALUE(beHttpEndpoint_, beHttpEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setBeHttpEndpoint(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint && beHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(beHttpEndpoint_, beHttpEndpoint) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody body() { DARABONBA_PTR_GET(body_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setBody(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setBody(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase & database() const { DARABONBA_PTR_GET_CONST(database_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase database() { DARABONBA_PTR_GET(database_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setDatabase(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setDatabase(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // feHttpEndpoint Field Functions 
    bool hasFeHttpEndpoint() const { return this->feHttpEndpoint_ != nullptr;};
    void deleteFeHttpEndpoint() { this->feHttpEndpoint_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint() const { DARABONBA_PTR_GET_CONST(feHttpEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint feHttpEndpoint() { DARABONBA_PTR_GET(feHttpEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setFeHttpEndpoint(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint) { DARABONBA_PTR_SET_VALUE(feHttpEndpoint_, feHttpEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setFeHttpEndpoint(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint && feHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(feHttpEndpoint_, feHttpEndpoint) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setNetworkType(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setNetworkType(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword & password() const { DARABONBA_PTR_GET_CONST(password_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword password() { DARABONBA_PTR_GET(password_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setPassword(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setPassword(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


    // queryEndpoint Field Functions 
    bool hasQueryEndpoint() const { return this->queryEndpoint_ != nullptr;};
    void deleteQueryEndpoint() { this->queryEndpoint_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint & queryEndpoint() const { DARABONBA_PTR_GET_CONST(queryEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint queryEndpoint() { DARABONBA_PTR_GET(queryEndpoint_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setQueryEndpoint(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint & queryEndpoint) { DARABONBA_PTR_SET_VALUE(queryEndpoint_, queryEndpoint) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setQueryEndpoint(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint && queryEndpoint) { DARABONBA_PTR_SET_RVALUE(queryEndpoint_, queryEndpoint) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setSecurityGroupId(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setSecurityGroupId(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable & table() const { DARABONBA_PTR_GET_CONST(table_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable table() { DARABONBA_PTR_GET(table_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setTable(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setTable(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName & userName() const { DARABONBA_PTR_GET_CONST(userName_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName userName() { DARABONBA_PTR_GET(userName_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setUserName(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setUserName(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setVSwitchIds(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setVSwitchIds(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId) };
    inline Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setVpcId(const Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline GetEventStreamingResponseBodyDataSinkSinkDorisParameters& setVpcId(Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBeHttpEndpoint> beHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersBody> body_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersDatabase> database_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersFeHttpEndpoint> feHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersNetworkType> networkType_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersPassword> password_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersQueryEndpoint> queryEndpoint_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersTable> table_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersUserName> userName_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSinkSinkDorisParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
