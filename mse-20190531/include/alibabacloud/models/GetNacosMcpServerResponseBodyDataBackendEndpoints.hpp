// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATABACKENDENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATABACKENDENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyDataBackendEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyDataBackendEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyDataBackendEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    GetNacosMcpServerResponseBodyDataBackendEndpoints() = default ;
    GetNacosMcpServerResponseBodyDataBackendEndpoints(const GetNacosMcpServerResponseBodyDataBackendEndpoints &) = default ;
    GetNacosMcpServerResponseBodyDataBackendEndpoints(GetNacosMcpServerResponseBodyDataBackendEndpoints &&) = default ;
    GetNacosMcpServerResponseBodyDataBackendEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyDataBackendEndpoints() = default ;
    GetNacosMcpServerResponseBodyDataBackendEndpoints& operator=(const GetNacosMcpServerResponseBodyDataBackendEndpoints &) = default ;
    GetNacosMcpServerResponseBodyDataBackendEndpoints& operator=(GetNacosMcpServerResponseBodyDataBackendEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->path_ == nullptr && return this->port_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetNacosMcpServerResponseBodyDataBackendEndpoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetNacosMcpServerResponseBodyDataBackendEndpoints& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetNacosMcpServerResponseBodyDataBackendEndpoints& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
