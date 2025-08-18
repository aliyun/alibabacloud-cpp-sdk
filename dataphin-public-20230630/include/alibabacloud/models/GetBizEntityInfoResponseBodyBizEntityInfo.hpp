// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZENTITYINFORESPONSEBODYBIZENTITYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETBIZENTITYINFORESPONSEBODYBIZENTITYINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBizEntityInfoResponseBodyBizEntityInfoBizObject.hpp>
#include <alibabacloud/models/GetBizEntityInfoResponseBodyBizEntityInfoBizProcess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizEntityInfoResponseBodyBizEntityInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizEntityInfoResponseBodyBizEntityInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BizObject, bizObject_);
      DARABONBA_PTR_TO_JSON(BizProcess, bizProcess_);
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizEntityInfoResponseBodyBizEntityInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BizObject, bizObject_);
      DARABONBA_PTR_FROM_JSON(BizProcess, bizProcess_);
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetBizEntityInfoResponseBodyBizEntityInfo() = default ;
    GetBizEntityInfoResponseBodyBizEntityInfo(const GetBizEntityInfoResponseBodyBizEntityInfo &) = default ;
    GetBizEntityInfoResponseBodyBizEntityInfo(GetBizEntityInfoResponseBodyBizEntityInfo &&) = default ;
    GetBizEntityInfoResponseBodyBizEntityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizEntityInfoResponseBodyBizEntityInfo() = default ;
    GetBizEntityInfoResponseBodyBizEntityInfo& operator=(const GetBizEntityInfoResponseBodyBizEntityInfo &) = default ;
    GetBizEntityInfoResponseBodyBizEntityInfo& operator=(GetBizEntityInfoResponseBodyBizEntityInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizObject_ != nullptr
        && this->bizProcess_ != nullptr && this->bizUnitId_ != nullptr && this->dataDomainId_ != nullptr && this->type_ != nullptr; };
    // bizObject Field Functions 
    bool hasBizObject() const { return this->bizObject_ != nullptr;};
    void deleteBizObject() { this->bizObject_ = nullptr;};
    inline const Models::GetBizEntityInfoResponseBodyBizEntityInfoBizObject & bizObject() const { DARABONBA_PTR_GET_CONST(bizObject_, Models::GetBizEntityInfoResponseBodyBizEntityInfoBizObject) };
    inline Models::GetBizEntityInfoResponseBodyBizEntityInfoBizObject bizObject() { DARABONBA_PTR_GET(bizObject_, Models::GetBizEntityInfoResponseBodyBizEntityInfoBizObject) };
    inline GetBizEntityInfoResponseBodyBizEntityInfo& setBizObject(const Models::GetBizEntityInfoResponseBodyBizEntityInfoBizObject & bizObject) { DARABONBA_PTR_SET_VALUE(bizObject_, bizObject) };
    inline GetBizEntityInfoResponseBodyBizEntityInfo& setBizObject(Models::GetBizEntityInfoResponseBodyBizEntityInfoBizObject && bizObject) { DARABONBA_PTR_SET_RVALUE(bizObject_, bizObject) };


    // bizProcess Field Functions 
    bool hasBizProcess() const { return this->bizProcess_ != nullptr;};
    void deleteBizProcess() { this->bizProcess_ = nullptr;};
    inline const Models::GetBizEntityInfoResponseBodyBizEntityInfoBizProcess & bizProcess() const { DARABONBA_PTR_GET_CONST(bizProcess_, Models::GetBizEntityInfoResponseBodyBizEntityInfoBizProcess) };
    inline Models::GetBizEntityInfoResponseBodyBizEntityInfoBizProcess bizProcess() { DARABONBA_PTR_GET(bizProcess_, Models::GetBizEntityInfoResponseBodyBizEntityInfoBizProcess) };
    inline GetBizEntityInfoResponseBodyBizEntityInfo& setBizProcess(const Models::GetBizEntityInfoResponseBodyBizEntityInfoBizProcess & bizProcess) { DARABONBA_PTR_SET_VALUE(bizProcess_, bizProcess) };
    inline GetBizEntityInfoResponseBodyBizEntityInfo& setBizProcess(Models::GetBizEntityInfoResponseBodyBizEntityInfoBizProcess && bizProcess) { DARABONBA_PTR_SET_RVALUE(bizProcess_, bizProcess) };


    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline GetBizEntityInfoResponseBodyBizEntityInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // dataDomainId Field Functions 
    bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
    void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
    inline int64_t dataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
    inline GetBizEntityInfoResponseBodyBizEntityInfo& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetBizEntityInfoResponseBodyBizEntityInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetBizEntityInfoResponseBodyBizEntityInfoBizObject> bizObject_ = nullptr;
    std::shared_ptr<Models::GetBizEntityInfoResponseBodyBizEntityInfoBizProcess> bizProcess_ = nullptr;
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    std::shared_ptr<int64_t> dataDomainId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
