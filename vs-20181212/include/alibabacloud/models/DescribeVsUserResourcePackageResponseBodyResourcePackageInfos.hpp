// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSUSERRESOURCEPACKAGERESPONSEBODYRESOURCEPACKAGEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsUserResourcePackageResponseBodyResourcePackageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsUserResourcePackageResponseBodyResourcePackageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePackageInfo, resourcePackageInfo_);
    };
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfos(const DescribeVsUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfos(DescribeVsUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsUserResourcePackageResponseBodyResourcePackageInfos() = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfos& operator=(const DescribeVsUserResourcePackageResponseBodyResourcePackageInfos &) = default ;
    DescribeVsUserResourcePackageResponseBodyResourcePackageInfos& operator=(DescribeVsUserResourcePackageResponseBodyResourcePackageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourcePackageInfo_ != nullptr; };
    // resourcePackageInfo Field Functions 
    bool hasResourcePackageInfo() const { return this->resourcePackageInfo_ != nullptr;};
    void deleteResourcePackageInfo() { this->resourcePackageInfo_ = nullptr;};
    inline const vector<Models::DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo() const { DARABONBA_PTR_GET_CONST(resourcePackageInfo_, vector<Models::DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline vector<Models::DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> resourcePackageInfo() { DARABONBA_PTR_GET(resourcePackageInfo_, vector<Models::DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>) };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(const vector<Models::DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> & resourcePackageInfo) { DARABONBA_PTR_SET_VALUE(resourcePackageInfo_, resourcePackageInfo) };
    inline DescribeVsUserResourcePackageResponseBodyResourcePackageInfos& setResourcePackageInfo(vector<Models::DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo> && resourcePackageInfo) { DARABONBA_PTR_SET_RVALUE(resourcePackageInfo_, resourcePackageInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsUserResourcePackageResponseBodyResourcePackageInfosResourcePackageInfo>> resourcePackageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
