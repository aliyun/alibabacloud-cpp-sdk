// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSESTANDARDS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSESTANDARDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckStructureResponseBodyCheckStructureResponseStandards : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckStructureResponseBodyCheckStructureResponseStandards& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Requirements, requirements_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckStructureResponseBodyCheckStructureResponseStandards& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Requirements, requirements_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCheckStructureResponseBodyCheckStructureResponseStandards() = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandards(const GetCheckStructureResponseBodyCheckStructureResponseStandards &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandards(GetCheckStructureResponseBodyCheckStructureResponseStandards &&) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandards(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckStructureResponseBodyCheckStructureResponseStandards() = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandards& operator=(const GetCheckStructureResponseBodyCheckStructureResponseStandards &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponseStandards& operator=(GetCheckStructureResponseBodyCheckStructureResponseStandards &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->requirements_ == nullptr && return this->showName_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requirements Field Functions 
    bool hasRequirements() const { return this->requirements_ != nullptr;};
    void deleteRequirements() { this->requirements_ = nullptr;};
    inline const vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements> & requirements() const { DARABONBA_PTR_GET_CONST(requirements_, vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements>) };
    inline vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements> requirements() { DARABONBA_PTR_GET(requirements_, vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements>) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandards& setRequirements(const vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements> & requirements) { DARABONBA_PTR_SET_VALUE(requirements_, requirements) };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandards& setRequirements(vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements> && requirements) { DARABONBA_PTR_SET_RVALUE(requirements_, requirements) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCheckStructureResponseBodyCheckStructureResponseStandards& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The standard ID of the check item.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The standards of the check items.
    std::shared_ptr<vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandardsRequirements>> requirements_ = nullptr;
    // The display name of the standard for the check item.
    std::shared_ptr<string> showName_ = nullptr;
    // The standard type of the check item. Valid values:
    // 
    // *   RISK: security risk.
    // *   IDENTITY_PERMISSION: CIEM.
    // *   COMPLIANCE: security compliance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
