// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDELIVERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDELIVERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDeliverListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDeliverListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverId, deliverId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDeliverListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverId, deliverId_);
    };
    DescribeDcdnDeliverListRequest() = default ;
    DescribeDcdnDeliverListRequest(const DescribeDcdnDeliverListRequest &) = default ;
    DescribeDcdnDeliverListRequest(DescribeDcdnDeliverListRequest &&) = default ;
    DescribeDcdnDeliverListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDeliverListRequest() = default ;
    DescribeDcdnDeliverListRequest& operator=(const DescribeDcdnDeliverListRequest &) = default ;
    DescribeDcdnDeliverListRequest& operator=(DescribeDcdnDeliverListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliverId_ != nullptr; };
    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline int64_t deliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, 0L) };
    inline DescribeDcdnDeliverListRequest& setDeliverId(int64_t deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


  protected:
    // The ID of the tracking task that you want to query. If you do not specify an ID, all tracking tasks are queried.
    std::shared_ptr<int64_t> deliverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
