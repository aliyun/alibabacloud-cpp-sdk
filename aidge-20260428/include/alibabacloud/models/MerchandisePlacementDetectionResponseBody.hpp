// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONRESPONSEBODY_HPP_
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
  class MerchandisePlacementDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePlacementDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePlacementDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MerchandisePlacementDetectionResponseBody() = default ;
    MerchandisePlacementDetectionResponseBody(const MerchandisePlacementDetectionResponseBody &) = default ;
    MerchandisePlacementDetectionResponseBody(MerchandisePlacementDetectionResponseBody &&) = default ;
    MerchandisePlacementDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePlacementDetectionResponseBody() = default ;
    MerchandisePlacementDetectionResponseBody& operator=(const MerchandisePlacementDetectionResponseBody &) = default ;
    MerchandisePlacementDetectionResponseBody& operator=(MerchandisePlacementDetectionResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Bbox, bbox_);
          DARABONBA_PTR_TO_JSON(Error, error_);
          DARABONBA_PTR_TO_JSON(Idx, idx_);
          DARABONBA_PTR_TO_JSON(Top1, top1_);
          DARABONBA_PTR_TO_JSON(Topk, topk_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Bbox, bbox_);
          DARABONBA_PTR_FROM_JSON(Error, error_);
          DARABONBA_PTR_FROM_JSON(Idx, idx_);
          DARABONBA_PTR_FROM_JSON(Top1, top1_);
          DARABONBA_PTR_FROM_JSON(Topk, topk_);
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
        class Topk : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topk& obj) { 
            DARABONBA_PTR_TO_JSON(Rank, rank_);
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(SkuId, skuId_);
            DARABONBA_PTR_TO_JSON(SkuName, skuName_);
          };
          friend void from_json(const Darabonba::Json& j, Topk& obj) { 
            DARABONBA_PTR_FROM_JSON(Rank, rank_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
            DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
          };
          Topk() = default ;
          Topk(const Topk &) = default ;
          Topk(Topk &&) = default ;
          Topk(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topk() = default ;
          Topk& operator=(const Topk &) = default ;
          Topk& operator=(Topk &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->rank_ == nullptr
        && this->score_ == nullptr && this->skuId_ == nullptr && this->skuName_ == nullptr; };
          // rank Field Functions 
          bool hasRank() const { return this->rank_ != nullptr;};
          void deleteRank() { this->rank_ = nullptr;};
          inline int32_t getRank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0) };
          inline Topk& setRank(int32_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline Topk& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // skuId Field Functions 
          bool hasSkuId() const { return this->skuId_ != nullptr;};
          void deleteSkuId() { this->skuId_ = nullptr;};
          inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
          inline Topk& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


          // skuName Field Functions 
          bool hasSkuName() const { return this->skuName_ != nullptr;};
          void deleteSkuName() { this->skuName_ = nullptr;};
          inline string getSkuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
          inline Topk& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


        protected:
          // The recall rank.
          shared_ptr<int32_t> rank_ {};
          // The similarity score, ranging from 0 to 1.
          shared_ptr<float> score_ {};
          // The ID of the recalled product.
          shared_ptr<string> skuId_ {};
          // The name of the recalled product.
          shared_ptr<string> skuName_ {};
        };

        class Top1 : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Top1& obj) { 
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(SkuId, skuId_);
            DARABONBA_PTR_TO_JSON(SkuName, skuName_);
          };
          friend void from_json(const Darabonba::Json& j, Top1& obj) { 
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
            DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
          };
          Top1() = default ;
          Top1(const Top1 &) = default ;
          Top1(Top1 &&) = default ;
          Top1(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Top1() = default ;
          Top1& operator=(const Top1 &) = default ;
          Top1& operator=(Top1 &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->score_ == nullptr
        && this->skuId_ == nullptr && this->skuName_ == nullptr; };
          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline Top1& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // skuId Field Functions 
          bool hasSkuId() const { return this->skuId_ != nullptr;};
          void deleteSkuId() { this->skuId_ = nullptr;};
          inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
          inline Top1& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


          // skuName Field Functions 
          bool hasSkuName() const { return this->skuName_ != nullptr;};
          void deleteSkuName() { this->skuName_ = nullptr;};
          inline string getSkuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
          inline Top1& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


        protected:
          // The similarity score, ranging from 0 to 1.
          shared_ptr<float> score_ {};
          // The ID of the recalled product.
          shared_ptr<string> skuId_ {};
          // The name of the recalled product.
          shared_ptr<string> skuName_ {};
        };

        virtual bool empty() const override { return this->bbox_ == nullptr
        && this->error_ == nullptr && this->idx_ == nullptr && this->top1_ == nullptr && this->topk_ == nullptr; };
        // bbox Field Functions 
        bool hasBbox() const { return this->bbox_ != nullptr;};
        void deleteBbox() { this->bbox_ = nullptr;};
        inline const vector<float> & getBbox() const { DARABONBA_PTR_GET_CONST(bbox_, vector<float>) };
        inline vector<float> getBbox() { DARABONBA_PTR_GET(bbox_, vector<float>) };
        inline DataItem& setBbox(const vector<float> & bbox) { DARABONBA_PTR_SET_VALUE(bbox_, bbox) };
        inline DataItem& setBbox(vector<float> && bbox) { DARABONBA_PTR_SET_RVALUE(bbox_, bbox) };


        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
        inline DataItem& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


        // idx Field Functions 
        bool hasIdx() const { return this->idx_ != nullptr;};
        void deleteIdx() { this->idx_ = nullptr;};
        inline int32_t getIdx() const { DARABONBA_PTR_GET_DEFAULT(idx_, 0) };
        inline DataItem& setIdx(int32_t idx) { DARABONBA_PTR_SET_VALUE(idx_, idx) };


        // top1 Field Functions 
        bool hasTop1() const { return this->top1_ != nullptr;};
        void deleteTop1() { this->top1_ = nullptr;};
        inline const DataItem::Top1 & getTop1() const { DARABONBA_PTR_GET_CONST(top1_, DataItem::Top1) };
        inline DataItem::Top1 getTop1() { DARABONBA_PTR_GET(top1_, DataItem::Top1) };
        inline DataItem& setTop1(const DataItem::Top1 & top1) { DARABONBA_PTR_SET_VALUE(top1_, top1) };
        inline DataItem& setTop1(DataItem::Top1 && top1) { DARABONBA_PTR_SET_RVALUE(top1_, top1) };


        // topk Field Functions 
        bool hasTopk() const { return this->topk_ != nullptr;};
        void deleteTopk() { this->topk_ = nullptr;};
        inline const vector<DataItem::Topk> & getTopk() const { DARABONBA_PTR_GET_CONST(topk_, vector<DataItem::Topk>) };
        inline vector<DataItem::Topk> getTopk() { DARABONBA_PTR_GET(topk_, vector<DataItem::Topk>) };
        inline DataItem& setTopk(const vector<DataItem::Topk> & topk) { DARABONBA_PTR_SET_VALUE(topk_, topk) };
        inline DataItem& setTopk(vector<DataItem::Topk> && topk) { DARABONBA_PTR_SET_RVALUE(topk_, topk) };


      protected:
        // The position coordinates of the detection box in the format [x1,y1,x2,y2].
        shared_ptr<vector<float>> bbox_ {};
        // The failure reason for the detection box. The value is null if the detection is successful.
        shared_ptr<string> error_ {};
        // The index of the detection box.
        shared_ptr<int32_t> idx_ {};
        // The top-1 recalled product for the detection box.
        shared_ptr<DataItem::Top1> top1_ {};
        // The list of top-K recalled products for the detection box.
        shared_ptr<vector<DataItem::Topk>> topk_ {};
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
      // The number of valid detection boxes.
      shared_ptr<int32_t> boxCount_ {};
      // The list of retrieval details for each detection box.
      shared_ptr<vector<Data::DataItem>> data_ {};
      // The usage information. The key is the usage metric name, and the value is the count.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MerchandisePlacementDetectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MerchandisePlacementDetectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MerchandisePlacementDetectionResponseBody::Data) };
    inline MerchandisePlacementDetectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MerchandisePlacementDetectionResponseBody::Data) };
    inline MerchandisePlacementDetectionResponseBody& setData(const MerchandisePlacementDetectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MerchandisePlacementDetectionResponseBody& setData(MerchandisePlacementDetectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MerchandisePlacementDetectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MerchandisePlacementDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MerchandisePlacementDetectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter is not returned if the call is successful.
    shared_ptr<string> code_ {};
    // The display detection result.
    shared_ptr<MerchandisePlacementDetectionResponseBody::Data> data_ {};
    // The error message. This parameter is not returned if the call is successful.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
