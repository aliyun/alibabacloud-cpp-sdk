// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MULTIMODALGUARDWS_MODELS_MODELREQUESTMESSAGEEVENT_HPP_
#define ALIBABACLOUD_MULTIMODALGUARDWS_MODELS_MODELREQUESTMESSAGEEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace MultiModalGuardWs
{
namespace Models
{
  class ModelRequestMessageEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRequestMessageEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Sync, sync_);
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRequestMessageEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Sync, sync_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ModelRequestMessageEvent() = default ;
    ModelRequestMessageEvent(const ModelRequestMessageEvent &) = default ;
    ModelRequestMessageEvent(ModelRequestMessageEvent &&) = default ;
    ModelRequestMessageEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRequestMessageEvent() = default ;
    ModelRequestMessageEvent& operator=(const ModelRequestMessageEvent &) = default ;
    ModelRequestMessageEvent& operator=(ModelRequestMessageEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->service_ == nullptr
        && this->serviceParameters_ == nullptr && this->dataType_ == nullptr && this->sync_ == nullptr && this->data_ == nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ModelRequestMessageEvent& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ModelRequestMessageEvent& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ModelRequestMessageEvent& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // sync Field Functions 
    bool hasSync() const { return this->sync_ != nullptr;};
    void deleteSync() { this->sync_ = nullptr;};
    inline bool getSync() const { DARABONBA_PTR_GET_DEFAULT(sync_, false) };
    inline ModelRequestMessageEvent& setSync(bool sync) { DARABONBA_PTR_SET_VALUE(sync_, sync) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ModelRequestMessageEvent& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    shared_ptr<string> service_ {};
    shared_ptr<string> serviceParameters_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<bool> sync_ {};
    shared_ptr<string> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
} // namespace MultiModalGuardWs
#endif
