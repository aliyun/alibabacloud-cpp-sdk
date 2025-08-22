// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERRESOURCEPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserResourcePackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserResourcePackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfos, resourcePackageInfos_);
    };
    DescribeDcdnUserResourcePackageResponseBody() = default ;
    DescribeDcdnUserResourcePackageResponseBody(const DescribeDcdnUserResourcePackageResponseBody &) = default ;
    DescribeDcdnUserResourcePackageResponseBody(DescribeDcdnUserResourcePackageResponseBody &&) = default ;
    DescribeDcdnUserResourcePackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserResourcePackageResponseBody() = default ;
    DescribeDcdnUserResourcePackageResponseBody& operator=(const DescribeDcdnUserResourcePackageResponseBody &) = default ;
    DescribeDcdnUserResourcePackageResponseBody& operator=(DescribeDcdnUserResourcePackageResponseBody &&) = default ;
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
    inline DescribeDcdnUserResourcePackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePackageInfos Field Functions 
    bool hasResourcePackageInfos() const { return this->resourcePackageInfos_ != nullptr;};
    void deleteResourcePackageInfos() { this->resourcePackageInfos_ = nullptr;};
    inline const DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos & resourcePackageInfos() const { DARABONBA_PTR_GET_CONST(resourcePackageInfos_, DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos) };
    inline DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos resourcePackageInfos() { DARABONBA_PTR_GET(resourcePackageInfos_, DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos) };
    inline DescribeDcdnUserResourcePackageResponseBody& setResourcePackageInfos(const DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos & resourcePackageInfos) { DARABONBA_PTR_SET_VALUE(resourcePackageInfos_, resourcePackageInfos) };
    inline DescribeDcdnUserResourcePackageResponseBody& setResourcePackageInfos(DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos && resourcePackageInfos) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfos_, resourcePackageInfos) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detailed information about resource plans. The returned information is displayed in the format that is specified by the ResourcePackageInfo parameter.
    std::shared_ptr<DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos> resourcePackageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
