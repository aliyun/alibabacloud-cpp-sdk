// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPMUTEREQUESTOPERATIONSVALUE_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPMUTEREQUESTOPERATIONSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipMuteRequestOperationsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipMuteRequestOperationsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipMuteRequestOperationsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    RtcSipMuteRequestOperationsValue() = default ;
    RtcSipMuteRequestOperationsValue(const RtcSipMuteRequestOperationsValue &) = default ;
    RtcSipMuteRequestOperationsValue(RtcSipMuteRequestOperationsValue &&) = default ;
    RtcSipMuteRequestOperationsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipMuteRequestOperationsValue() = default ;
    RtcSipMuteRequestOperationsValue& operator=(const RtcSipMuteRequestOperationsValue &) = default ;
    RtcSipMuteRequestOperationsValue& operator=(RtcSipMuteRequestOperationsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RtcSipMuteRequestOperationsValue& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
