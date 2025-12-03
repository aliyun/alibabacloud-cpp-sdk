// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VNOBATCHREFUNDORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VNOBATCHREFUNDORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class VnoBatchRefundOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VnoBatchRefundOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(paramStr, paramStr_);
    };
    friend void from_json(const Darabonba::Json& j, VnoBatchRefundOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(paramStr, paramStr_);
    };
    VnoBatchRefundOrderRequest() = default ;
    VnoBatchRefundOrderRequest(const VnoBatchRefundOrderRequest &) = default ;
    VnoBatchRefundOrderRequest(VnoBatchRefundOrderRequest &&) = default ;
    VnoBatchRefundOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VnoBatchRefundOrderRequest() = default ;
    VnoBatchRefundOrderRequest& operator=(const VnoBatchRefundOrderRequest &) = default ;
    VnoBatchRefundOrderRequest& operator=(VnoBatchRefundOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramStr_ == nullptr; };
    // paramStr Field Functions 
    bool hasParamStr() const { return this->paramStr_ != nullptr;};
    void deleteParamStr() { this->paramStr_ = nullptr;};
    inline string paramStr() const { DARABONBA_PTR_GET_DEFAULT(paramStr_, "") };
    inline VnoBatchRefundOrderRequest& setParamStr(string paramStr) { DARABONBA_PTR_SET_VALUE(paramStr_, paramStr) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> paramStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
