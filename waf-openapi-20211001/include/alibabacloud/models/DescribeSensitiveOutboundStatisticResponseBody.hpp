// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveOutboundStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSensitiveOutboundStatisticResponseBody() = default ;
    DescribeSensitiveOutboundStatisticResponseBody(const DescribeSensitiveOutboundStatisticResponseBody &) = default ;
    DescribeSensitiveOutboundStatisticResponseBody(DescribeSensitiveOutboundStatisticResponseBody &&) = default ;
    DescribeSensitiveOutboundStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundStatisticResponseBody() = default ;
    DescribeSensitiveOutboundStatisticResponseBody& operator=(const DescribeSensitiveOutboundStatisticResponseBody &) = default ;
    DescribeSensitiveOutboundStatisticResponseBody& operator=(DescribeSensitiveOutboundStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DetectionResult, detectionResult_);
        DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
        DARABONBA_PTR_TO_JSON(OutboundCount, outboundCount_);
        DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
        DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DetectionResult, detectionResult_);
        DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
        DARABONBA_PTR_FROM_JSON(OutboundCount, outboundCount_);
        DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
        DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
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
      virtual bool empty() const override { return this->detectionResult_ == nullptr
        && this->infoCount_ == nullptr && this->outboundCount_ == nullptr && this->sensitiveCode_ == nullptr && this->sensitiveLevel_ == nullptr && this->sensitiveType_ == nullptr; };
      // detectionResult Field Functions 
      bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
      void deleteDetectionResult() { this->detectionResult_ = nullptr;};
      inline string getDetectionResult() const { DARABONBA_PTR_GET_DEFAULT(detectionResult_, "") };
      inline Data& setDetectionResult(string detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };


      // infoCount Field Functions 
      bool hasInfoCount() const { return this->infoCount_ != nullptr;};
      void deleteInfoCount() { this->infoCount_ = nullptr;};
      inline int64_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
      inline Data& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


      // outboundCount Field Functions 
      bool hasOutboundCount() const { return this->outboundCount_ != nullptr;};
      void deleteOutboundCount() { this->outboundCount_ = nullptr;};
      inline int64_t getOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(outboundCount_, 0L) };
      inline Data& setOutboundCount(int64_t outboundCount) { DARABONBA_PTR_SET_VALUE(outboundCount_, outboundCount) };


      // sensitiveCode Field Functions 
      bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
      void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
      inline int64_t getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, 0L) };
      inline Data& setSensitiveCode(int64_t sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


      // sensitiveLevel Field Functions 
      bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
      void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
      inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
      inline Data& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      // sensitiveType Field Functions 
      bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
      void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
      inline string getSensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
      inline Data& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


    protected:
      // The evaluation result. Valid values:
      // 
      // *   **report**: Risks exist in cross-border data transfer.
      // *   **none**: No risks exist in cross-border data transfer.
      shared_ptr<string> detectionResult_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> infoCount_ {};
      // The number of data entries that are transferred across borders.
      shared_ptr<int64_t> outboundCount_ {};
      // The type of the sensitive data.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of sensitive data.
      shared_ptr<int64_t> sensitiveCode_ {};
      // The sensitivity level. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> sensitiveLevel_ {};
      // The type of the information. Valid values:
      // 
      // *   **info**: full personal information
      // *   **sensitive**: sensitive personal information
      shared_ptr<string> sensitiveType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveOutboundStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveOutboundStatisticResponseBody::Data>) };
    inline vector<DescribeSensitiveOutboundStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveOutboundStatisticResponseBody::Data>) };
    inline DescribeSensitiveOutboundStatisticResponseBody& setData(const vector<DescribeSensitiveOutboundStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveOutboundStatisticResponseBody& setData(vector<DescribeSensitiveOutboundStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveOutboundStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveOutboundStatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data types of personal information involved in cross-border data transfer.
    shared_ptr<vector<DescribeSensitiveOutboundStatisticResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
