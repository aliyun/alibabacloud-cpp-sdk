// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKNFCBINDPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKNFCBINDPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class CheckNFCBindPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckNFCBindPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(NfcId, nfcId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckNFCBindPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(NfcId, nfcId_);
    };
    CheckNFCBindPopRequest() = default ;
    CheckNFCBindPopRequest(const CheckNFCBindPopRequest &) = default ;
    CheckNFCBindPopRequest(CheckNFCBindPopRequest &&) = default ;
    CheckNFCBindPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckNFCBindPopRequest() = default ;
    CheckNFCBindPopRequest& operator=(const CheckNFCBindPopRequest &) = default ;
    CheckNFCBindPopRequest& operator=(CheckNFCBindPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->nfcId_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline CheckNFCBindPopRequest& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // nfcId Field Functions 
    bool hasNfcId() const { return this->nfcId_ != nullptr;};
    void deleteNfcId() { this->nfcId_ = nullptr;};
    inline string nfcId() const { DARABONBA_PTR_GET_DEFAULT(nfcId_, "") };
    inline CheckNFCBindPopRequest& setNfcId(string nfcId) { DARABONBA_PTR_SET_VALUE(nfcId_, nfcId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> activityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nfcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
