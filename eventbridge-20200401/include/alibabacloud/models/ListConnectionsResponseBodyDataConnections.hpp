// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParameters.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsNetworkParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListConnectionsResponseBodyDataConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsResponseBodyDataConnections& obj) { 
      DARABONBA_PTR_TO_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NetworkParameters, networkParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsResponseBodyDataConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NetworkParameters, networkParameters_);
    };
    ListConnectionsResponseBodyDataConnections() = default ;
    ListConnectionsResponseBodyDataConnections(const ListConnectionsResponseBodyDataConnections &) = default ;
    ListConnectionsResponseBodyDataConnections(ListConnectionsResponseBodyDataConnections &&) = default ;
    ListConnectionsResponseBodyDataConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsResponseBodyDataConnections() = default ;
    ListConnectionsResponseBodyDataConnections& operator=(const ListConnectionsResponseBodyDataConnections &) = default ;
    ListConnectionsResponseBodyDataConnections& operator=(ListConnectionsResponseBodyDataConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authParameters_ != nullptr
        && this->connectionName_ != nullptr && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->id_ != nullptr && this->networkParameters_ != nullptr; };
    // authParameters Field Functions 
    bool hasAuthParameters() const { return this->authParameters_ != nullptr;};
    void deleteAuthParameters() { this->authParameters_ = nullptr;};
    inline const Models::ListConnectionsResponseBodyDataConnectionsAuthParameters & authParameters() const { DARABONBA_PTR_GET_CONST(authParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParameters) };
    inline Models::ListConnectionsResponseBodyDataConnectionsAuthParameters authParameters() { DARABONBA_PTR_GET(authParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParameters) };
    inline ListConnectionsResponseBodyDataConnections& setAuthParameters(const Models::ListConnectionsResponseBodyDataConnectionsAuthParameters & authParameters) { DARABONBA_PTR_SET_VALUE(authParameters_, authParameters) };
    inline ListConnectionsResponseBodyDataConnections& setAuthParameters(Models::ListConnectionsResponseBodyDataConnectionsAuthParameters && authParameters) { DARABONBA_PTR_SET_RVALUE(authParameters_, authParameters) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline ListConnectionsResponseBodyDataConnections& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListConnectionsResponseBodyDataConnections& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListConnectionsResponseBodyDataConnections& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListConnectionsResponseBodyDataConnections& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // networkParameters Field Functions 
    bool hasNetworkParameters() const { return this->networkParameters_ != nullptr;};
    void deleteNetworkParameters() { this->networkParameters_ = nullptr;};
    inline const Models::ListConnectionsResponseBodyDataConnectionsNetworkParameters & networkParameters() const { DARABONBA_PTR_GET_CONST(networkParameters_, Models::ListConnectionsResponseBodyDataConnectionsNetworkParameters) };
    inline Models::ListConnectionsResponseBodyDataConnectionsNetworkParameters networkParameters() { DARABONBA_PTR_GET(networkParameters_, Models::ListConnectionsResponseBodyDataConnectionsNetworkParameters) };
    inline ListConnectionsResponseBodyDataConnections& setNetworkParameters(const Models::ListConnectionsResponseBodyDataConnectionsNetworkParameters & networkParameters) { DARABONBA_PTR_SET_VALUE(networkParameters_, networkParameters) };
    inline ListConnectionsResponseBodyDataConnections& setNetworkParameters(Models::ListConnectionsResponseBodyDataConnectionsNetworkParameters && networkParameters) { DARABONBA_PTR_SET_RVALUE(networkParameters_, networkParameters) };


  protected:
    // The parameters that are returned for authentication.
    std::shared_ptr<Models::ListConnectionsResponseBodyDataConnectionsAuthParameters> authParameters_ = nullptr;
    // The connection name.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The connection description.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the connection was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The ID of the connection.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The parameters that are returned for the network.
    std::shared_ptr<Models::ListConnectionsResponseBodyDataConnectionsNetworkParameters> networkParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
