// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGOODSSHIPPINGNOTICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGOODSSHIPPINGNOTICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GoodsShippingNoticeCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class CreateGoodsShippingNoticeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGoodsShippingNoticeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGoodsShippingNoticeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateGoodsShippingNoticeRequest() = default ;
    CreateGoodsShippingNoticeRequest(const CreateGoodsShippingNoticeRequest &) = default ;
    CreateGoodsShippingNoticeRequest(CreateGoodsShippingNoticeRequest &&) = default ;
    CreateGoodsShippingNoticeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGoodsShippingNoticeRequest() = default ;
    CreateGoodsShippingNoticeRequest& operator=(const CreateGoodsShippingNoticeRequest &) = default ;
    CreateGoodsShippingNoticeRequest& operator=(CreateGoodsShippingNoticeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GoodsShippingNoticeCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, GoodsShippingNoticeCreateCmd) };
    inline GoodsShippingNoticeCreateCmd getBody() { DARABONBA_PTR_GET(body_, GoodsShippingNoticeCreateCmd) };
    inline CreateGoodsShippingNoticeRequest& setBody(const GoodsShippingNoticeCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateGoodsShippingNoticeRequest& setBody(GoodsShippingNoticeCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<GoodsShippingNoticeCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
