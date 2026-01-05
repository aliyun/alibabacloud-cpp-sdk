// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateMessageGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateMessageGroupResponseBody() = default ;
    CreateMessageGroupResponseBody(const CreateMessageGroupResponseBody &) = default ;
    CreateMessageGroupResponseBody(CreateMessageGroupResponseBody &&) = default ;
    CreateMessageGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageGroupResponseBody() = default ;
    CreateMessageGroupResponseBody& operator=(const CreateMessageGroupResponseBody &) = default ;
    CreateMessageGroupResponseBody& operator=(CreateMessageGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_ANY_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_ANY_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extension_ == nullptr
        && this->groupId_ == nullptr; };
      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline       const Darabonba::Json & getExtension() const { DARABONBA_GET(extension_) };
      Darabonba::Json & getExtension() { DARABONBA_GET(extension_) };
      inline Result& setExtension(const Darabonba::Json & extension) { DARABONBA_SET_VALUE(extension_, extension) };
      inline Result& setExtension(Darabonba::Json && extension) { DARABONBA_SET_RVALUE(extension_, extension) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Result& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    protected:
      // The extended field.
      Darabonba::Json extension_ {};
      // The ID of the message group.
      shared_ptr<string> groupId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMessageGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateMessageGroupResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateMessageGroupResponseBody::Result) };
    inline CreateMessageGroupResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateMessageGroupResponseBody::Result) };
    inline CreateMessageGroupResponseBody& setResult(const CreateMessageGroupResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateMessageGroupResponseBody& setResult(CreateMessageGroupResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<CreateMessageGroupResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
