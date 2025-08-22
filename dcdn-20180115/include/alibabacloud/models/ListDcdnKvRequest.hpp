// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDCDNKVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDCDNKVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ListDcdnKvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDcdnKvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListDcdnKvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
    };
    ListDcdnKvRequest() = default ;
    ListDcdnKvRequest(const ListDcdnKvRequest &) = default ;
    ListDcdnKvRequest(ListDcdnKvRequest &&) = default ;
    ListDcdnKvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDcdnKvRequest() = default ;
    ListDcdnKvRequest& operator=(const ListDcdnKvRequest &) = default ;
    ListDcdnKvRequest& operator=(ListDcdnKvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->prefix_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListDcdnKvRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDcdnKvRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDcdnKvRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListDcdnKvRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of the page to return. The product of PageNumber and PageSize cannot exceed 50,000.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 50. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The prefix to query.
    std::shared_ptr<string> prefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
