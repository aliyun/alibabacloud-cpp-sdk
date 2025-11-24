// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTESRESPONSEBODYMANAGEMENTROUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTESRESPONSEBODYMANAGEMENTROUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRoutesResponseBodyManagementRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRoutesResponseBodyManagementRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(ASMGatewayName, ASMGatewayName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationHost, destinationHost_);
      DARABONBA_PTR_TO_JSON(DestinationSubSet, destinationSubSet_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RoutePath, routePath_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRoutesResponseBodyManagementRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(ASMGatewayName, ASMGatewayName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationHost, destinationHost_);
      DARABONBA_PTR_FROM_JSON(DestinationSubSet, destinationSubSet_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RoutePath, routePath_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIstioGatewayRoutesResponseBodyManagementRoutes() = default ;
    DescribeIstioGatewayRoutesResponseBodyManagementRoutes(const DescribeIstioGatewayRoutesResponseBodyManagementRoutes &) = default ;
    DescribeIstioGatewayRoutesResponseBodyManagementRoutes(DescribeIstioGatewayRoutesResponseBodyManagementRoutes &&) = default ;
    DescribeIstioGatewayRoutesResponseBodyManagementRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRoutesResponseBodyManagementRoutes() = default ;
    DescribeIstioGatewayRoutesResponseBodyManagementRoutes& operator=(const DescribeIstioGatewayRoutesResponseBodyManagementRoutes &) = default ;
    DescribeIstioGatewayRoutesResponseBodyManagementRoutes& operator=(DescribeIstioGatewayRoutesResponseBodyManagementRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASMGatewayName_ == nullptr
        && return this->description_ == nullptr && return this->destinationHost_ == nullptr && return this->destinationSubSet_ == nullptr && return this->namespace_ == nullptr && return this->priority_ == nullptr
        && return this->routeName_ == nullptr && return this->routePath_ == nullptr && return this->status_ == nullptr; };
    // ASMGatewayName Field Functions 
    bool hasASMGatewayName() const { return this->ASMGatewayName_ != nullptr;};
    void deleteASMGatewayName() { this->ASMGatewayName_ = nullptr;};
    inline string ASMGatewayName() const { DARABONBA_PTR_GET_DEFAULT(ASMGatewayName_, "") };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setASMGatewayName(string ASMGatewayName) { DARABONBA_PTR_SET_VALUE(ASMGatewayName_, ASMGatewayName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationHost Field Functions 
    bool hasDestinationHost() const { return this->destinationHost_ != nullptr;};
    void deleteDestinationHost() { this->destinationHost_ = nullptr;};
    inline const vector<string> & destinationHost() const { DARABONBA_PTR_GET_CONST(destinationHost_, vector<string>) };
    inline vector<string> destinationHost() { DARABONBA_PTR_GET(destinationHost_, vector<string>) };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setDestinationHost(const vector<string> & destinationHost) { DARABONBA_PTR_SET_VALUE(destinationHost_, destinationHost) };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setDestinationHost(vector<string> && destinationHost) { DARABONBA_PTR_SET_RVALUE(destinationHost_, destinationHost) };


    // destinationSubSet Field Functions 
    bool hasDestinationSubSet() const { return this->destinationSubSet_ != nullptr;};
    void deleteDestinationSubSet() { this->destinationSubSet_ = nullptr;};
    inline const vector<string> & destinationSubSet() const { DARABONBA_PTR_GET_CONST(destinationSubSet_, vector<string>) };
    inline vector<string> destinationSubSet() { DARABONBA_PTR_GET(destinationSubSet_, vector<string>) };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setDestinationSubSet(const vector<string> & destinationSubSet) { DARABONBA_PTR_SET_VALUE(destinationSubSet_, destinationSubSet) };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setDestinationSubSet(vector<string> && destinationSubSet) { DARABONBA_PTR_SET_RVALUE(destinationSubSet_, destinationSubSet) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routePath Field Functions 
    bool hasRoutePath() const { return this->routePath_ != nullptr;};
    void deleteRoutePath() { this->routePath_ = nullptr;};
    inline string routePath() const { DARABONBA_PTR_GET_DEFAULT(routePath_, "") };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setRoutePath(string routePath) { DARABONBA_PTR_SET_VALUE(routePath_, routePath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeIstioGatewayRoutesResponseBodyManagementRoutes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the ASM gateway.
    std::shared_ptr<string> ASMGatewayName_ = nullptr;
    // The description of the routing rule.
    std::shared_ptr<string> description_ = nullptr;
    // Destination hosts list.
    std::shared_ptr<vector<string>> destinationHost_ = nullptr;
    // Destination subset list.
    std::shared_ptr<vector<string>> destinationSubSet_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The priority of the routing rule. The value of this parameter is an integer. A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The name of the routing rule.
    std::shared_ptr<string> routeName_ = nullptr;
    // The path that is used to match request URLs.
    std::shared_ptr<string> routePath_ = nullptr;
    // The status of the routing rule. Valid values:
    // 
    // *   `0`: The routing rule is valid.
    // *   `1`: The routing rule is invalid.
    // *   `2`: An error occurs during the creation or update of the routing rule.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
