// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENSSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENSSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateEnsServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnsServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsServiceId, ensServiceId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnsServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsServiceId, ensServiceId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    CreateEnsServiceRequest() = default ;
    CreateEnsServiceRequest(const CreateEnsServiceRequest &) = default ;
    CreateEnsServiceRequest(CreateEnsServiceRequest &&) = default ;
    CreateEnsServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnsServiceRequest() = default ;
    CreateEnsServiceRequest& operator=(const CreateEnsServiceRequest &) = default ;
    CreateEnsServiceRequest& operator=(CreateEnsServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensServiceId_ != nullptr
        && this->orderType_ != nullptr; };
    // ensServiceId Field Functions 
    bool hasEnsServiceId() const { return this->ensServiceId_ != nullptr;};
    void deleteEnsServiceId() { this->ensServiceId_ = nullptr;};
    inline string ensServiceId() const { DARABONBA_PTR_GET_DEFAULT(ensServiceId_, "") };
    inline CreateEnsServiceRequest& setEnsServiceId(string ensServiceId) { DARABONBA_PTR_SET_VALUE(ensServiceId_, ensServiceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateEnsServiceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // The ID of the resource that you want to obtain. You can specify only one ID in a request.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensServiceId_ = nullptr;
    // The operation to perform after you preview the created edge service. Valid values:
    // 
    // *   **Buy**: create
    // *   **Upgrade**: change
    // 
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
