// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateTemplateScratchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateScratchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateScratchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
    };
    UpdateTemplateScratchResponseBody() = default ;
    UpdateTemplateScratchResponseBody(const UpdateTemplateScratchResponseBody &) = default ;
    UpdateTemplateScratchResponseBody(UpdateTemplateScratchResponseBody &&) = default ;
    UpdateTemplateScratchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateScratchResponseBody() = default ;
    UpdateTemplateScratchResponseBody& operator=(const UpdateTemplateScratchResponseBody &) = default ;
    UpdateTemplateScratchResponseBody& operator=(UpdateTemplateScratchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateScratchId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTemplateScratchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline UpdateTemplateScratchResponseBody& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scenario.
    std::shared_ptr<string> templateScratchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
