// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateToolInputV2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateToolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateToolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateToolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateToolRequest() = default ;
    UpdateToolRequest(const UpdateToolRequest &) = default ;
    UpdateToolRequest(UpdateToolRequest &&) = default ;
    UpdateToolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateToolRequest() = default ;
    UpdateToolRequest& operator=(const UpdateToolRequest &) = default ;
    UpdateToolRequest& operator=(UpdateToolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateToolInputV2 & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateToolInputV2) };
    inline UpdateToolInputV2 getBody() { DARABONBA_PTR_GET(body_, UpdateToolInputV2) };
    inline UpdateToolRequest& setBody(const UpdateToolInputV2 & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateToolRequest& setBody(UpdateToolInputV2 && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 更新工具的请求参数，只需提供需要修改的字段
    shared_ptr<UpdateToolInputV2> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
