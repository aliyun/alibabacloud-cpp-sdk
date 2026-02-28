// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetSkillGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSkillGroupResponseBody() = default ;
    GetSkillGroupResponseBody(const GetSkillGroupResponseBody &) = default ;
    GetSkillGroupResponseBody(GetSkillGroupResponseBody &&) = default ;
    GetSkillGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillGroupResponseBody() = default ;
    GetSkillGroupResponseBody& operator=(const GetSkillGroupResponseBody &) = default ;
    GetSkillGroupResponseBody& operator=(GetSkillGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->instanceId_ == nullptr && this->mediaType_ == nullptr && this->name_ == nullptr && this->skillGroupId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline Data& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skillGroupId Field Functions 
      bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
      void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
      inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
      inline Data& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> mediaType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> skillGroupId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSkillGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSkillGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSkillGroupResponseBody::Data) };
    inline GetSkillGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSkillGroupResponseBody::Data) };
    inline GetSkillGroupResponseBody& setData(const GetSkillGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSkillGroupResponseBody& setData(GetSkillGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSkillGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSkillGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSkillGroupResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
