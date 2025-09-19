// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXTVERIFICATIONDNSRECORD_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXTVERIFICATIONDNSRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord() = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord(const ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord(ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord() = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord& operator=(const ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord& operator=(ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->recordType_ != nullptr && this->value_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string recordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextVerificationDnsRecord& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> recordType_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
