// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
    };
    CreateConsumerResponseBodyData() = default ;
    CreateConsumerResponseBodyData(const CreateConsumerResponseBodyData &) = default ;
    CreateConsumerResponseBodyData(CreateConsumerResponseBodyData &&) = default ;
    CreateConsumerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerResponseBodyData() = default ;
    CreateConsumerResponseBodyData& operator=(const CreateConsumerResponseBodyData &) = default ;
    CreateConsumerResponseBodyData& operator=(CreateConsumerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerId_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline CreateConsumerResponseBodyData& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


  protected:
    // The consumer ID.
    std::shared_ptr<string> consumerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
