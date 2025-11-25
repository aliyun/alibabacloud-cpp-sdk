// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESTINATIONPORTEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDestinationPortEventResponseBodyPortList.hpp>
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
    virtual bool empty() const override { return this->portList_ == nullptr
        && return this->requestId_ == nullptr; };
    // portList Field Functions 
    bool hasPortList() const { return this->portList_ != nullptr;};
    void deletePortList() { this->portList_ = nullptr;};
    inline const vector<DescribeDestinationPortEventResponseBodyPortList> & portList() const { DARABONBA_PTR_GET_CONST(portList_, vector<DescribeDestinationPortEventResponseBodyPortList>) };
    inline vector<DescribeDestinationPortEventResponseBodyPortList> portList() { DARABONBA_PTR_GET(portList_, vector<DescribeDestinationPortEventResponseBodyPortList>) };
    inline DescribeDestinationPortEventResponseBody& setPortList(const vector<DescribeDestinationPortEventResponseBodyPortList> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
    inline DescribeDestinationPortEventResponseBody& setPortList(vector<DescribeDestinationPortEventResponseBodyPortList> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDestinationPortEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ports.
    std::shared_ptr<vector<DescribeDestinationPortEventResponseBodyPortList>> portList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
