// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRSKVDDBTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRSKVDDBTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairSkvDdbTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairSkvDdbTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairSkvDdbTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeTairSkvDdbTableRequest() = default ;
    DescribeTairSkvDdbTableRequest(const DescribeTairSkvDdbTableRequest &) = default ;
    DescribeTairSkvDdbTableRequest(DescribeTairSkvDdbTableRequest &&) = default ;
    DescribeTairSkvDdbTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairSkvDdbTableRequest() = default ;
    DescribeTairSkvDdbTableRequest& operator=(const DescribeTairSkvDdbTableRequest &) = default ;
    DescribeTairSkvDdbTableRequest& operator=(DescribeTairSkvDdbTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->securityToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTairSkvDdbTableRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeTairSkvDdbTableRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the instance to query.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
