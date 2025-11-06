// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEMINITASKRESPONSEBODYQUERYMINITASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEMINITASKRESPONSEBODYQUERYMINITASKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(MiniTaskInfo, miniTaskInfo_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MiniTaskInfo, miniTaskInfo_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult() = default ;
    QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult(const QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult &) = default ;
    QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult(QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult &&) = default ;
    QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult() = default ;
    QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& operator=(const QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult &) = default ;
    QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& operator=(QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->miniTaskInfo_ == nullptr
        && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // miniTaskInfo Field Functions 
    bool hasMiniTaskInfo() const { return this->miniTaskInfo_ != nullptr;};
    void deleteMiniTaskInfo() { this->miniTaskInfo_ = nullptr;};
    inline const Models::QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo & miniTaskInfo() const { DARABONBA_PTR_GET_CONST(miniTaskInfo_, Models::QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo) };
    inline Models::QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo miniTaskInfo() { DARABONBA_PTR_GET(miniTaskInfo_, Models::QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo) };
    inline QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& setMiniTaskInfo(const Models::QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo & miniTaskInfo) { DARABONBA_PTR_SET_VALUE(miniTaskInfo_, miniTaskInfo) };
    inline QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& setMiniTaskInfo(Models::QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo && miniTaskInfo) { DARABONBA_PTR_SET_RVALUE(miniTaskInfo_, miniTaskInfo) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMcubeMiniTaskResponseBodyQueryMiniTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::QueryMcubeMiniTaskResponseBodyQueryMiniTaskResultMiniTaskInfo> miniTaskInfo_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
