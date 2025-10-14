// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSITENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSITENAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckSiteNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSiteNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsSubSite, isSubSite_);
      DARABONBA_PTR_TO_JSON(Messeage, messeage_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSiteNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsSubSite, isSubSite_);
      DARABONBA_PTR_FROM_JSON(Messeage, messeage_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckSiteNameResponseBody() = default ;
    CheckSiteNameResponseBody(const CheckSiteNameResponseBody &) = default ;
    CheckSiteNameResponseBody(CheckSiteNameResponseBody &&) = default ;
    CheckSiteNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSiteNameResponseBody() = default ;
    CheckSiteNameResponseBody& operator=(const CheckSiteNameResponseBody &) = default ;
    CheckSiteNameResponseBody& operator=(CheckSiteNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->isSubSite_ == nullptr && return this->messeage_ == nullptr && return this->passed_ == nullptr && return this->requestId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CheckSiteNameResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isSubSite Field Functions 
    bool hasIsSubSite() const { return this->isSubSite_ != nullptr;};
    void deleteIsSubSite() { this->isSubSite_ = nullptr;};
    inline bool isSubSite() const { DARABONBA_PTR_GET_DEFAULT(isSubSite_, false) };
    inline CheckSiteNameResponseBody& setIsSubSite(bool isSubSite) { DARABONBA_PTR_SET_VALUE(isSubSite_, isSubSite) };


    // messeage Field Functions 
    bool hasMesseage() const { return this->messeage_ != nullptr;};
    void deleteMesseage() { this->messeage_ = nullptr;};
    inline string messeage() const { DARABONBA_PTR_GET_DEFAULT(messeage_, "") };
    inline CheckSiteNameResponseBody& setMesseage(string messeage) { DARABONBA_PTR_SET_VALUE(messeage_, messeage) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline bool passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
    inline CheckSiteNameResponseBody& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckSiteNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The description of the verification result. Valid values:
    // 
    // *   **success**: The verification is successful.
    // *   **Site.AlreadyExist**: The website domain name has already been added.
    // *   **Site.InvalidName**: Invalid website domain name.
    // *   **Site.SubSiteUnavailable**: Subdomains are not allowed.
    // *   **Site.InternalError**: An internal error occurs.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether a subdomain is specified. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isSubSite_ = nullptr;
    // The verification message.
    std::shared_ptr<string> messeage_ = nullptr;
    // Indicates whether the verification passed.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> passed_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
