// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEADBATTRIBUTESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEADBATTRIBUTESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ListInstanceAdbAttributesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAdbAttributesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAdbAttributesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
    };
    ListInstanceAdbAttributesResponseBodyData() = default ;
    ListInstanceAdbAttributesResponseBodyData(const ListInstanceAdbAttributesResponseBodyData &) = default ;
    ListInstanceAdbAttributesResponseBodyData(ListInstanceAdbAttributesResponseBodyData &&) = default ;
    ListInstanceAdbAttributesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAdbAttributesResponseBodyData() = default ;
    ListInstanceAdbAttributesResponseBodyData& operator=(const ListInstanceAdbAttributesResponseBodyData &) = default ;
    ListInstanceAdbAttributesResponseBodyData& operator=(ListInstanceAdbAttributesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalIp_ == nullptr
        && return this->externalPort_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->instanceId_ == nullptr && return this->internalIp_ == nullptr
        && return this->internalPort_ == nullptr && return this->ipProtocol_ == nullptr; };
    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string externalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string externalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string internalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string internalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ListInstanceAdbAttributesResponseBodyData& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


  protected:
    std::shared_ptr<string> externalIp_ = nullptr;
    std::shared_ptr<string> externalPort_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> internalIp_ = nullptr;
    std::shared_ptr<string> internalPort_ = nullptr;
    std::shared_ptr<string> ipProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
