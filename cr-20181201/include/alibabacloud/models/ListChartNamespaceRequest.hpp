// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHARTNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHARTNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChartNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChartNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NamespaceStatus, namespaceStatus_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListChartNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NamespaceStatus, namespaceStatus_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListChartNamespaceRequest() = default ;
    ListChartNamespaceRequest(const ListChartNamespaceRequest &) = default ;
    ListChartNamespaceRequest(ListChartNamespaceRequest &&) = default ;
    ListChartNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChartNamespaceRequest() = default ;
    ListChartNamespaceRequest& operator=(const ListChartNamespaceRequest &) = default ;
    ListChartNamespaceRequest& operator=(ListChartNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->namespaceName_ != nullptr && this->namespaceStatus_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChartNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListChartNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // namespaceStatus Field Functions 
    bool hasNamespaceStatus() const { return this->namespaceStatus_ != nullptr;};
    void deleteNamespaceStatus() { this->namespaceStatus_ = nullptr;};
    inline string namespaceStatus() const { DARABONBA_PTR_GET_DEFAULT(namespaceStatus_, "") };
    inline ListChartNamespaceRequest& setNamespaceStatus(string namespaceStatus) { DARABONBA_PTR_SET_VALUE(namespaceStatus_, namespaceStatus) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChartNamespaceRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChartNamespaceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The status of the namespace. Valid values:
    // 
    // *   `NORMAL`: The namespace is normal.
    // *   `DELETING`: The namespace is being deleted.
    std::shared_ptr<string> namespaceStatus_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
