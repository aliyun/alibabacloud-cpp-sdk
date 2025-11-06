// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENTVALUELIMITRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENTVALUELIMITRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMgsApiResponseBodyResultContentValueLimitRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMgsApiResponseBodyResultContentValueLimitRule& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultResponse, defaultResponse_);
      DARABONBA_PTR_TO_JSON(I18nResponse, i18nResponse_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, ListMgsApiResponseBodyResultContentValueLimitRule& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultResponse, defaultResponse_);
      DARABONBA_PTR_FROM_JSON(I18nResponse, i18nResponse_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    ListMgsApiResponseBodyResultContentValueLimitRule() = default ;
    ListMgsApiResponseBodyResultContentValueLimitRule(const ListMgsApiResponseBodyResultContentValueLimitRule &) = default ;
    ListMgsApiResponseBodyResultContentValueLimitRule(ListMgsApiResponseBodyResultContentValueLimitRule &&) = default ;
    ListMgsApiResponseBodyResultContentValueLimitRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMgsApiResponseBodyResultContentValueLimitRule() = default ;
    ListMgsApiResponseBodyResultContentValueLimitRule& operator=(const ListMgsApiResponseBodyResultContentValueLimitRule &) = default ;
    ListMgsApiResponseBodyResultContentValueLimitRule& operator=(ListMgsApiResponseBodyResultContentValueLimitRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultResponse_ == nullptr
        && return this->i18nResponse_ == nullptr && return this->interval_ == nullptr && return this->limit_ == nullptr && return this->mode_ == nullptr; };
    // defaultResponse Field Functions 
    bool hasDefaultResponse() const { return this->defaultResponse_ != nullptr;};
    void deleteDefaultResponse() { this->defaultResponse_ = nullptr;};
    inline string defaultResponse() const { DARABONBA_PTR_GET_DEFAULT(defaultResponse_, "") };
    inline ListMgsApiResponseBodyResultContentValueLimitRule& setDefaultResponse(string defaultResponse) { DARABONBA_PTR_SET_VALUE(defaultResponse_, defaultResponse) };


    // i18nResponse Field Functions 
    bool hasI18nResponse() const { return this->i18nResponse_ != nullptr;};
    void deleteI18nResponse() { this->i18nResponse_ = nullptr;};
    inline string i18nResponse() const { DARABONBA_PTR_GET_DEFAULT(i18nResponse_, "") };
    inline ListMgsApiResponseBodyResultContentValueLimitRule& setI18nResponse(string i18nResponse) { DARABONBA_PTR_SET_VALUE(i18nResponse_, i18nResponse) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline ListMgsApiResponseBodyResultContentValueLimitRule& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ListMgsApiResponseBodyResultContentValueLimitRule& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListMgsApiResponseBodyResultContentValueLimitRule& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    std::shared_ptr<string> defaultResponse_ = nullptr;
    std::shared_ptr<string> i18nResponse_ = nullptr;
    std::shared_ptr<int64_t> interval_ = nullptr;
    std::shared_ptr<int64_t> limit_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
