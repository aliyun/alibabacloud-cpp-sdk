// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATARESPONSEBODYPUSHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATARESPONSEBODYPUSHRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushApplicationDataResponseBodyPushResultsPushResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PushApplicationDataResponseBodyPushResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushApplicationDataResponseBodyPushResults& obj) { 
      DARABONBA_PTR_TO_JSON(PushResult, pushResult_);
    };
    friend void from_json(const Darabonba::Json& j, PushApplicationDataResponseBodyPushResults& obj) { 
      DARABONBA_PTR_FROM_JSON(PushResult, pushResult_);
    };
    PushApplicationDataResponseBodyPushResults() = default ;
    PushApplicationDataResponseBodyPushResults(const PushApplicationDataResponseBodyPushResults &) = default ;
    PushApplicationDataResponseBodyPushResults(PushApplicationDataResponseBodyPushResults &&) = default ;
    PushApplicationDataResponseBodyPushResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushApplicationDataResponseBodyPushResults() = default ;
    PushApplicationDataResponseBodyPushResults& operator=(const PushApplicationDataResponseBodyPushResults &) = default ;
    PushApplicationDataResponseBodyPushResults& operator=(PushApplicationDataResponseBodyPushResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushResult_ == nullptr; };
    // pushResult Field Functions 
    bool hasPushResult() const { return this->pushResult_ != nullptr;};
    void deletePushResult() { this->pushResult_ = nullptr;};
    inline const vector<Models::PushApplicationDataResponseBodyPushResultsPushResult> & pushResult() const { DARABONBA_PTR_GET_CONST(pushResult_, vector<Models::PushApplicationDataResponseBodyPushResultsPushResult>) };
    inline vector<Models::PushApplicationDataResponseBodyPushResultsPushResult> pushResult() { DARABONBA_PTR_GET(pushResult_, vector<Models::PushApplicationDataResponseBodyPushResultsPushResult>) };
    inline PushApplicationDataResponseBodyPushResults& setPushResult(const vector<Models::PushApplicationDataResponseBodyPushResultsPushResult> & pushResult) { DARABONBA_PTR_SET_VALUE(pushResult_, pushResult) };
    inline PushApplicationDataResponseBodyPushResults& setPushResult(vector<Models::PushApplicationDataResponseBodyPushResultsPushResult> && pushResult) { DARABONBA_PTR_SET_RVALUE(pushResult_, pushResult) };


  protected:
    std::shared_ptr<vector<Models::PushApplicationDataResponseBodyPushResultsPushResult>> pushResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
