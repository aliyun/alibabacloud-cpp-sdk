// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMULTIVIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMULTIVIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInstanceMultiVIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMultiVIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_TO_JSON(MasterDnsRecord, masterDnsRecord_);
      DARABONBA_PTR_TO_JSON(MaxQuota, maxQuota_);
      DARABONBA_PTR_TO_JSON(MultiVIPList, multiVIPList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMultiVIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterDns, masterDns_);
      DARABONBA_PTR_FROM_JSON(MasterDnsRecord, masterDnsRecord_);
      DARABONBA_PTR_FROM_JSON(MaxQuota, maxQuota_);
      DARABONBA_PTR_FROM_JSON(MultiVIPList, multiVIPList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceMultiVIPResponseBody() = default ;
    DescribeInstanceMultiVIPResponseBody(const DescribeInstanceMultiVIPResponseBody &) = default ;
    DescribeInstanceMultiVIPResponseBody(DescribeInstanceMultiVIPResponseBody &&) = default ;
    DescribeInstanceMultiVIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMultiVIPResponseBody() = default ;
    DescribeInstanceMultiVIPResponseBody& operator=(const DescribeInstanceMultiVIPResponseBody &) = default ;
    DescribeInstanceMultiVIPResponseBody& operator=(DescribeInstanceMultiVIPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MultiVIPList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiVIPList& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      };
      friend void from_json(const Darabonba::Json& j, MultiVIPList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      };
      MultiVIPList() = default ;
      MultiVIPList(const MultiVIPList &) = default ;
      MultiVIPList(MultiVIPList &&) = default ;
      MultiVIPList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultiVIPList() = default ;
      MultiVIPList& operator=(const MultiVIPList &) = default ;
      MultiVIPList& operator=(MultiVIPList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionString_ == nullptr; };
      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline MultiVIPList& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    protected:
      shared_ptr<string> connectionString_ {};
    };

    virtual bool empty() const override { return this->masterDns_ == nullptr
        && this->masterDnsRecord_ == nullptr && this->maxQuota_ == nullptr && this->multiVIPList_ == nullptr && this->requestId_ == nullptr; };
    // masterDns Field Functions 
    bool hasMasterDns() const { return this->masterDns_ != nullptr;};
    void deleteMasterDns() { this->masterDns_ = nullptr;};
    inline string getMasterDns() const { DARABONBA_PTR_GET_DEFAULT(masterDns_, "") };
    inline DescribeInstanceMultiVIPResponseBody& setMasterDns(string masterDns) { DARABONBA_PTR_SET_VALUE(masterDns_, masterDns) };


    // masterDnsRecord Field Functions 
    bool hasMasterDnsRecord() const { return this->masterDnsRecord_ != nullptr;};
    void deleteMasterDnsRecord() { this->masterDnsRecord_ = nullptr;};
    inline const vector<string> & getMasterDnsRecord() const { DARABONBA_PTR_GET_CONST(masterDnsRecord_, vector<string>) };
    inline vector<string> getMasterDnsRecord() { DARABONBA_PTR_GET(masterDnsRecord_, vector<string>) };
    inline DescribeInstanceMultiVIPResponseBody& setMasterDnsRecord(const vector<string> & masterDnsRecord) { DARABONBA_PTR_SET_VALUE(masterDnsRecord_, masterDnsRecord) };
    inline DescribeInstanceMultiVIPResponseBody& setMasterDnsRecord(vector<string> && masterDnsRecord) { DARABONBA_PTR_SET_RVALUE(masterDnsRecord_, masterDnsRecord) };


    // maxQuota Field Functions 
    bool hasMaxQuota() const { return this->maxQuota_ != nullptr;};
    void deleteMaxQuota() { this->maxQuota_ = nullptr;};
    inline int64_t getMaxQuota() const { DARABONBA_PTR_GET_DEFAULT(maxQuota_, 0L) };
    inline DescribeInstanceMultiVIPResponseBody& setMaxQuota(int64_t maxQuota) { DARABONBA_PTR_SET_VALUE(maxQuota_, maxQuota) };


    // multiVIPList Field Functions 
    bool hasMultiVIPList() const { return this->multiVIPList_ != nullptr;};
    void deleteMultiVIPList() { this->multiVIPList_ = nullptr;};
    inline const vector<DescribeInstanceMultiVIPResponseBody::MultiVIPList> & getMultiVIPList() const { DARABONBA_PTR_GET_CONST(multiVIPList_, vector<DescribeInstanceMultiVIPResponseBody::MultiVIPList>) };
    inline vector<DescribeInstanceMultiVIPResponseBody::MultiVIPList> getMultiVIPList() { DARABONBA_PTR_GET(multiVIPList_, vector<DescribeInstanceMultiVIPResponseBody::MultiVIPList>) };
    inline DescribeInstanceMultiVIPResponseBody& setMultiVIPList(const vector<DescribeInstanceMultiVIPResponseBody::MultiVIPList> & multiVIPList) { DARABONBA_PTR_SET_VALUE(multiVIPList_, multiVIPList) };
    inline DescribeInstanceMultiVIPResponseBody& setMultiVIPList(vector<DescribeInstanceMultiVIPResponseBody::MultiVIPList> && multiVIPList) { DARABONBA_PTR_SET_RVALUE(multiVIPList_, multiVIPList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceMultiVIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> masterDns_ {};
    shared_ptr<vector<string>> masterDnsRecord_ {};
    shared_ptr<int64_t> maxQuota_ {};
    shared_ptr<vector<DescribeInstanceMultiVIPResponseBody::MultiVIPList>> multiVIPList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
