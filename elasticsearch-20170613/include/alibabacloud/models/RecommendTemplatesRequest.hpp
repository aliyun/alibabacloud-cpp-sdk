// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class RecommendTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecommendTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(usageScenario, usageScenario_);
    };
    friend void from_json(const Darabonba::Json& j, RecommendTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(usageScenario, usageScenario_);
    };
    RecommendTemplatesRequest() = default ;
    RecommendTemplatesRequest(const RecommendTemplatesRequest &) = default ;
    RecommendTemplatesRequest(RecommendTemplatesRequest &&) = default ;
    RecommendTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecommendTemplatesRequest() = default ;
    RecommendTemplatesRequest& operator=(const RecommendTemplatesRequest &) = default ;
    RecommendTemplatesRequest& operator=(RecommendTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageScenario_ == nullptr; };
    // usageScenario Field Functions 
    bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
    void deleteUsageScenario() { this->usageScenario_ = nullptr;};
    inline string getUsageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
    inline RecommendTemplatesRequest& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


  protected:
    // *
    // *
    // *
    // *
    // *
    // 
    // **
    // 
    // ****
    // 
    // This parameter is required.
    shared_ptr<string> usageScenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
