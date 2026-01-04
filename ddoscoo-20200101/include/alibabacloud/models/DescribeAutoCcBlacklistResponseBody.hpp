// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOCCBLACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOCCBLACKLISTRESPONSEBODY_HPP_
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
  class DescribeAutoCcBlacklistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoCcBlacklistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCcBlacklist, autoCcBlacklist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoCcBlacklistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCcBlacklist, autoCcBlacklist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoCcBlacklistResponseBody() = default ;
    DescribeAutoCcBlacklistResponseBody(const DescribeAutoCcBlacklistResponseBody &) = default ;
    DescribeAutoCcBlacklistResponseBody(DescribeAutoCcBlacklistResponseBody &&) = default ;
    DescribeAutoCcBlacklistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoCcBlacklistResponseBody() = default ;
    DescribeAutoCcBlacklistResponseBody& operator=(const DescribeAutoCcBlacklistResponseBody &) = default ;
    DescribeAutoCcBlacklistResponseBody& operator=(DescribeAutoCcBlacklistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoCcBlacklist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoCcBlacklist& obj) { 
        DARABONBA_PTR_TO_JSON(DestIp, destIp_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AutoCcBlacklist& obj) { 
        DARABONBA_PTR_FROM_JSON(DestIp, destIp_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AutoCcBlacklist() = default ;
      AutoCcBlacklist(const AutoCcBlacklist &) = default ;
      AutoCcBlacklist(AutoCcBlacklist &&) = default ;
      AutoCcBlacklist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoCcBlacklist() = default ;
      AutoCcBlacklist& operator=(const AutoCcBlacklist &) = default ;
      AutoCcBlacklist& operator=(AutoCcBlacklist &&) = default ;
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
      inline AutoCcBlacklist& setDestIp(string destIp) { DARABONBA_PTR_SET_VALUE(destIp_, destIp) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline AutoCcBlacklist& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline AutoCcBlacklist& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AutoCcBlacklist& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The IP address of the instance.
      shared_ptr<string> destIp_ {};
      // The validity period of the IP address in the blacklist. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> endTime_ {};
      // The IP address in the blacklist.
      shared_ptr<string> sourceIp_ {};
      // The mode of how the IP address is added to the blacklist. Valid values:
      // 
      // *   **manual**: manually added
      // *   **auto**: automatically added
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->autoCcBlacklist_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoCcBlacklist Field Functions 
    bool hasAutoCcBlacklist() const { return this->autoCcBlacklist_ != nullptr;};
    void deleteAutoCcBlacklist() { this->autoCcBlacklist_ = nullptr;};
    inline const vector<DescribeAutoCcBlacklistResponseBody::AutoCcBlacklist> & getAutoCcBlacklist() const { DARABONBA_PTR_GET_CONST(autoCcBlacklist_, vector<DescribeAutoCcBlacklistResponseBody::AutoCcBlacklist>) };
    inline vector<DescribeAutoCcBlacklistResponseBody::AutoCcBlacklist> getAutoCcBlacklist() { DARABONBA_PTR_GET(autoCcBlacklist_, vector<DescribeAutoCcBlacklistResponseBody::AutoCcBlacklist>) };
    inline DescribeAutoCcBlacklistResponseBody& setAutoCcBlacklist(const vector<DescribeAutoCcBlacklistResponseBody::AutoCcBlacklist> & autoCcBlacklist) { DARABONBA_PTR_SET_VALUE(autoCcBlacklist_, autoCcBlacklist) };
    inline DescribeAutoCcBlacklistResponseBody& setAutoCcBlacklist(vector<DescribeAutoCcBlacklistResponseBody::AutoCcBlacklist> && autoCcBlacklist) { DARABONBA_PTR_SET_RVALUE(autoCcBlacklist_, autoCcBlacklist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoCcBlacklistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAutoCcBlacklistResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details of the IP addresses in the blacklist of the instance.
    shared_ptr<vector<DescribeAutoCcBlacklistResponseBody::AutoCcBlacklist>> autoCcBlacklist_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of returned IP addresses in the blacklist.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
