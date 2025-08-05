// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDORISPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKDORISPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersBody.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersDatabase.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersNetworkType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersPassword.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersTable.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersUserName.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkDorisParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkDorisParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkDorisParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkDorisParameters& obj) { 
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
    CreateEventStreamingRequestSinkSinkDorisParameters() = default ;
    CreateEventStreamingRequestSinkSinkDorisParameters(const CreateEventStreamingRequestSinkSinkDorisParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDorisParameters(CreateEventStreamingRequestSinkSinkDorisParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkDorisParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkDorisParameters() = default ;
    CreateEventStreamingRequestSinkSinkDorisParameters& operator=(const CreateEventStreamingRequestSinkSinkDorisParameters &) = default ;
    CreateEventStreamingRequestSinkSinkDorisParameters& operator=(CreateEventStreamingRequestSinkSinkDorisParameters &&) = default ;
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
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint() const { DARABONBA_PTR_GET_CONST(beHttpEndpoint_, Models::CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint beHttpEndpoint() { DARABONBA_PTR_GET(beHttpEndpoint_, Models::CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setBeHttpEndpoint(const Models::CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint) { DARABONBA_PTR_SET_VALUE(beHttpEndpoint_, beHttpEndpoint) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setBeHttpEndpoint(Models::CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint && beHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(beHttpEndpoint_, beHttpEndpoint) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::CreateEventStreamingRequestSinkSinkDorisParametersBody) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersBody body() { DARABONBA_PTR_GET(body_, Models::CreateEventStreamingRequestSinkSinkDorisParametersBody) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setBody(const Models::CreateEventStreamingRequestSinkSinkDorisParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setBody(Models::CreateEventStreamingRequestSinkSinkDorisParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersDatabase & database() const { DARABONBA_PTR_GET_CONST(database_, Models::CreateEventStreamingRequestSinkSinkDorisParametersDatabase) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersDatabase database() { DARABONBA_PTR_GET(database_, Models::CreateEventStreamingRequestSinkSinkDorisParametersDatabase) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setDatabase(const Models::CreateEventStreamingRequestSinkSinkDorisParametersDatabase & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setDatabase(Models::CreateEventStreamingRequestSinkSinkDorisParametersDatabase && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // feHttpEndpoint Field Functions 
    bool hasFeHttpEndpoint() const { return this->feHttpEndpoint_ != nullptr;};
    void deleteFeHttpEndpoint() { this->feHttpEndpoint_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint() const { DARABONBA_PTR_GET_CONST(feHttpEndpoint_, Models::CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint feHttpEndpoint() { DARABONBA_PTR_GET(feHttpEndpoint_, Models::CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setFeHttpEndpoint(const Models::CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint) { DARABONBA_PTR_SET_VALUE(feHttpEndpoint_, feHttpEndpoint) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setFeHttpEndpoint(Models::CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint && feHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(feHttpEndpoint_, feHttpEndpoint) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::CreateEventStreamingRequestSinkSinkDorisParametersNetworkType) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::CreateEventStreamingRequestSinkSinkDorisParametersNetworkType) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setNetworkType(const Models::CreateEventStreamingRequestSinkSinkDorisParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setNetworkType(Models::CreateEventStreamingRequestSinkSinkDorisParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersPassword & password() const { DARABONBA_PTR_GET_CONST(password_, Models::CreateEventStreamingRequestSinkSinkDorisParametersPassword) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersPassword password() { DARABONBA_PTR_GET(password_, Models::CreateEventStreamingRequestSinkSinkDorisParametersPassword) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setPassword(const Models::CreateEventStreamingRequestSinkSinkDorisParametersPassword & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setPassword(Models::CreateEventStreamingRequestSinkSinkDorisParametersPassword && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


    // queryEndpoint Field Functions 
    bool hasQueryEndpoint() const { return this->queryEndpoint_ != nullptr;};
    void deleteQueryEndpoint() { this->queryEndpoint_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint & queryEndpoint() const { DARABONBA_PTR_GET_CONST(queryEndpoint_, Models::CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint queryEndpoint() { DARABONBA_PTR_GET(queryEndpoint_, Models::CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setQueryEndpoint(const Models::CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint & queryEndpoint) { DARABONBA_PTR_SET_VALUE(queryEndpoint_, queryEndpoint) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setQueryEndpoint(Models::CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint && queryEndpoint) { DARABONBA_PTR_SET_RVALUE(queryEndpoint_, queryEndpoint) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setSecurityGroupId(const Models::CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setSecurityGroupId(Models::CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersTable & table() const { DARABONBA_PTR_GET_CONST(table_, Models::CreateEventStreamingRequestSinkSinkDorisParametersTable) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersTable table() { DARABONBA_PTR_GET(table_, Models::CreateEventStreamingRequestSinkSinkDorisParametersTable) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setTable(const Models::CreateEventStreamingRequestSinkSinkDorisParametersTable & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setTable(Models::CreateEventStreamingRequestSinkSinkDorisParametersTable && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersUserName & userName() const { DARABONBA_PTR_GET_CONST(userName_, Models::CreateEventStreamingRequestSinkSinkDorisParametersUserName) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersUserName userName() { DARABONBA_PTR_GET(userName_, Models::CreateEventStreamingRequestSinkSinkDorisParametersUserName) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setUserName(const Models::CreateEventStreamingRequestSinkSinkDorisParametersUserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setUserName(Models::CreateEventStreamingRequestSinkSinkDorisParametersUserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setVSwitchIds(const Models::CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setVSwitchIds(Models::CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkDorisParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::CreateEventStreamingRequestSinkSinkDorisParametersVpcId) };
    inline Models::CreateEventStreamingRequestSinkSinkDorisParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::CreateEventStreamingRequestSinkSinkDorisParametersVpcId) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setVpcId(const Models::CreateEventStreamingRequestSinkSinkDorisParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline CreateEventStreamingRequestSinkSinkDorisParameters& setVpcId(Models::CreateEventStreamingRequestSinkSinkDorisParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersBeHttpEndpoint> beHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersBody> body_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersDatabase> database_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersFeHttpEndpoint> feHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersNetworkType> networkType_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersPassword> password_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersQueryEndpoint> queryEndpoint_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersTable> table_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersUserName> userName_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkDorisParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
