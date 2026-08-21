// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEZONERECORDWEIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEZONERECORDWEIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class UpdateZoneRecordWeightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateZoneRecordWeightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateZoneRecordWeightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateZoneRecordWeightRequest() = default ;
    UpdateZoneRecordWeightRequest(const UpdateZoneRecordWeightRequest &) = default ;
    UpdateZoneRecordWeightRequest(UpdateZoneRecordWeightRequest &&) = default ;
    UpdateZoneRecordWeightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateZoneRecordWeightRequest() = default ;
    UpdateZoneRecordWeightRequest& operator=(const UpdateZoneRecordWeightRequest &) = default ;
    UpdateZoneRecordWeightRequest& operator=(UpdateZoneRecordWeightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->lang_ == nullptr && this->recordId_ == nullptr && this->weight_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateZoneRecordWeightRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateZoneRecordWeightRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline UpdateZoneRecordWeightRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateZoneRecordWeightRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The client token that is used to ensure the idempotence of the request. If you do not specify this parameter, the system automatically generates a value. To ensure uniqueness across different requests, the value cannot exceed 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The ID of the DNS record.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // The updated weight value `[0,100]`.
    // 
    // This parameter is required.
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
