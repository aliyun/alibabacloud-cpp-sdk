// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENEBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENEBASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetOpenJMeterSceneResponseBodySceneBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenJMeterSceneResponseBodySceneBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateName, createName_);
      DARABONBA_PTR_TO_JSON(ModifyName, modifyName_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Principal, principal_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenJMeterSceneResponseBodySceneBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateName, createName_);
      DARABONBA_PTR_FROM_JSON(ModifyName, modifyName_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Principal, principal_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    GetOpenJMeterSceneResponseBodySceneBaseInfo() = default ;
    GetOpenJMeterSceneResponseBodySceneBaseInfo(const GetOpenJMeterSceneResponseBodySceneBaseInfo &) = default ;
    GetOpenJMeterSceneResponseBodySceneBaseInfo(GetOpenJMeterSceneResponseBodySceneBaseInfo &&) = default ;
    GetOpenJMeterSceneResponseBodySceneBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenJMeterSceneResponseBodySceneBaseInfo() = default ;
    GetOpenJMeterSceneResponseBodySceneBaseInfo& operator=(const GetOpenJMeterSceneResponseBodySceneBaseInfo &) = default ;
    GetOpenJMeterSceneResponseBodySceneBaseInfo& operator=(GetOpenJMeterSceneResponseBodySceneBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createName_ == nullptr
        && return this->modifyName_ == nullptr && return this->operateType_ == nullptr && return this->principal_ == nullptr && return this->remark_ == nullptr && return this->resource_ == nullptr; };
    // createName Field Functions 
    bool hasCreateName() const { return this->createName_ != nullptr;};
    void deleteCreateName() { this->createName_ = nullptr;};
    inline string createName() const { DARABONBA_PTR_GET_DEFAULT(createName_, "") };
    inline GetOpenJMeterSceneResponseBodySceneBaseInfo& setCreateName(string createName) { DARABONBA_PTR_SET_VALUE(createName_, createName) };


    // modifyName Field Functions 
    bool hasModifyName() const { return this->modifyName_ != nullptr;};
    void deleteModifyName() { this->modifyName_ = nullptr;};
    inline string modifyName() const { DARABONBA_PTR_GET_DEFAULT(modifyName_, "") };
    inline GetOpenJMeterSceneResponseBodySceneBaseInfo& setModifyName(string modifyName) { DARABONBA_PTR_SET_VALUE(modifyName_, modifyName) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline GetOpenJMeterSceneResponseBodySceneBaseInfo& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline string principal() const { DARABONBA_PTR_GET_DEFAULT(principal_, "") };
    inline GetOpenJMeterSceneResponseBodySceneBaseInfo& setPrincipal(string principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetOpenJMeterSceneResponseBodySceneBaseInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline GetOpenJMeterSceneResponseBodySceneBaseInfo& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // The name of the creator.
    std::shared_ptr<string> createName_ = nullptr;
    // The name of the modifier.
    std::shared_ptr<string> modifyName_ = nullptr;
    // The type of the operation.
    std::shared_ptr<string> operateType_ = nullptr;
    // The person who takes charge of the performance testing.
    std::shared_ptr<string> principal_ = nullptr;
    // The comment.
    std::shared_ptr<string> remark_ = nullptr;
    // The origin of the scenario.
    std::shared_ptr<string> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
