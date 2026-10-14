// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINCOMETAXDETECTIONTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINCOMETAXDETECTIONTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetImageIncomeTaxDetectionTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageIncomeTaxDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageIncomeTaxDetectionTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetImageIncomeTaxDetectionTaskResultResponseBody() = default ;
    GetImageIncomeTaxDetectionTaskResultResponseBody(const GetImageIncomeTaxDetectionTaskResultResponseBody &) = default ;
    GetImageIncomeTaxDetectionTaskResultResponseBody(GetImageIncomeTaxDetectionTaskResultResponseBody &&) = default ;
    GetImageIncomeTaxDetectionTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageIncomeTaxDetectionTaskResultResponseBody() = default ;
    GetImageIncomeTaxDetectionTaskResultResponseBody& operator=(const GetImageIncomeTaxDetectionTaskResultResponseBody &) = default ;
    GetImageIncomeTaxDetectionTaskResultResponseBody& operator=(GetImageIncomeTaxDetectionTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AbnormalItem, abnormalItem_);
        DARABONBA_PTR_TO_JSON(Coordinates, coordinates_);
        DARABONBA_PTR_TO_JSON(Stage, stage_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalItem, abnormalItem_);
        DARABONBA_PTR_FROM_JSON(Coordinates, coordinates_);
        DARABONBA_PTR_FROM_JSON(Stage, stage_);
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
      class Coordinates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Coordinates& obj) { 
          DARABONBA_PTR_TO_JSON(X1, x1_);
          DARABONBA_PTR_TO_JSON(X2, x2_);
          DARABONBA_PTR_TO_JSON(Y1, y1_);
          DARABONBA_PTR_TO_JSON(Y2, y2_);
        };
        friend void from_json(const Darabonba::Json& j, Coordinates& obj) { 
          DARABONBA_PTR_FROM_JSON(X1, x1_);
          DARABONBA_PTR_FROM_JSON(X2, x2_);
          DARABONBA_PTR_FROM_JSON(Y1, y1_);
          DARABONBA_PTR_FROM_JSON(Y2, y2_);
        };
        Coordinates() = default ;
        Coordinates(const Coordinates &) = default ;
        Coordinates(Coordinates &&) = default ;
        Coordinates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Coordinates() = default ;
        Coordinates& operator=(const Coordinates &) = default ;
        Coordinates& operator=(Coordinates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->x1_ == nullptr
        && this->x2_ == nullptr && this->y1_ == nullptr && this->y2_ == nullptr; };
        // x1 Field Functions 
        bool hasX1() const { return this->x1_ != nullptr;};
        void deleteX1() { this->x1_ = nullptr;};
        inline int32_t getX1() const { DARABONBA_PTR_GET_DEFAULT(x1_, 0) };
        inline Coordinates& setX1(int32_t x1) { DARABONBA_PTR_SET_VALUE(x1_, x1) };


        // x2 Field Functions 
        bool hasX2() const { return this->x2_ != nullptr;};
        void deleteX2() { this->x2_ = nullptr;};
        inline int32_t getX2() const { DARABONBA_PTR_GET_DEFAULT(x2_, 0) };
        inline Coordinates& setX2(int32_t x2) { DARABONBA_PTR_SET_VALUE(x2_, x2) };


        // y1 Field Functions 
        bool hasY1() const { return this->y1_ != nullptr;};
        void deleteY1() { this->y1_ = nullptr;};
        inline int32_t getY1() const { DARABONBA_PTR_GET_DEFAULT(y1_, 0) };
        inline Coordinates& setY1(int32_t y1) { DARABONBA_PTR_SET_VALUE(y1_, y1) };


        // y2 Field Functions 
        bool hasY2() const { return this->y2_ != nullptr;};
        void deleteY2() { this->y2_ = nullptr;};
        inline int32_t getY2() const { DARABONBA_PTR_GET_DEFAULT(y2_, 0) };
        inline Coordinates& setY2(int32_t y2) { DARABONBA_PTR_SET_VALUE(y2_, y2) };


      protected:
        // The X-coordinate of the upper-left corner (pixels).
        shared_ptr<int32_t> x1_ {};
        // The X-coordinate of the lower-right corner of the bounding box (pixels).
        shared_ptr<int32_t> x2_ {};
        // The Y-coordinate of the upper-left corner (pixels).
        shared_ptr<int32_t> y1_ {};
        // The Y-coordinate of the lower-right corner of the bounding box (pixels).
        shared_ptr<int32_t> y2_ {};
      };

      virtual bool empty() const override { return this->abnormalItem_ == nullptr
        && this->coordinates_ == nullptr && this->stage_ == nullptr; };
      // abnormalItem Field Functions 
      bool hasAbnormalItem() const { return this->abnormalItem_ != nullptr;};
      void deleteAbnormalItem() { this->abnormalItem_ = nullptr;};
      inline string getAbnormalItem() const { DARABONBA_PTR_GET_DEFAULT(abnormalItem_, "") };
      inline Items& setAbnormalItem(string abnormalItem) { DARABONBA_PTR_SET_VALUE(abnormalItem_, abnormalItem) };


      // coordinates Field Functions 
      bool hasCoordinates() const { return this->coordinates_ != nullptr;};
      void deleteCoordinates() { this->coordinates_ = nullptr;};
      inline const vector<Items::Coordinates> & getCoordinates() const { DARABONBA_PTR_GET_CONST(coordinates_, vector<Items::Coordinates>) };
      inline vector<Items::Coordinates> getCoordinates() { DARABONBA_PTR_GET(coordinates_, vector<Items::Coordinates>) };
      inline Items& setCoordinates(const vector<Items::Coordinates> & coordinates) { DARABONBA_PTR_SET_VALUE(coordinates_, coordinates) };
      inline Items& setCoordinates(vector<Items::Coordinates> && coordinates) { DARABONBA_PTR_SET_RVALUE(coordinates_, coordinates) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline Items& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    protected:
      // The text description of the abnormal item.
      shared_ptr<string> abnormalItem_ {};
      // The bounding box position of the abnormal item in the image. May be an empty array for image-wide abnormalities.
      shared_ptr<vector<Items::Coordinates>> coordinates_ {};
      // The detection stage identifier for the abnormality.
      shared_ptr<string> stage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetImageIncomeTaxDetectionTaskResultResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetImageIncomeTaxDetectionTaskResultResponseBody::Items>) };
    inline vector<GetImageIncomeTaxDetectionTaskResultResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetImageIncomeTaxDetectionTaskResultResponseBody::Items>) };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setItems(const vector<GetImageIncomeTaxDetectionTaskResultResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setItems(vector<GetImageIncomeTaxDetectionTaskResultResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetImageIncomeTaxDetectionTaskResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // **The business error code.** The value "OK" is returned if the request is successful.
    shared_ptr<string> code_ {};
    // **The HTTP status code.** The value 200 is returned if the request is successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // **The list of detected abnormal items.** Returned only when `Status` is `succeeded`. An empty array indicates that no abnormal items are detected.
    shared_ptr<vector<GetImageIncomeTaxDetectionTaskResultResponseBody::Items>> items_ {};
    // The failure reason when the task fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The raw downstream detection result (extend.result string) for troubleshooting and passing through new fields.
    shared_ptr<string> result_ {};
    // **The task status.** Valid values: `running` (in progress), `succeeded` (completed), `failed` (failed).
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // **The task ID.**
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
