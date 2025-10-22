// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FAILDEMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FAILDEMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class FailDemandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FailDemandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, FailDemandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    FailDemandRequest() = default ;
    FailDemandRequest(const FailDemandRequest &) = default ;
    FailDemandRequest(FailDemandRequest &&) = default ;
    FailDemandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FailDemandRequest() = default ;
    FailDemandRequest& operator=(const FailDemandRequest &) = default ;
    FailDemandRequest& operator=(FailDemandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->message_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline FailDemandRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FailDemandRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
