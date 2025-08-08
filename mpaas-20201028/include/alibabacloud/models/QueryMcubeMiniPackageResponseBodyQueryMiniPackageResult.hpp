// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODYQUERYMINIPACKAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODYQUERYMINIPACKAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& obj) { 
      DARABONBA_PTR_TO_JSON(MiniPackageInfo, miniPackageInfo_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MiniPackageInfo, miniPackageInfo_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult() = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult(const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult &) = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult(QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult &&) = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult() = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& operator=(const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult &) = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& operator=(QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->miniPackageInfo_ != nullptr
        && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // miniPackageInfo Field Functions 
    bool hasMiniPackageInfo() const { return this->miniPackageInfo_ != nullptr;};
    void deleteMiniPackageInfo() { this->miniPackageInfo_ = nullptr;};
    inline const Models::QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo & miniPackageInfo() const { DARABONBA_PTR_GET_CONST(miniPackageInfo_, Models::QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo) };
    inline Models::QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo miniPackageInfo() { DARABONBA_PTR_GET(miniPackageInfo_, Models::QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& setMiniPackageInfo(const Models::QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo & miniPackageInfo) { DARABONBA_PTR_SET_VALUE(miniPackageInfo_, miniPackageInfo) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& setMiniPackageInfo(Models::QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo && miniPackageInfo) { DARABONBA_PTR_SET_RVALUE(miniPackageInfo_, miniPackageInfo) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo> miniPackageInfo_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
