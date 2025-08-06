// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODMULTIUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODMULTIUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodMultiUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodMultiUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodMultiUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    DescribeVodMultiUsageDataRequest() = default ;
    DescribeVodMultiUsageDataRequest(const DescribeVodMultiUsageDataRequest &) = default ;
    DescribeVodMultiUsageDataRequest(DescribeVodMultiUsageDataRequest &&) = default ;
    DescribeVodMultiUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodMultiUsageDataRequest() = default ;
    DescribeVodMultiUsageDataRequest& operator=(const DescribeVodMultiUsageDataRequest &) = default ;
    DescribeVodMultiUsageDataRequest& operator=(DescribeVodMultiUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->timePoint_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodMultiUsageDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline string timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
    inline DescribeVodMultiUsageDataRequest& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
