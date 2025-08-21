// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDESCRIBECDNIPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchDescribeCdnIpInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDescribeCdnIpInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddrList, ipAddrList_);
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDescribeCdnIpInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddrList, ipAddrList_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    BatchDescribeCdnIpInfoRequest() = default ;
    BatchDescribeCdnIpInfoRequest(const BatchDescribeCdnIpInfoRequest &) = default ;
    BatchDescribeCdnIpInfoRequest(BatchDescribeCdnIpInfoRequest &&) = default ;
    BatchDescribeCdnIpInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDescribeCdnIpInfoRequest() = default ;
    BatchDescribeCdnIpInfoRequest& operator=(const BatchDescribeCdnIpInfoRequest &) = default ;
    BatchDescribeCdnIpInfoRequest& operator=(BatchDescribeCdnIpInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipAddrList_ != nullptr
        && this->language_ != nullptr; };
    // ipAddrList Field Functions 
    bool hasIpAddrList() const { return this->ipAddrList_ != nullptr;};
    void deleteIpAddrList() { this->ipAddrList_ = nullptr;};
    inline string ipAddrList() const { DARABONBA_PTR_GET_DEFAULT(ipAddrList_, "") };
    inline BatchDescribeCdnIpInfoRequest& setIpAddrList(string ipAddrList) { DARABONBA_PTR_SET_VALUE(ipAddrList_, ipAddrList) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline BatchDescribeCdnIpInfoRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    // The list of IP addresses to query. Separate IP addresses with commas (,). You can specify up to 20 IP addresses at a time.
    // 
    // > *   Example of an IPv4 address: 192.0.2.1
    // >*   Example of an IPv6 address: 2001:db8:ffff:ffff:ffff:\\*\\*\\*\\*:ffff.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipAddrList_ = nullptr;
    // The language of the query results. Valid values:
    // 
    // *   **zh** (default): Simplified Chinese.
    // *   **en**: English.
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
