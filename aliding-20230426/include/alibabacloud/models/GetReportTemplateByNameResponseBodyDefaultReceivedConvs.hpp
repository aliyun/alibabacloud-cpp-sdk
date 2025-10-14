// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODYDEFAULTRECEIVEDCONVS_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODYDEFAULTRECEIVEDCONVS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportTemplateByNameResponseBodyDefaultReceivedConvs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateByNameResponseBodyDefaultReceivedConvs& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateByNameResponseBodyDefaultReceivedConvs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetReportTemplateByNameResponseBodyDefaultReceivedConvs() = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivedConvs(const GetReportTemplateByNameResponseBodyDefaultReceivedConvs &) = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivedConvs(GetReportTemplateByNameResponseBodyDefaultReceivedConvs &&) = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivedConvs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateByNameResponseBodyDefaultReceivedConvs() = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivedConvs& operator=(const GetReportTemplateByNameResponseBodyDefaultReceivedConvs &) = default ;
    GetReportTemplateByNameResponseBodyDefaultReceivedConvs& operator=(GetReportTemplateByNameResponseBodyDefaultReceivedConvs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && return this->title_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string conversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetReportTemplateByNameResponseBodyDefaultReceivedConvs& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetReportTemplateByNameResponseBodyDefaultReceivedConvs& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> conversationId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
