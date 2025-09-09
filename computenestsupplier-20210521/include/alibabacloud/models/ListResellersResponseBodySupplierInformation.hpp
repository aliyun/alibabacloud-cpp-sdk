// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESELLERSRESPONSEBODYSUPPLIERINFORMATION_HPP_
#define ALIBABACLOUD_MODELS_LISTRESELLERSRESPONSEBODYSUPPLIERINFORMATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListResellersResponseBodySupplierInformation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResellersResponseBodySupplierInformation& obj) { 
      DARABONBA_PTR_TO_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_TO_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_TO_JSON(SupplierUrl, supplierUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListResellersResponseBodySupplierInformation& obj) { 
      DARABONBA_PTR_FROM_JSON(SupplierDesc, supplierDesc_);
      DARABONBA_PTR_FROM_JSON(SupplierLogo, supplierLogo_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
      DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_FROM_JSON(SupplierUrl, supplierUrl_);
    };
    ListResellersResponseBodySupplierInformation() = default ;
    ListResellersResponseBodySupplierInformation(const ListResellersResponseBodySupplierInformation &) = default ;
    ListResellersResponseBodySupplierInformation(ListResellersResponseBodySupplierInformation &&) = default ;
    ListResellersResponseBodySupplierInformation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResellersResponseBodySupplierInformation() = default ;
    ListResellersResponseBodySupplierInformation& operator=(const ListResellersResponseBodySupplierInformation &) = default ;
    ListResellersResponseBodySupplierInformation& operator=(ListResellersResponseBodySupplierInformation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supplierDesc_ != nullptr
        && this->supplierLogo_ != nullptr && this->supplierName_ != nullptr && this->supplierUid_ != nullptr && this->supplierUrl_ != nullptr; };
    // supplierDesc Field Functions 
    bool hasSupplierDesc() const { return this->supplierDesc_ != nullptr;};
    void deleteSupplierDesc() { this->supplierDesc_ = nullptr;};
    inline string supplierDesc() const { DARABONBA_PTR_GET_DEFAULT(supplierDesc_, "") };
    inline ListResellersResponseBodySupplierInformation& setSupplierDesc(string supplierDesc) { DARABONBA_PTR_SET_VALUE(supplierDesc_, supplierDesc) };


    // supplierLogo Field Functions 
    bool hasSupplierLogo() const { return this->supplierLogo_ != nullptr;};
    void deleteSupplierLogo() { this->supplierLogo_ = nullptr;};
    inline string supplierLogo() const { DARABONBA_PTR_GET_DEFAULT(supplierLogo_, "") };
    inline ListResellersResponseBodySupplierInformation& setSupplierLogo(string supplierLogo) { DARABONBA_PTR_SET_VALUE(supplierLogo_, supplierLogo) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline ListResellersResponseBodySupplierInformation& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUid Field Functions 
    bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
    void deleteSupplierUid() { this->supplierUid_ = nullptr;};
    inline int64_t supplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
    inline ListResellersResponseBodySupplierInformation& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


    // supplierUrl Field Functions 
    bool hasSupplierUrl() const { return this->supplierUrl_ != nullptr;};
    void deleteSupplierUrl() { this->supplierUrl_ = nullptr;};
    inline string supplierUrl() const { DARABONBA_PTR_GET_DEFAULT(supplierUrl_, "") };
    inline ListResellersResponseBodySupplierInformation& setSupplierUrl(string supplierUrl) { DARABONBA_PTR_SET_VALUE(supplierUrl_, supplierUrl) };


  protected:
    // The description of distributor.
    std::shared_ptr<string> supplierDesc_ = nullptr;
    // The Logo of distributor
    std::shared_ptr<string> supplierLogo_ = nullptr;
    // The name of the distributor
    std::shared_ptr<string> supplierName_ = nullptr;
    // The Alibaba Cloud account ID of the distributor.
    std::shared_ptr<int64_t> supplierUid_ = nullptr;
    // The URL of the distributor.
    std::shared_ptr<string> supplierUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
