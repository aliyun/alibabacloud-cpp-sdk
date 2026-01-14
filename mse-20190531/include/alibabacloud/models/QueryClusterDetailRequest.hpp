// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AclSwitch, aclSwitch_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AclSwitch, aclSwitch_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    QueryClusterDetailRequest() = default ;
    QueryClusterDetailRequest(const QueryClusterDetailRequest &) = default ;
    QueryClusterDetailRequest(QueryClusterDetailRequest &&) = default ;
    QueryClusterDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterDetailRequest() = default ;
    QueryClusterDetailRequest& operator=(const QueryClusterDetailRequest &) = default ;
    QueryClusterDetailRequest& operator=(QueryClusterDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->aclSwitch_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline QueryClusterDetailRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // aclSwitch Field Functions 
    bool hasAclSwitch() const { return this->aclSwitch_ != nullptr;};
    void deleteAclSwitch() { this->aclSwitch_ = nullptr;};
    inline bool getAclSwitch() const { DARABONBA_PTR_GET_DEFAULT(aclSwitch_, false) };
    inline QueryClusterDetailRequest& setAclSwitch(bool aclSwitch) { DARABONBA_PTR_SET_VALUE(aclSwitch_, aclSwitch) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryClusterDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryClusterDetailRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to query access control lists (ACLs).
    shared_ptr<bool> aclSwitch_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the order.
    shared_ptr<string> orderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
