// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeRegionsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(consoleEndpoint, consoleEndpoint_);
      DARABONBA_PTR_TO_JSON(localName, localName_);
      DARABONBA_PTR_TO_JSON(regionEndpoint, regionEndpoint_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(consoleEndpoint, consoleEndpoint_);
      DARABONBA_PTR_FROM_JSON(localName, localName_);
      DARABONBA_PTR_FROM_JSON(regionEndpoint, regionEndpoint_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
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
    virtual bool empty() const override { this->consoleEndpoint_ != nullptr
        && this->localName_ != nullptr && this->regionEndpoint_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr; };
    // consoleEndpoint Field Functions 
    bool hasConsoleEndpoint() const { return this->consoleEndpoint_ != nullptr;};
    void deleteConsoleEndpoint() { this->consoleEndpoint_ = nullptr;};
    inline string consoleEndpoint() const { DARABONBA_PTR_GET_DEFAULT(consoleEndpoint_, "") };
    inline DescribeRegionsResponseBodyResult& setConsoleEndpoint(string consoleEndpoint) { DARABONBA_PTR_SET_VALUE(consoleEndpoint_, consoleEndpoint) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeRegionsResponseBodyResult& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionEndpoint Field Functions 
    bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
    void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
    inline string regionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
    inline DescribeRegionsResponseBodyResult& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRegionsResponseBodyResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRegionsResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> consoleEndpoint_ = nullptr;
    std::shared_ptr<string> localName_ = nullptr;
    std::shared_ptr<string> regionEndpoint_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The endpoint of the region that is exposed in the console.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
