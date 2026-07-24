// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYRESPONSEBODY_HPP_
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
  class ChangeApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ChangeApplyResponseBody() = default ;
    ChangeApplyResponseBody(const ChangeApplyResponseBody &) = default ;
    ChangeApplyResponseBody(ChangeApplyResponseBody &&) = default ;
    ChangeApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyResponseBody() = default ;
    ChangeApplyResponseBody& operator=(const ChangeApplyResponseBody &) = default ;
    ChangeApplyResponseBody& operator=(ChangeApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(change_orders, changeOrders_);
        DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(change_orders, changeOrders_);
        DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
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
      class ChangeOrders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeOrders& obj) { 
          DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
          DARABONBA_PTR_TO_JSON(change_order_status, changeOrderStatus_);
          DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
          DARABONBA_PTR_TO_JSON(passengers, passengers_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeOrders& obj) { 
          DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
          DARABONBA_PTR_FROM_JSON(change_order_status, changeOrderStatus_);
          DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
          DARABONBA_PTR_FROM_JSON(passengers, passengers_);
        };
        ChangeOrders() = default ;
        ChangeOrders(const ChangeOrders &) = default ;
        ChangeOrders(ChangeOrders &&) = default ;
        ChangeOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeOrders() = default ;
        ChangeOrders& operator=(const ChangeOrders &) = default ;
        ChangeOrders& operator=(ChangeOrders &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Passengers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Passengers& obj) { 
            DARABONBA_PTR_TO_JSON(document, document_);
            DARABONBA_PTR_TO_JSON(first_name, firstName_);
            DARABONBA_PTR_TO_JSON(last_name, lastName_);
          };
          friend void from_json(const Darabonba::Json& j, Passengers& obj) { 
            DARABONBA_PTR_FROM_JSON(document, document_);
            DARABONBA_PTR_FROM_JSON(first_name, firstName_);
            DARABONBA_PTR_FROM_JSON(last_name, lastName_);
          };
          Passengers() = default ;
          Passengers(const Passengers &) = default ;
          Passengers(Passengers &&) = default ;
          Passengers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Passengers() = default ;
          Passengers& operator=(const Passengers &) = default ;
          Passengers& operator=(Passengers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->document_ == nullptr
        && this->firstName_ == nullptr && this->lastName_ == nullptr; };
          // document Field Functions 
          bool hasDocument() const { return this->document_ != nullptr;};
          void deleteDocument() { this->document_ = nullptr;};
          inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
          inline Passengers& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


          // firstName Field Functions 
          bool hasFirstName() const { return this->firstName_ != nullptr;};
          void deleteFirstName() { this->firstName_ = nullptr;};
          inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
          inline Passengers& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


          // lastName Field Functions 
          bool hasLastName() const { return this->lastName_ != nullptr;};
          void deleteLastName() { this->lastName_ = nullptr;};
          inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
          inline Passengers& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


        protected:
          // The document number.
          shared_ptr<string> document_ {};
          // The first name of the passenger.
          shared_ptr<string> firstName_ {};
          // The last name of the passenger.
          shared_ptr<string> lastName_ {};
        };

        virtual bool empty() const override { return this->changeOrderNum_ == nullptr
        && this->changeOrderStatus_ == nullptr && this->failReason_ == nullptr && this->passengers_ == nullptr; };
        // changeOrderNum Field Functions 
        bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
        void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
        inline int64_t getChangeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
        inline ChangeOrders& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


        // changeOrderStatus Field Functions 
        bool hasChangeOrderStatus() const { return this->changeOrderStatus_ != nullptr;};
        void deleteChangeOrderStatus() { this->changeOrderStatus_ = nullptr;};
        inline int32_t getChangeOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(changeOrderStatus_, 0) };
        inline ChangeOrders& setChangeOrderStatus(int32_t changeOrderStatus) { DARABONBA_PTR_SET_VALUE(changeOrderStatus_, changeOrderStatus) };


        // failReason Field Functions 
        bool hasFailReason() const { return this->failReason_ != nullptr;};
        void deleteFailReason() { this->failReason_ = nullptr;};
        inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
        inline ChangeOrders& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


        // passengers Field Functions 
        bool hasPassengers() const { return this->passengers_ != nullptr;};
        void deletePassengers() { this->passengers_ = nullptr;};
        inline const vector<ChangeOrders::Passengers> & getPassengers() const { DARABONBA_PTR_GET_CONST(passengers_, vector<ChangeOrders::Passengers>) };
        inline vector<ChangeOrders::Passengers> getPassengers() { DARABONBA_PTR_GET(passengers_, vector<ChangeOrders::Passengers>) };
        inline ChangeOrders& setPassengers(const vector<ChangeOrders::Passengers> & passengers) { DARABONBA_PTR_SET_VALUE(passengers_, passengers) };
        inline ChangeOrders& setPassengers(vector<ChangeOrders::Passengers> && passengers) { DARABONBA_PTR_SET_RVALUE(passengers_, passengers) };


      protected:
        // The change order number.
        shared_ptr<int64_t> changeOrderNum_ {};
        // The change order status. Valid values:
        // - 0: Change order created.
        // - 5: Change order creation failed.
        shared_ptr<int32_t> changeOrderStatus_ {};
        // The reason for the change order creation failure.
        shared_ptr<string> failReason_ {};
        // The passenger information of the change order.
        shared_ptr<vector<ChangeOrders::Passengers>> passengers_ {};
      };

      virtual bool empty() const override { return this->changeOrders_ == nullptr
        && this->orderNum_ == nullptr; };
      // changeOrders Field Functions 
      bool hasChangeOrders() const { return this->changeOrders_ != nullptr;};
      void deleteChangeOrders() { this->changeOrders_ = nullptr;};
      inline const vector<Data::ChangeOrders> & getChangeOrders() const { DARABONBA_PTR_GET_CONST(changeOrders_, vector<Data::ChangeOrders>) };
      inline vector<Data::ChangeOrders> getChangeOrders() { DARABONBA_PTR_GET(changeOrders_, vector<Data::ChangeOrders>) };
      inline Data& setChangeOrders(const vector<Data::ChangeOrders> & changeOrders) { DARABONBA_PTR_SET_VALUE(changeOrders_, changeOrders) };
      inline Data& setChangeOrders(vector<Data::ChangeOrders> && changeOrders) { DARABONBA_PTR_SET_RVALUE(changeOrders_, changeOrders) };


      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
      inline Data& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    protected:
      // The list of change order application results.
      shared_ptr<vector<Data::ChangeOrders>> changeOrders_ {};
      // The order number.
      shared_ptr<int64_t> orderNum_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChangeApplyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ChangeApplyResponseBody::Data) };
    inline ChangeApplyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ChangeApplyResponseBody::Data) };
    inline ChangeApplyResponseBody& setData(const ChangeApplyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChangeApplyResponseBody& setData(ChangeApplyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ChangeApplyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline ChangeApplyResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline ChangeApplyResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ChangeApplyResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ChangeApplyResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChangeApplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<ChangeApplyResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
