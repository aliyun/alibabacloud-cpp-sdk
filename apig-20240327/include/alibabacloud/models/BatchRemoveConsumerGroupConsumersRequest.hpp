// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREMOVECONSUMERGROUPCONSUMERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREMOVECONSUMERGROUPCONSUMERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchRemoveConsumerGroupConsumersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRemoveConsumerGroupConsumersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerIds, consumerIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRemoveConsumerGroupConsumersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerIds, consumerIds_);
    };
    BatchRemoveConsumerGroupConsumersRequest() = default ;
    BatchRemoveConsumerGroupConsumersRequest(const BatchRemoveConsumerGroupConsumersRequest &) = default ;
    BatchRemoveConsumerGroupConsumersRequest(BatchRemoveConsumerGroupConsumersRequest &&) = default ;
    BatchRemoveConsumerGroupConsumersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRemoveConsumerGroupConsumersRequest() = default ;
    BatchRemoveConsumerGroupConsumersRequest& operator=(const BatchRemoveConsumerGroupConsumersRequest &) = default ;
    BatchRemoveConsumerGroupConsumersRequest& operator=(BatchRemoveConsumerGroupConsumersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerIds_ == nullptr; };
    // consumerIds Field Functions 
    bool hasConsumerIds() const { return this->consumerIds_ != nullptr;};
    void deleteConsumerIds() { this->consumerIds_ = nullptr;};
    inline const vector<string> & getConsumerIds() const { DARABONBA_PTR_GET_CONST(consumerIds_, vector<string>) };
    inline vector<string> getConsumerIds() { DARABONBA_PTR_GET(consumerIds_, vector<string>) };
    inline BatchRemoveConsumerGroupConsumersRequest& setConsumerIds(const vector<string> & consumerIds) { DARABONBA_PTR_SET_VALUE(consumerIds_, consumerIds) };
    inline BatchRemoveConsumerGroupConsumersRequest& setConsumerIds(vector<string> && consumerIds) { DARABONBA_PTR_SET_RVALUE(consumerIds_, consumerIds) };


  protected:
    shared_ptr<vector<string>> consumerIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
