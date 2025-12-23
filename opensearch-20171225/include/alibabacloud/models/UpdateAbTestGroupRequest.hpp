// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABTESTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABTESTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ABTestGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateABTestGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateABTestGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateABTestGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateABTestGroupRequest() = default ;
    UpdateABTestGroupRequest(const UpdateABTestGroupRequest &) = default ;
    UpdateABTestGroupRequest(UpdateABTestGroupRequest &&) = default ;
    UpdateABTestGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateABTestGroupRequest() = default ;
    UpdateABTestGroupRequest& operator=(const UpdateABTestGroupRequest &) = default ;
    UpdateABTestGroupRequest& operator=(UpdateABTestGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ABTestGroup & body() const { DARABONBA_PTR_GET_CONST(body_, ABTestGroup) };
    inline ABTestGroup body() { DARABONBA_PTR_GET(body_, ABTestGroup) };
    inline UpdateABTestGroupRequest& setBody(const ABTestGroup & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateABTestGroupRequest& setBody(ABTestGroup && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateABTestGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body. For more information, see [ABTestGroup](https://help.aliyun.com/document_detail/178935.html).
    std::shared_ptr<ABTestGroup> body_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. No endpoint is created. The system checks whether your AccessKey is valid, whether Resource Access Management (RAM) users are authorized, and whether the required parameters are set.
    // *   false (default): creates an endpoint immediately.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
