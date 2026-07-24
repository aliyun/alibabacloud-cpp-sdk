// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHSQLEXECUTIONRESULTHEADERS_HPP_
#define ALIBABACLOUD_MODELS_FETCHSQLEXECUTIONRESULTHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class FetchSqlExecutionResultHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchSqlExecutionResultHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, FetchSqlExecutionResultHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    FetchSqlExecutionResultHeaders() = default ;
    FetchSqlExecutionResultHeaders(const FetchSqlExecutionResultHeaders &) = default ;
    FetchSqlExecutionResultHeaders(FetchSqlExecutionResultHeaders &&) = default ;
    FetchSqlExecutionResultHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchSqlExecutionResultHeaders() = default ;
    FetchSqlExecutionResultHeaders& operator=(const FetchSqlExecutionResultHeaders &) = default ;
    FetchSqlExecutionResultHeaders& operator=(FetchSqlExecutionResultHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->workspace_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline FetchSqlExecutionResultHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline FetchSqlExecutionResultHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline FetchSqlExecutionResultHeaders& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // The workspace ID.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
