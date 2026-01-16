// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINDICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINDICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceIndicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceIndicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(all, all_);
      DARABONBA_PTR_TO_JSON(isManaged, isManaged_);
      DARABONBA_PTR_TO_JSON(isOpenstore, isOpenstore_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceIndicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(all, all_);
      DARABONBA_PTR_FROM_JSON(isManaged, isManaged_);
      DARABONBA_PTR_FROM_JSON(isOpenstore, isOpenstore_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListInstanceIndicesRequest() = default ;
    ListInstanceIndicesRequest(const ListInstanceIndicesRequest &) = default ;
    ListInstanceIndicesRequest(ListInstanceIndicesRequest &&) = default ;
    ListInstanceIndicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceIndicesRequest() = default ;
    ListInstanceIndicesRequest& operator=(const ListInstanceIndicesRequest &) = default ;
    ListInstanceIndicesRequest& operator=(ListInstanceIndicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && this->isManaged_ == nullptr && this->isOpenstore_ == nullptr && this->name_ == nullptr && this->page_ == nullptr && this->size_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline ListInstanceIndicesRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
    inline ListInstanceIndicesRequest& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // isOpenstore Field Functions 
    bool hasIsOpenstore() const { return this->isOpenstore_ != nullptr;};
    void deleteIsOpenstore() { this->isOpenstore_ = nullptr;};
    inline bool getIsOpenstore() const { DARABONBA_PTR_GET_DEFAULT(isOpenstore_, false) };
    inline ListInstanceIndicesRequest& setIsOpenstore(bool isOpenstore) { DARABONBA_PTR_SET_VALUE(isOpenstore_, isOpenstore) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstanceIndicesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListInstanceIndicesRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListInstanceIndicesRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // false
    shared_ptr<bool> all_ {};
    // 15
    shared_ptr<bool> isManaged_ {};
    // The ID of the request.
    shared_ptr<bool> isOpenstore_ {};
    // 1
    shared_ptr<string> name_ {};
    // The header of the response.
    shared_ptr<int32_t> page_ {};
    // The total size of the index in Cloud Hosting. Unit: bytes.
    shared_ptr<int32_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
