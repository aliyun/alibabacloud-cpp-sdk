// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRecursionRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecursionRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecursionRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateRecursionRecordRequest() = default ;
    UpdateRecursionRecordRequest(const UpdateRecursionRecordRequest &) = default ;
    UpdateRecursionRecordRequest(UpdateRecursionRecordRequest &&) = default ;
    UpdateRecursionRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecursionRecordRequest() = default ;
    UpdateRecursionRecordRequest& operator=(const UpdateRecursionRecordRequest &) = default ;
    UpdateRecursionRecordRequest& operator=(UpdateRecursionRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->priority_ == nullptr && this->recordId_ == nullptr && this->requestSource_ == nullptr && this->rr_ == nullptr && this->ttl_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr && this->weight_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRecursionRecordRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateRecursionRecordRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline UpdateRecursionRecordRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline string getRequestSource() const { DARABONBA_PTR_GET_DEFAULT(requestSource_, "") };
    inline UpdateRecursionRecordRequest& setRequestSource(string requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline UpdateRecursionRecordRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateRecursionRecordRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRecursionRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateRecursionRecordRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateRecursionRecordRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> recordId_ {};
    shared_ptr<string> requestSource_ {};
    shared_ptr<string> rr_ {};
    shared_ptr<int32_t> ttl_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> value_ {};
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
