// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEFORDELETERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEFORDELETERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CheckInstanceForDeleteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceForDeleteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckInstanceResult, checkInstanceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceForDeleteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckInstanceResult, checkInstanceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckInstanceForDeleteResponseBody() = default ;
    CheckInstanceForDeleteResponseBody(const CheckInstanceForDeleteResponseBody &) = default ;
    CheckInstanceForDeleteResponseBody(CheckInstanceForDeleteResponseBody &&) = default ;
    CheckInstanceForDeleteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceForDeleteResponseBody() = default ;
    CheckInstanceForDeleteResponseBody& operator=(const CheckInstanceForDeleteResponseBody &) = default ;
    CheckInstanceForDeleteResponseBody& operator=(CheckInstanceForDeleteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckInstanceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckInstanceResult& obj) { 
        DARABONBA_PTR_TO_JSON(Deletable, deletable_);
        DARABONBA_PTR_TO_JSON(RestrictScenarios, restrictScenarios_);
      };
      friend void from_json(const Darabonba::Json& j, CheckInstanceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
        DARABONBA_PTR_FROM_JSON(RestrictScenarios, restrictScenarios_);
      };
      CheckInstanceResult() = default ;
      CheckInstanceResult(const CheckInstanceResult &) = default ;
      CheckInstanceResult(CheckInstanceResult &&) = default ;
      CheckInstanceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckInstanceResult() = default ;
      CheckInstanceResult& operator=(const CheckInstanceResult &) = default ;
      CheckInstanceResult& operator=(CheckInstanceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RestrictScenarios : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RestrictScenarios& obj) { 
          DARABONBA_PTR_TO_JSON(HelpfulConsoleUrl, helpfulConsoleUrl_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(RestrictReason, restrictReason_);
        };
        friend void from_json(const Darabonba::Json& j, RestrictScenarios& obj) { 
          DARABONBA_PTR_FROM_JSON(HelpfulConsoleUrl, helpfulConsoleUrl_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(RestrictReason, restrictReason_);
        };
        RestrictScenarios() = default ;
        RestrictScenarios(const RestrictScenarios &) = default ;
        RestrictScenarios(RestrictScenarios &&) = default ;
        RestrictScenarios(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RestrictScenarios() = default ;
        RestrictScenarios& operator=(const RestrictScenarios &) = default ;
        RestrictScenarios& operator=(RestrictScenarios &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->helpfulConsoleUrl_ == nullptr
        && this->resourceId_ == nullptr && this->restrictReason_ == nullptr; };
        // helpfulConsoleUrl Field Functions 
        bool hasHelpfulConsoleUrl() const { return this->helpfulConsoleUrl_ != nullptr;};
        void deleteHelpfulConsoleUrl() { this->helpfulConsoleUrl_ = nullptr;};
        inline string getHelpfulConsoleUrl() const { DARABONBA_PTR_GET_DEFAULT(helpfulConsoleUrl_, "") };
        inline RestrictScenarios& setHelpfulConsoleUrl(string helpfulConsoleUrl) { DARABONBA_PTR_SET_VALUE(helpfulConsoleUrl_, helpfulConsoleUrl) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline RestrictScenarios& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // restrictReason Field Functions 
        bool hasRestrictReason() const { return this->restrictReason_ != nullptr;};
        void deleteRestrictReason() { this->restrictReason_ = nullptr;};
        inline string getRestrictReason() const { DARABONBA_PTR_GET_DEFAULT(restrictReason_, "") };
        inline RestrictScenarios& setRestrictReason(string restrictReason) { DARABONBA_PTR_SET_VALUE(restrictReason_, restrictReason) };


      protected:
        // 有帮助的控制台地址，可以管理对应的资源，从而解除实例删除限制。可能返回为空，不一定所有的资源ID都有管理地址返回。
        shared_ptr<string> helpfulConsoleUrl_ {};
        // 导致实例删除受限的资源ID。
        shared_ptr<string> resourceId_ {};
        // 针对实例删除受限的原因文字描述。
        shared_ptr<string> restrictReason_ {};
      };

      virtual bool empty() const override { return this->deletable_ == nullptr
        && this->restrictScenarios_ == nullptr; };
      // deletable Field Functions 
      bool hasDeletable() const { return this->deletable_ != nullptr;};
      void deleteDeletable() { this->deletable_ = nullptr;};
      inline bool getDeletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
      inline CheckInstanceResult& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


      // restrictScenarios Field Functions 
      bool hasRestrictScenarios() const { return this->restrictScenarios_ != nullptr;};
      void deleteRestrictScenarios() { this->restrictScenarios_ = nullptr;};
      inline const vector<CheckInstanceResult::RestrictScenarios> & getRestrictScenarios() const { DARABONBA_PTR_GET_CONST(restrictScenarios_, vector<CheckInstanceResult::RestrictScenarios>) };
      inline vector<CheckInstanceResult::RestrictScenarios> getRestrictScenarios() { DARABONBA_PTR_GET(restrictScenarios_, vector<CheckInstanceResult::RestrictScenarios>) };
      inline CheckInstanceResult& setRestrictScenarios(const vector<CheckInstanceResult::RestrictScenarios> & restrictScenarios) { DARABONBA_PTR_SET_VALUE(restrictScenarios_, restrictScenarios) };
      inline CheckInstanceResult& setRestrictScenarios(vector<CheckInstanceResult::RestrictScenarios> && restrictScenarios) { DARABONBA_PTR_SET_RVALUE(restrictScenarios_, restrictScenarios) };


    protected:
      // true表示实例可以被删除；false表示实例不可被删除，具体查看RestrictScenarios属性。
      shared_ptr<bool> deletable_ {};
      // true表示实例可以被删除；false表示实例不可被删除，具体查看RestrictScenarios属性。
      shared_ptr<vector<CheckInstanceResult::RestrictScenarios>> restrictScenarios_ {};
    };

    virtual bool empty() const override { return this->checkInstanceResult_ == nullptr
        && this->requestId_ == nullptr; };
    // checkInstanceResult Field Functions 
    bool hasCheckInstanceResult() const { return this->checkInstanceResult_ != nullptr;};
    void deleteCheckInstanceResult() { this->checkInstanceResult_ = nullptr;};
    inline const CheckInstanceForDeleteResponseBody::CheckInstanceResult & getCheckInstanceResult() const { DARABONBA_PTR_GET_CONST(checkInstanceResult_, CheckInstanceForDeleteResponseBody::CheckInstanceResult) };
    inline CheckInstanceForDeleteResponseBody::CheckInstanceResult getCheckInstanceResult() { DARABONBA_PTR_GET(checkInstanceResult_, CheckInstanceForDeleteResponseBody::CheckInstanceResult) };
    inline CheckInstanceForDeleteResponseBody& setCheckInstanceResult(const CheckInstanceForDeleteResponseBody::CheckInstanceResult & checkInstanceResult) { DARABONBA_PTR_SET_VALUE(checkInstanceResult_, checkInstanceResult) };
    inline CheckInstanceForDeleteResponseBody& setCheckInstanceResult(CheckInstanceForDeleteResponseBody::CheckInstanceResult && checkInstanceResult) { DARABONBA_PTR_SET_RVALUE(checkInstanceResult_, checkInstanceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckInstanceForDeleteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckInstanceForDeleteResponseBody::CheckInstanceResult> checkInstanceResult_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
