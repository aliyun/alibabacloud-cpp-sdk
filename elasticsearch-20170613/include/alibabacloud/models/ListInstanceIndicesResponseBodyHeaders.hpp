// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceIndicesResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceIndicesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(X-Managed-Count, xManagedCount_);
      DARABONBA_PTR_TO_JSON(X-Managed-StorageSize, xManagedStorageSize_);
      DARABONBA_PTR_TO_JSON(X-OSS-Count, xOSSCount_);
      DARABONBA_PTR_TO_JSON(X-OSS-StorageSize, xOSSStorageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceIndicesResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Managed-Count, xManagedCount_);
      DARABONBA_PTR_FROM_JSON(X-Managed-StorageSize, xManagedStorageSize_);
      DARABONBA_PTR_FROM_JSON(X-OSS-Count, xOSSCount_);
      DARABONBA_PTR_FROM_JSON(X-OSS-StorageSize, xOSSStorageSize_);
    };
    ListInstanceIndicesResponseBodyHeaders() = default ;
    ListInstanceIndicesResponseBodyHeaders(const ListInstanceIndicesResponseBodyHeaders &) = default ;
    ListInstanceIndicesResponseBodyHeaders(ListInstanceIndicesResponseBodyHeaders &&) = default ;
    ListInstanceIndicesResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceIndicesResponseBodyHeaders() = default ;
    ListInstanceIndicesResponseBodyHeaders& operator=(const ListInstanceIndicesResponseBodyHeaders &) = default ;
    ListInstanceIndicesResponseBodyHeaders& operator=(ListInstanceIndicesResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->xManagedCount_ != nullptr
        && this->xManagedStorageSize_ != nullptr && this->xOSSCount_ != nullptr && this->xOSSStorageSize_ != nullptr; };
    // xManagedCount Field Functions 
    bool hasXManagedCount() const { return this->xManagedCount_ != nullptr;};
    void deleteXManagedCount() { this->xManagedCount_ = nullptr;};
    inline int32_t xManagedCount() const { DARABONBA_PTR_GET_DEFAULT(xManagedCount_, 0) };
    inline ListInstanceIndicesResponseBodyHeaders& setXManagedCount(int32_t xManagedCount) { DARABONBA_PTR_SET_VALUE(xManagedCount_, xManagedCount) };


    // xManagedStorageSize Field Functions 
    bool hasXManagedStorageSize() const { return this->xManagedStorageSize_ != nullptr;};
    void deleteXManagedStorageSize() { this->xManagedStorageSize_ = nullptr;};
    inline int64_t xManagedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(xManagedStorageSize_, 0L) };
    inline ListInstanceIndicesResponseBodyHeaders& setXManagedStorageSize(int64_t xManagedStorageSize) { DARABONBA_PTR_SET_VALUE(xManagedStorageSize_, xManagedStorageSize) };


    // xOSSCount Field Functions 
    bool hasXOSSCount() const { return this->xOSSCount_ != nullptr;};
    void deleteXOSSCount() { this->xOSSCount_ = nullptr;};
    inline int32_t xOSSCount() const { DARABONBA_PTR_GET_DEFAULT(xOSSCount_, 0) };
    inline ListInstanceIndicesResponseBodyHeaders& setXOSSCount(int32_t xOSSCount) { DARABONBA_PTR_SET_VALUE(xOSSCount_, xOSSCount) };


    // xOSSStorageSize Field Functions 
    bool hasXOSSStorageSize() const { return this->xOSSStorageSize_ != nullptr;};
    void deleteXOSSStorageSize() { this->xOSSStorageSize_ = nullptr;};
    inline int64_t xOSSStorageSize() const { DARABONBA_PTR_GET_DEFAULT(xOSSStorageSize_, 0L) };
    inline ListInstanceIndicesResponseBodyHeaders& setXOSSStorageSize(int64_t xOSSStorageSize) { DARABONBA_PTR_SET_VALUE(xOSSStorageSize_, xOSSStorageSize) };


  protected:
    // The details of the index list.
    std::shared_ptr<int32_t> xManagedCount_ = nullptr;
    // The total number of indexes in the OpenStore cold phase.
    std::shared_ptr<int64_t> xManagedStorageSize_ = nullptr;
    // The time when the index list was queried.
    std::shared_ptr<int32_t> xOSSCount_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int64_t> xOSSStorageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
