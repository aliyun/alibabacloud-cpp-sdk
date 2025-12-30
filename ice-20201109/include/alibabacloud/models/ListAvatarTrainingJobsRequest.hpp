// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARTRAININGJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARTRAININGJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAvatarTrainingJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarTrainingJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarTrainingJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAvatarTrainingJobsRequest() = default ;
    ListAvatarTrainingJobsRequest(const ListAvatarTrainingJobsRequest &) = default ;
    ListAvatarTrainingJobsRequest(ListAvatarTrainingJobsRequest &&) = default ;
    ListAvatarTrainingJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarTrainingJobsRequest() = default ;
    ListAvatarTrainingJobsRequest& operator=(const ListAvatarTrainingJobsRequest &) = default ;
    ListAvatarTrainingJobsRequest& operator=(ListAvatarTrainingJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListAvatarTrainingJobsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAvatarTrainingJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAvatarTrainingJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // *   The page number.
    // *   Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // *   The number of entries per page.
    // *   Default value: 10.
    // *   Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // *   The job state.
    // *   Valid values: Init, Queuing, Training, Success, and Fail.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
