// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MPUTasks, MPUTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MPUTasks, MPUTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRtcMPUTaskDetailResponseBody() = default ;
    ListRtcMPUTaskDetailResponseBody(const ListRtcMPUTaskDetailResponseBody &) = default ;
    ListRtcMPUTaskDetailResponseBody(ListRtcMPUTaskDetailResponseBody &&) = default ;
    ListRtcMPUTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBody() = default ;
    ListRtcMPUTaskDetailResponseBody& operator=(const ListRtcMPUTaskDetailResponseBody &) = default ;
    ListRtcMPUTaskDetailResponseBody& operator=(ListRtcMPUTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->MPUTasks_ != nullptr
        && this->requestId_ != nullptr; };
    // MPUTasks Field Functions 
    bool hasMPUTasks() const { return this->MPUTasks_ != nullptr;};
    void deleteMPUTasks() { this->MPUTasks_ = nullptr;};
    inline const vector<ListRtcMPUTaskDetailResponseBodyMPUTasks> & MPUTasks() const { DARABONBA_PTR_GET_CONST(MPUTasks_, vector<ListRtcMPUTaskDetailResponseBodyMPUTasks>) };
    inline vector<ListRtcMPUTaskDetailResponseBodyMPUTasks> MPUTasks() { DARABONBA_PTR_GET(MPUTasks_, vector<ListRtcMPUTaskDetailResponseBodyMPUTasks>) };
    inline ListRtcMPUTaskDetailResponseBody& setMPUTasks(const vector<ListRtcMPUTaskDetailResponseBodyMPUTasks> & MPUTasks) { DARABONBA_PTR_SET_VALUE(MPUTasks_, MPUTasks) };
    inline ListRtcMPUTaskDetailResponseBody& setMPUTasks(vector<ListRtcMPUTaskDetailResponseBodyMPUTasks> && MPUTasks) { DARABONBA_PTR_SET_RVALUE(MPUTasks_, MPUTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRtcMPUTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parameters that you configured when you called the StartLiveMPUTask operation to create the tasks.
    std::shared_ptr<vector<ListRtcMPUTaskDetailResponseBodyMPUTasks>> MPUTasks_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
