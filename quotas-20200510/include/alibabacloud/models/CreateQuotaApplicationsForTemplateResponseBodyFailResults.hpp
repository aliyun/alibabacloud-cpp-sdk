// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODYFAILRESULTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODYFAILRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class CreateQuotaApplicationsForTemplateResponseBodyFailResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaApplicationsForTemplateResponseBodyFailResults& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaApplicationsForTemplateResponseBodyFailResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    CreateQuotaApplicationsForTemplateResponseBodyFailResults() = default ;
    CreateQuotaApplicationsForTemplateResponseBodyFailResults(const CreateQuotaApplicationsForTemplateResponseBodyFailResults &) = default ;
    CreateQuotaApplicationsForTemplateResponseBodyFailResults(CreateQuotaApplicationsForTemplateResponseBodyFailResults &&) = default ;
    CreateQuotaApplicationsForTemplateResponseBodyFailResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaApplicationsForTemplateResponseBodyFailResults() = default ;
    CreateQuotaApplicationsForTemplateResponseBodyFailResults& operator=(const CreateQuotaApplicationsForTemplateResponseBodyFailResults &) = default ;
    CreateQuotaApplicationsForTemplateResponseBodyFailResults& operator=(CreateQuotaApplicationsForTemplateResponseBodyFailResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->reason_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline CreateQuotaApplicationsForTemplateResponseBodyFailResults& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateQuotaApplicationsForTemplateResponseBodyFailResults& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The Alibaba Cloud account of the members in a resource directory whose quota increase request is rejected.
    std::shared_ptr<string> aliyunUid_ = nullptr;
    // The reason for the rejection.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
