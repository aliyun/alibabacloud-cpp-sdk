// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTVODTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTVODTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetDefaultVodTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
    };
    SetDefaultVodTemplateResponseBody() = default ;
    SetDefaultVodTemplateResponseBody(const SetDefaultVodTemplateResponseBody &) = default ;
    SetDefaultVodTemplateResponseBody(SetDefaultVodTemplateResponseBody &&) = default ;
    SetDefaultVodTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultVodTemplateResponseBody() = default ;
    SetDefaultVodTemplateResponseBody& operator=(const SetDefaultVodTemplateResponseBody &) = default ;
    SetDefaultVodTemplateResponseBody& operator=(SetDefaultVodTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vodTemplateId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDefaultVodTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodTemplateId Field Functions 
    bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
    void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
    inline string vodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
    inline SetDefaultVodTemplateResponseBody& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vodTemplateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
