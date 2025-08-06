// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAPPNAMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAPPNAMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAppNameResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAppNameResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAppNameResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    DescribeVodAppNameResponseBodyData() = default ;
    DescribeVodAppNameResponseBodyData(const DescribeVodAppNameResponseBodyData &) = default ;
    DescribeVodAppNameResponseBodyData(DescribeVodAppNameResponseBodyData &&) = default ;
    DescribeVodAppNameResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAppNameResponseBodyData() = default ;
    DescribeVodAppNameResponseBodyData& operator=(const DescribeVodAppNameResponseBodyData &) = default ;
    DescribeVodAppNameResponseBodyData& operator=(DescribeVodAppNameResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeVodAppNameResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
