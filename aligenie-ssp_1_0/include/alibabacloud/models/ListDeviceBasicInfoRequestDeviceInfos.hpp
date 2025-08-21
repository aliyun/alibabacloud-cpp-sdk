// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOREQUESTDEVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOREQUESTDEVICEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceBasicInfoRequestDeviceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceBasicInfoRequestDeviceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceBasicInfoRequestDeviceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
    };
    ListDeviceBasicInfoRequestDeviceInfos() = default ;
    ListDeviceBasicInfoRequestDeviceInfos(const ListDeviceBasicInfoRequestDeviceInfos &) = default ;
    ListDeviceBasicInfoRequestDeviceInfos(ListDeviceBasicInfoRequestDeviceInfos &&) = default ;
    ListDeviceBasicInfoRequestDeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceBasicInfoRequestDeviceInfos() = default ;
    ListDeviceBasicInfoRequestDeviceInfos& operator=(const ListDeviceBasicInfoRequestDeviceInfos &) = default ;
    ListDeviceBasicInfoRequestDeviceInfos& operator=(ListDeviceBasicInfoRequestDeviceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->idType_ != nullptr && this->ids_ != nullptr && this->organizationId_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline ListDeviceBasicInfoRequestDeviceInfos& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline ListDeviceBasicInfoRequestDeviceInfos& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline ListDeviceBasicInfoRequestDeviceInfos& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> ids() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline ListDeviceBasicInfoRequestDeviceInfos& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline ListDeviceBasicInfoRequestDeviceInfos& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListDeviceBasicInfoRequestDeviceInfos& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<vector<string>> ids_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
