// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEMCPSTATE_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEMCPSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class TemplateMcpState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateMcpState& obj) { 
      DARABONBA_PTR_TO_JSON(accessEndpoint, accessEndpoint_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateMcpState& obj) { 
      DARABONBA_PTR_FROM_JSON(accessEndpoint, accessEndpoint_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
    };
    TemplateMcpState() = default ;
    TemplateMcpState(const TemplateMcpState &) = default ;
    TemplateMcpState(TemplateMcpState &&) = default ;
    TemplateMcpState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateMcpState() = default ;
    TemplateMcpState& operator=(const TemplateMcpState &) = default ;
    TemplateMcpState& operator=(TemplateMcpState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessEndpoint_ == nullptr
        && return this->status_ == nullptr && return this->statusReason_ == nullptr; };
    // accessEndpoint Field Functions 
    bool hasAccessEndpoint() const { return this->accessEndpoint_ != nullptr;};
    void deleteAccessEndpoint() { this->accessEndpoint_ = nullptr;};
    inline string accessEndpoint() const { DARABONBA_PTR_GET_DEFAULT(accessEndpoint_, "") };
    inline TemplateMcpState& setAccessEndpoint(string accessEndpoint) { DARABONBA_PTR_SET_VALUE(accessEndpoint_, accessEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TemplateMcpState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline TemplateMcpState& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    std::shared_ptr<string> accessEndpoint_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
