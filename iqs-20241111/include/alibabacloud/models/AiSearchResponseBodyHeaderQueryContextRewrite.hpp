// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODYHEADERQUERYCONTEXTREWRITE_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODYHEADERQUERYCONTEXTREWRITE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class AiSearchResponseBodyHeaderQueryContextRewrite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiSearchResponseBodyHeaderQueryContextRewrite& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, AiSearchResponseBodyHeaderQueryContextRewrite& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
    };
    AiSearchResponseBodyHeaderQueryContextRewrite() = default ;
    AiSearchResponseBodyHeaderQueryContextRewrite(const AiSearchResponseBodyHeaderQueryContextRewrite &) = default ;
    AiSearchResponseBodyHeaderQueryContextRewrite(AiSearchResponseBodyHeaderQueryContextRewrite &&) = default ;
    AiSearchResponseBodyHeaderQueryContextRewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiSearchResponseBodyHeaderQueryContextRewrite() = default ;
    AiSearchResponseBodyHeaderQueryContextRewrite& operator=(const AiSearchResponseBodyHeaderQueryContextRewrite &) = default ;
    AiSearchResponseBodyHeaderQueryContextRewrite& operator=(AiSearchResponseBodyHeaderQueryContextRewrite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->timeRange_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline AiSearchResponseBodyHeaderQueryContextRewrite& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string timeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline AiSearchResponseBodyHeaderQueryContextRewrite& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
