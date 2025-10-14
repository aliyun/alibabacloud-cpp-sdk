// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFileSystemRequestOrderDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderDetails, orderDetails_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderDetails, orderDetails_);
    };
    CreateFileSystemRequest() = default ;
    CreateFileSystemRequest(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest(CreateFileSystemRequest &&) = default ;
    CreateFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemRequest() = default ;
    CreateFileSystemRequest& operator=(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest& operator=(CreateFileSystemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderDetails_ == nullptr; };
    // orderDetails Field Functions 
    bool hasOrderDetails() const { return this->orderDetails_ != nullptr;};
    void deleteOrderDetails() { this->orderDetails_ = nullptr;};
    inline const vector<CreateFileSystemRequestOrderDetails> & orderDetails() const { DARABONBA_PTR_GET_CONST(orderDetails_, vector<CreateFileSystemRequestOrderDetails>) };
    inline vector<CreateFileSystemRequestOrderDetails> orderDetails() { DARABONBA_PTR_GET(orderDetails_, vector<CreateFileSystemRequestOrderDetails>) };
    inline CreateFileSystemRequest& setOrderDetails(const vector<CreateFileSystemRequestOrderDetails> & orderDetails) { DARABONBA_PTR_SET_VALUE(orderDetails_, orderDetails) };
    inline CreateFileSystemRequest& setOrderDetails(vector<CreateFileSystemRequestOrderDetails> && orderDetails) { DARABONBA_PTR_SET_RVALUE(orderDetails_, orderDetails) };


  protected:
    // The information about the orders.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateFileSystemRequestOrderDetails>> orderDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
