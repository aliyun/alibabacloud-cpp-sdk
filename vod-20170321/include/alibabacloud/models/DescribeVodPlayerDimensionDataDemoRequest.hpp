// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERDIMENSIONDATADEMOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERDIMENSIONDATADEMOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerDimensionDataDemoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerDimensionDataDemoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerDimensionDataDemoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
    };
    DescribeVodPlayerDimensionDataDemoRequest() = default ;
    DescribeVodPlayerDimensionDataDemoRequest(const DescribeVodPlayerDimensionDataDemoRequest &) = default ;
    DescribeVodPlayerDimensionDataDemoRequest(DescribeVodPlayerDimensionDataDemoRequest &&) = default ;
    DescribeVodPlayerDimensionDataDemoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerDimensionDataDemoRequest() = default ;
    DescribeVodPlayerDimensionDataDemoRequest& operator=(const DescribeVodPlayerDimensionDataDemoRequest &) = default ;
    DescribeVodPlayerDimensionDataDemoRequest& operator=(DescribeVodPlayerDimensionDataDemoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->dimension_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeVodPlayerDimensionDataDemoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeVodPlayerDimensionDataDemoRequest& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dimension_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
