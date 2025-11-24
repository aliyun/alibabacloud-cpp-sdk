// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUpgradeVersionResponseBodyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeUpgradeVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeUpgradeVersionResponseBody() = default ;
    DescribeUpgradeVersionResponseBody(const DescribeUpgradeVersionResponseBody &) = default ;
    DescribeUpgradeVersionResponseBody(DescribeUpgradeVersionResponseBody &&) = default ;
    DescribeUpgradeVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeVersionResponseBody() = default ;
    DescribeUpgradeVersionResponseBody& operator=(const DescribeUpgradeVersionResponseBody &) = default ;
    DescribeUpgradeVersionResponseBody& operator=(DescribeUpgradeVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->version_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpgradeVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const DescribeUpgradeVersionResponseBodyVersion & version() const { DARABONBA_PTR_GET_CONST(version_, DescribeUpgradeVersionResponseBodyVersion) };
    inline DescribeUpgradeVersionResponseBodyVersion version() { DARABONBA_PTR_GET(version_, DescribeUpgradeVersionResponseBodyVersion) };
    inline DescribeUpgradeVersionResponseBody& setVersion(const DescribeUpgradeVersionResponseBodyVersion & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline DescribeUpgradeVersionResponseBody& setVersion(DescribeUpgradeVersionResponseBodyVersion && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The version information.
    std::shared_ptr<DescribeUpgradeVersionResponseBodyVersion> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
