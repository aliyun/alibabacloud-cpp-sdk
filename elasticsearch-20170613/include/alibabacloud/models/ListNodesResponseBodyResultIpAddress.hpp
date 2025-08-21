// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYRESULTIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYRESULTIPADDRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListNodesResponseBodyResultIpAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyResultIpAddress& obj) { 
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(ipType, ipType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyResultIpAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(ipType, ipType_);
    };
    ListNodesResponseBodyResultIpAddress() = default ;
    ListNodesResponseBodyResultIpAddress(const ListNodesResponseBodyResultIpAddress &) = default ;
    ListNodesResponseBodyResultIpAddress(ListNodesResponseBodyResultIpAddress &&) = default ;
    ListNodesResponseBodyResultIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyResultIpAddress() = default ;
    ListNodesResponseBodyResultIpAddress& operator=(const ListNodesResponseBodyResultIpAddress &) = default ;
    ListNodesResponseBodyResultIpAddress& operator=(ListNodesResponseBodyResultIpAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->ipType_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListNodesResponseBodyResultIpAddress& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline ListNodesResponseBodyResultIpAddress& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


  protected:
    // The IP address.
    std::shared_ptr<string> host_ = nullptr;
    // The type of the IP address. Valid values:
    // 
    // *   public: public IP address
    // *   private: private IP address
    std::shared_ptr<string> ipType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
