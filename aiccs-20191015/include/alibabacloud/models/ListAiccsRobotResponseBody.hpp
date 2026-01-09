// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICCSROBOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICCSROBOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListAiccsRobotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiccsRobotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiccsRobotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAiccsRobotResponseBody() = default ;
    ListAiccsRobotResponseBody(const ListAiccsRobotResponseBody &) = default ;
    ListAiccsRobotResponseBody(ListAiccsRobotResponseBody &&) = default ;
    ListAiccsRobotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiccsRobotResponseBody() = default ;
    ListAiccsRobotResponseBody& operator=(const ListAiccsRobotResponseBody &) = default ;
    ListAiccsRobotResponseBody& operator=(ListAiccsRobotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AtProfession, atProfession_);
        DARABONBA_PTR_TO_JSON(AtSence, atSence_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RobotName, robotName_);
        DARABONBA_PTR_TO_JSON(RobotType, robotType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AtProfession, atProfession_);
        DARABONBA_PTR_FROM_JSON(AtSence, atSence_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
        DARABONBA_PTR_FROM_JSON(RobotType, robotType_);
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
      virtual bool empty() const override { return this->atProfession_ == nullptr
        && this->atSence_ == nullptr && this->id_ == nullptr && this->robotName_ == nullptr && this->robotType_ == nullptr; };
      // atProfession Field Functions 
      bool hasAtProfession() const { return this->atProfession_ != nullptr;};
      void deleteAtProfession() { this->atProfession_ = nullptr;};
      inline string getAtProfession() const { DARABONBA_PTR_GET_DEFAULT(atProfession_, "") };
      inline Data& setAtProfession(string atProfession) { DARABONBA_PTR_SET_VALUE(atProfession_, atProfession) };


      // atSence Field Functions 
      bool hasAtSence() const { return this->atSence_ != nullptr;};
      void deleteAtSence() { this->atSence_ = nullptr;};
      inline string getAtSence() const { DARABONBA_PTR_GET_DEFAULT(atSence_, "") };
      inline Data& setAtSence(string atSence) { DARABONBA_PTR_SET_VALUE(atSence_, atSence) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // robotName Field Functions 
      bool hasRobotName() const { return this->robotName_ != nullptr;};
      void deleteRobotName() { this->robotName_ = nullptr;};
      inline string getRobotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
      inline Data& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


      // robotType Field Functions 
      bool hasRobotType() const { return this->robotType_ != nullptr;};
      void deleteRobotType() { this->robotType_ = nullptr;};
      inline string getRobotType() const { DARABONBA_PTR_GET_DEFAULT(robotType_, "") };
      inline Data& setRobotType(string robotType) { DARABONBA_PTR_SET_VALUE(robotType_, robotType) };


    protected:
      shared_ptr<string> atProfession_ {};
      shared_ptr<string> atSence_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> robotName_ {};
      shared_ptr<string> robotType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAiccsRobotResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAiccsRobotResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAiccsRobotResponseBody::Data>) };
    inline vector<ListAiccsRobotResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAiccsRobotResponseBody::Data>) };
    inline ListAiccsRobotResponseBody& setData(const vector<ListAiccsRobotResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAiccsRobotResponseBody& setData(vector<ListAiccsRobotResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAiccsRobotResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAiccsRobotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAiccsRobotResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAiccsRobotResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
