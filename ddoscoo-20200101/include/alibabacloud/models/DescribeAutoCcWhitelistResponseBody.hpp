// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOCCWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOCCWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAutoCcWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoCcWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCcWhitelist, autoCcWhitelist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoCcWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCcWhitelist, autoCcWhitelist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoCcWhitelistResponseBody() = default ;
    DescribeAutoCcWhitelistResponseBody(const DescribeAutoCcWhitelistResponseBody &) = default ;
    DescribeAutoCcWhitelistResponseBody(DescribeAutoCcWhitelistResponseBody &&) = default ;
    DescribeAutoCcWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoCcWhitelistResponseBody() = default ;
    DescribeAutoCcWhitelistResponseBody& operator=(const DescribeAutoCcWhitelistResponseBody &) = default ;
    DescribeAutoCcWhitelistResponseBody& operator=(DescribeAutoCcWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoCcWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoCcWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(DestIp, destIp_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AutoCcWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(DestIp, destIp_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AutoCcWhitelist() = default ;
      AutoCcWhitelist(const AutoCcWhitelist &) = default ;
      AutoCcWhitelist(AutoCcWhitelist &&) = default ;
      AutoCcWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoCcWhitelist() = default ;
      AutoCcWhitelist& operator=(const AutoCcWhitelist &) = default ;
      AutoCcWhitelist& operator=(AutoCcWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destIp_ == nullptr
        && this->endTime_ == nullptr && this->sourceIp_ == nullptr && this->type_ == nullptr; };
      // destIp Field Functions 
      bool hasDestIp() const { return this->destIp_ != nullptr;};
      void deleteDestIp() { this->destIp_ = nullptr;};
      inline string getDestIp() const { DARABONBA_PTR_GET_DEFAULT(destIp_, "") };
      inline AutoCcWhitelist& setDestIp(string destIp) { DARABONBA_PTR_SET_VALUE(destIp_, destIp) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline AutoCcWhitelist& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline AutoCcWhitelist& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AutoCcWhitelist& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The IP address of the instance.
      shared_ptr<string> destIp_ {};
      // The validity period of the IP address in the whitelist. Unit: seconds. **0** indicates that the IP address in the whitelist never expires.
      shared_ptr<int64_t> endTime_ {};
      // The IP addresses that is contained in the IP address whitelist.
      shared_ptr<string> sourceIp_ {};
      // The mode of how an IP address is added to the whitelist. Valid values:
      // 
      // *   **manual**: manually added
      // *   **auto**: automatically added
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->autoCcWhitelist_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoCcWhitelist Field Functions 
    bool hasAutoCcWhitelist() const { return this->autoCcWhitelist_ != nullptr;};
    void deleteAutoCcWhitelist() { this->autoCcWhitelist_ = nullptr;};
    inline const vector<DescribeAutoCcWhitelistResponseBody::AutoCcWhitelist> & getAutoCcWhitelist() const { DARABONBA_PTR_GET_CONST(autoCcWhitelist_, vector<DescribeAutoCcWhitelistResponseBody::AutoCcWhitelist>) };
    inline vector<DescribeAutoCcWhitelistResponseBody::AutoCcWhitelist> getAutoCcWhitelist() { DARABONBA_PTR_GET(autoCcWhitelist_, vector<DescribeAutoCcWhitelistResponseBody::AutoCcWhitelist>) };
    inline DescribeAutoCcWhitelistResponseBody& setAutoCcWhitelist(const vector<DescribeAutoCcWhitelistResponseBody::AutoCcWhitelist> & autoCcWhitelist) { DARABONBA_PTR_SET_VALUE(autoCcWhitelist_, autoCcWhitelist) };
    inline DescribeAutoCcWhitelistResponseBody& setAutoCcWhitelist(vector<DescribeAutoCcWhitelistResponseBody::AutoCcWhitelist> && autoCcWhitelist) { DARABONBA_PTR_SET_RVALUE(autoCcWhitelist_, autoCcWhitelist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoCcWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAutoCcWhitelistResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of details of the IP address in the whitelist of the instance.
    shared_ptr<vector<DescribeAutoCcWhitelistResponseBody::AutoCcWhitelist>> autoCcWhitelist_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned IP addresses in the whitelist.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
