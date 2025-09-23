// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDLEVELSRESPONSEBODYCROSSCLOUDLEVELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDLEVELSRESPONSEBODYCROSSCLOUDLEVELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList& obj) { 
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(LevelCode, levelCode_);
      DARABONBA_PTR_TO_JSON(LevelName, levelName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(LevelCode, levelCode_);
      DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
    };
    DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList() = default ;
    DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList(const DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList &) = default ;
    DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList(DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList &&) = default ;
    DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList() = default ;
    DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList& operator=(const DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList &) = default ;
    DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList& operator=(DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBType_ != nullptr
        && this->levelCode_ != nullptr && this->levelName_ != nullptr; };
    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // levelCode Field Functions 
    bool hasLevelCode() const { return this->levelCode_ != nullptr;};
    void deleteLevelCode() { this->levelCode_ = nullptr;};
    inline string levelCode() const { DARABONBA_PTR_GET_DEFAULT(levelCode_, "") };
    inline DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList& setLevelCode(string levelCode) { DARABONBA_PTR_SET_VALUE(levelCode_, levelCode) };


    // levelName Field Functions 
    bool hasLevelName() const { return this->levelName_ != nullptr;};
    void deleteLevelName() { this->levelName_ = nullptr;};
    inline string levelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
    inline DescribeCrossCloudLevelsResponseBodyCrossCloudLevelList& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


  protected:
    std::shared_ptr<string> DBType_ = nullptr;
    std::shared_ptr<string> levelCode_ = nullptr;
    std::shared_ptr<string> levelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
