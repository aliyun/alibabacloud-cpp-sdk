// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNewProjectEipMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNewProjectEipMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipMonitorDatas, eipMonitorDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNewProjectEipMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipMonitorDatas, eipMonitorDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNewProjectEipMonitorDataResponseBody() = default ;
    DescribeNewProjectEipMonitorDataResponseBody(const DescribeNewProjectEipMonitorDataResponseBody &) = default ;
    DescribeNewProjectEipMonitorDataResponseBody(DescribeNewProjectEipMonitorDataResponseBody &&) = default ;
    DescribeNewProjectEipMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNewProjectEipMonitorDataResponseBody() = default ;
    DescribeNewProjectEipMonitorDataResponseBody& operator=(const DescribeNewProjectEipMonitorDataResponseBody &) = default ;
    DescribeNewProjectEipMonitorDataResponseBody& operator=(DescribeNewProjectEipMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EipMonitorDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipMonitorDatas& obj) { 
        DARABONBA_PTR_TO_JSON(EipMonitorData, eipMonitorData_);
      };
      friend void from_json(const Darabonba::Json& j, EipMonitorDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(EipMonitorData, eipMonitorData_);
      };
      EipMonitorDatas() = default ;
      EipMonitorDatas(const EipMonitorDatas &) = default ;
      EipMonitorDatas(EipMonitorDatas &&) = default ;
      EipMonitorDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EipMonitorDatas() = default ;
      EipMonitorDatas& operator=(const EipMonitorDatas &) = default ;
      EipMonitorDatas& operator=(EipMonitorDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipMonitorData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipMonitorData& obj) { 
          DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
          DARABONBA_PTR_TO_JSON(EipFlow, eipFlow_);
          DARABONBA_PTR_TO_JSON(EipPackets, eipPackets_);
          DARABONBA_PTR_TO_JSON(EipRX, eipRX_);
          DARABONBA_PTR_TO_JSON(EipTX, eipTX_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, EipMonitorData& obj) { 
          DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
          DARABONBA_PTR_FROM_JSON(EipFlow, eipFlow_);
          DARABONBA_PTR_FROM_JSON(EipPackets, eipPackets_);
          DARABONBA_PTR_FROM_JSON(EipRX, eipRX_);
          DARABONBA_PTR_FROM_JSON(EipTX, eipTX_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        EipMonitorData() = default ;
        EipMonitorData(const EipMonitorData &) = default ;
        EipMonitorData(EipMonitorData &&) = default ;
        EipMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipMonitorData() = default ;
        EipMonitorData& operator=(const EipMonitorData &) = default ;
        EipMonitorData& operator=(EipMonitorData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eipBandwidth_ == nullptr
        && this->eipFlow_ == nullptr && this->eipPackets_ == nullptr && this->eipRX_ == nullptr && this->eipTX_ == nullptr && this->timeStamp_ == nullptr; };
        // eipBandwidth Field Functions 
        bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
        void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
        inline int32_t getEipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
        inline EipMonitorData& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


        // eipFlow Field Functions 
        bool hasEipFlow() const { return this->eipFlow_ != nullptr;};
        void deleteEipFlow() { this->eipFlow_ = nullptr;};
        inline int32_t getEipFlow() const { DARABONBA_PTR_GET_DEFAULT(eipFlow_, 0) };
        inline EipMonitorData& setEipFlow(int32_t eipFlow) { DARABONBA_PTR_SET_VALUE(eipFlow_, eipFlow) };


        // eipPackets Field Functions 
        bool hasEipPackets() const { return this->eipPackets_ != nullptr;};
        void deleteEipPackets() { this->eipPackets_ = nullptr;};
        inline int32_t getEipPackets() const { DARABONBA_PTR_GET_DEFAULT(eipPackets_, 0) };
        inline EipMonitorData& setEipPackets(int32_t eipPackets) { DARABONBA_PTR_SET_VALUE(eipPackets_, eipPackets) };


        // eipRX Field Functions 
        bool hasEipRX() const { return this->eipRX_ != nullptr;};
        void deleteEipRX() { this->eipRX_ = nullptr;};
        inline int32_t getEipRX() const { DARABONBA_PTR_GET_DEFAULT(eipRX_, 0) };
        inline EipMonitorData& setEipRX(int32_t eipRX) { DARABONBA_PTR_SET_VALUE(eipRX_, eipRX) };


        // eipTX Field Functions 
        bool hasEipTX() const { return this->eipTX_ != nullptr;};
        void deleteEipTX() { this->eipTX_ = nullptr;};
        inline int32_t getEipTX() const { DARABONBA_PTR_GET_DEFAULT(eipTX_, 0) };
        inline EipMonitorData& setEipTX(int32_t eipTX) { DARABONBA_PTR_SET_VALUE(eipTX_, eipTX) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline EipMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<int32_t> eipBandwidth_ {};
        shared_ptr<int32_t> eipFlow_ {};
        shared_ptr<int32_t> eipPackets_ {};
        shared_ptr<int32_t> eipRX_ {};
        shared_ptr<int32_t> eipTX_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->eipMonitorData_ == nullptr; };
      // eipMonitorData Field Functions 
      bool hasEipMonitorData() const { return this->eipMonitorData_ != nullptr;};
      void deleteEipMonitorData() { this->eipMonitorData_ = nullptr;};
      inline const vector<EipMonitorDatas::EipMonitorData> & getEipMonitorData() const { DARABONBA_PTR_GET_CONST(eipMonitorData_, vector<EipMonitorDatas::EipMonitorData>) };
      inline vector<EipMonitorDatas::EipMonitorData> getEipMonitorData() { DARABONBA_PTR_GET(eipMonitorData_, vector<EipMonitorDatas::EipMonitorData>) };
      inline EipMonitorDatas& setEipMonitorData(const vector<EipMonitorDatas::EipMonitorData> & eipMonitorData) { DARABONBA_PTR_SET_VALUE(eipMonitorData_, eipMonitorData) };
      inline EipMonitorDatas& setEipMonitorData(vector<EipMonitorDatas::EipMonitorData> && eipMonitorData) { DARABONBA_PTR_SET_RVALUE(eipMonitorData_, eipMonitorData) };


    protected:
      shared_ptr<vector<EipMonitorDatas::EipMonitorData>> eipMonitorData_ {};
    };

    virtual bool empty() const override { return this->eipMonitorDatas_ == nullptr
        && this->requestId_ == nullptr; };
    // eipMonitorDatas Field Functions 
    bool hasEipMonitorDatas() const { return this->eipMonitorDatas_ != nullptr;};
    void deleteEipMonitorDatas() { this->eipMonitorDatas_ = nullptr;};
    inline const DescribeNewProjectEipMonitorDataResponseBody::EipMonitorDatas & getEipMonitorDatas() const { DARABONBA_PTR_GET_CONST(eipMonitorDatas_, DescribeNewProjectEipMonitorDataResponseBody::EipMonitorDatas) };
    inline DescribeNewProjectEipMonitorDataResponseBody::EipMonitorDatas getEipMonitorDatas() { DARABONBA_PTR_GET(eipMonitorDatas_, DescribeNewProjectEipMonitorDataResponseBody::EipMonitorDatas) };
    inline DescribeNewProjectEipMonitorDataResponseBody& setEipMonitorDatas(const DescribeNewProjectEipMonitorDataResponseBody::EipMonitorDatas & eipMonitorDatas) { DARABONBA_PTR_SET_VALUE(eipMonitorDatas_, eipMonitorDatas) };
    inline DescribeNewProjectEipMonitorDataResponseBody& setEipMonitorDatas(DescribeNewProjectEipMonitorDataResponseBody::EipMonitorDatas && eipMonitorDatas) { DARABONBA_PTR_SET_RVALUE(eipMonitorDatas_, eipMonitorDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNewProjectEipMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeNewProjectEipMonitorDataResponseBody::EipMonitorDatas> eipMonitorDatas_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
