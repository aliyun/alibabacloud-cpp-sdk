// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListProductsResponseBodyServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyServices& obj) { 
      DARABONBA_PTR_TO_JSON(IsOpen, isOpen_);
      DARABONBA_PTR_TO_JSON(OpenUrl, openUrl_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyServices& obj) { 
      DARABONBA_PTR_FROM_JSON(IsOpen, isOpen_);
      DARABONBA_PTR_FROM_JSON(OpenUrl, openUrl_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    ListProductsResponseBodyServices() = default ;
    ListProductsResponseBodyServices(const ListProductsResponseBodyServices &) = default ;
    ListProductsResponseBodyServices(ListProductsResponseBodyServices &&) = default ;
    ListProductsResponseBodyServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyServices() = default ;
    ListProductsResponseBodyServices& operator=(const ListProductsResponseBodyServices &) = default ;
    ListProductsResponseBodyServices& operator=(ListProductsResponseBodyServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isOpen_ == nullptr
        && return this->openUrl_ == nullptr && return this->serviceCode_ == nullptr; };
    // isOpen Field Functions 
    bool hasIsOpen() const { return this->isOpen_ != nullptr;};
    void deleteIsOpen() { this->isOpen_ = nullptr;};
    inline bool isOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
    inline ListProductsResponseBodyServices& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


    // openUrl Field Functions 
    bool hasOpenUrl() const { return this->openUrl_ != nullptr;};
    void deleteOpenUrl() { this->openUrl_ = nullptr;};
    inline string openUrl() const { DARABONBA_PTR_GET_DEFAULT(openUrl_, "") };
    inline ListProductsResponseBodyServices& setOpenUrl(string openUrl) { DARABONBA_PTR_SET_VALUE(openUrl_, openUrl) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline ListProductsResponseBodyServices& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    std::shared_ptr<bool> isOpen_ = nullptr;
    std::shared_ptr<string> openUrl_ = nullptr;
    std::shared_ptr<string> serviceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
