// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYINSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYINSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeployInstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployInstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeployInstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DeployInstanceInfo() = default ;
    DeployInstanceInfo(const DeployInstanceInfo &) = default ;
    DeployInstanceInfo(DeployInstanceInfo &&) = default ;
    DeployInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployInstanceInfo() = default ;
    DeployInstanceInfo& operator=(const DeployInstanceInfo &) = default ;
    DeployInstanceInfo& operator=(DeployInstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && this->status_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DeployInstanceInfo& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeployInstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> ip_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
