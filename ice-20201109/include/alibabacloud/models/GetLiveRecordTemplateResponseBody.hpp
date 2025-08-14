// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveRecordTemplateResponseBodyRecordTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordTemplate, recordTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordTemplate, recordTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveRecordTemplateResponseBody() = default ;
    GetLiveRecordTemplateResponseBody(const GetLiveRecordTemplateResponseBody &) = default ;
    GetLiveRecordTemplateResponseBody(GetLiveRecordTemplateResponseBody &&) = default ;
    GetLiveRecordTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordTemplateResponseBody() = default ;
    GetLiveRecordTemplateResponseBody& operator=(const GetLiveRecordTemplateResponseBody &) = default ;
    GetLiveRecordTemplateResponseBody& operator=(GetLiveRecordTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordTemplate_ != nullptr
        && this->requestId_ != nullptr; };
    // recordTemplate Field Functions 
    bool hasRecordTemplate() const { return this->recordTemplate_ != nullptr;};
    void deleteRecordTemplate() { this->recordTemplate_ = nullptr;};
    inline const GetLiveRecordTemplateResponseBodyRecordTemplate & recordTemplate() const { DARABONBA_PTR_GET_CONST(recordTemplate_, GetLiveRecordTemplateResponseBodyRecordTemplate) };
    inline GetLiveRecordTemplateResponseBodyRecordTemplate recordTemplate() { DARABONBA_PTR_GET(recordTemplate_, GetLiveRecordTemplateResponseBodyRecordTemplate) };
    inline GetLiveRecordTemplateResponseBody& setRecordTemplate(const GetLiveRecordTemplateResponseBodyRecordTemplate & recordTemplate) { DARABONBA_PTR_SET_VALUE(recordTemplate_, recordTemplate) };
    inline GetLiveRecordTemplateResponseBody& setRecordTemplate(GetLiveRecordTemplateResponseBodyRecordTemplate && recordTemplate) { DARABONBA_PTR_SET_RVALUE(recordTemplate_, recordTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveRecordTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The recording template.
    std::shared_ptr<GetLiveRecordTemplateResponseBodyRecordTemplate> recordTemplate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
