// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPLYTEMPSTORAGELEASERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyTempStorageLeaseResponseBodyDataParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ApplyTempStorageLeaseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTempStorageLeaseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(TempStorageLeaseId, tempStorageLeaseId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTempStorageLeaseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(TempStorageLeaseId, tempStorageLeaseId_);
    };
    ApplyTempStorageLeaseResponseBodyData() = default ;
    ApplyTempStorageLeaseResponseBodyData(const ApplyTempStorageLeaseResponseBodyData &) = default ;
    ApplyTempStorageLeaseResponseBodyData(ApplyTempStorageLeaseResponseBodyData &&) = default ;
    ApplyTempStorageLeaseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTempStorageLeaseResponseBodyData() = default ;
    ApplyTempStorageLeaseResponseBodyData& operator=(const ApplyTempStorageLeaseResponseBodyData &) = default ;
    ApplyTempStorageLeaseResponseBodyData& operator=(ApplyTempStorageLeaseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->param_ == nullptr
        && return this->tempStorageLeaseId_ == nullptr; };
    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const Models::ApplyTempStorageLeaseResponseBodyDataParam & param() const { DARABONBA_PTR_GET_CONST(param_, Models::ApplyTempStorageLeaseResponseBodyDataParam) };
    inline Models::ApplyTempStorageLeaseResponseBodyDataParam param() { DARABONBA_PTR_GET(param_, Models::ApplyTempStorageLeaseResponseBodyDataParam) };
    inline ApplyTempStorageLeaseResponseBodyData& setParam(const Models::ApplyTempStorageLeaseResponseBodyDataParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline ApplyTempStorageLeaseResponseBodyData& setParam(Models::ApplyTempStorageLeaseResponseBodyDataParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // tempStorageLeaseId Field Functions 
    bool hasTempStorageLeaseId() const { return this->tempStorageLeaseId_ != nullptr;};
    void deleteTempStorageLeaseId() { this->tempStorageLeaseId_ = nullptr;};
    inline string tempStorageLeaseId() const { DARABONBA_PTR_GET_DEFAULT(tempStorageLeaseId_, "") };
    inline ApplyTempStorageLeaseResponseBodyData& setTempStorageLeaseId(string tempStorageLeaseId) { DARABONBA_PTR_SET_VALUE(tempStorageLeaseId_, tempStorageLeaseId) };


  protected:
    std::shared_ptr<Models::ApplyTempStorageLeaseResponseBodyDataParam> param_ = nullptr;
    std::shared_ptr<string> tempStorageLeaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
