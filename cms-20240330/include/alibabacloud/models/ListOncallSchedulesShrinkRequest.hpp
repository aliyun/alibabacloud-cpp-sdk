// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListOncallSchedulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOncallSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(oncallScheduleIds, oncallScheduleIdsShrink_);
      DARABONBA_PTR_TO_JSON(oncallScheduleName, oncallScheduleName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListOncallSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(oncallScheduleIds, oncallScheduleIdsShrink_);
      DARABONBA_PTR_FROM_JSON(oncallScheduleName, oncallScheduleName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListOncallSchedulesShrinkRequest() = default ;
    ListOncallSchedulesShrinkRequest(const ListOncallSchedulesShrinkRequest &) = default ;
    ListOncallSchedulesShrinkRequest(ListOncallSchedulesShrinkRequest &&) = default ;
    ListOncallSchedulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOncallSchedulesShrinkRequest() = default ;
    ListOncallSchedulesShrinkRequest& operator=(const ListOncallSchedulesShrinkRequest &) = default ;
    ListOncallSchedulesShrinkRequest& operator=(ListOncallSchedulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oncallScheduleIdsShrink_ == nullptr
        && this->oncallScheduleName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->workspace_ == nullptr; };
    // oncallScheduleIdsShrink Field Functions 
    bool hasOncallScheduleIdsShrink() const { return this->oncallScheduleIdsShrink_ != nullptr;};
    void deleteOncallScheduleIdsShrink() { this->oncallScheduleIdsShrink_ = nullptr;};
    inline string getOncallScheduleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(oncallScheduleIdsShrink_, "") };
    inline ListOncallSchedulesShrinkRequest& setOncallScheduleIdsShrink(string oncallScheduleIdsShrink) { DARABONBA_PTR_SET_VALUE(oncallScheduleIdsShrink_, oncallScheduleIdsShrink) };


    // oncallScheduleName Field Functions 
    bool hasOncallScheduleName() const { return this->oncallScheduleName_ != nullptr;};
    void deleteOncallScheduleName() { this->oncallScheduleName_ = nullptr;};
    inline string getOncallScheduleName() const { DARABONBA_PTR_GET_DEFAULT(oncallScheduleName_, "") };
    inline ListOncallSchedulesShrinkRequest& setOncallScheduleName(string oncallScheduleName) { DARABONBA_PTR_SET_VALUE(oncallScheduleName_, oncallScheduleName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOncallSchedulesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOncallSchedulesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListOncallSchedulesShrinkRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> oncallScheduleIdsShrink_ {};
    shared_ptr<string> oncallScheduleName_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
