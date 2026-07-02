// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IPWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IPWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class IpWhiteListConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IpWhiteListConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpWhiteList, ipWhiteList_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, IpWhiteListConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpWhiteList, ipWhiteList_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
    };
    IpWhiteListConfigRequest() = default ;
    IpWhiteListConfigRequest(const IpWhiteListConfigRequest &) = default ;
    IpWhiteListConfigRequest(IpWhiteListConfigRequest &&) = default ;
    IpWhiteListConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IpWhiteListConfigRequest() = default ;
    IpWhiteListConfigRequest& operator=(const IpWhiteListConfigRequest &) = default ;
    IpWhiteListConfigRequest& operator=(IpWhiteListConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipWhiteList_ == nullptr
        && this->operation_ == nullptr; };
    // ipWhiteList Field Functions 
    bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
    void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
    inline string getIpWhiteList() const { DARABONBA_PTR_GET_DEFAULT(ipWhiteList_, "") };
    inline IpWhiteListConfigRequest& setIpWhiteList(string ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline IpWhiteListConfigRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


  protected:
    // Required for increase and delete operations. The IP whitelist. Separate multiple IP addresses with commas.
    shared_ptr<string> ipWhiteList_ {};
    // The operation type. Valid values:
    // 
    // - ADD: incrementally adds entries.
    // - DELETE: deletes entries.
    // - QUERY: queries entries.
    // 
    // This parameter is required.
    shared_ptr<string> operation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
