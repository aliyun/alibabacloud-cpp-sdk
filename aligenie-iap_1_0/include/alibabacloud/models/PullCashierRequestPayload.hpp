// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLCASHIERREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_PULLCASHIERREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PullCashierRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullCashierRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
    };
    friend void from_json(const Darabonba::Json& j, PullCashierRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(originUuid, originUuid_);
    };
    PullCashierRequestPayload() = default ;
    PullCashierRequestPayload(const PullCashierRequestPayload &) = default ;
    PullCashierRequestPayload(PullCashierRequestPayload &&) = default ;
    PullCashierRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullCashierRequestPayload() = default ;
    PullCashierRequestPayload& operator=(const PullCashierRequestPayload &) = default ;
    PullCashierRequestPayload& operator=(PullCashierRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originUuid_ != nullptr; };
    // originUuid Field Functions 
    bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
    void deleteOriginUuid() { this->originUuid_ = nullptr;};
    inline string originUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
    inline PullCashierRequestPayload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


  protected:
    std::shared_ptr<string> originUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
