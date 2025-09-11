// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeVpcsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
    };
    DescribeVpcsResponseBody() = default ;
    DescribeVpcsResponseBody(const DescribeVpcsResponseBody &) = default ;
    DescribeVpcsResponseBody(DescribeVpcsResponseBody &&) = default ;
    DescribeVpcsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBody() = default ;
    DescribeVpcsResponseBody& operator=(const DescribeVpcsResponseBody &) = default ;
    DescribeVpcsResponseBody& operator=(DescribeVpcsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vpcs_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcs Field Functions 
    bool hasVpcs() const { return this->vpcs_ != nullptr;};
    void deleteVpcs() { this->vpcs_ = nullptr;};
    inline const DescribeVpcsResponseBodyVpcs & vpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, DescribeVpcsResponseBodyVpcs) };
    inline DescribeVpcsResponseBodyVpcs vpcs() { DARABONBA_PTR_GET(vpcs_, DescribeVpcsResponseBodyVpcs) };
    inline DescribeVpcsResponseBody& setVpcs(const DescribeVpcsResponseBodyVpcs & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
    inline DescribeVpcsResponseBody& setVpcs(DescribeVpcsResponseBodyVpcs && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried VPCs.
    std::shared_ptr<DescribeVpcsResponseBodyVpcs> vpcs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
