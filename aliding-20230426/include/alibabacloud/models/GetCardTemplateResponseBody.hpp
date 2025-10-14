// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCardTemplateResponseBodyCommonVariableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCardTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commonVariableList, commonVariableList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commonVariableList, commonVariableList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetCardTemplateResponseBody() = default ;
    GetCardTemplateResponseBody(const GetCardTemplateResponseBody &) = default ;
    GetCardTemplateResponseBody(GetCardTemplateResponseBody &&) = default ;
    GetCardTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardTemplateResponseBody() = default ;
    GetCardTemplateResponseBody& operator=(const GetCardTemplateResponseBody &) = default ;
    GetCardTemplateResponseBody& operator=(GetCardTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonVariableList_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->templateId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // commonVariableList Field Functions 
    bool hasCommonVariableList() const { return this->commonVariableList_ != nullptr;};
    void deleteCommonVariableList() { this->commonVariableList_ = nullptr;};
    inline const vector<GetCardTemplateResponseBodyCommonVariableList> & commonVariableList() const { DARABONBA_PTR_GET_CONST(commonVariableList_, vector<GetCardTemplateResponseBodyCommonVariableList>) };
    inline vector<GetCardTemplateResponseBodyCommonVariableList> commonVariableList() { DARABONBA_PTR_GET(commonVariableList_, vector<GetCardTemplateResponseBodyCommonVariableList>) };
    inline GetCardTemplateResponseBody& setCommonVariableList(const vector<GetCardTemplateResponseBodyCommonVariableList> & commonVariableList) { DARABONBA_PTR_SET_VALUE(commonVariableList_, commonVariableList) };
    inline GetCardTemplateResponseBody& setCommonVariableList(vector<GetCardTemplateResponseBodyCommonVariableList> && commonVariableList) { DARABONBA_PTR_SET_RVALUE(commonVariableList_, commonVariableList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCardTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCardTemplateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetCardTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetCardTemplateResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetCardTemplateResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<GetCardTemplateResponseBodyCommonVariableList>> commonVariableList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
