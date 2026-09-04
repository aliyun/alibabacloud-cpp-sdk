// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEAROPERATINGOBJECTFAVORITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLEAROPERATINGOBJECTFAVORITESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ClearOperatingObjectFavoritesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearOperatingObjectFavoritesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(remainingCount, remainingCount_);
      DARABONBA_PTR_TO_JSON(removedCount, removedCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(verified, verified_);
    };
    friend void from_json(const Darabonba::Json& j, ClearOperatingObjectFavoritesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(remainingCount, remainingCount_);
      DARABONBA_PTR_FROM_JSON(removedCount, removedCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(verified, verified_);
    };
    ClearOperatingObjectFavoritesResponseBody() = default ;
    ClearOperatingObjectFavoritesResponseBody(const ClearOperatingObjectFavoritesResponseBody &) = default ;
    ClearOperatingObjectFavoritesResponseBody(ClearOperatingObjectFavoritesResponseBody &&) = default ;
    ClearOperatingObjectFavoritesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearOperatingObjectFavoritesResponseBody() = default ;
    ClearOperatingObjectFavoritesResponseBody& operator=(const ClearOperatingObjectFavoritesResponseBody &) = default ;
    ClearOperatingObjectFavoritesResponseBody& operator=(ClearOperatingObjectFavoritesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->graphName_ == nullptr && this->message_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->remainingCount_ == nullptr
        && this->removedCount_ == nullptr && this->requestId_ == nullptr && this->verified_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClearOperatingObjectFavoritesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline ClearOperatingObjectFavoritesResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClearOperatingObjectFavoritesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ClearOperatingObjectFavoritesResponseBody& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ClearOperatingObjectFavoritesResponseBody& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // remainingCount Field Functions 
    bool hasRemainingCount() const { return this->remainingCount_ != nullptr;};
    void deleteRemainingCount() { this->remainingCount_ = nullptr;};
    inline int64_t getRemainingCount() const { DARABONBA_PTR_GET_DEFAULT(remainingCount_, 0L) };
    inline ClearOperatingObjectFavoritesResponseBody& setRemainingCount(int64_t remainingCount) { DARABONBA_PTR_SET_VALUE(remainingCount_, remainingCount) };


    // removedCount Field Functions 
    bool hasRemovedCount() const { return this->removedCount_ != nullptr;};
    void deleteRemovedCount() { this->removedCount_ = nullptr;};
    inline int64_t getRemovedCount() const { DARABONBA_PTR_GET_DEFAULT(removedCount_, 0L) };
    inline ClearOperatingObjectFavoritesResponseBody& setRemovedCount(int64_t removedCount) { DARABONBA_PTR_SET_VALUE(removedCount_, removedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClearOperatingObjectFavoritesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verified Field Functions 
    bool hasVerified() const { return this->verified_ != nullptr;};
    void deleteVerified() { this->verified_ = nullptr;};
    inline bool getVerified() const { DARABONBA_PTR_GET_DEFAULT(verified_, false) };
    inline ClearOperatingObjectFavoritesResponseBody& setVerified(bool verified) { DARABONBA_PTR_SET_VALUE(verified_, verified) };


  protected:
    // The status code. SUCCESS indicates success. In case of failure, the corresponding error type is returned, such as ERR_BAD_REQUEST, ERR_VALIDATION_FAILED, or ERR_INTERNAL_SERVER_ERROR.
    shared_ptr<string> code_ {};
    // The graph name. You can call listGraphs to obtain the value.
    shared_ptr<string> graphName_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The object type, such as customer. This parameter has a value when type is set to mention.
    shared_ptr<string> objectType_ {};
    // The digital employee name (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The number of remaining followed objects within the specified scope.
    shared_ptr<int64_t> remainingCount_ {};
    // The number of physical follow records that were actually deleted.
    shared_ptr<int64_t> removedCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the remaining record count has been verified as zero within the same transaction.
    shared_ptr<bool> verified_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
