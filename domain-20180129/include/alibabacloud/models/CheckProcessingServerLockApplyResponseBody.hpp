// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPROCESSINGSERVERLOCKAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKPROCESSINGSERVERLOCKAPPLYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckProcessingServerLockApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckProcessingServerLockApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Exists, exists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckProcessingServerLockApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Exists, exists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckProcessingServerLockApplyResponseBody() = default ;
    CheckProcessingServerLockApplyResponseBody(const CheckProcessingServerLockApplyResponseBody &) = default ;
    CheckProcessingServerLockApplyResponseBody(CheckProcessingServerLockApplyResponseBody &&) = default ;
    CheckProcessingServerLockApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckProcessingServerLockApplyResponseBody() = default ;
    CheckProcessingServerLockApplyResponseBody& operator=(const CheckProcessingServerLockApplyResponseBody &) = default ;
    CheckProcessingServerLockApplyResponseBody& operator=(CheckProcessingServerLockApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exists_ == nullptr
        && this->requestId_ == nullptr; };
    // exists Field Functions 
    bool hasExists() const { return this->exists_ != nullptr;};
    void deleteExists() { this->exists_ = nullptr;};
    inline bool getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, false) };
    inline CheckProcessingServerLockApplyResponseBody& setExists(bool exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckProcessingServerLockApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> exists_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
