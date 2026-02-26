// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHOPSTATUSCHANGERESULT_HPP_
#define ALIBABACLOUD_MODELS_SHOPSTATUSCHANGERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ShopStatusChangeResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShopStatusChangeResult& obj) { 
      DARABONBA_PTR_TO_JSON(operate, operate_);
    };
    friend void from_json(const Darabonba::Json& j, ShopStatusChangeResult& obj) { 
      DARABONBA_PTR_FROM_JSON(operate, operate_);
    };
    ShopStatusChangeResult() = default ;
    ShopStatusChangeResult(const ShopStatusChangeResult &) = default ;
    ShopStatusChangeResult(ShopStatusChangeResult &&) = default ;
    ShopStatusChangeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShopStatusChangeResult() = default ;
    ShopStatusChangeResult& operator=(const ShopStatusChangeResult &) = default ;
    ShopStatusChangeResult& operator=(ShopStatusChangeResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operate_ == nullptr; };
    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline bool getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, false) };
    inline ShopStatusChangeResult& setOperate(bool operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


  protected:
    shared_ptr<bool> operate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
