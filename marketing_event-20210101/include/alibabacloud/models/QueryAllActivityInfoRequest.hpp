// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLACTIVITYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLACTIVITYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QueryAllActivityInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllActivityInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllActivityInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
    };
    QueryAllActivityInfoRequest() = default ;
    QueryAllActivityInfoRequest(const QueryAllActivityInfoRequest &) = default ;
    QueryAllActivityInfoRequest(QueryAllActivityInfoRequest &&) = default ;
    QueryAllActivityInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllActivityInfoRequest() = default ;
    QueryAllActivityInfoRequest& operator=(const QueryAllActivityInfoRequest &) = default ;
    QueryAllActivityInfoRequest& operator=(QueryAllActivityInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline QueryAllActivityInfoRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> activityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
