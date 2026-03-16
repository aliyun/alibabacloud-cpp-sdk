// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITTENANTALIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITTENANTALIASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class InitTenantAliasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitTenantAliasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasInfo, aliasInfo_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InitTenantAliasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasInfo, aliasInfo_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InitTenantAliasResponseBody() = default ;
    InitTenantAliasResponseBody(const InitTenantAliasResponseBody &) = default ;
    InitTenantAliasResponseBody(InitTenantAliasResponseBody &&) = default ;
    InitTenantAliasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitTenantAliasResponseBody() = default ;
    InitTenantAliasResponseBody& operator=(const InitTenantAliasResponseBody &) = default ;
    InitTenantAliasResponseBody& operator=(InitTenantAliasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AliasInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AliasInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AliasEditDisabledReason, aliasEditDisabledReason_);
        DARABONBA_PTR_TO_JSON(AliasEditable, aliasEditable_);
        DARABONBA_PTR_TO_JSON(AliasSourceType, aliasSourceType_);
        DARABONBA_PTR_TO_JSON(NextModifyTime, nextModifyTime_);
      };
      friend void from_json(const Darabonba::Json& j, AliasInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasEditDisabledReason, aliasEditDisabledReason_);
        DARABONBA_PTR_FROM_JSON(AliasEditable, aliasEditable_);
        DARABONBA_PTR_FROM_JSON(AliasSourceType, aliasSourceType_);
        DARABONBA_PTR_FROM_JSON(NextModifyTime, nextModifyTime_);
      };
      AliasInfo() = default ;
      AliasInfo(const AliasInfo &) = default ;
      AliasInfo(AliasInfo &&) = default ;
      AliasInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AliasInfo() = default ;
      AliasInfo& operator=(const AliasInfo &) = default ;
      AliasInfo& operator=(AliasInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasEditDisabledReason_ == nullptr
        && this->aliasEditable_ == nullptr && this->aliasSourceType_ == nullptr && this->nextModifyTime_ == nullptr; };
      // aliasEditDisabledReason Field Functions 
      bool hasAliasEditDisabledReason() const { return this->aliasEditDisabledReason_ != nullptr;};
      void deleteAliasEditDisabledReason() { this->aliasEditDisabledReason_ = nullptr;};
      inline string getAliasEditDisabledReason() const { DARABONBA_PTR_GET_DEFAULT(aliasEditDisabledReason_, "") };
      inline AliasInfo& setAliasEditDisabledReason(string aliasEditDisabledReason) { DARABONBA_PTR_SET_VALUE(aliasEditDisabledReason_, aliasEditDisabledReason) };


      // aliasEditable Field Functions 
      bool hasAliasEditable() const { return this->aliasEditable_ != nullptr;};
      void deleteAliasEditable() { this->aliasEditable_ = nullptr;};
      inline bool getAliasEditable() const { DARABONBA_PTR_GET_DEFAULT(aliasEditable_, false) };
      inline AliasInfo& setAliasEditable(bool aliasEditable) { DARABONBA_PTR_SET_VALUE(aliasEditable_, aliasEditable) };


      // aliasSourceType Field Functions 
      bool hasAliasSourceType() const { return this->aliasSourceType_ != nullptr;};
      void deleteAliasSourceType() { this->aliasSourceType_ = nullptr;};
      inline string getAliasSourceType() const { DARABONBA_PTR_GET_DEFAULT(aliasSourceType_, "") };
      inline AliasInfo& setAliasSourceType(string aliasSourceType) { DARABONBA_PTR_SET_VALUE(aliasSourceType_, aliasSourceType) };


      // nextModifyTime Field Functions 
      bool hasNextModifyTime() const { return this->nextModifyTime_ != nullptr;};
      void deleteNextModifyTime() { this->nextModifyTime_ = nullptr;};
      inline string getNextModifyTime() const { DARABONBA_PTR_GET_DEFAULT(nextModifyTime_, "") };
      inline AliasInfo& setNextModifyTime(string nextModifyTime) { DARABONBA_PTR_SET_VALUE(nextModifyTime_, nextModifyTime) };


    protected:
      // The reason why modification is not allowed.
      shared_ptr<string> aliasEditDisabledReason_ {};
      // Indicates whether modification is allowed.
      shared_ptr<bool> aliasEditable_ {};
      // The source of the organization ID.
      // 
      // Valid values:
      // 
      // *   Generated: auto-generated.
      // *   Customized: user-defined.
      shared_ptr<string> aliasSourceType_ {};
      // The time window during which modification is allowed.
      shared_ptr<string> nextModifyTime_ {};
    };

    virtual bool empty() const override { return this->aliasInfo_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // aliasInfo Field Functions 
    bool hasAliasInfo() const { return this->aliasInfo_ != nullptr;};
    void deleteAliasInfo() { this->aliasInfo_ = nullptr;};
    inline const InitTenantAliasResponseBody::AliasInfo & getAliasInfo() const { DARABONBA_PTR_GET_CONST(aliasInfo_, InitTenantAliasResponseBody::AliasInfo) };
    inline InitTenantAliasResponseBody::AliasInfo getAliasInfo() { DARABONBA_PTR_GET(aliasInfo_, InitTenantAliasResponseBody::AliasInfo) };
    inline InitTenantAliasResponseBody& setAliasInfo(const InitTenantAliasResponseBody::AliasInfo & aliasInfo) { DARABONBA_PTR_SET_VALUE(aliasInfo_, aliasInfo) };
    inline InitTenantAliasResponseBody& setAliasInfo(InitTenantAliasResponseBody::AliasInfo && aliasInfo) { DARABONBA_PTR_SET_RVALUE(aliasInfo_, aliasInfo) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline InitTenantAliasResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitTenantAliasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<InitTenantAliasResponseBody::AliasInfo> aliasInfo_ {};
    // The generated ID of the organization.
    shared_ptr<string> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
