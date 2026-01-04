// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTRESPONSEBODY_HPP_
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
  class DescribeDestinationPortEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDestinationPortEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortList, portList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDestinationPortEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortList, portList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDestinationPortEventResponseBody() = default ;
    DescribeDestinationPortEventResponseBody(const DescribeDestinationPortEventResponseBody &) = default ;
    DescribeDestinationPortEventResponseBody(DescribeDestinationPortEventResponseBody &&) = default ;
    DescribeDestinationPortEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDestinationPortEventResponseBody() = default ;
    DescribeDestinationPortEventResponseBody& operator=(const DescribeDestinationPortEventResponseBody &) = default ;
    DescribeDestinationPortEventResponseBody& operator=(DescribeDestinationPortEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortList& obj) { 
        DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
        DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
      };
      friend void from_json(const Darabonba::Json& j, PortList& obj) { 
        DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
        DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
      };
      PortList() = default ;
      PortList(const PortList &) = default ;
      PortList(PortList &&) = default ;
      PortList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortList() = default ;
      PortList& operator=(const PortList &) = default ;
      PortList& operator=(PortList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dstPort_ == nullptr
        && this->inPkts_ == nullptr; };
      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
      inline PortList& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // inPkts Field Functions 
      bool hasInPkts() const { return this->inPkts_ != nullptr;};
      void deleteInPkts() { this->inPkts_ = nullptr;};
      inline int64_t getInPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, 0L) };
      inline PortList& setInPkts(int64_t inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


    protected:
      // The destination port.
      shared_ptr<string> dstPort_ {};
      // The number of request packets received by the destination port.
      shared_ptr<int64_t> inPkts_ {};
    };

    virtual bool empty() const override { return this->portList_ == nullptr
        && this->requestId_ == nullptr; };
    // portList Field Functions 
    bool hasPortList() const { return this->portList_ != nullptr;};
    void deletePortList() { this->portList_ = nullptr;};
    inline const vector<DescribeDestinationPortEventResponseBody::PortList> & getPortList() const { DARABONBA_PTR_GET_CONST(portList_, vector<DescribeDestinationPortEventResponseBody::PortList>) };
    inline vector<DescribeDestinationPortEventResponseBody::PortList> getPortList() { DARABONBA_PTR_GET(portList_, vector<DescribeDestinationPortEventResponseBody::PortList>) };
    inline DescribeDestinationPortEventResponseBody& setPortList(const vector<DescribeDestinationPortEventResponseBody::PortList> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
    inline DescribeDestinationPortEventResponseBody& setPortList(vector<DescribeDestinationPortEventResponseBody::PortList> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDestinationPortEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ports.
    shared_ptr<vector<DescribeDestinationPortEventResponseBody::PortList>> portList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
