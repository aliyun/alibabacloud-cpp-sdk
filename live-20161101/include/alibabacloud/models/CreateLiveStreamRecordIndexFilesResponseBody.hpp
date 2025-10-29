// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVESTREAMRECORDINDEXFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVESTREAMRECORDINDEXFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLiveStreamRecordIndexFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveStreamRecordIndexFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordInfo, recordInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveStreamRecordIndexFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordInfo, recordInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLiveStreamRecordIndexFilesResponseBody() = default ;
    CreateLiveStreamRecordIndexFilesResponseBody(const CreateLiveStreamRecordIndexFilesResponseBody &) = default ;
    CreateLiveStreamRecordIndexFilesResponseBody(CreateLiveStreamRecordIndexFilesResponseBody &&) = default ;
    CreateLiveStreamRecordIndexFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveStreamRecordIndexFilesResponseBody() = default ;
    CreateLiveStreamRecordIndexFilesResponseBody& operator=(const CreateLiveStreamRecordIndexFilesResponseBody &) = default ;
    CreateLiveStreamRecordIndexFilesResponseBody& operator=(CreateLiveStreamRecordIndexFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // recordInfo Field Functions 
    bool hasRecordInfo() const { return this->recordInfo_ != nullptr;};
    void deleteRecordInfo() { this->recordInfo_ = nullptr;};
    inline const CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo & recordInfo() const { DARABONBA_PTR_GET_CONST(recordInfo_, CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo) };
    inline CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo recordInfo() { DARABONBA_PTR_GET(recordInfo_, CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo) };
    inline CreateLiveStreamRecordIndexFilesResponseBody& setRecordInfo(const CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo & recordInfo) { DARABONBA_PTR_SET_VALUE(recordInfo_, recordInfo) };
    inline CreateLiveStreamRecordIndexFilesResponseBody& setRecordInfo(CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo && recordInfo) { DARABONBA_PTR_SET_RVALUE(recordInfo_, recordInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLiveStreamRecordIndexFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The recording configuration.
    std::shared_ptr<CreateLiveStreamRecordIndexFilesResponseBodyRecordInfo> recordInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
