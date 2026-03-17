// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGCURRENTDNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGCURRENTDNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagCurrentDnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagCurrentDnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlaveDns, slaveDns_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagCurrentDnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlaveDns, slaveDns_);
    };
    DescribeSagCurrentDnsResponseBody() = default ;
    DescribeSagCurrentDnsResponseBody(const DescribeSagCurrentDnsResponseBody &) = default ;
    DescribeSagCurrentDnsResponseBody(DescribeSagCurrentDnsResponseBody &&) = default ;
    DescribeSagCurrentDnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagCurrentDnsResponseBody() = default ;
    DescribeSagCurrentDnsResponseBody& operator=(const DescribeSagCurrentDnsResponseBody &) = default ;
    DescribeSagCurrentDnsResponseBody& operator=(DescribeSagCurrentDnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterDns_ == nullptr
        && this->requestId_ == nullptr && this->slaveDns_ == nullptr; };
    // masterDns Field Functions 
    bool hasMasterDns() const { return this->masterDns_ != nullptr;};
    void deleteMasterDns() { this->masterDns_ = nullptr;};
    inline string getMasterDns() const { DARABONBA_PTR_GET_DEFAULT(masterDns_, "") };
    inline DescribeSagCurrentDnsResponseBody& setMasterDns(string masterDns) { DARABONBA_PTR_SET_VALUE(masterDns_, masterDns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagCurrentDnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slaveDns Field Functions 
    bool hasSlaveDns() const { return this->slaveDns_ != nullptr;};
    void deleteSlaveDns() { this->slaveDns_ = nullptr;};
    inline string getSlaveDns() const { DARABONBA_PTR_GET_DEFAULT(slaveDns_, "") };
    inline DescribeSagCurrentDnsResponseBody& setSlaveDns(string slaveDns) { DARABONBA_PTR_SET_VALUE(slaveDns_, slaveDns) };


  protected:
    // The IP address of the primary DNS server.
    shared_ptr<string> masterDns_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The IP address of the secondary DNS server.
    shared_ptr<string> slaveDns_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
