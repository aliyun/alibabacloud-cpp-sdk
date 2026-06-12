// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLFILEDETECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLFILEDETECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateSkillFileDetectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillFileDetectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillFileDetectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSkillFileDetectResponseBody() = default ;
    CreateSkillFileDetectResponseBody(const CreateSkillFileDetectResponseBody &) = default ;
    CreateSkillFileDetectResponseBody(CreateSkillFileDetectResponseBody &&) = default ;
    CreateSkillFileDetectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillFileDetectResponseBody() = default ;
    CreateSkillFileDetectResponseBody& operator=(const CreateSkillFileDetectResponseBody &) = default ;
    CreateSkillFileDetectResponseBody& operator=(CreateSkillFileDetectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hashKey_ == nullptr
        && this->requestId_ == nullptr; };
    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline CreateSkillFileDetectResponseBody& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSkillFileDetectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique identifier for the detection task.
    shared_ptr<string> hashKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
