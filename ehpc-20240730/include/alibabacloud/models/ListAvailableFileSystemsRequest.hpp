// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEFILESYSTEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableFileSystemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableFileSystemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableFileSystemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAvailableFileSystemsRequest() = default ;
    ListAvailableFileSystemsRequest(const ListAvailableFileSystemsRequest &) = default ;
    ListAvailableFileSystemsRequest(ListAvailableFileSystemsRequest &&) = default ;
    ListAvailableFileSystemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableFileSystemsRequest() = default ;
    ListAvailableFileSystemsRequest& operator=(const ListAvailableFileSystemsRequest &) = default ;
    ListAvailableFileSystemsRequest& operator=(ListAvailableFileSystemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAvailableFileSystemsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAvailableFileSystemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The page number of the page to return. Page starts from page 1. Default value: 1
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 50. Default value: 10
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
