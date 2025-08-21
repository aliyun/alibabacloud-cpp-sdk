// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERABLENODESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERABLENODESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetTransferableNodesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferableNodesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(port, port_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferableNodesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(port, port_);
    };
    GetTransferableNodesResponseBodyResult() = default ;
    GetTransferableNodesResponseBodyResult(const GetTransferableNodesResponseBodyResult &) = default ;
    GetTransferableNodesResponseBodyResult(GetTransferableNodesResponseBodyResult &&) = default ;
    GetTransferableNodesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferableNodesResponseBodyResult() = default ;
    GetTransferableNodesResponseBodyResult& operator=(const GetTransferableNodesResponseBodyResult &) = default ;
    GetTransferableNodesResponseBodyResult& operator=(GetTransferableNodesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->port_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetTransferableNodesResponseBodyResult& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetTransferableNodesResponseBodyResult& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The IP address of the node.
    std::shared_ptr<string> host_ = nullptr;
    // The access port of the node.
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
