// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATATOOLSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATATOOLSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNacosMcpServerResponseBodyDataToolSpecTools.hpp>
#include <map>
#include <alibabacloud/models/DataToolSpecToolsMetaValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyDataToolSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyDataToolSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(ToolsMeta, toolsMeta_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyDataToolSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(ToolsMeta, toolsMeta_);
    };
    GetNacosMcpServerResponseBodyDataToolSpec() = default ;
    GetNacosMcpServerResponseBodyDataToolSpec(const GetNacosMcpServerResponseBodyDataToolSpec &) = default ;
    GetNacosMcpServerResponseBodyDataToolSpec(GetNacosMcpServerResponseBodyDataToolSpec &&) = default ;
    GetNacosMcpServerResponseBodyDataToolSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyDataToolSpec() = default ;
    GetNacosMcpServerResponseBodyDataToolSpec& operator=(const GetNacosMcpServerResponseBodyDataToolSpec &) = default ;
    GetNacosMcpServerResponseBodyDataToolSpec& operator=(GetNacosMcpServerResponseBodyDataToolSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tools_ != nullptr
        && this->toolsMeta_ != nullptr; };
    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::GetNacosMcpServerResponseBodyDataToolSpecTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::GetNacosMcpServerResponseBodyDataToolSpecTools>) };
    inline vector<Models::GetNacosMcpServerResponseBodyDataToolSpecTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::GetNacosMcpServerResponseBodyDataToolSpecTools>) };
    inline GetNacosMcpServerResponseBodyDataToolSpec& setTools(const vector<Models::GetNacosMcpServerResponseBodyDataToolSpecTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline GetNacosMcpServerResponseBodyDataToolSpec& setTools(vector<Models::GetNacosMcpServerResponseBodyDataToolSpecTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // toolsMeta Field Functions 
    bool hasToolsMeta() const { return this->toolsMeta_ != nullptr;};
    void deleteToolsMeta() { this->toolsMeta_ = nullptr;};
    inline const map<string, Models::DataToolSpecToolsMetaValue> & toolsMeta() const { DARABONBA_PTR_GET_CONST(toolsMeta_, map<string, Models::DataToolSpecToolsMetaValue>) };
    inline map<string, Models::DataToolSpecToolsMetaValue> toolsMeta() { DARABONBA_PTR_GET(toolsMeta_, map<string, Models::DataToolSpecToolsMetaValue>) };
    inline GetNacosMcpServerResponseBodyDataToolSpec& setToolsMeta(const map<string, Models::DataToolSpecToolsMetaValue> & toolsMeta) { DARABONBA_PTR_SET_VALUE(toolsMeta_, toolsMeta) };
    inline GetNacosMcpServerResponseBodyDataToolSpec& setToolsMeta(map<string, Models::DataToolSpecToolsMetaValue> && toolsMeta) { DARABONBA_PTR_SET_RVALUE(toolsMeta_, toolsMeta) };


  protected:
    std::shared_ptr<vector<Models::GetNacosMcpServerResponseBodyDataToolSpecTools>> tools_ = nullptr;
    std::shared_ptr<map<string, Models::DataToolSpecToolsMetaValue>> toolsMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
