// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class CancelRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CancelRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    CancelRunRequest() = default ;
    CancelRunRequest(const CancelRunRequest &) = default ;
    CancelRunRequest(CancelRunRequest &&) = default ;
    CancelRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelRunRequest() = default ;
    CancelRunRequest& operator=(const CancelRunRequest &) = default ;
    CancelRunRequest& operator=(CancelRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reason_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CancelRunRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The reason for the cancellation. The value must be 1 to 1,024 characters in length.
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
