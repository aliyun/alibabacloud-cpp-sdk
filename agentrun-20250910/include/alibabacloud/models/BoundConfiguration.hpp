// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOUNDCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_BOUNDCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BoundTool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BoundConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BoundConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(boundTools, boundTools_);
    };
    friend void from_json(const Darabonba::Json& j, BoundConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(boundTools, boundTools_);
    };
    BoundConfiguration() = default ;
    BoundConfiguration(const BoundConfiguration &) = default ;
    BoundConfiguration(BoundConfiguration &&) = default ;
    BoundConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BoundConfiguration() = default ;
    BoundConfiguration& operator=(const BoundConfiguration &) = default ;
    BoundConfiguration& operator=(BoundConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundTools_ == nullptr; };
    // boundTools Field Functions 
    bool hasBoundTools() const { return this->boundTools_ != nullptr;};
    void deleteBoundTools() { this->boundTools_ = nullptr;};
    inline const vector<BoundTool> & getBoundTools() const { DARABONBA_PTR_GET_CONST(boundTools_, vector<BoundTool>) };
    inline vector<BoundTool> getBoundTools() { DARABONBA_PTR_GET(boundTools_, vector<BoundTool>) };
    inline BoundConfiguration& setBoundTools(const vector<BoundTool> & boundTools) { DARABONBA_PTR_SET_VALUE(boundTools_, boundTools) };
    inline BoundConfiguration& setBoundTools(vector<BoundTool> && boundTools) { DARABONBA_PTR_SET_RVALUE(boundTools_, boundTools) };


  protected:
    // 绑定的工具配置列表，每个配置项定义一个工具与特定 HTTP 路径和方法的绑定关系
    shared_ptr<vector<BoundTool>> boundTools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
