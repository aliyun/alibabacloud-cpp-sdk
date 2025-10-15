// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINICPNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINICPNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateDomainIcpNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainIcpNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainIcpNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateDomainIcpNumberRequest() = default ;
    UpdateDomainIcpNumberRequest(const UpdateDomainIcpNumberRequest &) = default ;
    UpdateDomainIcpNumberRequest(UpdateDomainIcpNumberRequest &&) = default ;
    UpdateDomainIcpNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainIcpNumberRequest() = default ;
    UpdateDomainIcpNumberRequest& operator=(const UpdateDomainIcpNumberRequest &) = default ;
    UpdateDomainIcpNumberRequest& operator=(UpdateDomainIcpNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && return this->icpNumber_ == nullptr && return this->instanceId_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline UpdateDomainIcpNumberRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // icpNumber Field Functions 
    bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
    void deleteIcpNumber() { this->icpNumber_ = nullptr;};
    inline string icpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
    inline UpdateDomainIcpNumberRequest& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateDomainIcpNumberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 域名ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> domainId_ = nullptr;
    // 域名关联的备案号，长度最大限制64。
    // 
    // This parameter is required.
    std::shared_ptr<string> icpNumber_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
