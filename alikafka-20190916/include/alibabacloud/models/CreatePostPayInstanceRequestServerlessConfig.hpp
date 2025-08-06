// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTPAYINSTANCEREQUESTSERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTPAYINSTANCEREQUESTSERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreatePostPayInstanceRequestServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePostPayInstanceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_TO_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePostPayInstanceRequestServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_FROM_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
    };
    CreatePostPayInstanceRequestServerlessConfig() = default ;
    CreatePostPayInstanceRequestServerlessConfig(const CreatePostPayInstanceRequestServerlessConfig &) = default ;
    CreatePostPayInstanceRequestServerlessConfig(CreatePostPayInstanceRequestServerlessConfig &&) = default ;
    CreatePostPayInstanceRequestServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePostPayInstanceRequestServerlessConfig() = default ;
    CreatePostPayInstanceRequestServerlessConfig& operator=(const CreatePostPayInstanceRequestServerlessConfig &) = default ;
    CreatePostPayInstanceRequestServerlessConfig& operator=(CreatePostPayInstanceRequestServerlessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reservedPublishCapacity_ != nullptr
        && this->reservedSubscribeCapacity_ != nullptr; };
    // reservedPublishCapacity Field Functions 
    bool hasReservedPublishCapacity() const { return this->reservedPublishCapacity_ != nullptr;};
    void deleteReservedPublishCapacity() { this->reservedPublishCapacity_ = nullptr;};
    inline int64_t reservedPublishCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedPublishCapacity_, 0L) };
    inline CreatePostPayInstanceRequestServerlessConfig& setReservedPublishCapacity(int64_t reservedPublishCapacity) { DARABONBA_PTR_SET_VALUE(reservedPublishCapacity_, reservedPublishCapacity) };


    // reservedSubscribeCapacity Field Functions 
    bool hasReservedSubscribeCapacity() const { return this->reservedSubscribeCapacity_ != nullptr;};
    void deleteReservedSubscribeCapacity() { this->reservedSubscribeCapacity_ = nullptr;};
    inline int64_t reservedSubscribeCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedSubscribeCapacity_, 0L) };
    inline CreatePostPayInstanceRequestServerlessConfig& setReservedSubscribeCapacity(int64_t reservedSubscribeCapacity) { DARABONBA_PTR_SET_VALUE(reservedSubscribeCapacity_, reservedSubscribeCapacity) };


  protected:
    std::shared_ptr<int64_t> reservedPublishCapacity_ = nullptr;
    std::shared_ptr<int64_t> reservedSubscribeCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
