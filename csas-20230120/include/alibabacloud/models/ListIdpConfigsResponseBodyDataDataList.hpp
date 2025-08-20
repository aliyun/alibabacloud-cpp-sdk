// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODYDATADATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODYDATADATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListIdpConfigsResponseBodyDataDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdpConfigsResponseBodyDataDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mfa, mfa_);
      DARABONBA_PTR_TO_JSON(MobileLoginType, mobileLoginType_);
      DARABONBA_PTR_TO_JSON(MobileMfaConfigType, mobileMfaConfigType_);
      DARABONBA_PTR_TO_JSON(MultiIdpInfo, multiIdpInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PcLoginType, pcLoginType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdpConfigsResponseBodyDataDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mfa, mfa_);
      DARABONBA_PTR_FROM_JSON(MobileLoginType, mobileLoginType_);
      DARABONBA_PTR_FROM_JSON(MobileMfaConfigType, mobileMfaConfigType_);
      DARABONBA_PTR_FROM_JSON(MultiIdpInfo, multiIdpInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PcLoginType, pcLoginType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListIdpConfigsResponseBodyDataDataList() = default ;
    ListIdpConfigsResponseBodyDataDataList(const ListIdpConfigsResponseBodyDataDataList &) = default ;
    ListIdpConfigsResponseBodyDataDataList(ListIdpConfigsResponseBodyDataDataList &&) = default ;
    ListIdpConfigsResponseBodyDataDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdpConfigsResponseBodyDataDataList() = default ;
    ListIdpConfigsResponseBodyDataDataList& operator=(const ListIdpConfigsResponseBodyDataDataList &) = default ;
    ListIdpConfigsResponseBodyDataDataList& operator=(ListIdpConfigsResponseBodyDataDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->id_ != nullptr && this->mfa_ != nullptr && this->mobileLoginType_ != nullptr && this->mobileMfaConfigType_ != nullptr && this->multiIdpInfo_ != nullptr
        && this->name_ != nullptr && this->pcLoginType_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mfa Field Functions 
    bool hasMfa() const { return this->mfa_ != nullptr;};
    void deleteMfa() { this->mfa_ = nullptr;};
    inline string mfa() const { DARABONBA_PTR_GET_DEFAULT(mfa_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setMfa(string mfa) { DARABONBA_PTR_SET_VALUE(mfa_, mfa) };


    // mobileLoginType Field Functions 
    bool hasMobileLoginType() const { return this->mobileLoginType_ != nullptr;};
    void deleteMobileLoginType() { this->mobileLoginType_ = nullptr;};
    inline string mobileLoginType() const { DARABONBA_PTR_GET_DEFAULT(mobileLoginType_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setMobileLoginType(string mobileLoginType) { DARABONBA_PTR_SET_VALUE(mobileLoginType_, mobileLoginType) };


    // mobileMfaConfigType Field Functions 
    bool hasMobileMfaConfigType() const { return this->mobileMfaConfigType_ != nullptr;};
    void deleteMobileMfaConfigType() { this->mobileMfaConfigType_ = nullptr;};
    inline string mobileMfaConfigType() const { DARABONBA_PTR_GET_DEFAULT(mobileMfaConfigType_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setMobileMfaConfigType(string mobileMfaConfigType) { DARABONBA_PTR_SET_VALUE(mobileMfaConfigType_, mobileMfaConfigType) };


    // multiIdpInfo Field Functions 
    bool hasMultiIdpInfo() const { return this->multiIdpInfo_ != nullptr;};
    void deleteMultiIdpInfo() { this->multiIdpInfo_ = nullptr;};
    inline string multiIdpInfo() const { DARABONBA_PTR_GET_DEFAULT(multiIdpInfo_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setMultiIdpInfo(string multiIdpInfo) { DARABONBA_PTR_SET_VALUE(multiIdpInfo_, multiIdpInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pcLoginType Field Functions 
    bool hasPcLoginType() const { return this->pcLoginType_ != nullptr;};
    void deletePcLoginType() { this->pcLoginType_ = nullptr;};
    inline string pcLoginType() const { DARABONBA_PTR_GET_DEFAULT(pcLoginType_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setPcLoginType(string pcLoginType) { DARABONBA_PTR_SET_VALUE(pcLoginType_, pcLoginType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListIdpConfigsResponseBodyDataDataList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> mfa_ = nullptr;
    std::shared_ptr<string> mobileLoginType_ = nullptr;
    std::shared_ptr<string> mobileMfaConfigType_ = nullptr;
    std::shared_ptr<string> multiIdpInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pcLoginType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
