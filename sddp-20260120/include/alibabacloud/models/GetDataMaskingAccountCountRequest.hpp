// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAMASKINGACCOUNTCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAMASKINGACCOUNTCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class GetDataMaskingAccountCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataMaskingAccountCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataMaskingAccountCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
    };
    GetDataMaskingAccountCountRequest() = default ;
    GetDataMaskingAccountCountRequest(const GetDataMaskingAccountCountRequest &) = default ;
    GetDataMaskingAccountCountRequest(GetDataMaskingAccountCountRequest &&) = default ;
    GetDataMaskingAccountCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataMaskingAccountCountRequest() = default ;
    GetDataMaskingAccountCountRequest& operator=(const GetDataMaskingAccountCountRequest &) = default ;
    GetDataMaskingAccountCountRequest& operator=(GetDataMaskingAccountCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->productIds_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetDataMaskingAccountCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline string getProductIds() const { DARABONBA_PTR_GET_DEFAULT(productIds_, "") };
    inline GetDataMaskingAccountCountRequest& setProductIds(string productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> productIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
