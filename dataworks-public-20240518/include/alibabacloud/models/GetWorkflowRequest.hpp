// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetWorkflowRequest() = default ;
    GetWorkflowRequest(const GetWorkflowRequest &) = default ;
    GetWorkflowRequest(GetWorkflowRequest &&) = default ;
    GetWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowRequest() = default ;
    GetWorkflowRequest& operator=(const GetWorkflowRequest &) = default ;
    GetWorkflowRequest& operator=(GetWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envType_ != nullptr
        && this->id_ != nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetWorkflowRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkflowRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> envType_ = nullptr;
    // The workflow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
