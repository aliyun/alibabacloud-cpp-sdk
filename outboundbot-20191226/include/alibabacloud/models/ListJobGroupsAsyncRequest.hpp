// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobGroupsAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
    };
    ListJobGroupsAsyncRequest() = default ;
    ListJobGroupsAsyncRequest(const ListJobGroupsAsyncRequest &) = default ;
    ListJobGroupsAsyncRequest(ListJobGroupsAsyncRequest &&) = default ;
    ListJobGroupsAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsAsyncRequest() = default ;
    ListJobGroupsAsyncRequest& operator=(const ListJobGroupsAsyncRequest &) = default ;
    ListJobGroupsAsyncRequest& operator=(ListJobGroupsAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline ListJobGroupsAsyncRequest& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> asyncTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
