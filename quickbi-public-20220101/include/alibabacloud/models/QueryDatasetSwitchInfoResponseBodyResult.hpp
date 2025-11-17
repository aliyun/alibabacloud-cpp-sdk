// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETSWITCHINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETSWITCHINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetSwitchInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetSwitchInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(IsOpenColumnLevelPermission, isOpenColumnLevelPermission_);
      DARABONBA_PTR_TO_JSON(IsOpenRowLevelPermission, isOpenRowLevelPermission_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetSwitchInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(IsOpenColumnLevelPermission, isOpenColumnLevelPermission_);
      DARABONBA_PTR_FROM_JSON(IsOpenRowLevelPermission, isOpenRowLevelPermission_);
    };
    QueryDatasetSwitchInfoResponseBodyResult() = default ;
    QueryDatasetSwitchInfoResponseBodyResult(const QueryDatasetSwitchInfoResponseBodyResult &) = default ;
    QueryDatasetSwitchInfoResponseBodyResult(QueryDatasetSwitchInfoResponseBodyResult &&) = default ;
    QueryDatasetSwitchInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetSwitchInfoResponseBodyResult() = default ;
    QueryDatasetSwitchInfoResponseBodyResult& operator=(const QueryDatasetSwitchInfoResponseBodyResult &) = default ;
    QueryDatasetSwitchInfoResponseBodyResult& operator=(QueryDatasetSwitchInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && return this->isOpenColumnLevelPermission_ == nullptr && return this->isOpenRowLevelPermission_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QueryDatasetSwitchInfoResponseBodyResult& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // isOpenColumnLevelPermission Field Functions 
    bool hasIsOpenColumnLevelPermission() const { return this->isOpenColumnLevelPermission_ != nullptr;};
    void deleteIsOpenColumnLevelPermission() { this->isOpenColumnLevelPermission_ = nullptr;};
    inline int32_t isOpenColumnLevelPermission() const { DARABONBA_PTR_GET_DEFAULT(isOpenColumnLevelPermission_, 0) };
    inline QueryDatasetSwitchInfoResponseBodyResult& setIsOpenColumnLevelPermission(int32_t isOpenColumnLevelPermission) { DARABONBA_PTR_SET_VALUE(isOpenColumnLevelPermission_, isOpenColumnLevelPermission) };


    // isOpenRowLevelPermission Field Functions 
    bool hasIsOpenRowLevelPermission() const { return this->isOpenRowLevelPermission_ != nullptr;};
    void deleteIsOpenRowLevelPermission() { this->isOpenRowLevelPermission_ = nullptr;};
    inline int32_t isOpenRowLevelPermission() const { DARABONBA_PTR_GET_DEFAULT(isOpenRowLevelPermission_, 0) };
    inline QueryDatasetSwitchInfoResponseBodyResult& setIsOpenRowLevelPermission(int32_t isOpenRowLevelPermission) { DARABONBA_PTR_SET_VALUE(isOpenRowLevelPermission_, isOpenRowLevelPermission) };


  protected:
    // Dataset ID.
    std::shared_ptr<string> cubeId_ = nullptr;
    // Status of the column-level field permission switch. Possible values:
    // 
    // - 1: Enabled
    // - 0: Disabled
    std::shared_ptr<int32_t> isOpenColumnLevelPermission_ = nullptr;
    // Status of the row-level permission switch.
    // 
    // - 1: Enabled
    // - 0: Disabled
    std::shared_ptr<int32_t> isOpenRowLevelPermission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
