// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEREQUESTKAFKAATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEREQUESTKAFKAATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SubscribeRequestKafkaAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeRequestKafkaAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessMode, businessMode_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeRequestKafkaAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessMode, businessMode_);
    };
    SubscribeRequestKafkaAttributes() = default ;
    SubscribeRequestKafkaAttributes(const SubscribeRequestKafkaAttributes &) = default ;
    SubscribeRequestKafkaAttributes(SubscribeRequestKafkaAttributes &&) = default ;
    SubscribeRequestKafkaAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeRequestKafkaAttributes() = default ;
    SubscribeRequestKafkaAttributes& operator=(const SubscribeRequestKafkaAttributes &) = default ;
    SubscribeRequestKafkaAttributes& operator=(SubscribeRequestKafkaAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessMode_ != nullptr; };
    // businessMode Field Functions 
    bool hasBusinessMode() const { return this->businessMode_ != nullptr;};
    void deleteBusinessMode() { this->businessMode_ = nullptr;};
    inline string businessMode() const { DARABONBA_PTR_GET_DEFAULT(businessMode_, "") };
    inline SubscribeRequestKafkaAttributes& setBusinessMode(string businessMode) { DARABONBA_PTR_SET_VALUE(businessMode_, businessMode) };


  protected:
    std::shared_ptr<string> businessMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
