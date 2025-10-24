// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsJobsRequestSorter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sorter, sorter_);
      DARABONBA_PTR_TO_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_TO_JSON(dstTableName, dstTableName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_TO_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(stopped, stopped_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_FROM_JSON(dstTableName, dstTableName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_FROM_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(stopped, stopped_);
    };
    ListMmsJobsRequest() = default ;
    ListMmsJobsRequest(const ListMmsJobsRequest &) = default ;
    ListMmsJobsRequest(ListMmsJobsRequest &&) = default ;
    ListMmsJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsJobsRequest() = default ;
    ListMmsJobsRequest& operator=(const ListMmsJobsRequest &) = default ;
    ListMmsJobsRequest& operator=(ListMmsJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sorter_ == nullptr
        && return this->dstDbName_ == nullptr && return this->dstTableName_ == nullptr && return this->name_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr
        && return this->srcDbName_ == nullptr && return this->srcTableName_ == nullptr && return this->status_ == nullptr && return this->stopped_ == nullptr; };
    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsJobsRequestSorter & sorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsJobsRequestSorter) };
    inline ListMmsJobsRequestSorter sorter() { DARABONBA_PTR_GET(sorter_, ListMmsJobsRequestSorter) };
    inline ListMmsJobsRequest& setSorter(const ListMmsJobsRequestSorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsJobsRequest& setSorter(ListMmsJobsRequestSorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // dstDbName Field Functions 
    bool hasDstDbName() const { return this->dstDbName_ != nullptr;};
    void deleteDstDbName() { this->dstDbName_ = nullptr;};
    inline string dstDbName() const { DARABONBA_PTR_GET_DEFAULT(dstDbName_, "") };
    inline ListMmsJobsRequest& setDstDbName(string dstDbName) { DARABONBA_PTR_SET_VALUE(dstDbName_, dstDbName) };


    // dstTableName Field Functions 
    bool hasDstTableName() const { return this->dstTableName_ != nullptr;};
    void deleteDstTableName() { this->dstTableName_ = nullptr;};
    inline string dstTableName() const { DARABONBA_PTR_GET_DEFAULT(dstTableName_, "") };
    inline ListMmsJobsRequest& setDstTableName(string dstTableName) { DARABONBA_PTR_SET_VALUE(dstTableName_, dstTableName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsJobsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsJobsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcDbName Field Functions 
    bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
    void deleteSrcDbName() { this->srcDbName_ = nullptr;};
    inline string srcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
    inline ListMmsJobsRequest& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


    // srcTableName Field Functions 
    bool hasSrcTableName() const { return this->srcTableName_ != nullptr;};
    void deleteSrcTableName() { this->srcTableName_ = nullptr;};
    inline string srcTableName() const { DARABONBA_PTR_GET_DEFAULT(srcTableName_, "") };
    inline ListMmsJobsRequest& setSrcTableName(string srcTableName) { DARABONBA_PTR_SET_VALUE(srcTableName_, srcTableName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopped Field Functions 
    bool hasStopped() const { return this->stopped_ != nullptr;};
    void deleteStopped() { this->stopped_ = nullptr;};
    inline int64_t stopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, 0L) };
    inline ListMmsJobsRequest& setStopped(int64_t stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


  protected:
    std::shared_ptr<ListMmsJobsRequestSorter> sorter_ = nullptr;
    std::shared_ptr<string> dstDbName_ = nullptr;
    std::shared_ptr<string> dstTableName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> srcDbName_ = nullptr;
    std::shared_ptr<string> srcTableName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> stopped_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
