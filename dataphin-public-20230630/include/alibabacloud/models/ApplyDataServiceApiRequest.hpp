// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ApplyDataServiceApiRequest() = default ;
    ApplyDataServiceApiRequest(const ApplyDataServiceApiRequest &) = default ;
    ApplyDataServiceApiRequest(ApplyDataServiceApiRequest &&) = default ;
    ApplyDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceApiRequest() = default ;
    ApplyDataServiceApiRequest& operator=(const ApplyDataServiceApiRequest &) = default ;
    ApplyDataServiceApiRequest& operator=(ApplyDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(DevFieldList, devFieldList_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(ProdFieldList, prodFieldList_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(DevFieldList, devFieldList_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(ProdFieldList, prodFieldList_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
      };
      ApplyCommand() = default ;
      ApplyCommand(const ApplyCommand &) = default ;
      ApplyCommand(ApplyCommand &&) = default ;
      ApplyCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyCommand() = default ;
      ApplyCommand& operator=(const ApplyCommand &) = default ;
      ApplyCommand& operator=(ApplyCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProdFieldList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProdFieldList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, ProdFieldList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        ProdFieldList() = default ;
        ProdFieldList(const ProdFieldList &) = default ;
        ProdFieldList(ProdFieldList &&) = default ;
        ProdFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProdFieldList() = default ;
        ProdFieldList& operator=(const ProdFieldList &) = default ;
        ProdFieldList& operator=(ProdFieldList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline ProdFieldList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        // This parameter is required.
        shared_ptr<int32_t> id_ {};
      };

      class DevFieldList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DevFieldList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, DevFieldList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        DevFieldList() = default ;
        DevFieldList(const DevFieldList &) = default ;
        DevFieldList(DevFieldList &&) = default ;
        DevFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DevFieldList() = default ;
        DevFieldList& operator=(const DevFieldList &) = default ;
        DevFieldList& operator=(DevFieldList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline DevFieldList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        // This parameter is required.
        shared_ptr<int32_t> id_ {};
      };

      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->appId_ == nullptr && this->devFieldList_ == nullptr && this->expireDate_ == nullptr && this->prodFieldList_ == nullptr && this->reason_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
      inline ApplyCommand& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline ApplyCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // devFieldList Field Functions 
      bool hasDevFieldList() const { return this->devFieldList_ != nullptr;};
      void deleteDevFieldList() { this->devFieldList_ = nullptr;};
      inline const vector<ApplyCommand::DevFieldList> & getDevFieldList() const { DARABONBA_PTR_GET_CONST(devFieldList_, vector<ApplyCommand::DevFieldList>) };
      inline vector<ApplyCommand::DevFieldList> getDevFieldList() { DARABONBA_PTR_GET(devFieldList_, vector<ApplyCommand::DevFieldList>) };
      inline ApplyCommand& setDevFieldList(const vector<ApplyCommand::DevFieldList> & devFieldList) { DARABONBA_PTR_SET_VALUE(devFieldList_, devFieldList) };
      inline ApplyCommand& setDevFieldList(vector<ApplyCommand::DevFieldList> && devFieldList) { DARABONBA_PTR_SET_RVALUE(devFieldList_, devFieldList) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline ApplyCommand& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // prodFieldList Field Functions 
      bool hasProdFieldList() const { return this->prodFieldList_ != nullptr;};
      void deleteProdFieldList() { this->prodFieldList_ = nullptr;};
      inline const vector<ApplyCommand::ProdFieldList> & getProdFieldList() const { DARABONBA_PTR_GET_CONST(prodFieldList_, vector<ApplyCommand::ProdFieldList>) };
      inline vector<ApplyCommand::ProdFieldList> getProdFieldList() { DARABONBA_PTR_GET(prodFieldList_, vector<ApplyCommand::ProdFieldList>) };
      inline ApplyCommand& setProdFieldList(const vector<ApplyCommand::ProdFieldList> & prodFieldList) { DARABONBA_PTR_SET_VALUE(prodFieldList_, prodFieldList) };
      inline ApplyCommand& setProdFieldList(vector<ApplyCommand::ProdFieldList> && prodFieldList) { DARABONBA_PTR_SET_RVALUE(prodFieldList_, prodFieldList) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ApplyCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> apiId_ {};
      // AppId
      // 
      // This parameter is required.
      shared_ptr<int32_t> appId_ {};
      shared_ptr<vector<ApplyCommand::DevFieldList>> devFieldList_ {};
      // This parameter is required.
      shared_ptr<string> expireDate_ {};
      shared_ptr<vector<ApplyCommand::ProdFieldList>> prodFieldList_ {};
      // This parameter is required.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->applyCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // applyCommand Field Functions 
    bool hasApplyCommand() const { return this->applyCommand_ != nullptr;};
    void deleteApplyCommand() { this->applyCommand_ = nullptr;};
    inline const ApplyDataServiceApiRequest::ApplyCommand & getApplyCommand() const { DARABONBA_PTR_GET_CONST(applyCommand_, ApplyDataServiceApiRequest::ApplyCommand) };
    inline ApplyDataServiceApiRequest::ApplyCommand getApplyCommand() { DARABONBA_PTR_GET(applyCommand_, ApplyDataServiceApiRequest::ApplyCommand) };
    inline ApplyDataServiceApiRequest& setApplyCommand(const ApplyDataServiceApiRequest::ApplyCommand & applyCommand) { DARABONBA_PTR_SET_VALUE(applyCommand_, applyCommand) };
    inline ApplyDataServiceApiRequest& setApplyCommand(ApplyDataServiceApiRequest::ApplyCommand && applyCommand) { DARABONBA_PTR_SET_RVALUE(applyCommand_, applyCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ApplyDataServiceApiRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ApplyDataServiceApiRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<ApplyDataServiceApiRequest::ApplyCommand> applyCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int32_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
