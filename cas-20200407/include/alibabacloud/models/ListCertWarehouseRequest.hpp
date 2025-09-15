// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCertWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCertWarehouseRequest() = default ;
    ListCertWarehouseRequest(const ListCertWarehouseRequest &) = default ;
    ListCertWarehouseRequest(ListCertWarehouseRequest &&) = default ;
    ListCertWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertWarehouseRequest() = default ;
    ListCertWarehouseRequest& operator=(const ListCertWarehouseRequest &) = default ;
    ListCertWarehouseRequest& operator=(ListCertWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->instanceId_ != nullptr && this->name_ != nullptr && this->showSize_ != nullptr && this->type_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListCertWarehouseRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCertWarehouseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCertWarehouseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListCertWarehouseRequest& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCertWarehouseRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The instance ID of the certificate application repository.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the certificate application repository. Fuzzy match is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The number of entries to return on each page. Default value: 50.
    std::shared_ptr<int64_t> showSize_ = nullptr;
    // The type of the certificate application repository. Valid values:
    // 
    // *   **ssl**: certificate application repository of SSL certificates
    // *   **uploadPCA**: certificate application repository of uploaded private certificates
    // *   **free**: certificate application repository of free certificates, available only on the China site (aliyun.com)
    // *   **aliyunPCA**: certificate application repository of private certificates purchased from Alibaba Cloud Private Certificate Authority (PCA), available only on the China site (aliyun.com)
    // *   **disable**: disabled certificate application repository
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
