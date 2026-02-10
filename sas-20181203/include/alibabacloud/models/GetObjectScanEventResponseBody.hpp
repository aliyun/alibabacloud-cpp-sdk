// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOBJECTSCANEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOBJECTSCANEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetObjectScanEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetObjectScanEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetObjectScanEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetObjectScanEventResponseBody() = default ;
    GetObjectScanEventResponseBody(const GetObjectScanEventResponseBody &) = default ;
    GetObjectScanEventResponseBody(GetObjectScanEventResponseBody &&) = default ;
    GetObjectScanEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetObjectScanEventResponseBody() = default ;
    GetObjectScanEventResponseBody& operator=(const GetObjectScanEventResponseBody &) = default ;
    GetObjectScanEventResponseBody& operator=(GetObjectScanEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
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
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(InfoType, infoType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ValueDisplay, valueDisplay_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(InfoType, infoType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ValueDisplay, valueDisplay_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->infoType_ == nullptr
        && this->name_ == nullptr && this->nameDisplay_ == nullptr && this->type_ == nullptr && this->value_ == nullptr && this->valueDisplay_ == nullptr; };
        // infoType Field Functions 
        bool hasInfoType() const { return this->infoType_ != nullptr;};
        void deleteInfoType() { this->infoType_ = nullptr;};
        inline string getInfoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
        inline Details& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Details& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameDisplay Field Functions 
        bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
        void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
        inline string getNameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
        inline Details& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Details& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // valueDisplay Field Functions 
        bool hasValueDisplay() const { return this->valueDisplay_ != nullptr;};
        void deleteValueDisplay() { this->valueDisplay_ = nullptr;};
        inline string getValueDisplay() const { DARABONBA_PTR_GET_DEFAULT(valueDisplay_, "") };
        inline Details& setValueDisplay(string valueDisplay) { DARABONBA_PTR_SET_VALUE(valueDisplay_, valueDisplay) };


      protected:
        // The type of the item.
        shared_ptr<string> infoType_ {};
        // The name of the item.
        shared_ptr<string> name_ {};
        // The display name of the item.
        shared_ptr<string> nameDisplay_ {};
        // The type of the item.
        shared_ptr<string> type_ {};
        // The value of the item.
        shared_ptr<string> value_ {};
        // The display value of the item.
        shared_ptr<string> valueDisplay_ {};
      };

      virtual bool empty() const override { return this->details_ == nullptr
        && this->eventName_ == nullptr && this->fileName_ == nullptr && this->md5_ == nullptr; };
      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Data::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Data::Details>) };
      inline vector<Data::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Data::Details>) };
      inline Data& setDetails(const vector<Data::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Data& setDetails(vector<Data::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Data& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    protected:
      // The details of the alert event.
      shared_ptr<vector<Data::Details>> details_ {};
      // The name of the alert item.
      shared_ptr<string> eventName_ {};
      // The name of the object.
      shared_ptr<string> fileName_ {};
      // The MD5 hash value of the object.
      shared_ptr<string> md5_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetObjectScanEventResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetObjectScanEventResponseBody::Data) };
    inline GetObjectScanEventResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetObjectScanEventResponseBody::Data) };
    inline GetObjectScanEventResponseBody& setData(const GetObjectScanEventResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetObjectScanEventResponseBody& setData(GetObjectScanEventResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetObjectScanEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetObjectScanEventResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
