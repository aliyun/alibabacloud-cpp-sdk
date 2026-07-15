// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDCONSUMERGROUPCONSUMERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDCONSUMERGROUPCONSUMERSREQUEST_HPP_
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
  class BatchAddConsumerGroupConsumersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddConsumerGroupConsumersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerIds, consumerIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddConsumerGroupConsumersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerIds, consumerIds_);
    };
    BatchAddConsumerGroupConsumersRequest() = default ;
    BatchAddConsumerGroupConsumersRequest(const BatchAddConsumerGroupConsumersRequest &) = default ;
    BatchAddConsumerGroupConsumersRequest(BatchAddConsumerGroupConsumersRequest &&) = default ;
    BatchAddConsumerGroupConsumersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddConsumerGroupConsumersRequest() = default ;
    BatchAddConsumerGroupConsumersRequest& operator=(const BatchAddConsumerGroupConsumersRequest &) = default ;
    BatchAddConsumerGroupConsumersRequest& operator=(BatchAddConsumerGroupConsumersRequest &&) = default ;
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
    inline BatchAddConsumerGroupConsumersRequest& setConsumerIds(const vector<string> & consumerIds) { DARABONBA_PTR_SET_VALUE(consumerIds_, consumerIds) };
    inline BatchAddConsumerGroupConsumersRequest& setConsumerIds(vector<string> && consumerIds) { DARABONBA_PTR_SET_RVALUE(consumerIds_, consumerIds) };


  protected:
    shared_ptr<vector<string>> consumerIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
