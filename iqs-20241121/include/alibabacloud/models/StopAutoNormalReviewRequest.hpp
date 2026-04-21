// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPAUTONORMALREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPAUTONORMALREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class StopAutoNormalReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAutoNormalReviewRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StopAutoNormalReviewRequest& obj) { 
      (void)j; (void)obj; 
    };
    StopAutoNormalReviewRequest() = default ;
    StopAutoNormalReviewRequest(const StopAutoNormalReviewRequest &) = default ;
    StopAutoNormalReviewRequest(StopAutoNormalReviewRequest &&) = default ;
    StopAutoNormalReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAutoNormalReviewRequest() = default ;
    StopAutoNormalReviewRequest& operator=(const StopAutoNormalReviewRequest &) = default ;
    StopAutoNormalReviewRequest& operator=(StopAutoNormalReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
