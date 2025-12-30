// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCustomLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IpSegmentList, ipSegmentList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IpSegmentList, ipSegmentList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomLineResponseBody() = default ;
    DescribeCustomLineResponseBody(const DescribeCustomLineResponseBody &) = default ;
    DescribeCustomLineResponseBody(DescribeCustomLineResponseBody &&) = default ;
    DescribeCustomLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomLineResponseBody() = default ;
    DescribeCustomLineResponseBody& operator=(const DescribeCustomLineResponseBody &) = default ;
    DescribeCustomLineResponseBody& operator=(DescribeCustomLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpSegmentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSegmentList& obj) { 
        DARABONBA_PTR_TO_JSON(EndIp, endIp_);
        DARABONBA_PTR_TO_JSON(StartIp, startIp_);
      };
      friend void from_json(const Darabonba::Json& j, IpSegmentList& obj) { 
        DARABONBA_PTR_FROM_JSON(EndIp, endIp_);
        DARABONBA_PTR_FROM_JSON(StartIp, startIp_);
      };
      IpSegmentList() = default ;
      IpSegmentList(const IpSegmentList &) = default ;
      IpSegmentList(IpSegmentList &&) = default ;
      IpSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpSegmentList() = default ;
      IpSegmentList& operator=(const IpSegmentList &) = default ;
      IpSegmentList& operator=(IpSegmentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endIp_ == nullptr
        && this->startIp_ == nullptr; };
      // endIp Field Functions 
      bool hasEndIp() const { return this->endIp_ != nullptr;};
      void deleteEndIp() { this->endIp_ = nullptr;};
      inline string getEndIp() const { DARABONBA_PTR_GET_DEFAULT(endIp_, "") };
      inline IpSegmentList& setEndIp(string endIp) { DARABONBA_PTR_SET_VALUE(endIp_, endIp) };


      // startIp Field Functions 
      bool hasStartIp() const { return this->startIp_ != nullptr;};
      void deleteStartIp() { this->startIp_ = nullptr;};
      inline string getStartIp() const { DARABONBA_PTR_GET_DEFAULT(startIp_, "") };
      inline IpSegmentList& setStartIp(string startIp) { DARABONBA_PTR_SET_VALUE(startIp_, startIp) };


    protected:
      // The end IP address of the CIDR block.
      shared_ptr<string> endIp_ {};
      // The start IP address of the CIDR block.
      shared_ptr<string> startIp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->domainName_ == nullptr && this->id_ == nullptr && this->ipSegmentList_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomLineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCustomLineResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCustomLineResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ipSegmentList Field Functions 
    bool hasIpSegmentList() const { return this->ipSegmentList_ != nullptr;};
    void deleteIpSegmentList() { this->ipSegmentList_ = nullptr;};
    inline const vector<DescribeCustomLineResponseBody::IpSegmentList> & getIpSegmentList() const { DARABONBA_PTR_GET_CONST(ipSegmentList_, vector<DescribeCustomLineResponseBody::IpSegmentList>) };
    inline vector<DescribeCustomLineResponseBody::IpSegmentList> getIpSegmentList() { DARABONBA_PTR_GET(ipSegmentList_, vector<DescribeCustomLineResponseBody::IpSegmentList>) };
    inline DescribeCustomLineResponseBody& setIpSegmentList(const vector<DescribeCustomLineResponseBody::IpSegmentList> & ipSegmentList) { DARABONBA_PTR_SET_VALUE(ipSegmentList_, ipSegmentList) };
    inline DescribeCustomLineResponseBody& setIpSegmentList(vector<DescribeCustomLineResponseBody::IpSegmentList> && ipSegmentList) { DARABONBA_PTR_SET_RVALUE(ipSegmentList_, ipSegmentList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomLineResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code of the custom line.
    shared_ptr<string> code_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The ID/Name of the custom line.
    shared_ptr<int64_t> id_ {};
    // The CIDR blocks. Separate IP addresses with a hyphen (-). Enter a CIDR block in each row. You can enter 1 to 50 CIDR blocks at a time. If a CIDR block contains only one IP address, enter the IP address in the format of IP1-IP1. Different CIDR blocks cannot be overlapped.
    shared_ptr<vector<DescribeCustomLineResponseBody::IpSegmentList>> ipSegmentList_ {};
    // The name of the custom line.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
