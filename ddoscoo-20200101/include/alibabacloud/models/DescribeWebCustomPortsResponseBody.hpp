// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebCustomPortsResponseBodyWebCustomPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCustomPortsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCustomPortsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebCustomPorts, webCustomPorts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCustomPortsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebCustomPorts, webCustomPorts_);
    };
    DescribeWebCustomPortsResponseBody() = default ;
    DescribeWebCustomPortsResponseBody(const DescribeWebCustomPortsResponseBody &) = default ;
    DescribeWebCustomPortsResponseBody(DescribeWebCustomPortsResponseBody &&) = default ;
    DescribeWebCustomPortsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCustomPortsResponseBody() = default ;
    DescribeWebCustomPortsResponseBody& operator=(const DescribeWebCustomPortsResponseBody &) = default ;
    DescribeWebCustomPortsResponseBody& operator=(DescribeWebCustomPortsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->webCustomPorts_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCustomPortsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webCustomPorts Field Functions 
    bool hasWebCustomPorts() const { return this->webCustomPorts_ != nullptr;};
    void deleteWebCustomPorts() { this->webCustomPorts_ = nullptr;};
    inline const vector<DescribeWebCustomPortsResponseBodyWebCustomPorts> & webCustomPorts() const { DARABONBA_PTR_GET_CONST(webCustomPorts_, vector<DescribeWebCustomPortsResponseBodyWebCustomPorts>) };
    inline vector<DescribeWebCustomPortsResponseBodyWebCustomPorts> webCustomPorts() { DARABONBA_PTR_GET(webCustomPorts_, vector<DescribeWebCustomPortsResponseBodyWebCustomPorts>) };
    inline DescribeWebCustomPortsResponseBody& setWebCustomPorts(const vector<DescribeWebCustomPortsResponseBodyWebCustomPorts> & webCustomPorts) { DARABONBA_PTR_SET_VALUE(webCustomPorts_, webCustomPorts) };
    inline DescribeWebCustomPortsResponseBody& setWebCustomPorts(vector<DescribeWebCustomPortsResponseBodyWebCustomPorts> && webCustomPorts) { DARABONBA_PTR_SET_RVALUE(webCustomPorts_, webCustomPorts) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of information about supported custom ports that are used by a website.
    std::shared_ptr<vector<DescribeWebCustomPortsResponseBodyWebCustomPorts>> webCustomPorts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
