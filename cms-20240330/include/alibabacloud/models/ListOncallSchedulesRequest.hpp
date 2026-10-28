// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListOncallSchedulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOncallSchedulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(oncallScheduleIds, oncallScheduleIds_);
      DARABONBA_PTR_TO_JSON(oncallScheduleName, oncallScheduleName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListOncallSchedulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(oncallScheduleIds, oncallScheduleIds_);
      DARABONBA_PTR_FROM_JSON(oncallScheduleName, oncallScheduleName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListOncallSchedulesRequest() = default ;
    ListOncallSchedulesRequest(const ListOncallSchedulesRequest &) = default ;
    ListOncallSchedulesRequest(ListOncallSchedulesRequest &&) = default ;
    ListOncallSchedulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOncallSchedulesRequest() = default ;
    ListOncallSchedulesRequest& operator=(const ListOncallSchedulesRequest &) = default ;
    ListOncallSchedulesRequest& operator=(ListOncallSchedulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oncallScheduleIds_ == nullptr
        && this->oncallScheduleName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->workspace_ == nullptr; };
    // oncallScheduleIds Field Functions 
    bool hasOncallScheduleIds() const { return this->oncallScheduleIds_ != nullptr;};
    void deleteOncallScheduleIds() { this->oncallScheduleIds_ = nullptr;};
    inline const vector<string> & getOncallScheduleIds() const { DARABONBA_PTR_GET_CONST(oncallScheduleIds_, vector<string>) };
    inline vector<string> getOncallScheduleIds() { DARABONBA_PTR_GET(oncallScheduleIds_, vector<string>) };
    inline ListOncallSchedulesRequest& setOncallScheduleIds(const vector<string> & oncallScheduleIds) { DARABONBA_PTR_SET_VALUE(oncallScheduleIds_, oncallScheduleIds) };
    inline ListOncallSchedulesRequest& setOncallScheduleIds(vector<string> && oncallScheduleIds) { DARABONBA_PTR_SET_RVALUE(oncallScheduleIds_, oncallScheduleIds) };


    // oncallScheduleName Field Functions 
    bool hasOncallScheduleName() const { return this->oncallScheduleName_ != nullptr;};
    void deleteOncallScheduleName() { this->oncallScheduleName_ = nullptr;};
    inline string getOncallScheduleName() const { DARABONBA_PTR_GET_DEFAULT(oncallScheduleName_, "") };
    inline ListOncallSchedulesRequest& setOncallScheduleName(string oncallScheduleName) { DARABONBA_PTR_SET_VALUE(oncallScheduleName_, oncallScheduleName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOncallSchedulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOncallSchedulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListOncallSchedulesRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<vector<string>> oncallScheduleIds_ {};
    shared_ptr<string> oncallScheduleName_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
