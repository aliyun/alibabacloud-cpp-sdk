// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDORIGINALQUERY_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDORIGINALQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedOriginalQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedOriginalQuery& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedOriginalQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
    };
    UnifiedOriginalQuery() = default ;
    UnifiedOriginalQuery(const UnifiedOriginalQuery &) = default ;
    UnifiedOriginalQuery(UnifiedOriginalQuery &&) = default ;
    UnifiedOriginalQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedOriginalQuery() = default ;
    UnifiedOriginalQuery& operator=(const UnifiedOriginalQuery &) = default ;
    UnifiedOriginalQuery& operator=(UnifiedOriginalQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr
        && return this->timeRange_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline UnifiedOriginalQuery& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string timeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline UnifiedOriginalQuery& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
