// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserResourcePackageResponseBodyResourcePackageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    DescribeVodUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeVodUserResourcePackageResponseBodyResourcePackageInfos(const DescribeVodUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeVodUserResourcePackageResponseBodyResourcePackageInfos(DescribeVodUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    DescribeVodUserResourcePackageResponseBodyResourcePackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeVodUserResourcePackageResponseBodyResourcePackageInfos& operator=(const DescribeVodUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeVodUserResourcePackageResponseBodyResourcePackageInfos& operator=(DescribeVodUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourcePackageInfo_ != nullptr; };
    // resourcePackageInfo Field Functions 
    bool hasResourcePackageInfo() const { return this->resourcePackageInfo_ != nullptr;};
    void deleteResourcePackageInfo() { this->resourcePackageInfo_ = nullptr;};
    inline const vector<Models::DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo() const { DARABONBA_PTR_GET_CONST(resourcePackageInfo_, vector<Models::DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline vector<Models::DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> resourcePackageInfo() { DARABONBA_PTR_GET(resourcePackageInfo_, vector<Models::DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline DescribeVodUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(const vector<Models::DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo) { DARABONBA_PTR_SET_VALUE(resourcePackageInfo_, resourcePackageInfo) };
    inline DescribeVodUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(vector<Models::DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> && resourcePackageInfo) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfo_, resourcePackageInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>> resourcePackageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
