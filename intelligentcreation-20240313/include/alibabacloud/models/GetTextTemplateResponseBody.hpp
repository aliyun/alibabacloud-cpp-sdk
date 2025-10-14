// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTextTemplateResponseBodyAvailableIndustry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetTextTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(availableIndustry, availableIndustry_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(availableIndustry, availableIndustry_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetTextTemplateResponseBody() = default ;
    GetTextTemplateResponseBody(const GetTextTemplateResponseBody &) = default ;
    GetTextTemplateResponseBody(GetTextTemplateResponseBody &&) = default ;
    GetTextTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextTemplateResponseBody() = default ;
    GetTextTemplateResponseBody& operator=(const GetTextTemplateResponseBody &) = default ;
    GetTextTemplateResponseBody& operator=(GetTextTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIndustry_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableIndustry Field Functions 
    bool hasAvailableIndustry() const { return this->availableIndustry_ != nullptr;};
    void deleteAvailableIndustry() { this->availableIndustry_ = nullptr;};
    inline const GetTextTemplateResponseBodyAvailableIndustry & availableIndustry() const { DARABONBA_PTR_GET_CONST(availableIndustry_, GetTextTemplateResponseBodyAvailableIndustry) };
    inline GetTextTemplateResponseBodyAvailableIndustry availableIndustry() { DARABONBA_PTR_GET(availableIndustry_, GetTextTemplateResponseBodyAvailableIndustry) };
    inline GetTextTemplateResponseBody& setAvailableIndustry(const GetTextTemplateResponseBodyAvailableIndustry & availableIndustry) { DARABONBA_PTR_SET_VALUE(availableIndustry_, availableIndustry) };
    inline GetTextTemplateResponseBody& setAvailableIndustry(GetTextTemplateResponseBodyAvailableIndustry && availableIndustry) { DARABONBA_PTR_SET_RVALUE(availableIndustry_, availableIndustry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTextTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetTextTemplateResponseBodyAvailableIndustry> availableIndustry_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
