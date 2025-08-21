// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERNODEREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERNODEREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class TransferNodeRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferNodeRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferNodeRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    TransferNodeRequestBody() = default ;
    TransferNodeRequestBody(const TransferNodeRequestBody &) = default ;
    TransferNodeRequestBody(TransferNodeRequestBody &&) = default ;
    TransferNodeRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferNodeRequestBody() = default ;
    TransferNodeRequestBody& operator=(const TransferNodeRequestBody &) = default ;
    TransferNodeRequestBody& operator=(TransferNodeRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->port_ != nullptr && this->zoneId_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline TransferNodeRequestBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline TransferNodeRequestBody& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline TransferNodeRequestBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
