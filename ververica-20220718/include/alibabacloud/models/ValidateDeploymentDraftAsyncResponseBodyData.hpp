// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDEPLOYMENTDRAFTASYNCRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDEPLOYMENTDRAFTASYNCRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ValidateDeploymentDraftAsyncResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDeploymentDraftAsyncResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ticketId, ticketId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDeploymentDraftAsyncResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ticketId, ticketId_);
    };
    ValidateDeploymentDraftAsyncResponseBodyData() = default ;
    ValidateDeploymentDraftAsyncResponseBodyData(const ValidateDeploymentDraftAsyncResponseBodyData &) = default ;
    ValidateDeploymentDraftAsyncResponseBodyData(ValidateDeploymentDraftAsyncResponseBodyData &&) = default ;
    ValidateDeploymentDraftAsyncResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDeploymentDraftAsyncResponseBodyData() = default ;
    ValidateDeploymentDraftAsyncResponseBodyData& operator=(const ValidateDeploymentDraftAsyncResponseBodyData &) = default ;
    ValidateDeploymentDraftAsyncResponseBodyData& operator=(ValidateDeploymentDraftAsyncResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ticketId_ == nullptr; };
    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ValidateDeploymentDraftAsyncResponseBodyData& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


  protected:
    std::shared_ptr<string> ticketId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
