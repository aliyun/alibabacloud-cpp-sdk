// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONSUMERSPAGERESPONSEBODYDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONSUMERSPAGERESPONSEBODYDATACONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceConsumersPageResponseBodyDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConsumersPageResponseBodyDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_TO_JSON(EdassAppId, edassAppId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConsumersPageResponseBodyDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_FROM_JSON(EdassAppId, edassAppId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    GetServiceConsumersPageResponseBodyDataContent() = default ;
    GetServiceConsumersPageResponseBodyDataContent(const GetServiceConsumersPageResponseBodyDataContent &) = default ;
    GetServiceConsumersPageResponseBodyDataContent(GetServiceConsumersPageResponseBodyDataContent &&) = default ;
    GetServiceConsumersPageResponseBodyDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConsumersPageResponseBodyDataContent() = default ;
    GetServiceConsumersPageResponseBodyDataContent& operator=(const GetServiceConsumersPageResponseBodyDataContent &) = default ;
    GetServiceConsumersPageResponseBodyDataContent& operator=(GetServiceConsumersPageResponseBodyDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edasAppName_ == nullptr
        && return this->edassAppId_ == nullptr && return this->ip_ == nullptr; };
    // edasAppName Field Functions 
    bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
    void deleteEdasAppName() { this->edasAppName_ = nullptr;};
    inline string edasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
    inline GetServiceConsumersPageResponseBodyDataContent& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


    // edassAppId Field Functions 
    bool hasEdassAppId() const { return this->edassAppId_ != nullptr;};
    void deleteEdassAppId() { this->edassAppId_ = nullptr;};
    inline string edassAppId() const { DARABONBA_PTR_GET_DEFAULT(edassAppId_, "") };
    inline GetServiceConsumersPageResponseBodyDataContent& setEdassAppId(string edassAppId) { DARABONBA_PTR_SET_VALUE(edassAppId_, edassAppId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetServiceConsumersPageResponseBodyDataContent& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The name of the service consumer.
    std::shared_ptr<string> edasAppName_ = nullptr;
    // The ID of the service consumer.
    std::shared_ptr<string> edassAppId_ = nullptr;
    // The IP address of the service consumer.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
