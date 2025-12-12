// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATORBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_OPERATORBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OperatorBasicInfoParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class OperatorBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperatorBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Oid, oid_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, OperatorBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Oid, oid_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    OperatorBasicInfo() = default ;
    OperatorBasicInfo(const OperatorBasicInfo &) = default ;
    OperatorBasicInfo(OperatorBasicInfo &&) = default ;
    OperatorBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperatorBasicInfo() = default ;
    OperatorBasicInfo& operator=(const OperatorBasicInfo &) = default ;
    OperatorBasicInfo& operator=(OperatorBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->oid_ == nullptr && return this->param_ == nullptr && return this->qualityCheckType_ == nullptr && return this->type_ == nullptr
        && return this->userGroup_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline OperatorBasicInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OperatorBasicInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oid Field Functions 
    bool hasOid() const { return this->oid_ != nullptr;};
    void deleteOid() { this->oid_ = nullptr;};
    inline string oid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
    inline OperatorBasicInfo& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const OperatorBasicInfoParam & param() const { DARABONBA_PTR_GET_CONST(param_, OperatorBasicInfoParam) };
    inline OperatorBasicInfoParam param() { DARABONBA_PTR_GET(param_, OperatorBasicInfoParam) };
    inline OperatorBasicInfo& setParam(const OperatorBasicInfoParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline OperatorBasicInfo& setParam(OperatorBasicInfoParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // qualityCheckType Field Functions 
    bool hasQualityCheckType() const { return this->qualityCheckType_ != nullptr;};
    void deleteQualityCheckType() { this->qualityCheckType_ = nullptr;};
    inline int32_t qualityCheckType() const { DARABONBA_PTR_GET_DEFAULT(qualityCheckType_, 0) };
    inline OperatorBasicInfo& setQualityCheckType(int32_t qualityCheckType) { DARABONBA_PTR_SET_VALUE(qualityCheckType_, qualityCheckType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperatorBasicInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string userGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline OperatorBasicInfo& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> oid_ = nullptr;
    std::shared_ptr<OperatorBasicInfoParam> param_ = nullptr;
    std::shared_ptr<int32_t> qualityCheckType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
