// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos(const DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos(DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos& operator=(const DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos& operator=(DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourcePackageInfo_ == nullptr; };
    // resourcePackageInfo Field Functions 
    bool hasResourcePackageInfo() const { return this->resourcePackageInfo_ != nullptr;};
    void deleteResourcePackageInfo() { this->resourcePackageInfo_ = nullptr;};
    inline const vector<Models::DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo() const { DARABONBA_PTR_GET_CONST(resourcePackageInfo_, vector<Models::DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline vector<Models::DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> resourcePackageInfo() { DARABONBA_PTR_GET(resourcePackageInfo_, vector<Models::DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(const vector<Models::DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo) { DARABONBA_PTR_SET_VALUE(resourcePackageInfo_, resourcePackageInfo) };
    inline DescribeCdnUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(vector<Models::DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> && resourcePackageInfo) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfo_, resourcePackageInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>> resourcePackageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
