// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLatestSubmitDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestSubmitDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SubmitDetailQuery, submitDetailQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestSubmitDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SubmitDetailQuery, submitDetailQuery_);
    };
    GetLatestSubmitDetailRequest() = default ;
    GetLatestSubmitDetailRequest(const GetLatestSubmitDetailRequest &) = default ;
    GetLatestSubmitDetailRequest(GetLatestSubmitDetailRequest &&) = default ;
    GetLatestSubmitDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestSubmitDetailRequest() = default ;
    GetLatestSubmitDetailRequest& operator=(const GetLatestSubmitDetailRequest &) = default ;
    GetLatestSubmitDetailRequest& operator=(GetLatestSubmitDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitDetailQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitDetailQuery& obj) { 
        DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
        DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitDetailQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
        DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      };
      SubmitDetailQuery() = default ;
      SubmitDetailQuery(const SubmitDetailQuery &) = default ;
      SubmitDetailQuery(SubmitDetailQuery &&) = default ;
      SubmitDetailQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitDetailQuery() = default ;
      SubmitDetailQuery& operator=(const SubmitDetailQuery &) = default ;
      SubmitDetailQuery& operator=(SubmitDetailQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->objectId_ == nullptr
        && this->objectType_ == nullptr; };
      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline SubmitDetailQuery& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline SubmitDetailQuery& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    protected:
      // This parameter is required.
      shared_ptr<string> objectId_ {};
      // This parameter is required.
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->submitDetailQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetLatestSubmitDetailRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // submitDetailQuery Field Functions 
    bool hasSubmitDetailQuery() const { return this->submitDetailQuery_ != nullptr;};
    void deleteSubmitDetailQuery() { this->submitDetailQuery_ = nullptr;};
    inline const GetLatestSubmitDetailRequest::SubmitDetailQuery & getSubmitDetailQuery() const { DARABONBA_PTR_GET_CONST(submitDetailQuery_, GetLatestSubmitDetailRequest::SubmitDetailQuery) };
    inline GetLatestSubmitDetailRequest::SubmitDetailQuery getSubmitDetailQuery() { DARABONBA_PTR_GET(submitDetailQuery_, GetLatestSubmitDetailRequest::SubmitDetailQuery) };
    inline GetLatestSubmitDetailRequest& setSubmitDetailQuery(const GetLatestSubmitDetailRequest::SubmitDetailQuery & submitDetailQuery) { DARABONBA_PTR_SET_VALUE(submitDetailQuery_, submitDetailQuery) };
    inline GetLatestSubmitDetailRequest& setSubmitDetailQuery(GetLatestSubmitDetailRequest::SubmitDetailQuery && submitDetailQuery) { DARABONBA_PTR_SET_RVALUE(submitDetailQuery_, submitDetailQuery) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<GetLatestSubmitDetailRequest::SubmitDetailQuery> submitDetailQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
