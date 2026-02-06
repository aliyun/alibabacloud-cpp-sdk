// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVODTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDVODTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddVodTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, AddVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
    };
    AddVodTemplateResponseBody() = default ;
    AddVodTemplateResponseBody(const AddVodTemplateResponseBody &) = default ;
    AddVodTemplateResponseBody(AddVodTemplateResponseBody &&) = default ;
    AddVodTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVodTemplateResponseBody() = default ;
    AddVodTemplateResponseBody& operator=(const AddVodTemplateResponseBody &) = default ;
    AddVodTemplateResponseBody& operator=(AddVodTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vodTemplateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddVodTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodTemplateId Field Functions 
    bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
    void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
    inline string getVodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
    inline AddVodTemplateResponseBody& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the snapshot template. You can call the [SubmitSnapshotJob](https://help.aliyun.com/document_detail/72213.html) operation to submit snapshot jobs.
    shared_ptr<string> vodTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
