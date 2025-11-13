// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCustomCallTaggingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallTagNameList, callTagNameList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchPattern, searchPattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallTagNameList, callTagNameList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchPattern, searchPattern_);
    };
    ListCustomCallTaggingRequest() = default ;
    ListCustomCallTaggingRequest(const ListCustomCallTaggingRequest &) = default ;
    ListCustomCallTaggingRequest(ListCustomCallTaggingRequest &&) = default ;
    ListCustomCallTaggingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomCallTaggingRequest() = default ;
    ListCustomCallTaggingRequest& operator=(const ListCustomCallTaggingRequest &) = default ;
    ListCustomCallTaggingRequest& operator=(ListCustomCallTaggingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callTagNameList_ == nullptr
        && return this->instanceId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->searchPattern_ == nullptr; };
    // callTagNameList Field Functions 
    bool hasCallTagNameList() const { return this->callTagNameList_ != nullptr;};
    void deleteCallTagNameList() { this->callTagNameList_ = nullptr;};
    inline string callTagNameList() const { DARABONBA_PTR_GET_DEFAULT(callTagNameList_, "") };
    inline ListCustomCallTaggingRequest& setCallTagNameList(string callTagNameList) { DARABONBA_PTR_SET_VALUE(callTagNameList_, callTagNameList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCustomCallTaggingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomCallTaggingRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomCallTaggingRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string searchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline ListCustomCallTaggingRequest& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


  protected:
    std::shared_ptr<string> callTagNameList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchPattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
