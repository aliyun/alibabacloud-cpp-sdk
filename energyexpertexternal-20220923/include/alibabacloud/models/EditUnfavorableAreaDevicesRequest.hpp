// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITUNFAVORABLEAREADEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITUNFAVORABLEAREADEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class EditUnfavorableAreaDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditUnfavorableAreaDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(factoryId, factoryId_);
      DARABONBA_PTR_TO_JSON(hvacDeviceConfigVOList, hvacDeviceConfigVOList_);
      DARABONBA_PTR_TO_JSON(systemId, systemId_);
    };
    friend void from_json(const Darabonba::Json& j, EditUnfavorableAreaDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(factoryId, factoryId_);
      DARABONBA_PTR_FROM_JSON(hvacDeviceConfigVOList, hvacDeviceConfigVOList_);
      DARABONBA_PTR_FROM_JSON(systemId, systemId_);
    };
    EditUnfavorableAreaDevicesRequest() = default ;
    EditUnfavorableAreaDevicesRequest(const EditUnfavorableAreaDevicesRequest &) = default ;
    EditUnfavorableAreaDevicesRequest(EditUnfavorableAreaDevicesRequest &&) = default ;
    EditUnfavorableAreaDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditUnfavorableAreaDevicesRequest() = default ;
    EditUnfavorableAreaDevicesRequest& operator=(const EditUnfavorableAreaDevicesRequest &) = default ;
    EditUnfavorableAreaDevicesRequest& operator=(EditUnfavorableAreaDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->factoryId_ != nullptr
        && this->hvacDeviceConfigVOList_ != nullptr && this->systemId_ != nullptr; };
    // factoryId Field Functions 
    bool hasFactoryId() const { return this->factoryId_ != nullptr;};
    void deleteFactoryId() { this->factoryId_ = nullptr;};
    inline string factoryId() const { DARABONBA_PTR_GET_DEFAULT(factoryId_, "") };
    inline EditUnfavorableAreaDevicesRequest& setFactoryId(string factoryId) { DARABONBA_PTR_SET_VALUE(factoryId_, factoryId) };


    // hvacDeviceConfigVOList Field Functions 
    bool hasHvacDeviceConfigVOList() const { return this->hvacDeviceConfigVOList_ != nullptr;};
    void deleteHvacDeviceConfigVOList() { this->hvacDeviceConfigVOList_ = nullptr;};
    inline const vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList> & hvacDeviceConfigVOList() const { DARABONBA_PTR_GET_CONST(hvacDeviceConfigVOList_, vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList>) };
    inline vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList> hvacDeviceConfigVOList() { DARABONBA_PTR_GET(hvacDeviceConfigVOList_, vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList>) };
    inline EditUnfavorableAreaDevicesRequest& setHvacDeviceConfigVOList(const vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList> & hvacDeviceConfigVOList) { DARABONBA_PTR_SET_VALUE(hvacDeviceConfigVOList_, hvacDeviceConfigVOList) };
    inline EditUnfavorableAreaDevicesRequest& setHvacDeviceConfigVOList(vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList> && hvacDeviceConfigVOList) { DARABONBA_PTR_SET_RVALUE(hvacDeviceConfigVOList_, hvacDeviceConfigVOList) };


    // systemId Field Functions 
    bool hasSystemId() const { return this->systemId_ != nullptr;};
    void deleteSystemId() { this->systemId_ = nullptr;};
    inline string systemId() const { DARABONBA_PTR_GET_DEFAULT(systemId_, "") };
    inline EditUnfavorableAreaDevicesRequest& setSystemId(string systemId) { DARABONBA_PTR_SET_VALUE(systemId_, systemId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> factoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList>> hvacDeviceConfigVOList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
