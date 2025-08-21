// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODYHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODYHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataStreamsResponseBodyHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataStreamsResponseBodyHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(X-Managed-Count, xManagedCount_);
      DARABONBA_PTR_TO_JSON(X-Managed-StorageSize, xManagedStorageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataStreamsResponseBodyHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Managed-Count, xManagedCount_);
      DARABONBA_PTR_FROM_JSON(X-Managed-StorageSize, xManagedStorageSize_);
    };
    ListDataStreamsResponseBodyHeaders() = default ;
    ListDataStreamsResponseBodyHeaders(const ListDataStreamsResponseBodyHeaders &) = default ;
    ListDataStreamsResponseBodyHeaders(ListDataStreamsResponseBodyHeaders &&) = default ;
    ListDataStreamsResponseBodyHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataStreamsResponseBodyHeaders() = default ;
    ListDataStreamsResponseBodyHeaders& operator=(const ListDataStreamsResponseBodyHeaders &) = default ;
    ListDataStreamsResponseBodyHeaders& operator=(ListDataStreamsResponseBodyHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->xManagedCount_ != nullptr
        && this->xManagedStorageSize_ != nullptr; };
    // xManagedCount Field Functions 
    bool hasXManagedCount() const { return this->xManagedCount_ != nullptr;};
    void deleteXManagedCount() { this->xManagedCount_ = nullptr;};
    inline int32_t xManagedCount() const { DARABONBA_PTR_GET_DEFAULT(xManagedCount_, 0) };
    inline ListDataStreamsResponseBodyHeaders& setXManagedCount(int32_t xManagedCount) { DARABONBA_PTR_SET_VALUE(xManagedCount_, xManagedCount) };


    // xManagedStorageSize Field Functions 
    bool hasXManagedStorageSize() const { return this->xManagedStorageSize_ != nullptr;};
    void deleteXManagedStorageSize() { this->xManagedStorageSize_ = nullptr;};
    inline int64_t xManagedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(xManagedStorageSize_, 0L) };
    inline ListDataStreamsResponseBodyHeaders& setXManagedStorageSize(int64_t xManagedStorageSize) { DARABONBA_PTR_SET_VALUE(xManagedStorageSize_, xManagedStorageSize) };


  protected:
    std::shared_ptr<int32_t> xManagedCount_ = nullptr;
    std::shared_ptr<int64_t> xManagedStorageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
