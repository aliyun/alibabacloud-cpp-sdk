// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHRINKNODEREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_SHRINKNODEREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ShrinkNodeRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShrinkNodeRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(hostName, hostName_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ShrinkNodeRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(hostName, hostName_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    ShrinkNodeRequestBody() = default ;
    ShrinkNodeRequestBody(const ShrinkNodeRequestBody &) = default ;
    ShrinkNodeRequestBody(ShrinkNodeRequestBody &&) = default ;
    ShrinkNodeRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShrinkNodeRequestBody() = default ;
    ShrinkNodeRequestBody& operator=(const ShrinkNodeRequestBody &) = default ;
    ShrinkNodeRequestBody& operator=(ShrinkNodeRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->hostName_ != nullptr && this->nodeType_ != nullptr && this->port_ != nullptr && this->zoneId_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ShrinkNodeRequestBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ShrinkNodeRequestBody& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ShrinkNodeRequestBody& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ShrinkNodeRequestBody& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ShrinkNodeRequestBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
