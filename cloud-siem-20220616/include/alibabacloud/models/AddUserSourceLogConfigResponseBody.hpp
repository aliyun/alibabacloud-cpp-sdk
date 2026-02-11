// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERSOURCELOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERSOURCELOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddUserSourceLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserSourceLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserSourceLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddUserSourceLogConfigResponseBody() = default ;
    AddUserSourceLogConfigResponseBody(const AddUserSourceLogConfigResponseBody &) = default ;
    AddUserSourceLogConfigResponseBody(AddUserSourceLogConfigResponseBody &&) = default ;
    AddUserSourceLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserSourceLogConfigResponseBody() = default ;
    AddUserSourceLogConfigResponseBody& operator=(const AddUserSourceLogConfigResponseBody &) = default ;
    AddUserSourceLogConfigResponseBody& operator=(AddUserSourceLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DiplayLine, diplayLine_);
        DARABONBA_PTR_TO_JSON(Displayed, displayed_);
        DARABONBA_PTR_TO_JSON(Imported, imported_);
        DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_TO_JSON(SourceLogCode, sourceLogCode_);
        DARABONBA_PTR_TO_JSON(SourceProdCode, sourceProdCode_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DiplayLine, diplayLine_);
        DARABONBA_PTR_FROM_JSON(Displayed, displayed_);
        DARABONBA_PTR_FROM_JSON(Imported, imported_);
        DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_FROM_JSON(SourceLogCode, sourceLogCode_);
        DARABONBA_PTR_FROM_JSON(SourceProdCode, sourceProdCode_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
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
      virtual bool empty() const override { return this->diplayLine_ == nullptr
        && this->displayed_ == nullptr && this->imported_ == nullptr && this->mainUserId_ == nullptr && this->sourceLogCode_ == nullptr && this->sourceProdCode_ == nullptr
        && this->subUserId_ == nullptr && this->subUserName_ == nullptr; };
      // diplayLine Field Functions 
      bool hasDiplayLine() const { return this->diplayLine_ != nullptr;};
      void deleteDiplayLine() { this->diplayLine_ = nullptr;};
      inline string getDiplayLine() const { DARABONBA_PTR_GET_DEFAULT(diplayLine_, "") };
      inline Data& setDiplayLine(string diplayLine) { DARABONBA_PTR_SET_VALUE(diplayLine_, diplayLine) };


      // displayed Field Functions 
      bool hasDisplayed() const { return this->displayed_ != nullptr;};
      void deleteDisplayed() { this->displayed_ = nullptr;};
      inline bool getDisplayed() const { DARABONBA_PTR_GET_DEFAULT(displayed_, false) };
      inline Data& setDisplayed(bool displayed) { DARABONBA_PTR_SET_VALUE(displayed_, displayed) };


      // imported Field Functions 
      bool hasImported() const { return this->imported_ != nullptr;};
      void deleteImported() { this->imported_ = nullptr;};
      inline bool getImported() const { DARABONBA_PTR_GET_DEFAULT(imported_, false) };
      inline Data& setImported(bool imported) { DARABONBA_PTR_SET_VALUE(imported_, imported) };


      // mainUserId Field Functions 
      bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
      void deleteMainUserId() { this->mainUserId_ = nullptr;};
      inline int64_t getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
      inline Data& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


      // sourceLogCode Field Functions 
      bool hasSourceLogCode() const { return this->sourceLogCode_ != nullptr;};
      void deleteSourceLogCode() { this->sourceLogCode_ = nullptr;};
      inline string getSourceLogCode() const { DARABONBA_PTR_GET_DEFAULT(sourceLogCode_, "") };
      inline Data& setSourceLogCode(string sourceLogCode) { DARABONBA_PTR_SET_VALUE(sourceLogCode_, sourceLogCode) };


      // sourceProdCode Field Functions 
      bool hasSourceProdCode() const { return this->sourceProdCode_ != nullptr;};
      void deleteSourceProdCode() { this->sourceProdCode_ = nullptr;};
      inline string getSourceProdCode() const { DARABONBA_PTR_GET_DEFAULT(sourceProdCode_, "") };
      inline Data& setSourceProdCode(string sourceProdCode) { DARABONBA_PTR_SET_VALUE(sourceProdCode_, sourceProdCode) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


      // subUserName Field Functions 
      bool hasSubUserName() const { return this->subUserName_ != nullptr;};
      void deleteSubUserName() { this->subUserName_ = nullptr;};
      inline string getSubUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
      inline Data& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


    protected:
      // The display details of the Logstore.
      shared_ptr<string> diplayLine_ {};
      // Indicates whether the details of added logs are returned. Valid values: true false
      shared_ptr<bool> displayed_ {};
      // Indicates whether the logs are added to the threat analysis feature. Valid values: true false
      shared_ptr<bool> imported_ {};
      // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
      shared_ptr<int64_t> mainUserId_ {};
      // The log code.
      shared_ptr<string> sourceLogCode_ {};
      // The code of the cloud service.
      shared_ptr<string> sourceProdCode_ {};
      // The ID of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
      shared_ptr<int64_t> subUserId_ {};
      // The username of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
      shared_ptr<string> subUserName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddUserSourceLogConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddUserSourceLogConfigResponseBody::Data) };
    inline AddUserSourceLogConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddUserSourceLogConfigResponseBody::Data) };
    inline AddUserSourceLogConfigResponseBody& setData(const AddUserSourceLogConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddUserSourceLogConfigResponseBody& setData(AddUserSourceLogConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddUserSourceLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<AddUserSourceLogConfigResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
