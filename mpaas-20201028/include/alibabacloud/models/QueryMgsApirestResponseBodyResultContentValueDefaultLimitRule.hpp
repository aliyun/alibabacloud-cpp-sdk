// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEDEFAULTLIMITRULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEDEFAULTLIMITRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(DefaultLimit, defaultLimit_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(DefaultLimit, defaultLimit_);
    };
    QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule(const QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule(QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule &&) = default ;
    QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule& operator=(const QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule& operator=(QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->defaultLimit_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int32_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0) };
    inline QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule& setConfigId(int32_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // defaultLimit Field Functions 
    bool hasDefaultLimit() const { return this->defaultLimit_ != nullptr;};
    void deleteDefaultLimit() { this->defaultLimit_ = nullptr;};
    inline bool defaultLimit() const { DARABONBA_PTR_GET_DEFAULT(defaultLimit_, false) };
    inline QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule& setDefaultLimit(bool defaultLimit) { DARABONBA_PTR_SET_VALUE(defaultLimit_, defaultLimit) };


  protected:
    std::shared_ptr<int32_t> configId_ = nullptr;
    std::shared_ptr<bool> defaultLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
