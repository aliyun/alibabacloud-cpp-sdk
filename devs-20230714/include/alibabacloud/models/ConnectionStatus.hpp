// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_CONNECTIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ConnectionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(installation, installation_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(installation, installation_);
    };
    ConnectionStatus() = default ;
    ConnectionStatus(const ConnectionStatus &) = default ;
    ConnectionStatus(ConnectionStatus &&) = default ;
    ConnectionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectionStatus() = default ;
    ConnectionStatus& operator=(const ConnectionStatus &) = default ;
    ConnectionStatus& operator=(ConnectionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->installation_ != nullptr; };
    // installation Field Functions 
    bool hasInstallation() const { return this->installation_ != nullptr;};
    void deleteInstallation() { this->installation_ = nullptr;};
    inline const Installation & installation() const { DARABONBA_PTR_GET_CONST(installation_, Installation) };
    inline Installation installation() { DARABONBA_PTR_GET(installation_, Installation) };
    inline ConnectionStatus& setInstallation(const Installation & installation) { DARABONBA_PTR_SET_VALUE(installation_, installation) };
    inline ConnectionStatus& setInstallation(Installation && installation) { DARABONBA_PTR_SET_RVALUE(installation_, installation) };


  protected:
    std::shared_ptr<Installation> installation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
