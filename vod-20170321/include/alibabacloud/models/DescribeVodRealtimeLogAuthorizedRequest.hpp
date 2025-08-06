// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMELOGAUTHORIZEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMELOGAUTHORIZEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRealtimeLogAuthorizedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRealtimeLogAuthorizedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRealtimeLogAuthorizedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeVodRealtimeLogAuthorizedRequest() = default ;
    DescribeVodRealtimeLogAuthorizedRequest(const DescribeVodRealtimeLogAuthorizedRequest &) = default ;
    DescribeVodRealtimeLogAuthorizedRequest(DescribeVodRealtimeLogAuthorizedRequest &&) = default ;
    DescribeVodRealtimeLogAuthorizedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRealtimeLogAuthorizedRequest() = default ;
    DescribeVodRealtimeLogAuthorizedRequest& operator=(const DescribeVodRealtimeLogAuthorizedRequest &) = default ;
    DescribeVodRealtimeLogAuthorizedRequest& operator=(DescribeVodRealtimeLogAuthorizedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodRealtimeLogAuthorizedRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
