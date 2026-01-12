// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORYCOLLECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORYCOLLECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListMemoryCollectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoryCollectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(memoryCollectionName, memoryCollectionName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoryCollectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(memoryCollectionName, memoryCollectionName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMemoryCollectionsRequest() = default ;
    ListMemoryCollectionsRequest(const ListMemoryCollectionsRequest &) = default ;
    ListMemoryCollectionsRequest(ListMemoryCollectionsRequest &&) = default ;
    ListMemoryCollectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoryCollectionsRequest() = default ;
    ListMemoryCollectionsRequest& operator=(const ListMemoryCollectionsRequest &) = default ;
    ListMemoryCollectionsRequest& operator=(ListMemoryCollectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memoryCollectionName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // memoryCollectionName Field Functions 
    bool hasMemoryCollectionName() const { return this->memoryCollectionName_ != nullptr;};
    void deleteMemoryCollectionName() { this->memoryCollectionName_ = nullptr;};
    inline string getMemoryCollectionName() const { DARABONBA_PTR_GET_DEFAULT(memoryCollectionName_, "") };
    inline ListMemoryCollectionsRequest& setMemoryCollectionName(string memoryCollectionName) { DARABONBA_PTR_SET_VALUE(memoryCollectionName_, memoryCollectionName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMemoryCollectionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMemoryCollectionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMemoryCollectionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMemoryCollectionsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> memoryCollectionName_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
