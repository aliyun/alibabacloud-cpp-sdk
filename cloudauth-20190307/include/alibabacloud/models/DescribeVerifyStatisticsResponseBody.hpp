// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeVerifyStatisticsResponseBody() = default ;
    DescribeVerifyStatisticsResponseBody(const DescribeVerifyStatisticsResponseBody &) = default ;
    DescribeVerifyStatisticsResponseBody(DescribeVerifyStatisticsResponseBody &&) = default ;
    DescribeVerifyStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyStatisticsResponseBody() = default ;
    DescribeVerifyStatisticsResponseBody& operator=(const DescribeVerifyStatisticsResponseBody &) = default ;
    DescribeVerifyStatisticsResponseBody& operator=(DescribeVerifyStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(InitDevice, initDevice_);
        DARABONBA_PTR_TO_JSON(InitDeviceId, initDeviceId_);
        DARABONBA_PTR_TO_JSON(InitDeviceIdSuccess, initDeviceIdSuccess_);
        DARABONBA_PTR_TO_JSON(InitDeviceSuccess, initDeviceSuccess_);
        DARABONBA_PTR_TO_JSON(InitService, initService_);
        DARABONBA_PTR_TO_JSON(InitServiceId, initServiceId_);
        DARABONBA_PTR_TO_JSON(InitServiceIdSuccess, initServiceIdSuccess_);
        DARABONBA_PTR_TO_JSON(InitServiceSuccess, initServiceSuccess_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(VerifyDevice, verifyDevice_);
        DARABONBA_PTR_TO_JSON(VerifyDeviceId, verifyDeviceId_);
        DARABONBA_PTR_TO_JSON(VerifyDeviceIdSuccess, verifyDeviceIdSuccess_);
        DARABONBA_PTR_TO_JSON(VerifyDeviceIdSuccessPassed, verifyDeviceIdSuccessPassed_);
        DARABONBA_PTR_TO_JSON(VerifyDeviceSuccess, verifyDeviceSuccess_);
        DARABONBA_PTR_TO_JSON(VerifyDeviceSuccessPassed, verifyDeviceSuccessPassed_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(InitDevice, initDevice_);
        DARABONBA_PTR_FROM_JSON(InitDeviceId, initDeviceId_);
        DARABONBA_PTR_FROM_JSON(InitDeviceIdSuccess, initDeviceIdSuccess_);
        DARABONBA_PTR_FROM_JSON(InitDeviceSuccess, initDeviceSuccess_);
        DARABONBA_PTR_FROM_JSON(InitService, initService_);
        DARABONBA_PTR_FROM_JSON(InitServiceId, initServiceId_);
        DARABONBA_PTR_FROM_JSON(InitServiceIdSuccess, initServiceIdSuccess_);
        DARABONBA_PTR_FROM_JSON(InitServiceSuccess, initServiceSuccess_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(VerifyDevice, verifyDevice_);
        DARABONBA_PTR_FROM_JSON(VerifyDeviceId, verifyDeviceId_);
        DARABONBA_PTR_FROM_JSON(VerifyDeviceIdSuccess, verifyDeviceIdSuccess_);
        DARABONBA_PTR_FROM_JSON(VerifyDeviceIdSuccessPassed, verifyDeviceIdSuccessPassed_);
        DARABONBA_PTR_FROM_JSON(VerifyDeviceSuccess, verifyDeviceSuccess_);
        DARABONBA_PTR_FROM_JSON(VerifyDeviceSuccessPassed, verifyDeviceSuccessPassed_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(InitDevicePassRate, initDevicePassRate_);
          DARABONBA_PTR_TO_JSON(InitService, initService_);
          DARABONBA_PTR_TO_JSON(InitServiceConversionRate, initServiceConversionRate_);
          DARABONBA_PTR_TO_JSON(InitServicePassRate, initServicePassRate_);
          DARABONBA_PTR_TO_JSON(PassRate, passRate_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(InitDevicePassRate, initDevicePassRate_);
          DARABONBA_PTR_FROM_JSON(InitService, initService_);
          DARABONBA_PTR_FROM_JSON(InitServiceConversionRate, initServiceConversionRate_);
          DARABONBA_PTR_FROM_JSON(InitServicePassRate, initServicePassRate_);
          DARABONBA_PTR_FROM_JSON(PassRate, passRate_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->initDevicePassRate_ == nullptr && this->initService_ == nullptr && this->initServiceConversionRate_ == nullptr && this->initServicePassRate_ == nullptr && this->passRate_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline Items& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // initDevicePassRate Field Functions 
        bool hasInitDevicePassRate() const { return this->initDevicePassRate_ != nullptr;};
        void deleteInitDevicePassRate() { this->initDevicePassRate_ = nullptr;};
        inline string getInitDevicePassRate() const { DARABONBA_PTR_GET_DEFAULT(initDevicePassRate_, "") };
        inline Items& setInitDevicePassRate(string initDevicePassRate) { DARABONBA_PTR_SET_VALUE(initDevicePassRate_, initDevicePassRate) };


        // initService Field Functions 
        bool hasInitService() const { return this->initService_ != nullptr;};
        void deleteInitService() { this->initService_ = nullptr;};
        inline int64_t getInitService() const { DARABONBA_PTR_GET_DEFAULT(initService_, 0L) };
        inline Items& setInitService(int64_t initService) { DARABONBA_PTR_SET_VALUE(initService_, initService) };


        // initServiceConversionRate Field Functions 
        bool hasInitServiceConversionRate() const { return this->initServiceConversionRate_ != nullptr;};
        void deleteInitServiceConversionRate() { this->initServiceConversionRate_ = nullptr;};
        inline string getInitServiceConversionRate() const { DARABONBA_PTR_GET_DEFAULT(initServiceConversionRate_, "") };
        inline Items& setInitServiceConversionRate(string initServiceConversionRate) { DARABONBA_PTR_SET_VALUE(initServiceConversionRate_, initServiceConversionRate) };


        // initServicePassRate Field Functions 
        bool hasInitServicePassRate() const { return this->initServicePassRate_ != nullptr;};
        void deleteInitServicePassRate() { this->initServicePassRate_ = nullptr;};
        inline string getInitServicePassRate() const { DARABONBA_PTR_GET_DEFAULT(initServicePassRate_, "") };
        inline Items& setInitServicePassRate(string initServicePassRate) { DARABONBA_PTR_SET_VALUE(initServicePassRate_, initServicePassRate) };


        // passRate Field Functions 
        bool hasPassRate() const { return this->passRate_ != nullptr;};
        void deletePassRate() { this->passRate_ = nullptr;};
        inline string getPassRate() const { DARABONBA_PTR_GET_DEFAULT(passRate_, "") };
        inline Items& setPassRate(string passRate) { DARABONBA_PTR_SET_VALUE(passRate_, passRate) };


      protected:
        // Date.
        shared_ptr<string> date_ {};
        // Client initialization pass rate.
        shared_ptr<string> initDevicePassRate_ {};
        // Number of server initializations.
        shared_ptr<int64_t> initService_ {};
        // Server initialization conversion rate.
        shared_ptr<string> initServiceConversionRate_ {};
        // Server initialization pass rate.
        shared_ptr<string> initServicePassRate_ {};
        // Pass rate.
        shared_ptr<string> passRate_ {};
      };

      virtual bool empty() const override { return this->initDevice_ == nullptr
        && this->initDeviceId_ == nullptr && this->initDeviceIdSuccess_ == nullptr && this->initDeviceSuccess_ == nullptr && this->initService_ == nullptr && this->initServiceId_ == nullptr
        && this->initServiceIdSuccess_ == nullptr && this->initServiceSuccess_ == nullptr && this->items_ == nullptr && this->verifyDevice_ == nullptr && this->verifyDeviceId_ == nullptr
        && this->verifyDeviceIdSuccess_ == nullptr && this->verifyDeviceIdSuccessPassed_ == nullptr && this->verifyDeviceSuccess_ == nullptr && this->verifyDeviceSuccessPassed_ == nullptr; };
      // initDevice Field Functions 
      bool hasInitDevice() const { return this->initDevice_ != nullptr;};
      void deleteInitDevice() { this->initDevice_ = nullptr;};
      inline int64_t getInitDevice() const { DARABONBA_PTR_GET_DEFAULT(initDevice_, 0L) };
      inline ResultObject& setInitDevice(int64_t initDevice) { DARABONBA_PTR_SET_VALUE(initDevice_, initDevice) };


      // initDeviceId Field Functions 
      bool hasInitDeviceId() const { return this->initDeviceId_ != nullptr;};
      void deleteInitDeviceId() { this->initDeviceId_ = nullptr;};
      inline int64_t getInitDeviceId() const { DARABONBA_PTR_GET_DEFAULT(initDeviceId_, 0L) };
      inline ResultObject& setInitDeviceId(int64_t initDeviceId) { DARABONBA_PTR_SET_VALUE(initDeviceId_, initDeviceId) };


      // initDeviceIdSuccess Field Functions 
      bool hasInitDeviceIdSuccess() const { return this->initDeviceIdSuccess_ != nullptr;};
      void deleteInitDeviceIdSuccess() { this->initDeviceIdSuccess_ = nullptr;};
      inline int64_t getInitDeviceIdSuccess() const { DARABONBA_PTR_GET_DEFAULT(initDeviceIdSuccess_, 0L) };
      inline ResultObject& setInitDeviceIdSuccess(int64_t initDeviceIdSuccess) { DARABONBA_PTR_SET_VALUE(initDeviceIdSuccess_, initDeviceIdSuccess) };


      // initDeviceSuccess Field Functions 
      bool hasInitDeviceSuccess() const { return this->initDeviceSuccess_ != nullptr;};
      void deleteInitDeviceSuccess() { this->initDeviceSuccess_ = nullptr;};
      inline int64_t getInitDeviceSuccess() const { DARABONBA_PTR_GET_DEFAULT(initDeviceSuccess_, 0L) };
      inline ResultObject& setInitDeviceSuccess(int64_t initDeviceSuccess) { DARABONBA_PTR_SET_VALUE(initDeviceSuccess_, initDeviceSuccess) };


      // initService Field Functions 
      bool hasInitService() const { return this->initService_ != nullptr;};
      void deleteInitService() { this->initService_ = nullptr;};
      inline int64_t getInitService() const { DARABONBA_PTR_GET_DEFAULT(initService_, 0L) };
      inline ResultObject& setInitService(int64_t initService) { DARABONBA_PTR_SET_VALUE(initService_, initService) };


      // initServiceId Field Functions 
      bool hasInitServiceId() const { return this->initServiceId_ != nullptr;};
      void deleteInitServiceId() { this->initServiceId_ = nullptr;};
      inline int64_t getInitServiceId() const { DARABONBA_PTR_GET_DEFAULT(initServiceId_, 0L) };
      inline ResultObject& setInitServiceId(int64_t initServiceId) { DARABONBA_PTR_SET_VALUE(initServiceId_, initServiceId) };


      // initServiceIdSuccess Field Functions 
      bool hasInitServiceIdSuccess() const { return this->initServiceIdSuccess_ != nullptr;};
      void deleteInitServiceIdSuccess() { this->initServiceIdSuccess_ = nullptr;};
      inline int64_t getInitServiceIdSuccess() const { DARABONBA_PTR_GET_DEFAULT(initServiceIdSuccess_, 0L) };
      inline ResultObject& setInitServiceIdSuccess(int64_t initServiceIdSuccess) { DARABONBA_PTR_SET_VALUE(initServiceIdSuccess_, initServiceIdSuccess) };


      // initServiceSuccess Field Functions 
      bool hasInitServiceSuccess() const { return this->initServiceSuccess_ != nullptr;};
      void deleteInitServiceSuccess() { this->initServiceSuccess_ = nullptr;};
      inline int64_t getInitServiceSuccess() const { DARABONBA_PTR_GET_DEFAULT(initServiceSuccess_, 0L) };
      inline ResultObject& setInitServiceSuccess(int64_t initServiceSuccess) { DARABONBA_PTR_SET_VALUE(initServiceSuccess_, initServiceSuccess) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ResultObject::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ResultObject::Items>) };
      inline vector<ResultObject::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ResultObject::Items>) };
      inline ResultObject& setItems(const vector<ResultObject::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ResultObject& setItems(vector<ResultObject::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // verifyDevice Field Functions 
      bool hasVerifyDevice() const { return this->verifyDevice_ != nullptr;};
      void deleteVerifyDevice() { this->verifyDevice_ = nullptr;};
      inline int64_t getVerifyDevice() const { DARABONBA_PTR_GET_DEFAULT(verifyDevice_, 0L) };
      inline ResultObject& setVerifyDevice(int64_t verifyDevice) { DARABONBA_PTR_SET_VALUE(verifyDevice_, verifyDevice) };


      // verifyDeviceId Field Functions 
      bool hasVerifyDeviceId() const { return this->verifyDeviceId_ != nullptr;};
      void deleteVerifyDeviceId() { this->verifyDeviceId_ = nullptr;};
      inline int64_t getVerifyDeviceId() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceId_, 0L) };
      inline ResultObject& setVerifyDeviceId(int64_t verifyDeviceId) { DARABONBA_PTR_SET_VALUE(verifyDeviceId_, verifyDeviceId) };


      // verifyDeviceIdSuccess Field Functions 
      bool hasVerifyDeviceIdSuccess() const { return this->verifyDeviceIdSuccess_ != nullptr;};
      void deleteVerifyDeviceIdSuccess() { this->verifyDeviceIdSuccess_ = nullptr;};
      inline int64_t getVerifyDeviceIdSuccess() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceIdSuccess_, 0L) };
      inline ResultObject& setVerifyDeviceIdSuccess(int64_t verifyDeviceIdSuccess) { DARABONBA_PTR_SET_VALUE(verifyDeviceIdSuccess_, verifyDeviceIdSuccess) };


      // verifyDeviceIdSuccessPassed Field Functions 
      bool hasVerifyDeviceIdSuccessPassed() const { return this->verifyDeviceIdSuccessPassed_ != nullptr;};
      void deleteVerifyDeviceIdSuccessPassed() { this->verifyDeviceIdSuccessPassed_ = nullptr;};
      inline int64_t getVerifyDeviceIdSuccessPassed() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceIdSuccessPassed_, 0L) };
      inline ResultObject& setVerifyDeviceIdSuccessPassed(int64_t verifyDeviceIdSuccessPassed) { DARABONBA_PTR_SET_VALUE(verifyDeviceIdSuccessPassed_, verifyDeviceIdSuccessPassed) };


      // verifyDeviceSuccess Field Functions 
      bool hasVerifyDeviceSuccess() const { return this->verifyDeviceSuccess_ != nullptr;};
      void deleteVerifyDeviceSuccess() { this->verifyDeviceSuccess_ = nullptr;};
      inline int64_t getVerifyDeviceSuccess() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceSuccess_, 0L) };
      inline ResultObject& setVerifyDeviceSuccess(int64_t verifyDeviceSuccess) { DARABONBA_PTR_SET_VALUE(verifyDeviceSuccess_, verifyDeviceSuccess) };


      // verifyDeviceSuccessPassed Field Functions 
      bool hasVerifyDeviceSuccessPassed() const { return this->verifyDeviceSuccessPassed_ != nullptr;};
      void deleteVerifyDeviceSuccessPassed() { this->verifyDeviceSuccessPassed_ = nullptr;};
      inline int64_t getVerifyDeviceSuccessPassed() const { DARABONBA_PTR_GET_DEFAULT(verifyDeviceSuccessPassed_, 0L) };
      inline ResultObject& setVerifyDeviceSuccessPassed(int64_t verifyDeviceSuccessPassed) { DARABONBA_PTR_SET_VALUE(verifyDeviceSuccessPassed_, verifyDeviceSuccessPassed) };


    protected:
      // Number of client initializations.
      shared_ptr<int64_t> initDevice_ {};
      // Number of identity deduplication client initializations.
      shared_ptr<int64_t> initDeviceId_ {};
      // Number of successful identity deduplication client initializations.
      shared_ptr<int64_t> initDeviceIdSuccess_ {};
      // Number of client initialization calls.
      shared_ptr<int64_t> initDeviceSuccess_ {};
      // Number of service-side initializations.
      shared_ptr<int64_t> initService_ {};
      // Total number of identity deduplication server initialization requests.
      shared_ptr<int64_t> initServiceId_ {};
      // Number of successful identity deduplication server initializations.
      shared_ptr<int64_t> initServiceIdSuccess_ {};
      // Number of successful service-side initialization authentications.
      shared_ptr<int64_t> initServiceSuccess_ {};
      // Daily pass/conversion rate (PV).
      shared_ptr<vector<ResultObject::Items>> items_ {};
      // Number of client verifications.
      shared_ptr<int64_t> verifyDevice_ {};
      // Number of identity deduplication client authentications.
      shared_ptr<int64_t> verifyDeviceId_ {};
      // Number of successful identity deduplication client verifications.
      shared_ptr<int64_t> verifyDeviceIdSuccess_ {};
      // Number of successful identity deduplication client authentications.
      shared_ptr<int64_t> verifyDeviceIdSuccessPassed_ {};
      // Number of successful client authentications.
      shared_ptr<int64_t> verifyDeviceSuccess_ {};
      // Number of successful client authentications.
      shared_ptr<int64_t> verifyDeviceSuccessPassed_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVerifyStatisticsResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVerifyStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyStatisticsResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVerifyStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyStatisticsResponseBody& setResultObject(const DescribeVerifyStatisticsResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVerifyStatisticsResponseBody& setResultObject(DescribeVerifyStatisticsResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Statistical results
    shared_ptr<DescribeVerifyStatisticsResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
