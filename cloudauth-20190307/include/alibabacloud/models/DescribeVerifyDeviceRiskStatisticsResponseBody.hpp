// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSRESPONSEBODY_HPP_
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
  class DescribeVerifyDeviceRiskStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyDeviceRiskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyDeviceRiskStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeVerifyDeviceRiskStatisticsResponseBody() = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBody(const DescribeVerifyDeviceRiskStatisticsResponseBody &) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBody(DescribeVerifyDeviceRiskStatisticsResponseBody &&) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyDeviceRiskStatisticsResponseBody() = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBody& operator=(const DescribeVerifyDeviceRiskStatisticsResponseBody &) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBody& operator=(DescribeVerifyDeviceRiskStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(FaceAttackRate, faceAttackRate_);
        DARABONBA_PTR_TO_JSON(IdFakeRate, idFakeRate_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(RootRate, rootRate_);
        DARABONBA_PTR_TO_JSON(SimulatorRate, simulatorRate_);
        DARABONBA_PTR_TO_JSON(VirtualVideoRate, virtualVideoRate_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(FaceAttackRate, faceAttackRate_);
        DARABONBA_PTR_FROM_JSON(IdFakeRate, idFakeRate_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(RootRate, rootRate_);
        DARABONBA_PTR_FROM_JSON(SimulatorRate, simulatorRate_);
        DARABONBA_PTR_FROM_JSON(VirtualVideoRate, virtualVideoRate_);
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
          DARABONBA_PTR_TO_JSON(DailyCallCount, dailyCallCount_);
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(DeviceRiskRate, deviceRiskRate_);
          DARABONBA_PTR_TO_JSON(IdentityRiskRate, identityRiskRate_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(DailyCallCount, dailyCallCount_);
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(DeviceRiskRate, deviceRiskRate_);
          DARABONBA_PTR_FROM_JSON(IdentityRiskRate, identityRiskRate_);
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
        virtual bool empty() const override { return this->dailyCallCount_ == nullptr
        && this->date_ == nullptr && this->deviceRiskRate_ == nullptr && this->identityRiskRate_ == nullptr; };
        // dailyCallCount Field Functions 
        bool hasDailyCallCount() const { return this->dailyCallCount_ != nullptr;};
        void deleteDailyCallCount() { this->dailyCallCount_ = nullptr;};
        inline int64_t getDailyCallCount() const { DARABONBA_PTR_GET_DEFAULT(dailyCallCount_, 0L) };
        inline Items& setDailyCallCount(int64_t dailyCallCount) { DARABONBA_PTR_SET_VALUE(dailyCallCount_, dailyCallCount) };


        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline Items& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // deviceRiskRate Field Functions 
        bool hasDeviceRiskRate() const { return this->deviceRiskRate_ != nullptr;};
        void deleteDeviceRiskRate() { this->deviceRiskRate_ = nullptr;};
        inline string getDeviceRiskRate() const { DARABONBA_PTR_GET_DEFAULT(deviceRiskRate_, "") };
        inline Items& setDeviceRiskRate(string deviceRiskRate) { DARABONBA_PTR_SET_VALUE(deviceRiskRate_, deviceRiskRate) };


        // identityRiskRate Field Functions 
        bool hasIdentityRiskRate() const { return this->identityRiskRate_ != nullptr;};
        void deleteIdentityRiskRate() { this->identityRiskRate_ = nullptr;};
        inline string getIdentityRiskRate() const { DARABONBA_PTR_GET_DEFAULT(identityRiskRate_, "") };
        inline Items& setIdentityRiskRate(string identityRiskRate) { DARABONBA_PTR_SET_VALUE(identityRiskRate_, identityRiskRate) };


      protected:
        // Daily call count.
        shared_ptr<int64_t> dailyCallCount_ {};
        // Date.
        shared_ptr<string> date_ {};
        // Abnormal device risk ratio.
        shared_ptr<string> deviceRiskRate_ {};
        // Abnormal identity risk ratio.
        shared_ptr<string> identityRiskRate_ {};
      };

      virtual bool empty() const override { return this->faceAttackRate_ == nullptr
        && this->idFakeRate_ == nullptr && this->items_ == nullptr && this->riskCount_ == nullptr && this->rootRate_ == nullptr && this->simulatorRate_ == nullptr
        && this->virtualVideoRate_ == nullptr; };
      // faceAttackRate Field Functions 
      bool hasFaceAttackRate() const { return this->faceAttackRate_ != nullptr;};
      void deleteFaceAttackRate() { this->faceAttackRate_ = nullptr;};
      inline string getFaceAttackRate() const { DARABONBA_PTR_GET_DEFAULT(faceAttackRate_, "") };
      inline ResultObject& setFaceAttackRate(string faceAttackRate) { DARABONBA_PTR_SET_VALUE(faceAttackRate_, faceAttackRate) };


      // idFakeRate Field Functions 
      bool hasIdFakeRate() const { return this->idFakeRate_ != nullptr;};
      void deleteIdFakeRate() { this->idFakeRate_ = nullptr;};
      inline string getIdFakeRate() const { DARABONBA_PTR_GET_DEFAULT(idFakeRate_, "") };
      inline ResultObject& setIdFakeRate(string idFakeRate) { DARABONBA_PTR_SET_VALUE(idFakeRate_, idFakeRate) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ResultObject::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ResultObject::Items>) };
      inline vector<ResultObject::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ResultObject::Items>) };
      inline ResultObject& setItems(const vector<ResultObject::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ResultObject& setItems(vector<ResultObject::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline ResultObject& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // rootRate Field Functions 
      bool hasRootRate() const { return this->rootRate_ != nullptr;};
      void deleteRootRate() { this->rootRate_ = nullptr;};
      inline string getRootRate() const { DARABONBA_PTR_GET_DEFAULT(rootRate_, "") };
      inline ResultObject& setRootRate(string rootRate) { DARABONBA_PTR_SET_VALUE(rootRate_, rootRate) };


      // simulatorRate Field Functions 
      bool hasSimulatorRate() const { return this->simulatorRate_ != nullptr;};
      void deleteSimulatorRate() { this->simulatorRate_ = nullptr;};
      inline string getSimulatorRate() const { DARABONBA_PTR_GET_DEFAULT(simulatorRate_, "") };
      inline ResultObject& setSimulatorRate(string simulatorRate) { DARABONBA_PTR_SET_VALUE(simulatorRate_, simulatorRate) };


      // virtualVideoRate Field Functions 
      bool hasVirtualVideoRate() const { return this->virtualVideoRate_ != nullptr;};
      void deleteVirtualVideoRate() { this->virtualVideoRate_ = nullptr;};
      inline string getVirtualVideoRate() const { DARABONBA_PTR_GET_DEFAULT(virtualVideoRate_, "") };
      inline ResultObject& setVirtualVideoRate(string virtualVideoRate) { DARABONBA_PTR_SET_VALUE(virtualVideoRate_, virtualVideoRate) };


    protected:
      // Suspected fake face percentage: total number of suspected fake faces / total number of risks.
      shared_ptr<string> faceAttackRate_ {};
      // Total number of suspected fake identities.
      shared_ptr<string> idFakeRate_ {};
      // Data items in the response.
      shared_ptr<vector<ResultObject::Items>> items_ {};
      // Number of risks.
      shared_ptr<int64_t> riskCount_ {};
      // Root percentage: total number of root / total number of risks.
      shared_ptr<string> rootRate_ {};
      // Simulator percentage: total number of simulators / total number of risks.
      shared_ptr<string> simulatorRate_ {};
      // Virtual video percentage: total number of virtual videos / total number of risks.
      shared_ptr<string> virtualVideoRate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVerifyDeviceRiskStatisticsResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVerifyDeviceRiskStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyDeviceRiskStatisticsResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVerifyDeviceRiskStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyDeviceRiskStatisticsResponseBody& setResultObject(const DescribeVerifyDeviceRiskStatisticsResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVerifyDeviceRiskStatisticsResponseBody& setResultObject(DescribeVerifyDeviceRiskStatisticsResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Authentication result.
    shared_ptr<DescribeVerifyDeviceRiskStatisticsResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
