// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSLAYOUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout& obj) { 
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPanes_ == nullptr; };
    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes>) };
    inline vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes>) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout& setUserPanes(const vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayout& setUserPanes(vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


  protected:
    // The information about the panes.
    std::shared_ptr<vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes>> userPanes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
