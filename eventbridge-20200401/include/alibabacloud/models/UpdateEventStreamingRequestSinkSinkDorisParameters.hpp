// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDORISPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDORISPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersBody.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersDatabase.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersPassword.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersTable.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersUserName.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkDorisParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkDorisParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkDorisParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkDorisParameters& obj) { 
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
    UpdateEventStreamingRequestSinkSinkDorisParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDorisParameters(const UpdateEventStreamingRequestSinkSinkDorisParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDorisParameters(UpdateEventStreamingRequestSinkSinkDorisParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkDorisParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkDorisParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDorisParameters& operator=(const UpdateEventStreamingRequestSinkSinkDorisParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDorisParameters& operator=(UpdateEventStreamingRequestSinkSinkDorisParameters &&) = default ;
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
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint() const { DARABONBA_PTR_GET_CONST(beHttpEndpoint_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint beHttpEndpoint() { DARABONBA_PTR_GET(beHttpEndpoint_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setBeHttpEndpoint(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint) { DARABONBA_PTR_SET_VALUE(beHttpEndpoint_, beHttpEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setBeHttpEndpoint(Models::UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint && beHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(beHttpEndpoint_, beHttpEndpoint) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersBody) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersBody body() { DARABONBA_PTR_GET(body_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersBody) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setBody(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setBody(Models::UpdateEventStreamingRequestSinkSinkDorisParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersDatabase & database() const { DARABONBA_PTR_GET_CONST(database_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersDatabase) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersDatabase database() { DARABONBA_PTR_GET(database_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersDatabase) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setDatabase(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersDatabase & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setDatabase(Models::UpdateEventStreamingRequestSinkSinkDorisParametersDatabase && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // feHttpEndpoint Field Functions 
    bool hasFeHttpEndpoint() const { return this->feHttpEndpoint_ != nullptr;};
    void deleteFeHttpEndpoint() { this->feHttpEndpoint_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint() const { DARABONBA_PTR_GET_CONST(feHttpEndpoint_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint feHttpEndpoint() { DARABONBA_PTR_GET(feHttpEndpoint_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setFeHttpEndpoint(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint) { DARABONBA_PTR_SET_VALUE(feHttpEndpoint_, feHttpEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setFeHttpEndpoint(Models::UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint && feHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(feHttpEndpoint_, feHttpEndpoint) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setNetworkType(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setNetworkType(Models::UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersPassword & password() const { DARABONBA_PTR_GET_CONST(password_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersPassword) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersPassword password() { DARABONBA_PTR_GET(password_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersPassword) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setPassword(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersPassword & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setPassword(Models::UpdateEventStreamingRequestSinkSinkDorisParametersPassword && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


    // queryEndpoint Field Functions 
    bool hasQueryEndpoint() const { return this->queryEndpoint_ != nullptr;};
    void deleteQueryEndpoint() { this->queryEndpoint_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint & queryEndpoint() const { DARABONBA_PTR_GET_CONST(queryEndpoint_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint queryEndpoint() { DARABONBA_PTR_GET(queryEndpoint_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setQueryEndpoint(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint & queryEndpoint) { DARABONBA_PTR_SET_VALUE(queryEndpoint_, queryEndpoint) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setQueryEndpoint(Models::UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint && queryEndpoint) { DARABONBA_PTR_SET_RVALUE(queryEndpoint_, queryEndpoint) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setSecurityGroupId(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setSecurityGroupId(Models::UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersTable & table() const { DARABONBA_PTR_GET_CONST(table_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersTable) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersTable table() { DARABONBA_PTR_GET(table_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersTable) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setTable(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersTable & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setTable(Models::UpdateEventStreamingRequestSinkSinkDorisParametersTable && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersUserName & userName() const { DARABONBA_PTR_GET_CONST(userName_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersUserName) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersUserName userName() { DARABONBA_PTR_GET(userName_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersUserName) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setUserName(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersUserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setUserName(Models::UpdateEventStreamingRequestSinkSinkDorisParametersUserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setVSwitchIds(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setVSwitchIds(Models::UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkDorisParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersVpcId) };
    inline Models::UpdateEventStreamingRequestSinkSinkDorisParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::UpdateEventStreamingRequestSinkSinkDorisParametersVpcId) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setVpcId(const Models::UpdateEventStreamingRequestSinkSinkDorisParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline UpdateEventStreamingRequestSinkSinkDorisParameters& setVpcId(Models::UpdateEventStreamingRequestSinkSinkDorisParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint> beHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersBody> body_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersDatabase> database_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint> feHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersNetworkType> networkType_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersPassword> password_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint> queryEndpoint_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersTable> table_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersUserName> userName_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkDorisParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
