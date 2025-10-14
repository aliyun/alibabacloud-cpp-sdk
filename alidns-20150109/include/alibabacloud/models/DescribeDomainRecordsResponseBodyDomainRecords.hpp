// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSRESPONSEBODYDOMAINRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSRESPONSEBODYDOMAINRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRecordsResponseBodyDomainRecordsRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainRecordsResponseBodyDomainRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRecordsResponseBodyDomainRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Record, record_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRecordsResponseBodyDomainRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Record, record_);
    };
    DescribeDomainRecordsResponseBodyDomainRecords() = default ;
    DescribeDomainRecordsResponseBodyDomainRecords(const DescribeDomainRecordsResponseBodyDomainRecords &) = default ;
    DescribeDomainRecordsResponseBodyDomainRecords(DescribeDomainRecordsResponseBodyDomainRecords &&) = default ;
    DescribeDomainRecordsResponseBodyDomainRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRecordsResponseBodyDomainRecords() = default ;
    DescribeDomainRecordsResponseBodyDomainRecords& operator=(const DescribeDomainRecordsResponseBodyDomainRecords &) = default ;
    DescribeDomainRecordsResponseBodyDomainRecords& operator=(DescribeDomainRecordsResponseBodyDomainRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->record_ == nullptr; };
    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline const vector<Models::DescribeDomainRecordsResponseBodyDomainRecordsRecord> & record() const { DARABONBA_PTR_GET_CONST(record_, vector<Models::DescribeDomainRecordsResponseBodyDomainRecordsRecord>) };
    inline vector<Models::DescribeDomainRecordsResponseBodyDomainRecordsRecord> record() { DARABONBA_PTR_GET(record_, vector<Models::DescribeDomainRecordsResponseBodyDomainRecordsRecord>) };
    inline DescribeDomainRecordsResponseBodyDomainRecords& setRecord(const vector<Models::DescribeDomainRecordsResponseBodyDomainRecordsRecord> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
    inline DescribeDomainRecordsResponseBodyDomainRecords& setRecord(vector<Models::DescribeDomainRecordsResponseBodyDomainRecordsRecord> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRecordsResponseBodyDomainRecordsRecord>> record_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
