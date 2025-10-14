// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVPCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVPCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRdsVpcsResponseBodyVpcs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRdsVpcsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVpcsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVpcsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
    };
    DescribeRdsVpcsResponseBody() = default ;
    DescribeRdsVpcsResponseBody(const DescribeRdsVpcsResponseBody &) = default ;
    DescribeRdsVpcsResponseBody(DescribeRdsVpcsResponseBody &&) = default ;
    DescribeRdsVpcsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVpcsResponseBody() = default ;
    DescribeRdsVpcsResponseBody& operator=(const DescribeRdsVpcsResponseBody &) = default ;
    DescribeRdsVpcsResponseBody& operator=(DescribeRdsVpcsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vpcs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsVpcsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcs Field Functions 
    bool hasVpcs() const { return this->vpcs_ != nullptr;};
    void deleteVpcs() { this->vpcs_ = nullptr;};
    inline const DescribeRdsVpcsResponseBodyVpcs & vpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, DescribeRdsVpcsResponseBodyVpcs) };
    inline DescribeRdsVpcsResponseBodyVpcs vpcs() { DARABONBA_PTR_GET(vpcs_, DescribeRdsVpcsResponseBodyVpcs) };
    inline DescribeRdsVpcsResponseBody& setVpcs(const DescribeRdsVpcsResponseBodyVpcs & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
    inline DescribeRdsVpcsResponseBody& setVpcs(DescribeRdsVpcsResponseBodyVpcs && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeRdsVpcsResponseBodyVpcs> vpcs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
