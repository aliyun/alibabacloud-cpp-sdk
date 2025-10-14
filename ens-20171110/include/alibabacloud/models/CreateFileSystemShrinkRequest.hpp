// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateFileSystemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderDetails, orderDetailsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderDetails, orderDetailsShrink_);
    };
    CreateFileSystemShrinkRequest() = default ;
    CreateFileSystemShrinkRequest(const CreateFileSystemShrinkRequest &) = default ;
    CreateFileSystemShrinkRequest(CreateFileSystemShrinkRequest &&) = default ;
    CreateFileSystemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemShrinkRequest() = default ;
    CreateFileSystemShrinkRequest& operator=(const CreateFileSystemShrinkRequest &) = default ;
    CreateFileSystemShrinkRequest& operator=(CreateFileSystemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderDetailsShrink_ == nullptr; };
    // orderDetailsShrink Field Functions 
    bool hasOrderDetailsShrink() const { return this->orderDetailsShrink_ != nullptr;};
    void deleteOrderDetailsShrink() { this->orderDetailsShrink_ = nullptr;};
    inline string orderDetailsShrink() const { DARABONBA_PTR_GET_DEFAULT(orderDetailsShrink_, "") };
    inline CreateFileSystemShrinkRequest& setOrderDetailsShrink(string orderDetailsShrink) { DARABONBA_PTR_SET_VALUE(orderDetailsShrink_, orderDetailsShrink) };


  protected:
    // The information about the orders.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderDetailsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
