// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNACOSMCPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListNacosMcpServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacosMcpServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Search, search_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacosMcpServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
    };
    ListNacosMcpServersRequest() = default ;
    ListNacosMcpServersRequest(const ListNacosMcpServersRequest &) = default ;
    ListNacosMcpServersRequest(ListNacosMcpServersRequest &&) = default ;
    ListNacosMcpServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacosMcpServersRequest() = default ;
    ListNacosMcpServersRequest& operator=(const ListNacosMcpServersRequest &) = default ;
    ListNacosMcpServersRequest& operator=(ListNacosMcpServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr
        && return this->search_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListNacosMcpServersRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNacosMcpServersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNacosMcpServersRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListNacosMcpServersRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListNacosMcpServersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNacosMcpServersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string search() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListNacosMcpServersRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> search_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
