// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeCorePackageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCorePackageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(QueryDeductionInstances, queryDeductionInstances_);
      DARABONBA_PTR_TO_JSON(QueryScenario, queryScenario_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCorePackageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(QueryDeductionInstances, queryDeductionInstances_);
      DARABONBA_PTR_FROM_JSON(QueryScenario, queryScenario_);
    };
    DescribeCorePackageListRequest() = default ;
    DescribeCorePackageListRequest(const DescribeCorePackageListRequest &) = default ;
    DescribeCorePackageListRequest(DescribeCorePackageListRequest &&) = default ;
    DescribeCorePackageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCorePackageListRequest() = default ;
    DescribeCorePackageListRequest& operator=(const DescribeCorePackageListRequest &) = default ;
    DescribeCorePackageListRequest& operator=(DescribeCorePackageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->queryDeductionInstances_ == nullptr && return this->queryScenario_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribeCorePackageListRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // queryDeductionInstances Field Functions 
    bool hasQueryDeductionInstances() const { return this->queryDeductionInstances_ != nullptr;};
    void deleteQueryDeductionInstances() { this->queryDeductionInstances_ = nullptr;};
    inline bool queryDeductionInstances() const { DARABONBA_PTR_GET_DEFAULT(queryDeductionInstances_, false) };
    inline DescribeCorePackageListRequest& setQueryDeductionInstances(bool queryDeductionInstances) { DARABONBA_PTR_SET_VALUE(queryDeductionInstances_, queryDeductionInstances) };


    // queryScenario Field Functions 
    bool hasQueryScenario() const { return this->queryScenario_ != nullptr;};
    void deleteQueryScenario() { this->queryScenario_ = nullptr;};
    inline string queryScenario() const { DARABONBA_PTR_GET_DEFAULT(queryScenario_, "") };
    inline DescribeCorePackageListRequest& setQueryScenario(string queryScenario) { DARABONBA_PTR_SET_VALUE(queryScenario_, queryScenario) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<bool> queryDeductionInstances_ = nullptr;
    std::shared_ptr<string> queryScenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
