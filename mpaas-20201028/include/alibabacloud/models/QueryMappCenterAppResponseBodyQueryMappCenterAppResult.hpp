// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODYQUERYMAPPCENTERAPPRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODYQUERYMAPPCENTERAPPRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMappCenterAppResponseBodyQueryMappCenterAppResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMappCenterAppResponseBodyQueryMappCenterAppResult& obj) { 
      DARABONBA_PTR_TO_JSON(MappCenterApp, mappCenterApp_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMappCenterAppResponseBodyQueryMappCenterAppResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MappCenterApp, mappCenterApp_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMappCenterAppResponseBodyQueryMappCenterAppResult() = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResult(const QueryMappCenterAppResponseBodyQueryMappCenterAppResult &) = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResult(QueryMappCenterAppResponseBodyQueryMappCenterAppResult &&) = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMappCenterAppResponseBodyQueryMappCenterAppResult() = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResult& operator=(const QueryMappCenterAppResponseBodyQueryMappCenterAppResult &) = default ;
    QueryMappCenterAppResponseBodyQueryMappCenterAppResult& operator=(QueryMappCenterAppResponseBodyQueryMappCenterAppResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mappCenterApp_ == nullptr
        && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // mappCenterApp Field Functions 
    bool hasMappCenterApp() const { return this->mappCenterApp_ != nullptr;};
    void deleteMappCenterApp() { this->mappCenterApp_ = nullptr;};
    inline const Models::QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp & mappCenterApp() const { DARABONBA_PTR_GET_CONST(mappCenterApp_, Models::QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp) };
    inline Models::QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp mappCenterApp() { DARABONBA_PTR_GET(mappCenterApp_, Models::QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp) };
    inline QueryMappCenterAppResponseBodyQueryMappCenterAppResult& setMappCenterApp(const Models::QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp & mappCenterApp) { DARABONBA_PTR_SET_VALUE(mappCenterApp_, mappCenterApp) };
    inline QueryMappCenterAppResponseBodyQueryMappCenterAppResult& setMappCenterApp(Models::QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp && mappCenterApp) { DARABONBA_PTR_SET_RVALUE(mappCenterApp_, mappCenterApp) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryMappCenterAppResponseBodyQueryMappCenterAppResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMappCenterAppResponseBodyQueryMappCenterAppResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::QueryMappCenterAppResponseBodyQueryMappCenterAppResultMappCenterApp> mappCenterApp_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
