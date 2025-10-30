// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBIZENTITYREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBIZENTITYREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateBizEntityRequestUpdateCommandBizObject.hpp>
#include <alibabacloud/models/UpdateBizEntityRequestUpdateCommandBizProcess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateBizEntityRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBizEntityRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(BizObject, bizObject_);
      DARABONBA_PTR_TO_JSON(BizProcess, bizProcess_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBizEntityRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(BizObject, bizObject_);
      DARABONBA_PTR_FROM_JSON(BizProcess, bizProcess_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateBizEntityRequestUpdateCommand() = default ;
    UpdateBizEntityRequestUpdateCommand(const UpdateBizEntityRequestUpdateCommand &) = default ;
    UpdateBizEntityRequestUpdateCommand(UpdateBizEntityRequestUpdateCommand &&) = default ;
    UpdateBizEntityRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBizEntityRequestUpdateCommand() = default ;
    UpdateBizEntityRequestUpdateCommand& operator=(const UpdateBizEntityRequestUpdateCommand &) = default ;
    UpdateBizEntityRequestUpdateCommand& operator=(UpdateBizEntityRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizObject_ == nullptr
        && return this->bizProcess_ == nullptr && return this->bizUnitId_ == nullptr && return this->dataDomainId_ == nullptr && return this->id_ == nullptr && return this->type_ == nullptr; };
    // bizObject Field Functions 
    bool hasBizObject() const { return this->bizObject_ != nullptr;};
    void deleteBizObject() { this->bizObject_ = nullptr;};
    inline const Models::UpdateBizEntityRequestUpdateCommandBizObject & bizObject() const { DARABONBA_PTR_GET_CONST(bizObject_, Models::UpdateBizEntityRequestUpdateCommandBizObject) };
    inline Models::UpdateBizEntityRequestUpdateCommandBizObject bizObject() { DARABONBA_PTR_GET(bizObject_, Models::UpdateBizEntityRequestUpdateCommandBizObject) };
    inline UpdateBizEntityRequestUpdateCommand& setBizObject(const Models::UpdateBizEntityRequestUpdateCommandBizObject & bizObject) { DARABONBA_PTR_SET_VALUE(bizObject_, bizObject) };
    inline UpdateBizEntityRequestUpdateCommand& setBizObject(Models::UpdateBizEntityRequestUpdateCommandBizObject && bizObject) { DARABONBA_PTR_SET_RVALUE(bizObject_, bizObject) };


    // bizProcess Field Functions 
    bool hasBizProcess() const { return this->bizProcess_ != nullptr;};
    void deleteBizProcess() { this->bizProcess_ = nullptr;};
    inline const Models::UpdateBizEntityRequestUpdateCommandBizProcess & bizProcess() const { DARABONBA_PTR_GET_CONST(bizProcess_, Models::UpdateBizEntityRequestUpdateCommandBizProcess) };
    inline Models::UpdateBizEntityRequestUpdateCommandBizProcess bizProcess() { DARABONBA_PTR_GET(bizProcess_, Models::UpdateBizEntityRequestUpdateCommandBizProcess) };
    inline UpdateBizEntityRequestUpdateCommand& setBizProcess(const Models::UpdateBizEntityRequestUpdateCommandBizProcess & bizProcess) { DARABONBA_PTR_SET_VALUE(bizProcess_, bizProcess) };
    inline UpdateBizEntityRequestUpdateCommand& setBizProcess(Models::UpdateBizEntityRequestUpdateCommandBizProcess && bizProcess) { DARABONBA_PTR_SET_RVALUE(bizProcess_, bizProcess) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline UpdateBizEntityRequestUpdateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // dataDomainId Field Functions 
    bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
    void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
    inline int64_t dataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
    inline UpdateBizEntityRequestUpdateCommand& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateBizEntityRequestUpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateBizEntityRequestUpdateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::UpdateBizEntityRequestUpdateCommandBizObject> bizObject_ = nullptr;
    std::shared_ptr<Models::UpdateBizEntityRequestUpdateCommandBizProcess> bizProcess_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> dataDomainId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
