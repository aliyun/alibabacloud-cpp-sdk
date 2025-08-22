// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FREERESOURCEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_FREERESOURCEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class FreeResourceDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FreeResourceDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, FreeResourceDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    FreeResourceDetail() = default ;
    FreeResourceDetail(const FreeResourceDetail &) = default ;
    FreeResourceDetail(FreeResourceDetail &&) = default ;
    FreeResourceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FreeResourceDetail() = default ;
    FreeResourceDetail& operator=(const FreeResourceDetail &) = default ;
    FreeResourceDetail& operator=(FreeResourceDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->resourceType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline FreeResourceDetail& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline FreeResourceDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
