// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDPREFLECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDPREFLECTRESPONSEBODY_HPP_
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
  class DescribeUdpReflectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdpReflectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UdpSports, udpSports_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUdpReflectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UdpSports, udpSports_);
    };
    DescribeUdpReflectResponseBody() = default ;
    DescribeUdpReflectResponseBody(const DescribeUdpReflectResponseBody &) = default ;
    DescribeUdpReflectResponseBody(DescribeUdpReflectResponseBody &&) = default ;
    DescribeUdpReflectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdpReflectResponseBody() = default ;
    DescribeUdpReflectResponseBody& operator=(const DescribeUdpReflectResponseBody &) = default ;
    DescribeUdpReflectResponseBody& operator=(DescribeUdpReflectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->udpSports_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUdpReflectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // udpSports Field Functions 
    bool hasUdpSports() const { return this->udpSports_ != nullptr;};
    void deleteUdpSports() { this->udpSports_ = nullptr;};
    inline const vector<string> & udpSports() const { DARABONBA_PTR_GET_CONST(udpSports_, vector<string>) };
    inline vector<string> udpSports() { DARABONBA_PTR_GET(udpSports_, vector<string>) };
    inline DescribeUdpReflectResponseBody& setUdpSports(const vector<string> & udpSports) { DARABONBA_PTR_SET_VALUE(udpSports_, udpSports) };
    inline DescribeUdpReflectResponseBody& setUdpSports(vector<string> && udpSports) { DARABONBA_PTR_SET_RVALUE(udpSports_, udpSports) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the source ports of the UDP traffic that are filtered out by the filtering policies for UDP reflection attacks.
    std::shared_ptr<vector<string>> udpSports_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
