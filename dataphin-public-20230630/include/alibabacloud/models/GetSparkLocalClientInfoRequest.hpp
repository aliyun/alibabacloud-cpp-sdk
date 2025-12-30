// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKLOCALCLIENTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKLOCALCLIENTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSparkLocalClientInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkLocalClientInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvEnum, envEnum_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkLocalClientInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvEnum, envEnum_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetSparkLocalClientInfoRequest() = default ;
    GetSparkLocalClientInfoRequest(const GetSparkLocalClientInfoRequest &) = default ;
    GetSparkLocalClientInfoRequest(GetSparkLocalClientInfoRequest &&) = default ;
    GetSparkLocalClientInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkLocalClientInfoRequest() = default ;
    GetSparkLocalClientInfoRequest& operator=(const GetSparkLocalClientInfoRequest &) = default ;
    GetSparkLocalClientInfoRequest& operator=(GetSparkLocalClientInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envEnum_ == nullptr
        && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // envEnum Field Functions 
    bool hasEnvEnum() const { return this->envEnum_ != nullptr;};
    void deleteEnvEnum() { this->envEnum_ = nullptr;};
    inline string getEnvEnum() const { DARABONBA_PTR_GET_DEFAULT(envEnum_, "") };
    inline GetSparkLocalClientInfoRequest& setEnvEnum(string envEnum) { DARABONBA_PTR_SET_VALUE(envEnum_, envEnum) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetSparkLocalClientInfoRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetSparkLocalClientInfoRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<string> envEnum_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
