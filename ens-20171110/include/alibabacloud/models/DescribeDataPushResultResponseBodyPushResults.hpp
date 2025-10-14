// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODYPUSHRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataPushResultResponseBodyPushResultsPushResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataPushResultResponseBodyPushResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataPushResultResponseBodyPushResults& obj) { 
      DARABONBA_PTR_TO_JSON(PushResult, pushResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataPushResultResponseBodyPushResults& obj) { 
      DARABONBA_PTR_FROM_JSON(PushResult, pushResult_);
    };
    DescribeDataPushResultResponseBodyPushResults() = default ;
    DescribeDataPushResultResponseBodyPushResults(const DescribeDataPushResultResponseBodyPushResults &) = default ;
    DescribeDataPushResultResponseBodyPushResults(DescribeDataPushResultResponseBodyPushResults &&) = default ;
    DescribeDataPushResultResponseBodyPushResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataPushResultResponseBodyPushResults() = default ;
    DescribeDataPushResultResponseBodyPushResults& operator=(const DescribeDataPushResultResponseBodyPushResults &) = default ;
    DescribeDataPushResultResponseBodyPushResults& operator=(DescribeDataPushResultResponseBodyPushResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushResult_ == nullptr; };
    // pushResult Field Functions 
    bool hasPushResult() const { return this->pushResult_ != nullptr;};
    void deletePushResult() { this->pushResult_ = nullptr;};
    inline const vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResult> & pushResult() const { DARABONBA_PTR_GET_CONST(pushResult_, vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResult>) };
    inline vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResult> pushResult() { DARABONBA_PTR_GET(pushResult_, vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResult>) };
    inline DescribeDataPushResultResponseBodyPushResults& setPushResult(const vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResult> & pushResult) { DARABONBA_PTR_SET_VALUE(pushResult_, pushResult) };
    inline DescribeDataPushResultResponseBodyPushResults& setPushResult(vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResult> && pushResult) { DARABONBA_PTR_SET_RVALUE(pushResult_, pushResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataPushResultResponseBodyPushResultsPushResult>> pushResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
