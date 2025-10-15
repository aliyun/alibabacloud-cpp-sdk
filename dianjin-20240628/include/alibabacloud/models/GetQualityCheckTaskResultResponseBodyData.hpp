// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetQualityCheckTaskResultResponseBodyDataConversationList.hpp>
#include <vector>
#include <alibabacloud/models/GetQualityCheckTaskResultResponseBodyDataQualityCheckList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetQualityCheckTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(qualityCheckList, qualityCheckList_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(qualityCheckList, qualityCheckList_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetQualityCheckTaskResultResponseBodyData() = default ;
    GetQualityCheckTaskResultResponseBodyData(const GetQualityCheckTaskResultResponseBodyData &) = default ;
    GetQualityCheckTaskResultResponseBodyData(GetQualityCheckTaskResultResponseBodyData &&) = default ;
    GetQualityCheckTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckTaskResultResponseBodyData() = default ;
    GetQualityCheckTaskResultResponseBodyData& operator=(const GetQualityCheckTaskResultResponseBodyData &) = default ;
    GetQualityCheckTaskResultResponseBodyData& operator=(GetQualityCheckTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationList_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtEnd_ == nullptr && return this->gmtStart_ == nullptr && return this->qualityCheckList_ == nullptr && return this->status_ == nullptr
        && return this->taskId_ == nullptr; };
    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline const Models::GetQualityCheckTaskResultResponseBodyDataConversationList & conversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, Models::GetQualityCheckTaskResultResponseBodyDataConversationList) };
    inline Models::GetQualityCheckTaskResultResponseBodyDataConversationList conversationList() { DARABONBA_PTR_GET(conversationList_, Models::GetQualityCheckTaskResultResponseBodyDataConversationList) };
    inline GetQualityCheckTaskResultResponseBodyData& setConversationList(const Models::GetQualityCheckTaskResultResponseBodyDataConversationList & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
    inline GetQualityCheckTaskResultResponseBodyData& setConversationList(Models::GetQualityCheckTaskResultResponseBodyDataConversationList && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetQualityCheckTaskResultResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline string gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, "") };
    inline GetQualityCheckTaskResultResponseBodyData& setGmtEnd(string gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline string gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, "") };
    inline GetQualityCheckTaskResultResponseBodyData& setGmtStart(string gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // qualityCheckList Field Functions 
    bool hasQualityCheckList() const { return this->qualityCheckList_ != nullptr;};
    void deleteQualityCheckList() { this->qualityCheckList_ = nullptr;};
    inline const vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckList> & qualityCheckList() const { DARABONBA_PTR_GET_CONST(qualityCheckList_, vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckList>) };
    inline vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckList> qualityCheckList() { DARABONBA_PTR_GET(qualityCheckList_, vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckList>) };
    inline GetQualityCheckTaskResultResponseBodyData& setQualityCheckList(const vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckList> & qualityCheckList) { DARABONBA_PTR_SET_VALUE(qualityCheckList_, qualityCheckList) };
    inline GetQualityCheckTaskResultResponseBodyData& setQualityCheckList(vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckList> && qualityCheckList) { DARABONBA_PTR_SET_RVALUE(qualityCheckList_, qualityCheckList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetQualityCheckTaskResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetQualityCheckTaskResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<Models::GetQualityCheckTaskResultResponseBodyDataConversationList> conversationList_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtEnd_ = nullptr;
    std::shared_ptr<string> gmtStart_ = nullptr;
    std::shared_ptr<vector<Models::GetQualityCheckTaskResultResponseBodyDataQualityCheckList>> qualityCheckList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
