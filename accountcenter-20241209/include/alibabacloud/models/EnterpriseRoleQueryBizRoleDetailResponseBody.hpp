// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYBIZROLEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYBIZROLEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRoleQueryBizRoleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRoleQueryBizRoleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizRoleDetail, bizRoleDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRoleQueryBizRoleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRoleDetail, bizRoleDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseRoleQueryBizRoleDetailResponseBody() = default ;
    EnterpriseRoleQueryBizRoleDetailResponseBody(const EnterpriseRoleQueryBizRoleDetailResponseBody &) = default ;
    EnterpriseRoleQueryBizRoleDetailResponseBody(EnterpriseRoleQueryBizRoleDetailResponseBody &&) = default ;
    EnterpriseRoleQueryBizRoleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRoleQueryBizRoleDetailResponseBody() = default ;
    EnterpriseRoleQueryBizRoleDetailResponseBody& operator=(const EnterpriseRoleQueryBizRoleDetailResponseBody &) = default ;
    EnterpriseRoleQueryBizRoleDetailResponseBody& operator=(EnterpriseRoleQueryBizRoleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BizRoleDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BizRoleDetail& obj) { 
        DARABONBA_PTR_TO_JSON(BizPermissions, bizPermissions_);
        DARABONBA_PTR_TO_JSON(BizRoleCode, bizRoleCode_);
        DARABONBA_PTR_TO_JSON(BizRoleDesc, bizRoleDesc_);
        DARABONBA_PTR_TO_JSON(BizRoleName, bizRoleName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      };
      friend void from_json(const Darabonba::Json& j, BizRoleDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(BizPermissions, bizPermissions_);
        DARABONBA_PTR_FROM_JSON(BizRoleCode, bizRoleCode_);
        DARABONBA_PTR_FROM_JSON(BizRoleDesc, bizRoleDesc_);
        DARABONBA_PTR_FROM_JSON(BizRoleName, bizRoleName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      };
      BizRoleDetail() = default ;
      BizRoleDetail(const BizRoleDetail &) = default ;
      BizRoleDetail(BizRoleDetail &&) = default ;
      BizRoleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BizRoleDetail() = default ;
      BizRoleDetail& operator=(const BizRoleDetail &) = default ;
      BizRoleDetail& operator=(BizRoleDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BizPermissions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizPermissions& obj) { 
          DARABONBA_PTR_TO_JSON(BizPermissionCode, bizPermissionCode_);
          DARABONBA_PTR_TO_JSON(BizPermissionDesc, bizPermissionDesc_);
          DARABONBA_PTR_TO_JSON(BizPermissionName, bizPermissionName_);
        };
        friend void from_json(const Darabonba::Json& j, BizPermissions& obj) { 
          DARABONBA_PTR_FROM_JSON(BizPermissionCode, bizPermissionCode_);
          DARABONBA_PTR_FROM_JSON(BizPermissionDesc, bizPermissionDesc_);
          DARABONBA_PTR_FROM_JSON(BizPermissionName, bizPermissionName_);
        };
        BizPermissions() = default ;
        BizPermissions(const BizPermissions &) = default ;
        BizPermissions(BizPermissions &&) = default ;
        BizPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizPermissions() = default ;
        BizPermissions& operator=(const BizPermissions &) = default ;
        BizPermissions& operator=(BizPermissions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizPermissionCode_ == nullptr
        && this->bizPermissionDesc_ == nullptr && this->bizPermissionName_ == nullptr; };
        // bizPermissionCode Field Functions 
        bool hasBizPermissionCode() const { return this->bizPermissionCode_ != nullptr;};
        void deleteBizPermissionCode() { this->bizPermissionCode_ = nullptr;};
        inline string getBizPermissionCode() const { DARABONBA_PTR_GET_DEFAULT(bizPermissionCode_, "") };
        inline BizPermissions& setBizPermissionCode(string bizPermissionCode) { DARABONBA_PTR_SET_VALUE(bizPermissionCode_, bizPermissionCode) };


        // bizPermissionDesc Field Functions 
        bool hasBizPermissionDesc() const { return this->bizPermissionDesc_ != nullptr;};
        void deleteBizPermissionDesc() { this->bizPermissionDesc_ = nullptr;};
        inline string getBizPermissionDesc() const { DARABONBA_PTR_GET_DEFAULT(bizPermissionDesc_, "") };
        inline BizPermissions& setBizPermissionDesc(string bizPermissionDesc) { DARABONBA_PTR_SET_VALUE(bizPermissionDesc_, bizPermissionDesc) };


        // bizPermissionName Field Functions 
        bool hasBizPermissionName() const { return this->bizPermissionName_ != nullptr;};
        void deleteBizPermissionName() { this->bizPermissionName_ = nullptr;};
        inline string getBizPermissionName() const { DARABONBA_PTR_GET_DEFAULT(bizPermissionName_, "") };
        inline BizPermissions& setBizPermissionName(string bizPermissionName) { DARABONBA_PTR_SET_VALUE(bizPermissionName_, bizPermissionName) };


      protected:
        shared_ptr<string> bizPermissionCode_ {};
        shared_ptr<string> bizPermissionDesc_ {};
        shared_ptr<string> bizPermissionName_ {};
      };

      virtual bool empty() const override { return this->bizPermissions_ == nullptr
        && this->bizRoleCode_ == nullptr && this->bizRoleDesc_ == nullptr && this->bizRoleName_ == nullptr && this->resourceType_ == nullptr && this->srcType_ == nullptr; };
      // bizPermissions Field Functions 
      bool hasBizPermissions() const { return this->bizPermissions_ != nullptr;};
      void deleteBizPermissions() { this->bizPermissions_ = nullptr;};
      inline const vector<BizRoleDetail::BizPermissions> & getBizPermissions() const { DARABONBA_PTR_GET_CONST(bizPermissions_, vector<BizRoleDetail::BizPermissions>) };
      inline vector<BizRoleDetail::BizPermissions> getBizPermissions() { DARABONBA_PTR_GET(bizPermissions_, vector<BizRoleDetail::BizPermissions>) };
      inline BizRoleDetail& setBizPermissions(const vector<BizRoleDetail::BizPermissions> & bizPermissions) { DARABONBA_PTR_SET_VALUE(bizPermissions_, bizPermissions) };
      inline BizRoleDetail& setBizPermissions(vector<BizRoleDetail::BizPermissions> && bizPermissions) { DARABONBA_PTR_SET_RVALUE(bizPermissions_, bizPermissions) };


      // bizRoleCode Field Functions 
      bool hasBizRoleCode() const { return this->bizRoleCode_ != nullptr;};
      void deleteBizRoleCode() { this->bizRoleCode_ = nullptr;};
      inline string getBizRoleCode() const { DARABONBA_PTR_GET_DEFAULT(bizRoleCode_, "") };
      inline BizRoleDetail& setBizRoleCode(string bizRoleCode) { DARABONBA_PTR_SET_VALUE(bizRoleCode_, bizRoleCode) };


      // bizRoleDesc Field Functions 
      bool hasBizRoleDesc() const { return this->bizRoleDesc_ != nullptr;};
      void deleteBizRoleDesc() { this->bizRoleDesc_ = nullptr;};
      inline string getBizRoleDesc() const { DARABONBA_PTR_GET_DEFAULT(bizRoleDesc_, "") };
      inline BizRoleDetail& setBizRoleDesc(string bizRoleDesc) { DARABONBA_PTR_SET_VALUE(bizRoleDesc_, bizRoleDesc) };


      // bizRoleName Field Functions 
      bool hasBizRoleName() const { return this->bizRoleName_ != nullptr;};
      void deleteBizRoleName() { this->bizRoleName_ = nullptr;};
      inline string getBizRoleName() const { DARABONBA_PTR_GET_DEFAULT(bizRoleName_, "") };
      inline BizRoleDetail& setBizRoleName(string bizRoleName) { DARABONBA_PTR_SET_VALUE(bizRoleName_, bizRoleName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline BizRoleDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline BizRoleDetail& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    protected:
      shared_ptr<vector<BizRoleDetail::BizPermissions>> bizPermissions_ {};
      shared_ptr<string> bizRoleCode_ {};
      shared_ptr<string> bizRoleDesc_ {};
      shared_ptr<string> bizRoleName_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> srcType_ {};
    };

    virtual bool empty() const override { return this->bizRoleDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // bizRoleDetail Field Functions 
    bool hasBizRoleDetail() const { return this->bizRoleDetail_ != nullptr;};
    void deleteBizRoleDetail() { this->bizRoleDetail_ = nullptr;};
    inline const EnterpriseRoleQueryBizRoleDetailResponseBody::BizRoleDetail & getBizRoleDetail() const { DARABONBA_PTR_GET_CONST(bizRoleDetail_, EnterpriseRoleQueryBizRoleDetailResponseBody::BizRoleDetail) };
    inline EnterpriseRoleQueryBizRoleDetailResponseBody::BizRoleDetail getBizRoleDetail() { DARABONBA_PTR_GET(bizRoleDetail_, EnterpriseRoleQueryBizRoleDetailResponseBody::BizRoleDetail) };
    inline EnterpriseRoleQueryBizRoleDetailResponseBody& setBizRoleDetail(const EnterpriseRoleQueryBizRoleDetailResponseBody::BizRoleDetail & bizRoleDetail) { DARABONBA_PTR_SET_VALUE(bizRoleDetail_, bizRoleDetail) };
    inline EnterpriseRoleQueryBizRoleDetailResponseBody& setBizRoleDetail(EnterpriseRoleQueryBizRoleDetailResponseBody::BizRoleDetail && bizRoleDetail) { DARABONBA_PTR_SET_RVALUE(bizRoleDetail_, bizRoleDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseRoleQueryBizRoleDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseRoleQueryBizRoleDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseRoleQueryBizRoleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseRoleQueryBizRoleDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<EnterpriseRoleQueryBizRoleDetailResponseBody::BizRoleDetail> bizRoleDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
