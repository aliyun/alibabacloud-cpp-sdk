// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/QuotaConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class UpdateQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_TO_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_FROM_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
    };
    UpdateQuotaRequest() = default ;
    UpdateQuotaRequest(const UpdateQuotaRequest &) = default ;
    UpdateQuotaRequest(UpdateQuotaRequest &&) = default ;
    UpdateQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQuotaRequest() = default ;
    UpdateQuotaRequest& operator=(const UpdateQuotaRequest &) = default ;
    UpdateQuotaRequest& operator=(UpdateQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->labels_ == nullptr && this->queueStrategy_ == nullptr && this->quotaConfig_ == nullptr && this->quotaName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateQuotaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> getLabels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline UpdateQuotaRequest& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateQuotaRequest& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // queueStrategy Field Functions 
    bool hasQueueStrategy() const { return this->queueStrategy_ != nullptr;};
    void deleteQueueStrategy() { this->queueStrategy_ = nullptr;};
    inline string getQueueStrategy() const { DARABONBA_PTR_GET_DEFAULT(queueStrategy_, "") };
    inline UpdateQuotaRequest& setQueueStrategy(string queueStrategy) { DARABONBA_PTR_SET_VALUE(queueStrategy_, queueStrategy) };


    // quotaConfig Field Functions 
    bool hasQuotaConfig() const { return this->quotaConfig_ != nullptr;};
    void deleteQuotaConfig() { this->quotaConfig_ = nullptr;};
    inline const QuotaConfig & getQuotaConfig() const { DARABONBA_PTR_GET_CONST(quotaConfig_, QuotaConfig) };
    inline QuotaConfig getQuotaConfig() { DARABONBA_PTR_GET(quotaConfig_, QuotaConfig) };
    inline UpdateQuotaRequest& setQuotaConfig(const QuotaConfig & quotaConfig) { DARABONBA_PTR_SET_VALUE(quotaConfig_, quotaConfig) };
    inline UpdateQuotaRequest& setQuotaConfig(QuotaConfig && quotaConfig) { DARABONBA_PTR_SET_RVALUE(quotaConfig_, quotaConfig) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline UpdateQuotaRequest& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<vector<Label>> labels_ {};
    shared_ptr<string> queueStrategy_ {};
    shared_ptr<QuotaConfig> quotaConfig_ {};
    shared_ptr<string> quotaName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
