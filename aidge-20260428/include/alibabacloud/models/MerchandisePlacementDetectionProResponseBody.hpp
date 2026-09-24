// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONPRORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONPRORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MerchandisePlacementDetectionProResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePlacementDetectionProResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePlacementDetectionProResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MerchandisePlacementDetectionProResponseBody() = default ;
    MerchandisePlacementDetectionProResponseBody(const MerchandisePlacementDetectionProResponseBody &) = default ;
    MerchandisePlacementDetectionProResponseBody(MerchandisePlacementDetectionProResponseBody &&) = default ;
    MerchandisePlacementDetectionProResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePlacementDetectionProResponseBody() = default ;
    MerchandisePlacementDetectionProResponseBody& operator=(const MerchandisePlacementDetectionProResponseBody &) = default ;
    MerchandisePlacementDetectionProResponseBody& operator=(MerchandisePlacementDetectionProResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BoxCount, boxCount_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BoxCount, boxCount_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Bbox2d, bbox2d_);
          DARABONBA_PTR_TO_JSON(DetectedSkuName, detectedSkuName_);
          DARABONBA_PTR_TO_JSON(Idx, idx_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Bbox2d, bbox2d_);
          DARABONBA_PTR_FROM_JSON(DetectedSkuName, detectedSkuName_);
          DARABONBA_PTR_FROM_JSON(Idx, idx_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bbox2d_ == nullptr
        && this->detectedSkuName_ == nullptr && this->idx_ == nullptr; };
        // bbox2d Field Functions 
        bool hasBbox2d() const { return this->bbox2d_ != nullptr;};
        void deleteBbox2d() { this->bbox2d_ = nullptr;};
        inline const vector<int32_t> & getBbox2d() const { DARABONBA_PTR_GET_CONST(bbox2d_, vector<int32_t>) };
        inline vector<int32_t> getBbox2d() { DARABONBA_PTR_GET(bbox2d_, vector<int32_t>) };
        inline DataItem& setBbox2d(const vector<int32_t> & bbox2d) { DARABONBA_PTR_SET_VALUE(bbox2d_, bbox2d) };
        inline DataItem& setBbox2d(vector<int32_t> && bbox2d) { DARABONBA_PTR_SET_RVALUE(bbox2d_, bbox2d) };


        // detectedSkuName Field Functions 
        bool hasDetectedSkuName() const { return this->detectedSkuName_ != nullptr;};
        void deleteDetectedSkuName() { this->detectedSkuName_ = nullptr;};
        inline string getDetectedSkuName() const { DARABONBA_PTR_GET_DEFAULT(detectedSkuName_, "") };
        inline DataItem& setDetectedSkuName(string detectedSkuName) { DARABONBA_PTR_SET_VALUE(detectedSkuName_, detectedSkuName) };


        // idx Field Functions 
        bool hasIdx() const { return this->idx_ != nullptr;};
        void deleteIdx() { this->idx_ = nullptr;};
        inline int32_t getIdx() const { DARABONBA_PTR_GET_DEFAULT(idx_, 0) };
        inline DataItem& setIdx(int32_t idx) { DARABONBA_PTR_SET_VALUE(idx_, idx) };


      protected:
        // The normalized bounding box coordinates [x1,y1,x2,y2], with values in the range 0–1000.
        shared_ptr<vector<int32_t>> bbox2d_ {};
        // The detected product name. The value is unknown if the name cannot be determined.
        shared_ptr<string> detectedSkuName_ {};
        // The bounding box index, starting from 1.
        shared_ptr<int32_t> idx_ {};
      };

      virtual bool empty() const override { return this->boxCount_ == nullptr
        && this->data_ == nullptr && this->usageMap_ == nullptr; };
      // boxCount Field Functions 
      bool hasBoxCount() const { return this->boxCount_ != nullptr;};
      void deleteBoxCount() { this->boxCount_ = nullptr;};
      inline int32_t getBoxCount() const { DARABONBA_PTR_GET_DEFAULT(boxCount_, 0) };
      inline Data& setBoxCount(int32_t boxCount) { DARABONBA_PTR_SET_VALUE(boxCount_, boxCount) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The number of valid bounding boxes.
      shared_ptr<int32_t> boxCount_ {};
      // The list of per-box detection details.
      shared_ptr<vector<Data::DataItem>> data_ {};
      // The usage information.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MerchandisePlacementDetectionProResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MerchandisePlacementDetectionProResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MerchandisePlacementDetectionProResponseBody::Data) };
    inline MerchandisePlacementDetectionProResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MerchandisePlacementDetectionProResponseBody::Data) };
    inline MerchandisePlacementDetectionProResponseBody& setData(const MerchandisePlacementDetectionProResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MerchandisePlacementDetectionProResponseBody& setData(MerchandisePlacementDetectionProResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MerchandisePlacementDetectionProResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MerchandisePlacementDetectionProResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MerchandisePlacementDetectionProResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The detection result of product display detection Pro.
    shared_ptr<MerchandisePlacementDetectionProResponseBody::Data> data_ {};
    // The response message or failure description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
