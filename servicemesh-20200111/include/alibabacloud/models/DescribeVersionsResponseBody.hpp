// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVersionsResponseBodyVersionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VersionInfo, versionInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VersionInfo, versionInfo_);
    };
    DescribeVersionsResponseBody() = default ;
    DescribeVersionsResponseBody(const DescribeVersionsResponseBody &) = default ;
    DescribeVersionsResponseBody(DescribeVersionsResponseBody &&) = default ;
    DescribeVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVersionsResponseBody() = default ;
    DescribeVersionsResponseBody& operator=(const DescribeVersionsResponseBody &) = default ;
    DescribeVersionsResponseBody& operator=(DescribeVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->versionInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionInfo Field Functions 
    bool hasVersionInfo() const { return this->versionInfo_ != nullptr;};
    void deleteVersionInfo() { this->versionInfo_ = nullptr;};
    inline const vector<DescribeVersionsResponseBodyVersionInfo> & versionInfo() const { DARABONBA_PTR_GET_CONST(versionInfo_, vector<DescribeVersionsResponseBodyVersionInfo>) };
    inline vector<DescribeVersionsResponseBodyVersionInfo> versionInfo() { DARABONBA_PTR_GET(versionInfo_, vector<DescribeVersionsResponseBodyVersionInfo>) };
    inline DescribeVersionsResponseBody& setVersionInfo(const vector<DescribeVersionsResponseBodyVersionInfo> & versionInfo) { DARABONBA_PTR_SET_VALUE(versionInfo_, versionInfo) };
    inline DescribeVersionsResponseBody& setVersionInfo(vector<DescribeVersionsResponseBodyVersionInfo> && versionInfo) { DARABONBA_PTR_SET_RVALUE(versionInfo_, versionInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The available ASM versions.
    std::shared_ptr<vector<DescribeVersionsResponseBodyVersionInfo>> versionInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
