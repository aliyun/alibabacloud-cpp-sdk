// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddSasContainerWebDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddSasContainerWebDefenseRuleResponseBody() = default ;
    AddSasContainerWebDefenseRuleResponseBody(const AddSasContainerWebDefenseRuleResponseBody &) = default ;
    AddSasContainerWebDefenseRuleResponseBody(AddSasContainerWebDefenseRuleResponseBody &&) = default ;
    AddSasContainerWebDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSasContainerWebDefenseRuleResponseBody() = default ;
    AddSasContainerWebDefenseRuleResponseBody& operator=(const AddSasContainerWebDefenseRuleResponseBody &) = default ;
    AddSasContainerWebDefenseRuleResponseBody& operator=(AddSasContainerWebDefenseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t getData() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline AddSasContainerWebDefenseRuleResponseBody& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddSasContainerWebDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique value of the created rule.
    shared_ptr<int64_t> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
