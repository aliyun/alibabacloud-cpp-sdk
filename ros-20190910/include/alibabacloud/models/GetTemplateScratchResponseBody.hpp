// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTemplateScratchResponseBodyTemplateScratch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateScratchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateScratch, templateScratch_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratch, templateScratch_);
    };
    GetTemplateScratchResponseBody() = default ;
    GetTemplateScratchResponseBody(const GetTemplateScratchResponseBody &) = default ;
    GetTemplateScratchResponseBody(GetTemplateScratchResponseBody &&) = default ;
    GetTemplateScratchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchResponseBody() = default ;
    GetTemplateScratchResponseBody& operator=(const GetTemplateScratchResponseBody &) = default ;
    GetTemplateScratchResponseBody& operator=(GetTemplateScratchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateScratch_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateScratchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateScratch Field Functions 
    bool hasTemplateScratch() const { return this->templateScratch_ != nullptr;};
    void deleteTemplateScratch() { this->templateScratch_ = nullptr;};
    inline const GetTemplateScratchResponseBodyTemplateScratch & templateScratch() const { DARABONBA_PTR_GET_CONST(templateScratch_, GetTemplateScratchResponseBodyTemplateScratch) };
    inline GetTemplateScratchResponseBodyTemplateScratch templateScratch() { DARABONBA_PTR_GET(templateScratch_, GetTemplateScratchResponseBodyTemplateScratch) };
    inline GetTemplateScratchResponseBody& setTemplateScratch(const GetTemplateScratchResponseBodyTemplateScratch & templateScratch) { DARABONBA_PTR_SET_VALUE(templateScratch_, templateScratch) };
    inline GetTemplateScratchResponseBody& setTemplateScratch(GetTemplateScratchResponseBodyTemplateScratch && templateScratch) { DARABONBA_PTR_SET_RVALUE(templateScratch_, templateScratch) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource scenario.
    std::shared_ptr<GetTemplateScratchResponseBodyTemplateScratch> templateScratch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
