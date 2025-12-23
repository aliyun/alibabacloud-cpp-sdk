// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeRegionsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(consoleUrl, consoleUrl_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(localName, localName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(consoleUrl, consoleUrl_);
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
    virtual bool empty() const override { return this->consoleUrl_ == nullptr
        && return this->endpoint_ == nullptr && return this->localName_ == nullptr && return this->regionId_ == nullptr; };
    // consoleUrl Field Functions 
    bool hasConsoleUrl() const { return this->consoleUrl_ != nullptr;};
    void deleteConsoleUrl() { this->consoleUrl_ = nullptr;};
    inline string consoleUrl() const { DARABONBA_PTR_GET_DEFAULT(consoleUrl_, "") };
    inline DescribeRegionsResponseBodyResult& setConsoleUrl(string consoleUrl) { DARABONBA_PTR_SET_VALUE(consoleUrl_, consoleUrl) };


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
    // The console URL.
    std::shared_ptr<string> consoleUrl_ = nullptr;
    // The endpoint.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The region name.
    std::shared_ptr<string> localName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
