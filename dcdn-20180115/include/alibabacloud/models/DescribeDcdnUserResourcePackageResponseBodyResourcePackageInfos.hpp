// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos(const DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos(DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos& operator=(const DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos& operator=(DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourcePackageInfo_ != nullptr; };
    // resourcePackageInfo Field Functions 
    bool hasResourcePackageInfo() const { return this->resourcePackageInfo_ != nullptr;};
    void deleteResourcePackageInfo() { this->resourcePackageInfo_ = nullptr;};
    inline const vector<Models::DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo() const { DARABONBA_PTR_GET_CONST(resourcePackageInfo_, vector<Models::DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline vector<Models::DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> resourcePackageInfo() { DARABONBA_PTR_GET(resourcePackageInfo_, vector<Models::DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(const vector<Models::DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo) { DARABONBA_PTR_SET_VALUE(resourcePackageInfo_, resourcePackageInfo) };
    inline DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(vector<Models::DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> && resourcePackageInfo) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfo_, resourcePackageInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>> resourcePackageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
