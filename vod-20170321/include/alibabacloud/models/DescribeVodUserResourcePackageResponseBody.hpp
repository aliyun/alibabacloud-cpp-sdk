// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodUserResourcePackageResponseBodyResourcePackageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserResourcePackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    DescribeVodUserResourcePackageResponseBody() = default ;
    DescribeVodUserResourcePackageResponseBody(const DescribeVodUserResourcePackageResponseBody &) = default ;
    DescribeVodUserResourcePackageResponseBody(DescribeVodUserResourcePackageResponseBody &&) = default ;
    DescribeVodUserResourcePackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserResourcePackageResponseBody() = default ;
    DescribeVodUserResourcePackageResponseBody& operator=(const DescribeVodUserResourcePackageResponseBody &) = default ;
    DescribeVodUserResourcePackageResponseBody& operator=(DescribeVodUserResourcePackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourcePackageInfos_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodUserResourcePackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePackageInfos Field Functions 
    bool hasResourcePackageInfos() const { return this->resourcePackageInfos_ != nullptr;};
    void deleteResourcePackageInfos() { this->resourcePackageInfos_ = nullptr;};
    inline const DescribeVodUserResourcePackageResponseBodyResourcePackageInfos & resourcePackageInfos() const { DARABONBA_PTR_GET_CONST(resourcePackageInfos_, DescribeVodUserResourcePackageResponseBodyResourcePackageInfos) };
    inline DescribeVodUserResourcePackageResponseBodyResourcePackageInfos resourcePackageInfos() { DARABONBA_PTR_GET(resourcePackageInfos_, DescribeVodUserResourcePackageResponseBodyResourcePackageInfos) };
    inline DescribeVodUserResourcePackageResponseBody& setResourcePackageInfos(const DescribeVodUserResourcePackageResponseBodyResourcePackageInfos & resourcePackageInfos) { DARABONBA_PTR_SET_VALUE(resourcePackageInfos_, resourcePackageInfos) };
    inline DescribeVodUserResourcePackageResponseBody& setResourcePackageInfos(DescribeVodUserResourcePackageResponseBodyResourcePackageInfos && resourcePackageInfos) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfos_, resourcePackageInfos) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeVodUserResourcePackageResponseBodyResourcePackageInfos> resourcePackageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
