// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTDATASERVICEAPIREQUEST_HPP_
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
  class GrantDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantCommand, grantCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GrantDataServiceApiRequest() = default ;
    GrantDataServiceApiRequest(const GrantDataServiceApiRequest &) = default ;
    GrantDataServiceApiRequest(GrantDataServiceApiRequest &&) = default ;
    GrantDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantDataServiceApiRequest() = default ;
    GrantDataServiceApiRequest& operator=(const GrantDataServiceApiRequest &) = default ;
    GrantDataServiceApiRequest& operator=(GrantDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ApplyDev, applyDev_);
        DARABONBA_PTR_TO_JSON(ApplyProd, applyProd_);
        DARABONBA_PTR_TO_JSON(DevFieldList, devFieldList_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(ProdFieldList, prodFieldList_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, GrantCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ApplyDev, applyDev_);
        DARABONBA_PTR_FROM_JSON(ApplyProd, applyProd_);
        DARABONBA_PTR_FROM_JSON(DevFieldList, devFieldList_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(ProdFieldList, prodFieldList_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
      };
      GrantCommand() = default ;
      GrantCommand(const GrantCommand &) = default ;
      GrantCommand(GrantCommand &&) = default ;
      GrantCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantCommand() = default ;
      GrantCommand& operator=(const GrantCommand &) = default ;
      GrantCommand& operator=(GrantCommand &&) = default ;
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
        && this->appId_ == nullptr && this->applyDev_ == nullptr && this->applyProd_ == nullptr && this->devFieldList_ == nullptr && this->expireDate_ == nullptr
        && this->prodFieldList_ == nullptr && this->reason_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
      inline GrantCommand& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline GrantCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // applyDev Field Functions 
      bool hasApplyDev() const { return this->applyDev_ != nullptr;};
      void deleteApplyDev() { this->applyDev_ = nullptr;};
      inline bool getApplyDev() const { DARABONBA_PTR_GET_DEFAULT(applyDev_, false) };
      inline GrantCommand& setApplyDev(bool applyDev) { DARABONBA_PTR_SET_VALUE(applyDev_, applyDev) };


      // applyProd Field Functions 
      bool hasApplyProd() const { return this->applyProd_ != nullptr;};
      void deleteApplyProd() { this->applyProd_ = nullptr;};
      inline bool getApplyProd() const { DARABONBA_PTR_GET_DEFAULT(applyProd_, false) };
      inline GrantCommand& setApplyProd(bool applyProd) { DARABONBA_PTR_SET_VALUE(applyProd_, applyProd) };


      // devFieldList Field Functions 
      bool hasDevFieldList() const { return this->devFieldList_ != nullptr;};
      void deleteDevFieldList() { this->devFieldList_ = nullptr;};
      inline const vector<GrantCommand::DevFieldList> & getDevFieldList() const { DARABONBA_PTR_GET_CONST(devFieldList_, vector<GrantCommand::DevFieldList>) };
      inline vector<GrantCommand::DevFieldList> getDevFieldList() { DARABONBA_PTR_GET(devFieldList_, vector<GrantCommand::DevFieldList>) };
      inline GrantCommand& setDevFieldList(const vector<GrantCommand::DevFieldList> & devFieldList) { DARABONBA_PTR_SET_VALUE(devFieldList_, devFieldList) };
      inline GrantCommand& setDevFieldList(vector<GrantCommand::DevFieldList> && devFieldList) { DARABONBA_PTR_SET_RVALUE(devFieldList_, devFieldList) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline GrantCommand& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // prodFieldList Field Functions 
      bool hasProdFieldList() const { return this->prodFieldList_ != nullptr;};
      void deleteProdFieldList() { this->prodFieldList_ = nullptr;};
      inline const vector<GrantCommand::ProdFieldList> & getProdFieldList() const { DARABONBA_PTR_GET_CONST(prodFieldList_, vector<GrantCommand::ProdFieldList>) };
      inline vector<GrantCommand::ProdFieldList> getProdFieldList() { DARABONBA_PTR_GET(prodFieldList_, vector<GrantCommand::ProdFieldList>) };
      inline GrantCommand& setProdFieldList(const vector<GrantCommand::ProdFieldList> & prodFieldList) { DARABONBA_PTR_SET_VALUE(prodFieldList_, prodFieldList) };
      inline GrantCommand& setProdFieldList(vector<GrantCommand::ProdFieldList> && prodFieldList) { DARABONBA_PTR_SET_RVALUE(prodFieldList_, prodFieldList) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline GrantCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> apiId_ {};
      // AppID
      // 
      // This parameter is required.
      shared_ptr<int32_t> appId_ {};
      shared_ptr<bool> applyDev_ {};
      shared_ptr<bool> applyProd_ {};
      shared_ptr<vector<GrantCommand::DevFieldList>> devFieldList_ {};
      // This parameter is required.
      shared_ptr<string> expireDate_ {};
      shared_ptr<vector<GrantCommand::ProdFieldList>> prodFieldList_ {};
      // This parameter is required.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->grantCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // grantCommand Field Functions 
    bool hasGrantCommand() const { return this->grantCommand_ != nullptr;};
    void deleteGrantCommand() { this->grantCommand_ = nullptr;};
    inline const GrantDataServiceApiRequest::GrantCommand & getGrantCommand() const { DARABONBA_PTR_GET_CONST(grantCommand_, GrantDataServiceApiRequest::GrantCommand) };
    inline GrantDataServiceApiRequest::GrantCommand getGrantCommand() { DARABONBA_PTR_GET(grantCommand_, GrantDataServiceApiRequest::GrantCommand) };
    inline GrantDataServiceApiRequest& setGrantCommand(const GrantDataServiceApiRequest::GrantCommand & grantCommand) { DARABONBA_PTR_SET_VALUE(grantCommand_, grantCommand) };
    inline GrantDataServiceApiRequest& setGrantCommand(GrantDataServiceApiRequest::GrantCommand && grantCommand) { DARABONBA_PTR_SET_RVALUE(grantCommand_, grantCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GrantDataServiceApiRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline GrantDataServiceApiRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<GrantDataServiceApiRequest::GrantCommand> grantCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int32_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
