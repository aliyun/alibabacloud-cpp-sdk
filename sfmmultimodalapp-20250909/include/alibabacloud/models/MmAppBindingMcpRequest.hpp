// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MMAPPBINDINGMCPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MMAPPBINDINGMCPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class MmAppBindingMcpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MmAppBindingMcpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Mcps, mcps_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, MmAppBindingMcpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Mcps, mcps_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    MmAppBindingMcpRequest() = default ;
    MmAppBindingMcpRequest(const MmAppBindingMcpRequest &) = default ;
    MmAppBindingMcpRequest(MmAppBindingMcpRequest &&) = default ;
    MmAppBindingMcpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MmAppBindingMcpRequest() = default ;
    MmAppBindingMcpRequest& operator=(const MmAppBindingMcpRequest &) = default ;
    MmAppBindingMcpRequest& operator=(MmAppBindingMcpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Mcps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Mcps& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ToolList, toolList_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Mcps& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ToolList, toolList_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Mcps() = default ;
      Mcps(const Mcps &) = default ;
      Mcps(Mcps &&) = default ;
      Mcps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Mcps() = default ;
      Mcps& operator=(const Mcps &) = default ;
      Mcps& operator=(Mcps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->toolList_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Mcps& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // toolList Field Functions 
      bool hasToolList() const { return this->toolList_ != nullptr;};
      void deleteToolList() { this->toolList_ = nullptr;};
      inline const vector<string> & getToolList() const { DARABONBA_PTR_GET_CONST(toolList_, vector<string>) };
      inline vector<string> getToolList() { DARABONBA_PTR_GET(toolList_, vector<string>) };
      inline Mcps& setToolList(const vector<string> & toolList) { DARABONBA_PTR_SET_VALUE(toolList_, toolList) };
      inline Mcps& setToolList(vector<string> && toolList) { DARABONBA_PTR_SET_RVALUE(toolList_, toolList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Mcps& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<vector<string>> toolList_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->mcps_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline MmAppBindingMcpRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mcps Field Functions 
    bool hasMcps() const { return this->mcps_ != nullptr;};
    void deleteMcps() { this->mcps_ = nullptr;};
    inline const vector<MmAppBindingMcpRequest::Mcps> & getMcps() const { DARABONBA_PTR_GET_CONST(mcps_, vector<MmAppBindingMcpRequest::Mcps>) };
    inline vector<MmAppBindingMcpRequest::Mcps> getMcps() { DARABONBA_PTR_GET(mcps_, vector<MmAppBindingMcpRequest::Mcps>) };
    inline MmAppBindingMcpRequest& setMcps(const vector<MmAppBindingMcpRequest::Mcps> & mcps) { DARABONBA_PTR_SET_VALUE(mcps_, mcps) };
    inline MmAppBindingMcpRequest& setMcps(vector<MmAppBindingMcpRequest::Mcps> && mcps) { DARABONBA_PTR_SET_RVALUE(mcps_, mcps) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline MmAppBindingMcpRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<vector<MmAppBindingMcpRequest::Mcps>> mcps_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
