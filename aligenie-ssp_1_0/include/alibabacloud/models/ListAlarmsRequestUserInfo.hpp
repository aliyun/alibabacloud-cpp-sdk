// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMSREQUESTUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMSREQUESTUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlarmsRequestUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmsRequestUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmsRequestUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
    };
    ListAlarmsRequestUserInfo() = default ;
    ListAlarmsRequestUserInfo(const ListAlarmsRequestUserInfo &) = default ;
    ListAlarmsRequestUserInfo(ListAlarmsRequestUserInfo &&) = default ;
    ListAlarmsRequestUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmsRequestUserInfo() = default ;
    ListAlarmsRequestUserInfo& operator=(const ListAlarmsRequestUserInfo &) = default ;
    ListAlarmsRequestUserInfo& operator=(ListAlarmsRequestUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->id_ != nullptr && this->idType_ != nullptr && this->organizationId_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline ListAlarmsRequestUserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline ListAlarmsRequestUserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAlarmsRequestUserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline ListAlarmsRequestUserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListAlarmsRequestUserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
