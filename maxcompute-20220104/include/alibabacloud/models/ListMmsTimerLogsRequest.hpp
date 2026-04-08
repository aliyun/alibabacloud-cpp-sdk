// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTIMERLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTIMERLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTimerLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTimerLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTimerLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListMmsTimerLogsRequest() = default ;
    ListMmsTimerLogsRequest(const ListMmsTimerLogsRequest &) = default ;
    ListMmsTimerLogsRequest(ListMmsTimerLogsRequest &&) = default ;
    ListMmsTimerLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTimerLogsRequest() = default ;
    ListMmsTimerLogsRequest& operator=(const ListMmsTimerLogsRequest &) = default ;
    ListMmsTimerLogsRequest& operator=(ListMmsTimerLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsTimerLogsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsTimerLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
