// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLASTUPGRADERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLASTUPGRADERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class GetLastUpgradeRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLastUpgradeRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLastUpgradeRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetLastUpgradeRecordResponseBody() = default ;
    GetLastUpgradeRecordResponseBody(const GetLastUpgradeRecordResponseBody &) = default ;
    GetLastUpgradeRecordResponseBody(GetLastUpgradeRecordResponseBody &&) = default ;
    GetLastUpgradeRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLastUpgradeRecordResponseBody() = default ;
    GetLastUpgradeRecordResponseBody& operator=(const GetLastUpgradeRecordResponseBody &) = default ;
    GetLastUpgradeRecordResponseBody& operator=(GetLastUpgradeRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(fromVersion, fromVersion_);
        DARABONBA_PTR_TO_JSON(startReadonlyTime, startReadonlyTime_);
        DARABONBA_PTR_TO_JSON(stopReadonlyTime, stopReadonlyTime_);
        DARABONBA_PTR_TO_JSON(toVersion, toVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(fromVersion, fromVersion_);
        DARABONBA_PTR_FROM_JSON(startReadonlyTime, startReadonlyTime_);
        DARABONBA_PTR_FROM_JSON(stopReadonlyTime, stopReadonlyTime_);
        DARABONBA_PTR_FROM_JSON(toVersion, toVersion_);
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
      virtual bool empty() const override { return this->fromVersion_ == nullptr
        && this->startReadonlyTime_ == nullptr && this->stopReadonlyTime_ == nullptr && this->toVersion_ == nullptr; };
      // fromVersion Field Functions 
      bool hasFromVersion() const { return this->fromVersion_ != nullptr;};
      void deleteFromVersion() { this->fromVersion_ = nullptr;};
      inline string getFromVersion() const { DARABONBA_PTR_GET_DEFAULT(fromVersion_, "") };
      inline Data& setFromVersion(string fromVersion) { DARABONBA_PTR_SET_VALUE(fromVersion_, fromVersion) };


      // startReadonlyTime Field Functions 
      bool hasStartReadonlyTime() const { return this->startReadonlyTime_ != nullptr;};
      void deleteStartReadonlyTime() { this->startReadonlyTime_ = nullptr;};
      inline string getStartReadonlyTime() const { DARABONBA_PTR_GET_DEFAULT(startReadonlyTime_, "") };
      inline Data& setStartReadonlyTime(string startReadonlyTime) { DARABONBA_PTR_SET_VALUE(startReadonlyTime_, startReadonlyTime) };


      // stopReadonlyTime Field Functions 
      bool hasStopReadonlyTime() const { return this->stopReadonlyTime_ != nullptr;};
      void deleteStopReadonlyTime() { this->stopReadonlyTime_ = nullptr;};
      inline string getStopReadonlyTime() const { DARABONBA_PTR_GET_DEFAULT(stopReadonlyTime_, "") };
      inline Data& setStopReadonlyTime(string stopReadonlyTime) { DARABONBA_PTR_SET_VALUE(stopReadonlyTime_, stopReadonlyTime) };


      // toVersion Field Functions 
      bool hasToVersion() const { return this->toVersion_ != nullptr;};
      void deleteToVersion() { this->toVersion_ = nullptr;};
      inline string getToVersion() const { DARABONBA_PTR_GET_DEFAULT(toVersion_, "") };
      inline Data& setToVersion(string toVersion) { DARABONBA_PTR_SET_VALUE(toVersion_, toVersion) };


    protected:
      shared_ptr<string> fromVersion_ {};
      shared_ptr<string> startReadonlyTime_ {};
      shared_ptr<string> stopReadonlyTime_ {};
      shared_ptr<string> toVersion_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLastUpgradeRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLastUpgradeRecordResponseBody::Data) };
    inline GetLastUpgradeRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLastUpgradeRecordResponseBody::Data) };
    inline GetLastUpgradeRecordResponseBody& setData(const GetLastUpgradeRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLastUpgradeRecordResponseBody& setData(GetLastUpgradeRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLastUpgradeRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetLastUpgradeRecordResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
