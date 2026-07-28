// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOPILOTTUNINGHISTORIESHEADERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOPILOTTUNINGHISTORIESHEADERS_HPP_
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
  class ListAutopilotTuningHistoriesHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutopilotTuningHistoriesHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(Accept-Language, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutopilotTuningHistoriesHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(Accept-Language, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListAutopilotTuningHistoriesHeaders() = default ;
    ListAutopilotTuningHistoriesHeaders(const ListAutopilotTuningHistoriesHeaders &) = default ;
    ListAutopilotTuningHistoriesHeaders(ListAutopilotTuningHistoriesHeaders &&) = default ;
    ListAutopilotTuningHistoriesHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutopilotTuningHistoriesHeaders() = default ;
    ListAutopilotTuningHistoriesHeaders& operator=(const ListAutopilotTuningHistoriesHeaders &) = default ;
    ListAutopilotTuningHistoriesHeaders& operator=(ListAutopilotTuningHistoriesHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->acceptLanguage_ == nullptr && this->workspace_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline ListAutopilotTuningHistoriesHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline ListAutopilotTuningHistoriesHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListAutopilotTuningHistoriesHeaders& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListAutopilotTuningHistoriesHeaders& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // The language type. Default value: en-US. Set this to zh-CN for Chinese.
    shared_ptr<string> acceptLanguage_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
