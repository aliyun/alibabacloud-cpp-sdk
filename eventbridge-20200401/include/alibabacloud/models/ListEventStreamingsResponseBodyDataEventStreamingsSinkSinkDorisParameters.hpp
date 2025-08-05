// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKDORISPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKDORISPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& obj) { 
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
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters &&) = default ;
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
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint() const { DARABONBA_PTR_GET_CONST(beHttpEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint beHttpEndpoint() { DARABONBA_PTR_GET(beHttpEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setBeHttpEndpoint(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint & beHttpEndpoint) { DARABONBA_PTR_SET_VALUE(beHttpEndpoint_, beHttpEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setBeHttpEndpoint(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint && beHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(beHttpEndpoint_, beHttpEndpoint) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody body() { DARABONBA_PTR_GET(body_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setBody(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setBody(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase & database() const { DARABONBA_PTR_GET_CONST(database_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase database() { DARABONBA_PTR_GET(database_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setDatabase(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setDatabase(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // feHttpEndpoint Field Functions 
    bool hasFeHttpEndpoint() const { return this->feHttpEndpoint_ != nullptr;};
    void deleteFeHttpEndpoint() { this->feHttpEndpoint_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint() const { DARABONBA_PTR_GET_CONST(feHttpEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint feHttpEndpoint() { DARABONBA_PTR_GET(feHttpEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setFeHttpEndpoint(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint & feHttpEndpoint) { DARABONBA_PTR_SET_VALUE(feHttpEndpoint_, feHttpEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setFeHttpEndpoint(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint && feHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(feHttpEndpoint_, feHttpEndpoint) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setNetworkType(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setNetworkType(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword & password() const { DARABONBA_PTR_GET_CONST(password_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword password() { DARABONBA_PTR_GET(password_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setPassword(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setPassword(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


    // queryEndpoint Field Functions 
    bool hasQueryEndpoint() const { return this->queryEndpoint_ != nullptr;};
    void deleteQueryEndpoint() { this->queryEndpoint_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint & queryEndpoint() const { DARABONBA_PTR_GET_CONST(queryEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint queryEndpoint() { DARABONBA_PTR_GET(queryEndpoint_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setQueryEndpoint(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint & queryEndpoint) { DARABONBA_PTR_SET_VALUE(queryEndpoint_, queryEndpoint) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setQueryEndpoint(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint && queryEndpoint) { DARABONBA_PTR_SET_RVALUE(queryEndpoint_, queryEndpoint) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setSecurityGroupId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setSecurityGroupId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable & table() const { DARABONBA_PTR_GET_CONST(table_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable table() { DARABONBA_PTR_GET(table_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setTable(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setTable(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName & userName() const { DARABONBA_PTR_GET_CONST(userName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName userName() { DARABONBA_PTR_GET(userName_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setUserName(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setUserName(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setVSwitchIds(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setVSwitchIds(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setVpcId(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParameters& setVpcId(Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBeHttpEndpoint> beHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersBody> body_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersDatabase> database_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersFeHttpEndpoint> feHttpEndpoint_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersNetworkType> networkType_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersPassword> password_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersQueryEndpoint> queryEndpoint_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersSecurityGroupId> securityGroupId_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersTable> table_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersUserName> userName_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVSwitchIds> vSwitchIds_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkDorisParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
