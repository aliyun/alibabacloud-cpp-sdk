// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchCreateRecordsResponseBodyRecordResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordResultList, recordResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordResultList, recordResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchCreateRecordsResponseBody() = default ;
    BatchCreateRecordsResponseBody(const BatchCreateRecordsResponseBody &) = default ;
    BatchCreateRecordsResponseBody(BatchCreateRecordsResponseBody &&) = default ;
    BatchCreateRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsResponseBody() = default ;
    BatchCreateRecordsResponseBody& operator=(const BatchCreateRecordsResponseBody &) = default ;
    BatchCreateRecordsResponseBody& operator=(BatchCreateRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordResultList_ != nullptr
        && this->requestId_ != nullptr; };
    // recordResultList Field Functions 
    bool hasRecordResultList() const { return this->recordResultList_ != nullptr;};
    void deleteRecordResultList() { this->recordResultList_ = nullptr;};
    inline const BatchCreateRecordsResponseBodyRecordResultList & recordResultList() const { DARABONBA_PTR_GET_CONST(recordResultList_, BatchCreateRecordsResponseBodyRecordResultList) };
    inline BatchCreateRecordsResponseBodyRecordResultList recordResultList() { DARABONBA_PTR_GET(recordResultList_, BatchCreateRecordsResponseBodyRecordResultList) };
    inline BatchCreateRecordsResponseBody& setRecordResultList(const BatchCreateRecordsResponseBodyRecordResultList & recordResultList) { DARABONBA_PTR_SET_VALUE(recordResultList_, recordResultList) };
    inline BatchCreateRecordsResponseBody& setRecordResultList(BatchCreateRecordsResponseBodyRecordResultList && recordResultList) { DARABONBA_PTR_SET_RVALUE(recordResultList_, recordResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The records that have been created and failed to be created.
    std::shared_ptr<BatchCreateRecordsResponseBodyRecordResultList> recordResultList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
