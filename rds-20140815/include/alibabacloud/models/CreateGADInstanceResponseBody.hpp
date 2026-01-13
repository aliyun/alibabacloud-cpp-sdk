// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGADInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGADInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGADInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateGADInstanceResponseBody() = default ;
    CreateGADInstanceResponseBody(const CreateGADInstanceResponseBody &) = default ;
    CreateGADInstanceResponseBody(CreateGADInstanceResponseBody &&) = default ;
    CreateGADInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGADInstanceResponseBody() = default ;
    CreateGADInstanceResponseBody& operator=(const CreateGADInstanceResponseBody &) = default ;
    CreateGADInstanceResponseBody& operator=(CreateGADInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreateMemberCount, createMemberCount_);
        DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
        DARABONBA_PTR_TO_JSON(TaskID, taskID_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateMemberCount, createMemberCount_);
        DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
        DARABONBA_PTR_FROM_JSON(TaskID, taskID_);
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
      virtual bool empty() const override { return this->createMemberCount_ == nullptr
        && this->gadInstanceName_ == nullptr && this->taskID_ == nullptr; };
      // createMemberCount Field Functions 
      bool hasCreateMemberCount() const { return this->createMemberCount_ != nullptr;};
      void deleteCreateMemberCount() { this->createMemberCount_ = nullptr;};
      inline string getCreateMemberCount() const { DARABONBA_PTR_GET_DEFAULT(createMemberCount_, "") };
      inline Result& setCreateMemberCount(string createMemberCount) { DARABONBA_PTR_SET_VALUE(createMemberCount_, createMemberCount) };


      // gadInstanceName Field Functions 
      bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
      void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
      inline string getGadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
      inline Result& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


      // taskID Field Functions 
      bool hasTaskID() const { return this->taskID_ != nullptr;};
      void deleteTaskID() { this->taskID_ = nullptr;};
      inline string getTaskID() const { DARABONBA_PTR_GET_DEFAULT(taskID_, "") };
      inline Result& setTaskID(string taskID) { DARABONBA_PTR_SET_VALUE(taskID_, taskID) };


    protected:
      // The number of unit nodes that are created by calling this operation.
      shared_ptr<string> createMemberCount_ {};
      // The ID of the global active database cluster.
      shared_ptr<string> gadInstanceName_ {};
      // The task ID.
      shared_ptr<string> taskID_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGADInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateGADInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateGADInstanceResponseBody::Result) };
    inline CreateGADInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateGADInstanceResponseBody::Result) };
    inline CreateGADInstanceResponseBody& setResult(const CreateGADInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateGADInstanceResponseBody& setResult(CreateGADInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The data returned.
    shared_ptr<CreateGADInstanceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
