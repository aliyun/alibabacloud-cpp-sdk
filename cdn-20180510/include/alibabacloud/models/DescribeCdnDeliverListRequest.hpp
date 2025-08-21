// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeliverListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeliverListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverId, deliverId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeliverListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverId, deliverId_);
    };
    DescribeCdnDeliverListRequest() = default ;
    DescribeCdnDeliverListRequest(const DescribeCdnDeliverListRequest &) = default ;
    DescribeCdnDeliverListRequest(DescribeCdnDeliverListRequest &&) = default ;
    DescribeCdnDeliverListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeliverListRequest() = default ;
    DescribeCdnDeliverListRequest& operator=(const DescribeCdnDeliverListRequest &) = default ;
    DescribeCdnDeliverListRequest& operator=(DescribeCdnDeliverListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliverId_ != nullptr; };
    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline int64_t deliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, 0L) };
    inline DescribeCdnDeliverListRequest& setDeliverId(int64_t deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


  protected:
    // The ID of the tracking task that you want to query. If you do not specify an ID, all tracking tasks are queried.
    std::shared_ptr<int64_t> deliverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
