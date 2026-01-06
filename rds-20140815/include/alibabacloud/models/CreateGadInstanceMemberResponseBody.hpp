// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGadInstanceMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGadInstanceMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGadInstanceMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateGadInstanceMemberResponseBody() = default ;
    CreateGadInstanceMemberResponseBody(const CreateGadInstanceMemberResponseBody &) = default ;
    CreateGadInstanceMemberResponseBody(CreateGadInstanceMemberResponseBody &&) = default ;
    CreateGadInstanceMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGadInstanceMemberResponseBody() = default ;
    CreateGadInstanceMemberResponseBody& operator=(const CreateGadInstanceMemberResponseBody &) = default ;
    CreateGadInstanceMemberResponseBody& operator=(CreateGadInstanceMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreateCount, createCount_);
        DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateCount, createCount_);
        DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
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
      virtual bool empty() const override { return this->createCount_ == nullptr
        && this->gadInstanceName_ == nullptr; };
      // createCount Field Functions 
      bool hasCreateCount() const { return this->createCount_ != nullptr;};
      void deleteCreateCount() { this->createCount_ = nullptr;};
      inline string getCreateCount() const { DARABONBA_PTR_GET_DEFAULT(createCount_, "") };
      inline Result& setCreateCount(string createCount) { DARABONBA_PTR_SET_VALUE(createCount_, createCount) };


      // gadInstanceName Field Functions 
      bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
      void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
      inline string getGadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
      inline Result& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


    protected:
      // The number of unit nodes that are created by calling this operation.
      shared_ptr<string> createCount_ {};
      // The ID of the global active database cluster.
      shared_ptr<string> gadInstanceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGadInstanceMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateGadInstanceMemberResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateGadInstanceMemberResponseBody::Result) };
    inline CreateGadInstanceMemberResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateGadInstanceMemberResponseBody::Result) };
    inline CreateGadInstanceMemberResponseBody& setResult(const CreateGadInstanceMemberResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateGadInstanceMemberResponseBody& setResult(CreateGadInstanceMemberResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // An array that consists of the information returned.
    shared_ptr<CreateGadInstanceMemberResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
