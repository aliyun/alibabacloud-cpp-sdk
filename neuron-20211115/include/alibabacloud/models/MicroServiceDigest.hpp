// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MICROSERVICEDIGEST_HPP_
#define ALIBABACLOUD_MODELS_MICROSERVICEDIGEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LaneMqGroupInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MicroServiceDigest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MicroServiceDigest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(laneMqGroupInfos, laneMqGroupInfos_);
    };
    friend void from_json(const Darabonba::Json& j, MicroServiceDigest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(laneMqGroupInfos, laneMqGroupInfos_);
    };
    MicroServiceDigest() = default ;
    MicroServiceDigest(const MicroServiceDigest &) = default ;
    MicroServiceDigest(MicroServiceDigest &&) = default ;
    MicroServiceDigest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MicroServiceDigest() = default ;
    MicroServiceDigest& operator=(const MicroServiceDigest &) = default ;
    MicroServiceDigest& operator=(MicroServiceDigest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceId_ == nullptr
        && this->serviceName_ == nullptr && this->laneMqGroupInfos_ == nullptr; };
    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline MicroServiceDigest& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline MicroServiceDigest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // laneMqGroupInfos Field Functions 
    bool hasLaneMqGroupInfos() const { return this->laneMqGroupInfos_ != nullptr;};
    void deleteLaneMqGroupInfos() { this->laneMqGroupInfos_ = nullptr;};
    inline const LaneMqGroupInfo & getLaneMqGroupInfos() const { DARABONBA_PTR_GET_CONST(laneMqGroupInfos_, LaneMqGroupInfo) };
    inline LaneMqGroupInfo getLaneMqGroupInfos() { DARABONBA_PTR_GET(laneMqGroupInfos_, LaneMqGroupInfo) };
    inline MicroServiceDigest& setLaneMqGroupInfos(const LaneMqGroupInfo & laneMqGroupInfos) { DARABONBA_PTR_SET_VALUE(laneMqGroupInfos_, laneMqGroupInfos) };
    inline MicroServiceDigest& setLaneMqGroupInfos(LaneMqGroupInfo && laneMqGroupInfos) { DARABONBA_PTR_SET_RVALUE(laneMqGroupInfos_, laneMqGroupInfos) };


  protected:
    shared_ptr<int64_t> serviceId_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<LaneMqGroupInfo> laneMqGroupInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
