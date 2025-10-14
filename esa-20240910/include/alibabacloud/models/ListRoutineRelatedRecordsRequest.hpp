// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineRelatedRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineRelatedRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKeyWord, searchKeyWord_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineRelatedRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKeyWord, searchKeyWord_);
    };
    ListRoutineRelatedRecordsRequest() = default ;
    ListRoutineRelatedRecordsRequest(const ListRoutineRelatedRecordsRequest &) = default ;
    ListRoutineRelatedRecordsRequest(ListRoutineRelatedRecordsRequest &&) = default ;
    ListRoutineRelatedRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineRelatedRecordsRequest() = default ;
    ListRoutineRelatedRecordsRequest& operator=(const ListRoutineRelatedRecordsRequest &) = default ;
    ListRoutineRelatedRecordsRequest& operator=(ListRoutineRelatedRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->searchKeyWord_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRoutineRelatedRecordsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRoutineRelatedRecordsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineRelatedRecordsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKeyWord Field Functions 
    bool hasSearchKeyWord() const { return this->searchKeyWord_ != nullptr;};
    void deleteSearchKeyWord() { this->searchKeyWord_ = nullptr;};
    inline string searchKeyWord() const { DARABONBA_PTR_GET_DEFAULT(searchKeyWord_, "") };
    inline ListRoutineRelatedRecordsRequest& setSearchKeyWord(string searchKeyWord) { DARABONBA_PTR_SET_VALUE(searchKeyWord_, searchKeyWord) };


  protected:
    // The name of the function.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The page number of the returned page. Default value: 1
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: an integer from 1 to 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The keyword used for fuzzy search.
    std::shared_ptr<string> searchKeyWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
