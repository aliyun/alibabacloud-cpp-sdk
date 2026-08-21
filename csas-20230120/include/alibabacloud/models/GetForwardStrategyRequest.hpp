// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORWARDSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFORWARDSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetForwardStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetForwardStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardId, forwardId_);
    };
    friend void from_json(const Darabonba::Json& j, GetForwardStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardId, forwardId_);
    };
    GetForwardStrategyRequest() = default ;
    GetForwardStrategyRequest(const GetForwardStrategyRequest &) = default ;
    GetForwardStrategyRequest(GetForwardStrategyRequest &&) = default ;
    GetForwardStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetForwardStrategyRequest() = default ;
    GetForwardStrategyRequest& operator=(const GetForwardStrategyRequest &) = default ;
    GetForwardStrategyRequest& operator=(GetForwardStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardId_ == nullptr; };
    // forwardId Field Functions 
    bool hasForwardId() const { return this->forwardId_ != nullptr;};
    void deleteForwardId() { this->forwardId_ = nullptr;};
    inline string getForwardId() const { DARABONBA_PTR_GET_DEFAULT(forwardId_, "") };
    inline GetForwardStrategyRequest& setForwardId(string forwardId) { DARABONBA_PTR_SET_VALUE(forwardId_, forwardId) };


  protected:
    // The forwarding rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> forwardId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
