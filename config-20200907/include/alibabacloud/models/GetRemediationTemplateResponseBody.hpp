// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMEDIATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREMEDIATIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRemediationTemplateResponseBodyRemediationTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetRemediationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemediationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemediationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRemediationTemplateResponseBody() = default ;
    GetRemediationTemplateResponseBody(const GetRemediationTemplateResponseBody &) = default ;
    GetRemediationTemplateResponseBody(GetRemediationTemplateResponseBody &&) = default ;
    GetRemediationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemediationTemplateResponseBody() = default ;
    GetRemediationTemplateResponseBody& operator=(const GetRemediationTemplateResponseBody &) = default ;
    GetRemediationTemplateResponseBody& operator=(GetRemediationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationTemplates_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediationTemplates Field Functions 
    bool hasRemediationTemplates() const { return this->remediationTemplates_ != nullptr;};
    void deleteRemediationTemplates() { this->remediationTemplates_ = nullptr;};
    inline const vector<GetRemediationTemplateResponseBodyRemediationTemplates> & remediationTemplates() const { DARABONBA_PTR_GET_CONST(remediationTemplates_, vector<GetRemediationTemplateResponseBodyRemediationTemplates>) };
    inline vector<GetRemediationTemplateResponseBodyRemediationTemplates> remediationTemplates() { DARABONBA_PTR_GET(remediationTemplates_, vector<GetRemediationTemplateResponseBodyRemediationTemplates>) };
    inline GetRemediationTemplateResponseBody& setRemediationTemplates(const vector<GetRemediationTemplateResponseBodyRemediationTemplates> & remediationTemplates) { DARABONBA_PTR_SET_VALUE(remediationTemplates_, remediationTemplates) };
    inline GetRemediationTemplateResponseBody& setRemediationTemplates(vector<GetRemediationTemplateResponseBodyRemediationTemplates> && remediationTemplates) { DARABONBA_PTR_SET_RVALUE(remediationTemplates_, remediationTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRemediationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the automatic remediation template.
    std::shared_ptr<vector<GetRemediationTemplateResponseBodyRemediationTemplates>> remediationTemplates_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
