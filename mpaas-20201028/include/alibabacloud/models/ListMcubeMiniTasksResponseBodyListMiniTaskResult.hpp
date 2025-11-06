// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBEMINITASKSRESPONSEBODYLISTMINITASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBEMINITASKSRESPONSEBODYLISTMINITASKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeMiniTasksResponseBodyListMiniTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeMiniTasksResponseBodyListMiniTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(MiniTaskList, miniTaskList_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeMiniTasksResponseBodyListMiniTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MiniTaskList, miniTaskList_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMcubeMiniTasksResponseBodyListMiniTaskResult() = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResult(const ListMcubeMiniTasksResponseBodyListMiniTaskResult &) = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResult(ListMcubeMiniTasksResponseBodyListMiniTaskResult &&) = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeMiniTasksResponseBodyListMiniTaskResult() = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResult& operator=(const ListMcubeMiniTasksResponseBodyListMiniTaskResult &) = default ;
    ListMcubeMiniTasksResponseBodyListMiniTaskResult& operator=(ListMcubeMiniTasksResponseBodyListMiniTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->miniTaskList_ == nullptr
        && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // miniTaskList Field Functions 
    bool hasMiniTaskList() const { return this->miniTaskList_ != nullptr;};
    void deleteMiniTaskList() { this->miniTaskList_ = nullptr;};
    inline const vector<Models::ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList> & miniTaskList() const { DARABONBA_PTR_GET_CONST(miniTaskList_, vector<Models::ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList>) };
    inline vector<Models::ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList> miniTaskList() { DARABONBA_PTR_GET(miniTaskList_, vector<Models::ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList>) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResult& setMiniTaskList(const vector<Models::ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList> & miniTaskList) { DARABONBA_PTR_SET_VALUE(miniTaskList_, miniTaskList) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResult& setMiniTaskList(vector<Models::ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList> && miniTaskList) { DARABONBA_PTR_SET_RVALUE(miniTaskList_, miniTaskList) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMcubeMiniTasksResponseBodyListMiniTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<Models::ListMcubeMiniTasksResponseBodyListMiniTaskResultMiniTaskList>> miniTaskList_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
