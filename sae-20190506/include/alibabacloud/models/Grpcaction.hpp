// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRPCACTION_HPP_
#define ALIBABACLOUD_MODELS_GRPCACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GRPCAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GRPCAction& obj) { 
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, GRPCAction& obj) { 
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    GRPCAction() = default ;
    GRPCAction(const GRPCAction &) = default ;
    GRPCAction(GRPCAction &&) = default ;
    GRPCAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GRPCAction() = default ;
    GRPCAction& operator=(const GRPCAction &) = default ;
    GRPCAction& operator=(GRPCAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->service_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GRPCAction& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline GRPCAction& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
