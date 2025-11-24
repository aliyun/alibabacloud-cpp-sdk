// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHUPGRADESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHUPGRADESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshUpgradeStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshUpgradeStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpgradeDetail, upgradeDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshUpgradeStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpgradeDetail, upgradeDetail_);
    };
    DescribeServiceMeshUpgradeStatusResponseBody() = default ;
    DescribeServiceMeshUpgradeStatusResponseBody(const DescribeServiceMeshUpgradeStatusResponseBody &) = default ;
    DescribeServiceMeshUpgradeStatusResponseBody(DescribeServiceMeshUpgradeStatusResponseBody &&) = default ;
    DescribeServiceMeshUpgradeStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshUpgradeStatusResponseBody() = default ;
    DescribeServiceMeshUpgradeStatusResponseBody& operator=(const DescribeServiceMeshUpgradeStatusResponseBody &) = default ;
    DescribeServiceMeshUpgradeStatusResponseBody& operator=(DescribeServiceMeshUpgradeStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->upgradeDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshUpgradeStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // upgradeDetail Field Functions 
    bool hasUpgradeDetail() const { return this->upgradeDetail_ != nullptr;};
    void deleteUpgradeDetail() { this->upgradeDetail_ = nullptr;};
    inline const DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail & upgradeDetail() const { DARABONBA_PTR_GET_CONST(upgradeDetail_, DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail) };
    inline DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail upgradeDetail() { DARABONBA_PTR_GET(upgradeDetail_, DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail) };
    inline DescribeServiceMeshUpgradeStatusResponseBody& setUpgradeDetail(const DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail & upgradeDetail) { DARABONBA_PTR_SET_VALUE(upgradeDetail_, upgradeDetail) };
    inline DescribeServiceMeshUpgradeStatusResponseBody& setUpgradeDetail(DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail && upgradeDetail) { DARABONBA_PTR_SET_RVALUE(upgradeDetail_, upgradeDetail) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The upgrade results.
    std::shared_ptr<DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail> upgradeDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
