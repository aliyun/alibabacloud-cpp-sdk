// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class DescribeRegionsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(localName, localName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(localName, localName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    DescribeRegionsResponseBodyResult() = default ;
    DescribeRegionsResponseBodyResult(const DescribeRegionsResponseBodyResult &) = default ;
    DescribeRegionsResponseBodyResult(DescribeRegionsResponseBodyResult &&) = default ;
    DescribeRegionsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyResult() = default ;
    DescribeRegionsResponseBodyResult& operator=(const DescribeRegionsResponseBodyResult &) = default ;
    DescribeRegionsResponseBodyResult& operator=(DescribeRegionsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr
        && this->localName_ != nullptr && this->regionId_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline DescribeRegionsResponseBodyResult& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeRegionsResponseBodyResult& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The endpoint of the region.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID of the region. Valid values:
    // 
    // cn-hangzhou: China (Hangzhou)
    // 
    // cn-shanghai: China (Shanghai)
    // 
    // cn-qingdao: China (Qingdao)
    // 
    // cn-beijing: China (Beijing)
    // 
    // cn-zhangjiakou: China (Zhangjiakou)
    // 
    // cn-shenzhen: China (Shenzhen)
    // 
    // ap-southeast-1: Singapore (Singapore)
    // 
    // cn-internal: Internal Center
    // 
    // cn-zhangbei-in: Internal Center (Zhangjiakou)
    // 
    // us-west-1-in: Internal Center (US)
    // 
    // rus-west-1-in: Internal Center (Russia)
    // 
    // cn-daily: Daily Environment
    // 
    // cn-test: Joint Debugging
    // 
    // pre-hangzhou: China (Hangzhou)-Staging
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
