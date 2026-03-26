// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedIpsResponseBody() = default ;
    GetAccessKeyLastUsedIpsResponseBody(const GetAccessKeyLastUsedIpsResponseBody &) = default ;
    GetAccessKeyLastUsedIpsResponseBody(GetAccessKeyLastUsedIpsResponseBody &&) = default ;
    GetAccessKeyLastUsedIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedIpsResponseBody() = default ;
    GetAccessKeyLastUsedIpsResponseBody& operator=(const GetAccessKeyLastUsedIpsResponseBody &) = default ;
    GetAccessKeyLastUsedIpsResponseBody& operator=(GetAccessKeyLastUsedIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ips : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ips& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Ips& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
      };
      Ips() = default ;
      Ips(const Ips &) = default ;
      Ips(Ips &&) = default ;
      Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ips() = default ;
      Ips& operator=(const Ips &) = default ;
      Ips& operator=(Ips &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->ip_ == nullptr && this->source_ == nullptr && this->usedTimestamp_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Ips& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Ips& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Ips& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // usedTimestamp Field Functions 
      bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
      void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
      inline int64_t getUsedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
      inline Ips& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


    protected:
      // The event details.
      shared_ptr<string> detail_ {};
      // The IP address.
      shared_ptr<string> ip_ {};
      // The event source.
      // 
      // Valid values:
      // 
      // *   Internal: other events.
      // *   ManagementEvent: management events.
      // *   DataEvent: data events.
      shared_ptr<string> source_ {};
      // The timestamp when the IP address was used. Unit: milliseconds.
      shared_ptr<int64_t> usedTimestamp_ {};
    };

    virtual bool empty() const override { return this->ips_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<GetAccessKeyLastUsedIpsResponseBody::Ips> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<GetAccessKeyLastUsedIpsResponseBody::Ips>) };
    inline vector<GetAccessKeyLastUsedIpsResponseBody::Ips> getIps() { DARABONBA_PTR_GET(ips_, vector<GetAccessKeyLastUsedIpsResponseBody::Ips>) };
    inline GetAccessKeyLastUsedIpsResponseBody& setIps(const vector<GetAccessKeyLastUsedIpsResponseBody::Ips> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline GetAccessKeyLastUsedIpsResponseBody& setIps(vector<GetAccessKeyLastUsedIpsResponseBody::Ips> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAccessKeyLastUsedIpsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IP addresses.
    // 
    // This parameter is required.
    shared_ptr<vector<GetAccessKeyLastUsedIpsResponseBody::Ips>> ips_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
