// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSCENEBYEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSCENEBYEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertSceneByEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertSceneByEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertSceneByEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertSceneByEventResponseBody() = default ;
    DescribeAlertSceneByEventResponseBody(const DescribeAlertSceneByEventResponseBody &) = default ;
    DescribeAlertSceneByEventResponseBody(DescribeAlertSceneByEventResponseBody &&) = default ;
    DescribeAlertSceneByEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertSceneByEventResponseBody() = default ;
    DescribeAlertSceneByEventResponseBody& operator=(const DescribeAlertSceneByEventResponseBody &) = default ;
    DescribeAlertSceneByEventResponseBody& operator=(DescribeAlertSceneByEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertName, alertName_);
        DARABONBA_PTR_TO_JSON(AlertNameId, alertNameId_);
        DARABONBA_PTR_TO_JSON(AlertTile, alertTile_);
        DARABONBA_PTR_TO_JSON(AlertTileId, alertTileId_);
        DARABONBA_PTR_TO_JSON(AlertType, alertType_);
        DARABONBA_PTR_TO_JSON(AlertTypeId, alertTypeId_);
        DARABONBA_PTR_TO_JSON(Targets, targets_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
        DARABONBA_PTR_FROM_JSON(AlertNameId, alertNameId_);
        DARABONBA_PTR_FROM_JSON(AlertTile, alertTile_);
        DARABONBA_PTR_FROM_JSON(AlertTileId, alertTileId_);
        DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
        DARABONBA_PTR_FROM_JSON(AlertTypeId, alertTypeId_);
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
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
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr && this->values_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Targets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Targets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Targets& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline Targets& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Targets& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The display name of the entity attribute field that can be added to the whitelist.
        shared_ptr<string> name_ {};
        // The entity attribute field that can be added to the whitelist.
        shared_ptr<string> type_ {};
        // The right operand that is displayed by default in the whitelist rule.
        shared_ptr<string> value_ {};
        // The supported right operands of the whitelist rule.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->alertName_ == nullptr
        && this->alertNameId_ == nullptr && this->alertTile_ == nullptr && this->alertTileId_ == nullptr && this->alertType_ == nullptr && this->alertTypeId_ == nullptr
        && this->targets_ == nullptr; };
      // alertName Field Functions 
      bool hasAlertName() const { return this->alertName_ != nullptr;};
      void deleteAlertName() { this->alertName_ = nullptr;};
      inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
      inline Data& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


      // alertNameId Field Functions 
      bool hasAlertNameId() const { return this->alertNameId_ != nullptr;};
      void deleteAlertNameId() { this->alertNameId_ = nullptr;};
      inline string getAlertNameId() const { DARABONBA_PTR_GET_DEFAULT(alertNameId_, "") };
      inline Data& setAlertNameId(string alertNameId) { DARABONBA_PTR_SET_VALUE(alertNameId_, alertNameId) };


      // alertTile Field Functions 
      bool hasAlertTile() const { return this->alertTile_ != nullptr;};
      void deleteAlertTile() { this->alertTile_ = nullptr;};
      inline string getAlertTile() const { DARABONBA_PTR_GET_DEFAULT(alertTile_, "") };
      inline Data& setAlertTile(string alertTile) { DARABONBA_PTR_SET_VALUE(alertTile_, alertTile) };


      // alertTileId Field Functions 
      bool hasAlertTileId() const { return this->alertTileId_ != nullptr;};
      void deleteAlertTileId() { this->alertTileId_ = nullptr;};
      inline string getAlertTileId() const { DARABONBA_PTR_GET_DEFAULT(alertTileId_, "") };
      inline Data& setAlertTileId(string alertTileId) { DARABONBA_PTR_SET_VALUE(alertTileId_, alertTileId) };


      // alertType Field Functions 
      bool hasAlertType() const { return this->alertType_ != nullptr;};
      void deleteAlertType() { this->alertType_ = nullptr;};
      inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
      inline Data& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


      // alertTypeId Field Functions 
      bool hasAlertTypeId() const { return this->alertTypeId_ != nullptr;};
      void deleteAlertTypeId() { this->alertTypeId_ = nullptr;};
      inline string getAlertTypeId() const { DARABONBA_PTR_GET_DEFAULT(alertTypeId_, "") };
      inline Data& setAlertTypeId(string alertTypeId) { DARABONBA_PTR_SET_VALUE(alertTypeId_, alertTypeId) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<Data::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Data::Targets>) };
      inline vector<Data::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Data::Targets>) };
      inline Data& setTargets(const vector<Data::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Data& setTargets(vector<Data::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    protected:
      // The alert name. The display name of the alert name varies based on the language of the system, such as Chinese and English.
      shared_ptr<string> alertName_ {};
      // The ID of the alert name.
      shared_ptr<string> alertNameId_ {};
      // The alert title. The display name of the alert title varies based on the language of the system, such as Chinese and English.
      shared_ptr<string> alertTile_ {};
      // The ID of the alert title.
      shared_ptr<string> alertTileId_ {};
      // The alert type. The display name of the alert type varies based on the language of the system, such as Chinese and English.
      shared_ptr<string> alertType_ {};
      // The ID of the alert type.
      shared_ptr<string> alertTypeId_ {};
      // The objects that can be added to the whitelist.
      shared_ptr<vector<Data::Targets>> targets_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAlertSceneByEventResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAlertSceneByEventResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAlertSceneByEventResponseBody::Data>) };
    inline vector<DescribeAlertSceneByEventResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAlertSceneByEventResponseBody::Data>) };
    inline DescribeAlertSceneByEventResponseBody& setData(const vector<DescribeAlertSceneByEventResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAlertSceneByEventResponseBody& setData(vector<DescribeAlertSceneByEventResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertSceneByEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertSceneByEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertSceneByEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeAlertSceneByEventResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
