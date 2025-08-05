// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAssetStatisticResponseBodyResourceSpecStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceSpecStatistic, resourceSpecStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceSpecStatistic, resourceSpecStatistic_);
    };
    DescribeAssetStatisticResponseBody() = default ;
    DescribeAssetStatisticResponseBody(const DescribeAssetStatisticResponseBody &) = default ;
    DescribeAssetStatisticResponseBody(DescribeAssetStatisticResponseBody &&) = default ;
    DescribeAssetStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetStatisticResponseBody() = default ;
    DescribeAssetStatisticResponseBody& operator=(const DescribeAssetStatisticResponseBody &) = default ;
    DescribeAssetStatisticResponseBody& operator=(DescribeAssetStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceSpecStatistic_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceSpecStatistic Field Functions 
    bool hasResourceSpecStatistic() const { return this->resourceSpecStatistic_ != nullptr;};
    void deleteResourceSpecStatistic() { this->resourceSpecStatistic_ = nullptr;};
    inline const DescribeAssetStatisticResponseBodyResourceSpecStatistic & resourceSpecStatistic() const { DARABONBA_PTR_GET_CONST(resourceSpecStatistic_, DescribeAssetStatisticResponseBodyResourceSpecStatistic) };
    inline DescribeAssetStatisticResponseBodyResourceSpecStatistic resourceSpecStatistic() { DARABONBA_PTR_GET(resourceSpecStatistic_, DescribeAssetStatisticResponseBodyResourceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody& setResourceSpecStatistic(const DescribeAssetStatisticResponseBodyResourceSpecStatistic & resourceSpecStatistic) { DARABONBA_PTR_SET_VALUE(resourceSpecStatistic_, resourceSpecStatistic) };
    inline DescribeAssetStatisticResponseBody& setResourceSpecStatistic(DescribeAssetStatisticResponseBodyResourceSpecStatistic && resourceSpecStatistic) { DARABONBA_PTR_SET_RVALUE(resourceSpecStatistic_, resourceSpecStatistic) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics on specifications.
    std::shared_ptr<DescribeAssetStatisticResponseBodyResourceSpecStatistic> resourceSpecStatistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
