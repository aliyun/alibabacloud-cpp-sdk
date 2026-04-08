// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AINETWORKCONFIGSEARCHENGINE_HPP_
#define ALIBABACLOUD_MODELS_AINETWORKCONFIGSEARCHENGINE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiNetworkConfigSearchEngine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiNetworkConfigSearchEngine& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(contentMode, contentMode_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(optionArgs, optionArgs_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
      DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AiNetworkConfigSearchEngine& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(contentMode, contentMode_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(optionArgs, optionArgs_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
      DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AiNetworkConfigSearchEngine() = default ;
    AiNetworkConfigSearchEngine(const AiNetworkConfigSearchEngine &) = default ;
    AiNetworkConfigSearchEngine(AiNetworkConfigSearchEngine &&) = default ;
    AiNetworkConfigSearchEngine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiNetworkConfigSearchEngine() = default ;
    AiNetworkConfigSearchEngine& operator=(const AiNetworkConfigSearchEngine &) = default ;
    AiNetworkConfigSearchEngine& operator=(AiNetworkConfigSearchEngine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->contentMode_ == nullptr && this->count_ == nullptr && this->endpoint_ == nullptr && this->industry_ == nullptr && this->optionArgs_ == nullptr
        && this->start_ == nullptr && this->timeRange_ == nullptr && this->timeoutMillisecond_ == nullptr && this->type_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline AiNetworkConfigSearchEngine& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contentMode Field Functions 
    bool hasContentMode() const { return this->contentMode_ != nullptr;};
    void deleteContentMode() { this->contentMode_ = nullptr;};
    inline string getContentMode() const { DARABONBA_PTR_GET_DEFAULT(contentMode_, "") };
    inline AiNetworkConfigSearchEngine& setContentMode(string contentMode) { DARABONBA_PTR_SET_VALUE(contentMode_, contentMode) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline AiNetworkConfigSearchEngine& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline AiNetworkConfigSearchEngine& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline AiNetworkConfigSearchEngine& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // optionArgs Field Functions 
    bool hasOptionArgs() const { return this->optionArgs_ != nullptr;};
    void deleteOptionArgs() { this->optionArgs_ = nullptr;};
    inline const map<string, string> & getOptionArgs() const { DARABONBA_PTR_GET_CONST(optionArgs_, map<string, string>) };
    inline map<string, string> getOptionArgs() { DARABONBA_PTR_GET(optionArgs_, map<string, string>) };
    inline AiNetworkConfigSearchEngine& setOptionArgs(const map<string, string> & optionArgs) { DARABONBA_PTR_SET_VALUE(optionArgs_, optionArgs) };
    inline AiNetworkConfigSearchEngine& setOptionArgs(map<string, string> && optionArgs) { DARABONBA_PTR_SET_RVALUE(optionArgs_, optionArgs) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline AiNetworkConfigSearchEngine& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline AiNetworkConfigSearchEngine& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


    // timeoutMillisecond Field Functions 
    bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
    void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
    inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
    inline AiNetworkConfigSearchEngine& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AiNetworkConfigSearchEngine& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> contentMode_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<map<string, string>> optionArgs_ {};
    shared_ptr<int32_t> start_ {};
    shared_ptr<string> timeRange_ {};
    shared_ptr<int32_t> timeoutMillisecond_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
