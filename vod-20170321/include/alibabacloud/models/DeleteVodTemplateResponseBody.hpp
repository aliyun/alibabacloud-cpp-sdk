// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVODTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEVODTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteVodTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
    };
    DeleteVodTemplateResponseBody() = default ;
    DeleteVodTemplateResponseBody(const DeleteVodTemplateResponseBody &) = default ;
    DeleteVodTemplateResponseBody(DeleteVodTemplateResponseBody &&) = default ;
    DeleteVodTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVodTemplateResponseBody() = default ;
    DeleteVodTemplateResponseBody& operator=(const DeleteVodTemplateResponseBody &) = default ;
    DeleteVodTemplateResponseBody& operator=(DeleteVodTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vodTemplateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteVodTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodTemplateId Field Functions 
    bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
    void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
    inline string vodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
    inline DeleteVodTemplateResponseBody& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the snapshot template.
    std::shared_ptr<string> vodTemplateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
