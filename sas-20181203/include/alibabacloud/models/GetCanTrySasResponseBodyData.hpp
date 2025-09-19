// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCanTrySasResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCanTrySasResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanTry, canTry_);
      DARABONBA_PTR_TO_JSON(CanTryVersions, canTryVersions_);
      DARABONBA_PTR_TO_JSON(TryType, tryType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCanTrySasResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanTry, canTry_);
      DARABONBA_PTR_FROM_JSON(CanTryVersions, canTryVersions_);
      DARABONBA_PTR_FROM_JSON(TryType, tryType_);
    };
    GetCanTrySasResponseBodyData() = default ;
    GetCanTrySasResponseBodyData(const GetCanTrySasResponseBodyData &) = default ;
    GetCanTrySasResponseBodyData(GetCanTrySasResponseBodyData &&) = default ;
    GetCanTrySasResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCanTrySasResponseBodyData() = default ;
    GetCanTrySasResponseBodyData& operator=(const GetCanTrySasResponseBodyData &) = default ;
    GetCanTrySasResponseBodyData& operator=(GetCanTrySasResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canTry_ != nullptr
        && this->canTryVersions_ != nullptr && this->tryType_ != nullptr; };
    // canTry Field Functions 
    bool hasCanTry() const { return this->canTry_ != nullptr;};
    void deleteCanTry() { this->canTry_ = nullptr;};
    inline int32_t canTry() const { DARABONBA_PTR_GET_DEFAULT(canTry_, 0) };
    inline GetCanTrySasResponseBodyData& setCanTry(int32_t canTry) { DARABONBA_PTR_SET_VALUE(canTry_, canTry) };


    // canTryVersions Field Functions 
    bool hasCanTryVersions() const { return this->canTryVersions_ != nullptr;};
    void deleteCanTryVersions() { this->canTryVersions_ = nullptr;};
    inline const vector<int32_t> & canTryVersions() const { DARABONBA_PTR_GET_CONST(canTryVersions_, vector<int32_t>) };
    inline vector<int32_t> canTryVersions() { DARABONBA_PTR_GET(canTryVersions_, vector<int32_t>) };
    inline GetCanTrySasResponseBodyData& setCanTryVersions(const vector<int32_t> & canTryVersions) { DARABONBA_PTR_SET_VALUE(canTryVersions_, canTryVersions) };
    inline GetCanTrySasResponseBodyData& setCanTryVersions(vector<int32_t> && canTryVersions) { DARABONBA_PTR_SET_RVALUE(canTryVersions_, canTryVersions) };


    // tryType Field Functions 
    bool hasTryType() const { return this->tryType_ != nullptr;};
    void deleteTryType() { this->tryType_ = nullptr;};
    inline int32_t tryType() const { DARABONBA_PTR_GET_DEFAULT(tryType_, 0) };
    inline GetCanTrySasResponseBodyData& setTryType(int32_t tryType) { DARABONBA_PTR_SET_VALUE(tryType_, tryType) };


  protected:
    // Indicates whether the user is qualified for the trial use. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<int32_t> canTry_ = nullptr;
    // The editions that are allowed for the trial use.
    std::shared_ptr<vector<int32_t>> canTryVersions_ = nullptr;
    // The trial type. Valid values:
    // 
    // *   **0**: trial prohibited
    // *   **1**: first trial
    // *   **2**: second trial
    std::shared_ptr<int32_t> tryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
