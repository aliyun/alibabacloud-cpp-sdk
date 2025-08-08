// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULATASKSRESPONSEBODYLISTMCUBENEBULATASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULATASKSRESPONSEBODYLISTMCUBENEBULATASKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(NebulaTaskInfo, nebulaTaskInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(NebulaTaskInfo, nebulaTaskInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult() = default ;
    ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult(const ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult &) = default ;
    ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult(ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult &&) = default ;
    ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult() = default ;
    ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& operator=(const ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult &) = default ;
    ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& operator=(ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->nebulaTaskInfo_ != nullptr && this->requestId_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // nebulaTaskInfo Field Functions 
    bool hasNebulaTaskInfo() const { return this->nebulaTaskInfo_ != nullptr;};
    void deleteNebulaTaskInfo() { this->nebulaTaskInfo_ = nullptr;};
    inline const vector<Models::ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo> & nebulaTaskInfo() const { DARABONBA_PTR_GET_CONST(nebulaTaskInfo_, vector<Models::ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo>) };
    inline vector<Models::ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo> nebulaTaskInfo() { DARABONBA_PTR_GET(nebulaTaskInfo_, vector<Models::ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo>) };
    inline ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& setNebulaTaskInfo(const vector<Models::ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo> & nebulaTaskInfo) { DARABONBA_PTR_SET_VALUE(nebulaTaskInfo_, nebulaTaskInfo) };
    inline ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& setNebulaTaskInfo(vector<Models::ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo> && nebulaTaskInfo) { DARABONBA_PTR_SET_RVALUE(nebulaTaskInfo_, nebulaTaskInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<vector<Models::ListMcubeNebulaTasksResponseBodyListMcubeNebulaTaskResultNebulaTaskInfo>> nebulaTaskInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
