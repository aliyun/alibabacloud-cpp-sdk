// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEFUNCTIONINVOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEFUNCTIONINVOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DisableFunctionInvocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableFunctionInvocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(abortOngoingRequest, abortOngoingRequest_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, DisableFunctionInvocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(abortOngoingRequest, abortOngoingRequest_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    DisableFunctionInvocationRequest() = default ;
    DisableFunctionInvocationRequest(const DisableFunctionInvocationRequest &) = default ;
    DisableFunctionInvocationRequest(DisableFunctionInvocationRequest &&) = default ;
    DisableFunctionInvocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableFunctionInvocationRequest() = default ;
    DisableFunctionInvocationRequest& operator=(const DisableFunctionInvocationRequest &) = default ;
    DisableFunctionInvocationRequest& operator=(DisableFunctionInvocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abortOngoingRequest_ != nullptr
        && this->reason_ != nullptr; };
    // abortOngoingRequest Field Functions 
    bool hasAbortOngoingRequest() const { return this->abortOngoingRequest_ != nullptr;};
    void deleteAbortOngoingRequest() { this->abortOngoingRequest_ = nullptr;};
    inline bool abortOngoingRequest() const { DARABONBA_PTR_GET_DEFAULT(abortOngoingRequest_, false) };
    inline DisableFunctionInvocationRequest& setAbortOngoingRequest(bool abortOngoingRequest) { DARABONBA_PTR_SET_VALUE(abortOngoingRequest_, abortOngoingRequest) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DisableFunctionInvocationRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // Specifies whether to immediately terminate all ongoing requests.
    std::shared_ptr<bool> abortOngoingRequest_ = nullptr;
    // The reason for disabling the function\\"s invocation.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
