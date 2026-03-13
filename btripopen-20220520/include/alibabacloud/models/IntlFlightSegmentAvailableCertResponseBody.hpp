// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightSegmentAvailableCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightSegmentAvailableCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result_code, resultCode_);
      DARABONBA_PTR_TO_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightSegmentAvailableCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result_code, resultCode_);
      DARABONBA_PTR_FROM_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightSegmentAvailableCertResponseBody() = default ;
    IntlFlightSegmentAvailableCertResponseBody(const IntlFlightSegmentAvailableCertResponseBody &) = default ;
    IntlFlightSegmentAvailableCertResponseBody(IntlFlightSegmentAvailableCertResponseBody &&) = default ;
    IntlFlightSegmentAvailableCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightSegmentAvailableCertResponseBody() = default ;
    IntlFlightSegmentAvailableCertResponseBody& operator=(const IntlFlightSegmentAvailableCertResponseBody &) = default ;
    IntlFlightSegmentAvailableCertResponseBody& operator=(IntlFlightSegmentAvailableCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(segment_available_cert_list, segmentAvailableCertList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(segment_available_cert_list, segmentAvailableCertList_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SegmentAvailableCertList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegmentAvailableCertList& obj) { 
          DARABONBA_PTR_TO_JSON(cert_types, certTypes_);
          DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
        };
        friend void from_json(const Darabonba::Json& j, SegmentAvailableCertList& obj) { 
          DARABONBA_PTR_FROM_JSON(cert_types, certTypes_);
          DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
        };
        SegmentAvailableCertList() = default ;
        SegmentAvailableCertList(const SegmentAvailableCertList &) = default ;
        SegmentAvailableCertList(SegmentAvailableCertList &&) = default ;
        SegmentAvailableCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SegmentAvailableCertList() = default ;
        SegmentAvailableCertList& operator=(const SegmentAvailableCertList &) = default ;
        SegmentAvailableCertList& operator=(SegmentAvailableCertList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentPosition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentPosition& obj) { 
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentPosition& obj) { 
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          };
          SegmentPosition() = default ;
          SegmentPosition(const SegmentPosition &) = default ;
          SegmentPosition(SegmentPosition &&) = default ;
          SegmentPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentPosition() = default ;
          SegmentPosition& operator=(const SegmentPosition &) = default ;
          SegmentPosition& operator=(SegmentPosition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->journeyIndex_ == nullptr
        && this->segmentIndex_ == nullptr; };
          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline SegmentPosition& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline SegmentPosition& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        protected:
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
        };

        virtual bool empty() const override { return this->certTypes_ == nullptr
        && this->segmentPosition_ == nullptr; };
        // certTypes Field Functions 
        bool hasCertTypes() const { return this->certTypes_ != nullptr;};
        void deleteCertTypes() { this->certTypes_ = nullptr;};
        inline const vector<int32_t> & getCertTypes() const { DARABONBA_PTR_GET_CONST(certTypes_, vector<int32_t>) };
        inline vector<int32_t> getCertTypes() { DARABONBA_PTR_GET(certTypes_, vector<int32_t>) };
        inline SegmentAvailableCertList& setCertTypes(const vector<int32_t> & certTypes) { DARABONBA_PTR_SET_VALUE(certTypes_, certTypes) };
        inline SegmentAvailableCertList& setCertTypes(vector<int32_t> && certTypes) { DARABONBA_PTR_SET_RVALUE(certTypes_, certTypes) };


        // segmentPosition Field Functions 
        bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
        void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
        inline const SegmentAvailableCertList::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, SegmentAvailableCertList::SegmentPosition) };
        inline SegmentAvailableCertList::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, SegmentAvailableCertList::SegmentPosition) };
        inline SegmentAvailableCertList& setSegmentPosition(const SegmentAvailableCertList::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
        inline SegmentAvailableCertList& setSegmentPosition(SegmentAvailableCertList::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


      protected:
        shared_ptr<vector<int32_t>> certTypes_ {};
        shared_ptr<SegmentAvailableCertList::SegmentPosition> segmentPosition_ {};
      };

      virtual bool empty() const override { return this->segmentAvailableCertList_ == nullptr; };
      // segmentAvailableCertList Field Functions 
      bool hasSegmentAvailableCertList() const { return this->segmentAvailableCertList_ != nullptr;};
      void deleteSegmentAvailableCertList() { this->segmentAvailableCertList_ = nullptr;};
      inline const vector<Module::SegmentAvailableCertList> & getSegmentAvailableCertList() const { DARABONBA_PTR_GET_CONST(segmentAvailableCertList_, vector<Module::SegmentAvailableCertList>) };
      inline vector<Module::SegmentAvailableCertList> getSegmentAvailableCertList() { DARABONBA_PTR_GET(segmentAvailableCertList_, vector<Module::SegmentAvailableCertList>) };
      inline Module& setSegmentAvailableCertList(const vector<Module::SegmentAvailableCertList> & segmentAvailableCertList) { DARABONBA_PTR_SET_VALUE(segmentAvailableCertList_, segmentAvailableCertList) };
      inline Module& setSegmentAvailableCertList(vector<Module::SegmentAvailableCertList> && segmentAvailableCertList) { DARABONBA_PTR_SET_RVALUE(segmentAvailableCertList_, segmentAvailableCertList) };


    protected:
      shared_ptr<vector<Module::SegmentAvailableCertList>> segmentAvailableCertList_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightSegmentAvailableCertResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightSegmentAvailableCertResponseBody::Module) };
    inline IntlFlightSegmentAvailableCertResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightSegmentAvailableCertResponseBody::Module) };
    inline IntlFlightSegmentAvailableCertResponseBody& setModule(const IntlFlightSegmentAvailableCertResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightSegmentAvailableCertResponseBody& setModule(IntlFlightSegmentAvailableCertResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightSegmentAvailableCertResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<IntlFlightSegmentAvailableCertResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
