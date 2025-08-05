// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsDbsRequestSorter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDbsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDbsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sorter, sorter_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDbsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListMmsDbsRequest() = default ;
    ListMmsDbsRequest(const ListMmsDbsRequest &) = default ;
    ListMmsDbsRequest(ListMmsDbsRequest &&) = default ;
    ListMmsDbsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDbsRequest() = default ;
    ListMmsDbsRequest& operator=(const ListMmsDbsRequest &) = default ;
    ListMmsDbsRequest& operator=(ListMmsDbsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->sorter_ != nullptr && this->status_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsDbsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsDbsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsDbsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsDbsRequestSorter & sorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsDbsRequestSorter) };
    inline ListMmsDbsRequestSorter sorter() { DARABONBA_PTR_GET(sorter_, ListMmsDbsRequestSorter) };
    inline ListMmsDbsRequest& setSorter(const ListMmsDbsRequestSorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsDbsRequest& setSorter(ListMmsDbsRequestSorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsDbsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<ListMmsDbsRequestSorter> sorter_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
