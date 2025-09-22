// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONBYACTIVITYIDPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONBYACTIVITYIDPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QuerySessionByActivityIdPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionByActivityIdPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionByActivityIdPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
    };
    QuerySessionByActivityIdPopRequest() = default ;
    QuerySessionByActivityIdPopRequest(const QuerySessionByActivityIdPopRequest &) = default ;
    QuerySessionByActivityIdPopRequest(QuerySessionByActivityIdPopRequest &&) = default ;
    QuerySessionByActivityIdPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionByActivityIdPopRequest() = default ;
    QuerySessionByActivityIdPopRequest& operator=(const QuerySessionByActivityIdPopRequest &) = default ;
    QuerySessionByActivityIdPopRequest& operator=(QuerySessionByActivityIdPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline QuerySessionByActivityIdPopRequest& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> activityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
