// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYALERTS_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYALERTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAlertsResponseBodyAlerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBodyAlerts& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RelatedResourceArns, relatedResourceArns_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBodyAlerts& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceArns, relatedResourceArns_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
    };
    ListAlertsResponseBodyAlerts() = default ;
    ListAlertsResponseBodyAlerts(const ListAlertsResponseBodyAlerts &) = default ;
    ListAlertsResponseBodyAlerts(ListAlertsResponseBodyAlerts &&) = default ;
    ListAlertsResponseBodyAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBodyAlerts() = default ;
    ListAlertsResponseBodyAlerts& operator=(const ListAlertsResponseBodyAlerts &) = default ;
    ListAlertsResponseBodyAlerts& operator=(ListAlertsResponseBodyAlerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->code_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->message_ != nullptr && this->relatedResourceArns_ != nullptr
        && this->resourceArn_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListAlertsResponseBodyAlerts& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAlertsResponseBodyAlerts& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListAlertsResponseBodyAlerts& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListAlertsResponseBodyAlerts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAlertsResponseBodyAlerts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // relatedResourceArns Field Functions 
    bool hasRelatedResourceArns() const { return this->relatedResourceArns_ != nullptr;};
    void deleteRelatedResourceArns() { this->relatedResourceArns_ = nullptr;};
    inline string relatedResourceArns() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceArns_, "") };
    inline ListAlertsResponseBodyAlerts& setRelatedResourceArns(string relatedResourceArns) { DARABONBA_PTR_SET_VALUE(relatedResourceArns_, relatedResourceArns) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline ListAlertsResponseBodyAlerts& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


  protected:
    // The alert type.
    std::shared_ptr<string> category_ = nullptr;
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the alert was received in UTC.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the alert was modified in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The ARN of the related resource.
    std::shared_ptr<string> relatedResourceArns_ = nullptr;
    // The ARN of the resource.
    std::shared_ptr<string> resourceArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
