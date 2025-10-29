// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSSECURITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSSECURITYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItemsSecurityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItemsSecurityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItemsSecurityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
    };
    ListGatewaysResponseBodyDataItemsSecurityGroup() = default ;
    ListGatewaysResponseBodyDataItemsSecurityGroup(const ListGatewaysResponseBodyDataItemsSecurityGroup &) = default ;
    ListGatewaysResponseBodyDataItemsSecurityGroup(ListGatewaysResponseBodyDataItemsSecurityGroup &&) = default ;
    ListGatewaysResponseBodyDataItemsSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItemsSecurityGroup() = default ;
    ListGatewaysResponseBodyDataItemsSecurityGroup& operator=(const ListGatewaysResponseBodyDataItemsSecurityGroup &) = default ;
    ListGatewaysResponseBodyDataItemsSecurityGroup& operator=(ListGatewaysResponseBodyDataItemsSecurityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListGatewaysResponseBodyDataItemsSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
