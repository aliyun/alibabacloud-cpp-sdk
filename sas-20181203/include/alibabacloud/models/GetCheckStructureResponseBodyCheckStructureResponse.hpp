// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSTRUCTURERESPONSEBODYCHECKSTRUCTURERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckStructureResponseBodyCheckStructureResponseStandards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckStructureResponseBodyCheckStructureResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckStructureResponseBodyCheckStructureResponse& obj) { 
      DARABONBA_PTR_TO_JSON(StandardType, standardType_);
      DARABONBA_PTR_TO_JSON(Standards, standards_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckStructureResponseBodyCheckStructureResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(StandardType, standardType_);
      DARABONBA_PTR_FROM_JSON(Standards, standards_);
    };
    GetCheckStructureResponseBodyCheckStructureResponse() = default ;
    GetCheckStructureResponseBodyCheckStructureResponse(const GetCheckStructureResponseBodyCheckStructureResponse &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponse(GetCheckStructureResponseBodyCheckStructureResponse &&) = default ;
    GetCheckStructureResponseBodyCheckStructureResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckStructureResponseBodyCheckStructureResponse() = default ;
    GetCheckStructureResponseBodyCheckStructureResponse& operator=(const GetCheckStructureResponseBodyCheckStructureResponse &) = default ;
    GetCheckStructureResponseBodyCheckStructureResponse& operator=(GetCheckStructureResponseBodyCheckStructureResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->standardType_ == nullptr
        && return this->standards_ == nullptr; };
    // standardType Field Functions 
    bool hasStandardType() const { return this->standardType_ != nullptr;};
    void deleteStandardType() { this->standardType_ = nullptr;};
    inline string standardType() const { DARABONBA_PTR_GET_DEFAULT(standardType_, "") };
    inline GetCheckStructureResponseBodyCheckStructureResponse& setStandardType(string standardType) { DARABONBA_PTR_SET_VALUE(standardType_, standardType) };


    // standards Field Functions 
    bool hasStandards() const { return this->standards_ != nullptr;};
    void deleteStandards() { this->standards_ = nullptr;};
    inline const vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandards> & standards() const { DARABONBA_PTR_GET_CONST(standards_, vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandards>) };
    inline vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandards> standards() { DARABONBA_PTR_GET(standards_, vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandards>) };
    inline GetCheckStructureResponseBodyCheckStructureResponse& setStandards(const vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
    inline GetCheckStructureResponseBodyCheckStructureResponse& setStandards(vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


  protected:
    // The type of the check item.
    // 
    // *   RISK: security risk.
    // *   IDENTITY_PERMISSION: Cloud Infrastructure Entitlement Management (CIEM).
    // *   COMPLIANCE: security compliance.
    std::shared_ptr<string> standardType_ = nullptr;
    // The structure information about the check items of the business type.
    std::shared_ptr<vector<Models::GetCheckStructureResponseBodyCheckStructureResponseStandards>> standards_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
