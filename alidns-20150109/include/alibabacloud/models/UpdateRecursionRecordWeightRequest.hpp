// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDWEIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECURSIONRECORDWEIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRecursionRecordWeightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecursionRecordWeightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecursionRecordWeightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateRecursionRecordWeightRequest() = default ;
    UpdateRecursionRecordWeightRequest(const UpdateRecursionRecordWeightRequest &) = default ;
    UpdateRecursionRecordWeightRequest(UpdateRecursionRecordWeightRequest &&) = default ;
    UpdateRecursionRecordWeightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecursionRecordWeightRequest() = default ;
    UpdateRecursionRecordWeightRequest& operator=(const UpdateRecursionRecordWeightRequest &) = default ;
    UpdateRecursionRecordWeightRequest& operator=(UpdateRecursionRecordWeightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->recordId_ == nullptr && this->weight_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRecursionRecordWeightRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline UpdateRecursionRecordWeightRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateRecursionRecordWeightRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> recordId_ {};
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
