// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORS_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestMonitors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestMonitors& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(OperatorCode, operatorCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestMonitors& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(OperatorCode, operatorCode_);
    };
    CreateTimingSyntheticTaskRequestMonitors() = default ;
    CreateTimingSyntheticTaskRequestMonitors(const CreateTimingSyntheticTaskRequestMonitors &) = default ;
    CreateTimingSyntheticTaskRequestMonitors(CreateTimingSyntheticTaskRequestMonitors &&) = default ;
    CreateTimingSyntheticTaskRequestMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestMonitors() = default ;
    CreateTimingSyntheticTaskRequestMonitors& operator=(const CreateTimingSyntheticTaskRequestMonitors &) = default ;
    CreateTimingSyntheticTaskRequestMonitors& operator=(CreateTimingSyntheticTaskRequestMonitors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->clientType_ != nullptr && this->operatorCode_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline CreateTimingSyntheticTaskRequestMonitors& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitors& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // operatorCode Field Functions 
    bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
    void deleteOperatorCode() { this->operatorCode_ = nullptr;};
    inline string operatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
    inline CreateTimingSyntheticTaskRequestMonitors& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


  protected:
    // The city code.
    // 
    // This parameter is required.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The client type of the detection point. Valid values:
    // 
    // - 1: data center
    // - 2: Internet
    // - 3: mobile device
    // - 4: ECS instance
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> clientType_ = nullptr;
    // The carrier code.
    // 
    // This parameter is required.
    std::shared_ptr<string> operatorCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
