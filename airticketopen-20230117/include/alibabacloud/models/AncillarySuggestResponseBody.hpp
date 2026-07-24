// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ANCILLARYSUGGESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class AncillarySuggestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AncillarySuggestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AncillarySuggestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AncillarySuggestResponseBody() = default ;
    AncillarySuggestResponseBody(const AncillarySuggestResponseBody &) = default ;
    AncillarySuggestResponseBody(AncillarySuggestResponseBody &&) = default ;
    AncillarySuggestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AncillarySuggestResponseBody() = default ;
    AncillarySuggestResponseBody& operator=(const AncillarySuggestResponseBody &) = default ;
    AncillarySuggestResponseBody& operator=(AncillarySuggestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(seg_ancillary_map_list, segAncillaryMapList_);
        DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(seg_ancillary_map_list, segAncillaryMapList_);
        DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
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
      class SegAncillaryMapList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegAncillaryMapList& obj) { 
          DARABONBA_PTR_TO_JSON(ancillary, ancillary_);
          DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
        };
        friend void from_json(const Darabonba::Json& j, SegAncillaryMapList& obj) { 
          DARABONBA_PTR_FROM_JSON(ancillary, ancillary_);
          DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
        };
        SegAncillaryMapList() = default ;
        SegAncillaryMapList(const SegAncillaryMapList &) = default ;
        SegAncillaryMapList(SegAncillaryMapList &&) = default ;
        SegAncillaryMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SegAncillaryMapList() = default ;
        SegAncillaryMapList& operator=(const SegAncillaryMapList &) = default ;
        SegAncillaryMapList& operator=(SegAncillaryMapList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ancillary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ancillary& obj) { 
            DARABONBA_PTR_TO_JSON(ancillary_id, ancillaryId_);
            DARABONBA_PTR_TO_JSON(ancillary_type, ancillaryType_);
            DARABONBA_PTR_TO_JSON(baggage_ancillary, baggageAncillary_);
          };
          friend void from_json(const Darabonba::Json& j, Ancillary& obj) { 
            DARABONBA_PTR_FROM_JSON(ancillary_id, ancillaryId_);
            DARABONBA_PTR_FROM_JSON(ancillary_type, ancillaryType_);
            DARABONBA_PTR_FROM_JSON(baggage_ancillary, baggageAncillary_);
          };
          Ancillary() = default ;
          Ancillary(const Ancillary &) = default ;
          Ancillary(Ancillary &&) = default ;
          Ancillary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ancillary() = default ;
          Ancillary& operator=(const Ancillary &) = default ;
          Ancillary& operator=(Ancillary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BaggageAncillary : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BaggageAncillary& obj) { 
              DARABONBA_PTR_TO_JSON(baggage_amount, baggageAmount_);
              DARABONBA_PTR_TO_JSON(baggage_weight, baggageWeight_);
              DARABONBA_PTR_TO_JSON(baggage_weight_unit, baggageWeightUnit_);
              DARABONBA_PTR_TO_JSON(is_all_weight, isAllWeight_);
              DARABONBA_PTR_TO_JSON(price, price_);
            };
            friend void from_json(const Darabonba::Json& j, BaggageAncillary& obj) { 
              DARABONBA_PTR_FROM_JSON(baggage_amount, baggageAmount_);
              DARABONBA_PTR_FROM_JSON(baggage_weight, baggageWeight_);
              DARABONBA_PTR_FROM_JSON(baggage_weight_unit, baggageWeightUnit_);
              DARABONBA_PTR_FROM_JSON(is_all_weight, isAllWeight_);
              DARABONBA_PTR_FROM_JSON(price, price_);
            };
            BaggageAncillary() = default ;
            BaggageAncillary(const BaggageAncillary &) = default ;
            BaggageAncillary(BaggageAncillary &&) = default ;
            BaggageAncillary(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BaggageAncillary() = default ;
            BaggageAncillary& operator=(const BaggageAncillary &) = default ;
            BaggageAncillary& operator=(BaggageAncillary &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->baggageAmount_ == nullptr
        && this->baggageWeight_ == nullptr && this->baggageWeightUnit_ == nullptr && this->isAllWeight_ == nullptr && this->price_ == nullptr; };
            // baggageAmount Field Functions 
            bool hasBaggageAmount() const { return this->baggageAmount_ != nullptr;};
            void deleteBaggageAmount() { this->baggageAmount_ = nullptr;};
            inline int32_t getBaggageAmount() const { DARABONBA_PTR_GET_DEFAULT(baggageAmount_, 0) };
            inline BaggageAncillary& setBaggageAmount(int32_t baggageAmount) { DARABONBA_PTR_SET_VALUE(baggageAmount_, baggageAmount) };


            // baggageWeight Field Functions 
            bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
            void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
            inline int32_t getBaggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0) };
            inline BaggageAncillary& setBaggageWeight(int32_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


            // baggageWeightUnit Field Functions 
            bool hasBaggageWeightUnit() const { return this->baggageWeightUnit_ != nullptr;};
            void deleteBaggageWeightUnit() { this->baggageWeightUnit_ = nullptr;};
            inline string getBaggageWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageWeightUnit_, "") };
            inline BaggageAncillary& setBaggageWeightUnit(string baggageWeightUnit) { DARABONBA_PTR_SET_VALUE(baggageWeightUnit_, baggageWeightUnit) };


            // isAllWeight Field Functions 
            bool hasIsAllWeight() const { return this->isAllWeight_ != nullptr;};
            void deleteIsAllWeight() { this->isAllWeight_ = nullptr;};
            inline bool getIsAllWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllWeight_, false) };
            inline BaggageAncillary& setIsAllWeight(bool isAllWeight) { DARABONBA_PTR_SET_VALUE(isAllWeight_, isAllWeight) };


            // price Field Functions 
            bool hasPrice() const { return this->price_ != nullptr;};
            void deletePrice() { this->price_ = nullptr;};
            inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
            inline BaggageAncillary& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          protected:
            // The number of baggage pieces. Valid values: 3, 2, 1, 0, and -2. A value of -2 indicates weight-based calculation.
            shared_ptr<int32_t> baggageAmount_ {};
            // The baggage weight, ranging from 0 to 50. If isAllWeight is set to true, this value represents the total weight of all pieces.
            shared_ptr<int32_t> baggageWeight_ {};
            // The unit of baggage weight.
            shared_ptr<string> baggageWeightUnit_ {};
            // Indicates whether the weight represents the total weight of all baggage pieces.
            shared_ptr<bool> isAllWeight_ {};
            // The total price.
            shared_ptr<double> price_ {};
          };

          virtual bool empty() const override { return this->ancillaryId_ == nullptr
        && this->ancillaryType_ == nullptr && this->baggageAncillary_ == nullptr; };
          // ancillaryId Field Functions 
          bool hasAncillaryId() const { return this->ancillaryId_ != nullptr;};
          void deleteAncillaryId() { this->ancillaryId_ = nullptr;};
          inline string getAncillaryId() const { DARABONBA_PTR_GET_DEFAULT(ancillaryId_, "") };
          inline Ancillary& setAncillaryId(string ancillaryId) { DARABONBA_PTR_SET_VALUE(ancillaryId_, ancillaryId) };


          // ancillaryType Field Functions 
          bool hasAncillaryType() const { return this->ancillaryType_ != nullptr;};
          void deleteAncillaryType() { this->ancillaryType_ = nullptr;};
          inline int32_t getAncillaryType() const { DARABONBA_PTR_GET_DEFAULT(ancillaryType_, 0) };
          inline Ancillary& setAncillaryType(int32_t ancillaryType) { DARABONBA_PTR_SET_VALUE(ancillaryType_, ancillaryType) };


          // baggageAncillary Field Functions 
          bool hasBaggageAncillary() const { return this->baggageAncillary_ != nullptr;};
          void deleteBaggageAncillary() { this->baggageAncillary_ = nullptr;};
          inline const Ancillary::BaggageAncillary & getBaggageAncillary() const { DARABONBA_PTR_GET_CONST(baggageAncillary_, Ancillary::BaggageAncillary) };
          inline Ancillary::BaggageAncillary getBaggageAncillary() { DARABONBA_PTR_GET(baggageAncillary_, Ancillary::BaggageAncillary) };
          inline Ancillary& setBaggageAncillary(const Ancillary::BaggageAncillary & baggageAncillary) { DARABONBA_PTR_SET_VALUE(baggageAncillary_, baggageAncillary) };
          inline Ancillary& setBaggageAncillary(Ancillary::BaggageAncillary && baggageAncillary) { DARABONBA_PTR_SET_RVALUE(baggageAncillary_, baggageAncillary) };


        protected:
          // The ancillary product ID.
          shared_ptr<string> ancillaryId_ {};
          // The ancillary product type. Currently supported value: 4 (paid baggage).
          shared_ptr<int32_t> ancillaryType_ {};
          // The baggage ancillary details.
          shared_ptr<Ancillary::BaggageAncillary> baggageAncillary_ {};
        };

        virtual bool empty() const override { return this->ancillary_ == nullptr
        && this->segmentIdList_ == nullptr; };
        // ancillary Field Functions 
        bool hasAncillary() const { return this->ancillary_ != nullptr;};
        void deleteAncillary() { this->ancillary_ = nullptr;};
        inline const SegAncillaryMapList::Ancillary & getAncillary() const { DARABONBA_PTR_GET_CONST(ancillary_, SegAncillaryMapList::Ancillary) };
        inline SegAncillaryMapList::Ancillary getAncillary() { DARABONBA_PTR_GET(ancillary_, SegAncillaryMapList::Ancillary) };
        inline SegAncillaryMapList& setAncillary(const SegAncillaryMapList::Ancillary & ancillary) { DARABONBA_PTR_SET_VALUE(ancillary_, ancillary) };
        inline SegAncillaryMapList& setAncillary(SegAncillaryMapList::Ancillary && ancillary) { DARABONBA_PTR_SET_RVALUE(ancillary_, ancillary) };


        // segmentIdList Field Functions 
        bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
        void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
        inline const vector<string> & getSegmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
        inline vector<string> getSegmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
        inline SegAncillaryMapList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
        inline SegAncillaryMapList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


      protected:
        // The ancillary product.
        shared_ptr<SegAncillaryMapList::Ancillary> ancillary_ {};
        // The list of segment IDs. These segments share the same ancillary product.
        shared_ptr<vector<string>> segmentIdList_ {};
      };

      virtual bool empty() const override { return this->segAncillaryMapList_ == nullptr
        && this->solutionId_ == nullptr; };
      // segAncillaryMapList Field Functions 
      bool hasSegAncillaryMapList() const { return this->segAncillaryMapList_ != nullptr;};
      void deleteSegAncillaryMapList() { this->segAncillaryMapList_ = nullptr;};
      inline const vector<Data::SegAncillaryMapList> & getSegAncillaryMapList() const { DARABONBA_PTR_GET_CONST(segAncillaryMapList_, vector<Data::SegAncillaryMapList>) };
      inline vector<Data::SegAncillaryMapList> getSegAncillaryMapList() { DARABONBA_PTR_GET(segAncillaryMapList_, vector<Data::SegAncillaryMapList>) };
      inline Data& setSegAncillaryMapList(const vector<Data::SegAncillaryMapList> & segAncillaryMapList) { DARABONBA_PTR_SET_VALUE(segAncillaryMapList_, segAncillaryMapList) };
      inline Data& setSegAncillaryMapList(vector<Data::SegAncillaryMapList> && segAncillaryMapList) { DARABONBA_PTR_SET_RVALUE(segAncillaryMapList_, segAncillaryMapList) };


      // solutionId Field Functions 
      bool hasSolutionId() const { return this->solutionId_ != nullptr;};
      void deleteSolutionId() { this->solutionId_ = nullptr;};
      inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
      inline Data& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    protected:
      // The mapping between flights and ancillary products.
      shared_ptr<vector<Data::SegAncillaryMapList>> segAncillaryMapList_ {};
      // The solution_id of the flight.
      shared_ptr<string> solutionId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AncillarySuggestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AncillarySuggestResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AncillarySuggestResponseBody::Data) };
    inline AncillarySuggestResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AncillarySuggestResponseBody::Data) };
    inline AncillarySuggestResponseBody& setData(const AncillarySuggestResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AncillarySuggestResponseBody& setData(AncillarySuggestResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AncillarySuggestResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline AncillarySuggestResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline AncillarySuggestResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline AncillarySuggestResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline AncillarySuggestResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AncillarySuggestResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<AncillarySuggestResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
