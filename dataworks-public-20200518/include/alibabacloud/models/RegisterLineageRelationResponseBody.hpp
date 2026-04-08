// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RegisterLineageRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterLineageRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LineageRelation, lineageRelation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterLineageRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LineageRelation, lineageRelation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RegisterLineageRelationResponseBody() = default ;
    RegisterLineageRelationResponseBody(const RegisterLineageRelationResponseBody &) = default ;
    RegisterLineageRelationResponseBody(RegisterLineageRelationResponseBody &&) = default ;
    RegisterLineageRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterLineageRelationResponseBody() = default ;
    RegisterLineageRelationResponseBody& operator=(const RegisterLineageRelationResponseBody &) = default ;
    RegisterLineageRelationResponseBody& operator=(RegisterLineageRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LineageRelation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LineageRelation& obj) { 
        DARABONBA_PTR_TO_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
        DARABONBA_PTR_TO_JSON(RelationshipGuid, relationshipGuid_);
        DARABONBA_PTR_TO_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
      };
      friend void from_json(const Darabonba::Json& j, LineageRelation& obj) { 
        DARABONBA_PTR_FROM_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
        DARABONBA_PTR_FROM_JSON(RelationshipGuid, relationshipGuid_);
        DARABONBA_PTR_FROM_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
      };
      LineageRelation() = default ;
      LineageRelation(const LineageRelation &) = default ;
      LineageRelation(LineageRelation &&) = default ;
      LineageRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LineageRelation() = default ;
      LineageRelation& operator=(const LineageRelation &) = default ;
      LineageRelation& operator=(LineageRelation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destEntityQualifiedName_ == nullptr
        && this->relationshipGuid_ == nullptr && this->srcEntityQualifiedName_ == nullptr; };
      // destEntityQualifiedName Field Functions 
      bool hasDestEntityQualifiedName() const { return this->destEntityQualifiedName_ != nullptr;};
      void deleteDestEntityQualifiedName() { this->destEntityQualifiedName_ = nullptr;};
      inline string getDestEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(destEntityQualifiedName_, "") };
      inline LineageRelation& setDestEntityQualifiedName(string destEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(destEntityQualifiedName_, destEntityQualifiedName) };


      // relationshipGuid Field Functions 
      bool hasRelationshipGuid() const { return this->relationshipGuid_ != nullptr;};
      void deleteRelationshipGuid() { this->relationshipGuid_ = nullptr;};
      inline string getRelationshipGuid() const { DARABONBA_PTR_GET_DEFAULT(relationshipGuid_, "") };
      inline LineageRelation& setRelationshipGuid(string relationshipGuid) { DARABONBA_PTR_SET_VALUE(relationshipGuid_, relationshipGuid) };


      // srcEntityQualifiedName Field Functions 
      bool hasSrcEntityQualifiedName() const { return this->srcEntityQualifiedName_ != nullptr;};
      void deleteSrcEntityQualifiedName() { this->srcEntityQualifiedName_ = nullptr;};
      inline string getSrcEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(srcEntityQualifiedName_, "") };
      inline LineageRelation& setSrcEntityQualifiedName(string srcEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(srcEntityQualifiedName_, srcEntityQualifiedName) };


    protected:
      // The unique identifier of the destination entity.
      shared_ptr<string> destEntityQualifiedName_ {};
      // The ID of the lineage between entities.
      shared_ptr<string> relationshipGuid_ {};
      // The unique identifier of the source entity.
      shared_ptr<string> srcEntityQualifiedName_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->lineageRelation_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RegisterLineageRelationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline RegisterLineageRelationResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline RegisterLineageRelationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // lineageRelation Field Functions 
    bool hasLineageRelation() const { return this->lineageRelation_ != nullptr;};
    void deleteLineageRelation() { this->lineageRelation_ = nullptr;};
    inline const RegisterLineageRelationResponseBody::LineageRelation & getLineageRelation() const { DARABONBA_PTR_GET_CONST(lineageRelation_, RegisterLineageRelationResponseBody::LineageRelation) };
    inline RegisterLineageRelationResponseBody::LineageRelation getLineageRelation() { DARABONBA_PTR_GET(lineageRelation_, RegisterLineageRelationResponseBody::LineageRelation) };
    inline RegisterLineageRelationResponseBody& setLineageRelation(const RegisterLineageRelationResponseBody::LineageRelation & lineageRelation) { DARABONBA_PTR_SET_VALUE(lineageRelation_, lineageRelation) };
    inline RegisterLineageRelationResponseBody& setLineageRelation(RegisterLineageRelationResponseBody::LineageRelation && lineageRelation) { DARABONBA_PTR_SET_RVALUE(lineageRelation_, lineageRelation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterLineageRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RegisterLineageRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The lineage.
    shared_ptr<RegisterLineageRelationResponseBody::LineageRelation> lineageRelation_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
