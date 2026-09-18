// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class CreateAttackTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAttackTargetResponseBody() = default ;
    CreateAttackTargetResponseBody(const CreateAttackTargetResponseBody &) = default ;
    CreateAttackTargetResponseBody(CreateAttackTargetResponseBody &&) = default ;
    CreateAttackTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackTargetResponseBody() = default ;
    CreateAttackTargetResponseBody& operator=(const CreateAttackTargetResponseBody &) = default ;
    CreateAttackTargetResponseBody& operator=(CreateAttackTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetId_ == nullptr; };
      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Data& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    protected:
      // The unique identifier of the created scan target. You can use this value as the TargetId parameter in subsequent calls such as TestConnectivity and scan task creation.
      shared_ptr<string> targetId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAttackTargetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAttackTargetResponseBody::Data) };
    inline CreateAttackTargetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAttackTargetResponseBody::Data) };
    inline CreateAttackTargetResponseBody& setData(const CreateAttackTargetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAttackTargetResponseBody& setData(CreateAttackTargetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAttackTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation result. Upon successful creation, the TargetId of the new scan target is returned.
    shared_ptr<CreateAttackTargetResponseBody::Data> data_ {};
    // The request ID, used for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
