// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSCLOUDLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCrossCloudLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossCloudLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossCloudLevelList, crossCloudLevelList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossCloudLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossCloudLevelList, crossCloudLevelList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCrossCloudLevelsResponseBody() = default ;
    DescribeCrossCloudLevelsResponseBody(const DescribeCrossCloudLevelsResponseBody &) = default ;
    DescribeCrossCloudLevelsResponseBody(DescribeCrossCloudLevelsResponseBody &&) = default ;
    DescribeCrossCloudLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossCloudLevelsResponseBody() = default ;
    DescribeCrossCloudLevelsResponseBody& operator=(const DescribeCrossCloudLevelsResponseBody &) = default ;
    DescribeCrossCloudLevelsResponseBody& operator=(DescribeCrossCloudLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CrossCloudLevelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CrossCloudLevelList& obj) { 
        DARABONBA_PTR_TO_JSON(DBType, DBType_);
        DARABONBA_PTR_TO_JSON(LevelCode, levelCode_);
        DARABONBA_PTR_TO_JSON(LevelName, levelName_);
      };
      friend void from_json(const Darabonba::Json& j, CrossCloudLevelList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBType, DBType_);
        DARABONBA_PTR_FROM_JSON(LevelCode, levelCode_);
        DARABONBA_PTR_FROM_JSON(LevelName, levelName_);
      };
      CrossCloudLevelList() = default ;
      CrossCloudLevelList(const CrossCloudLevelList &) = default ;
      CrossCloudLevelList(CrossCloudLevelList &&) = default ;
      CrossCloudLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CrossCloudLevelList() = default ;
      CrossCloudLevelList& operator=(const CrossCloudLevelList &) = default ;
      CrossCloudLevelList& operator=(CrossCloudLevelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBType_ == nullptr
        && this->levelCode_ == nullptr && this->levelName_ == nullptr; };
      // DBType Field Functions 
      bool hasDBType() const { return this->DBType_ != nullptr;};
      void deleteDBType() { this->DBType_ = nullptr;};
      inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
      inline CrossCloudLevelList& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


      // levelCode Field Functions 
      bool hasLevelCode() const { return this->levelCode_ != nullptr;};
      void deleteLevelCode() { this->levelCode_ = nullptr;};
      inline string getLevelCode() const { DARABONBA_PTR_GET_DEFAULT(levelCode_, "") };
      inline CrossCloudLevelList& setLevelCode(string levelCode) { DARABONBA_PTR_SET_VALUE(levelCode_, levelCode) };


      // levelName Field Functions 
      bool hasLevelName() const { return this->levelName_ != nullptr;};
      void deleteLevelName() { this->levelName_ = nullptr;};
      inline string getLevelName() const { DARABONBA_PTR_GET_DEFAULT(levelName_, "") };
      inline CrossCloudLevelList& setLevelName(string levelName) { DARABONBA_PTR_SET_VALUE(levelName_, levelName) };


    protected:
      shared_ptr<string> DBType_ {};
      shared_ptr<string> levelCode_ {};
      shared_ptr<string> levelName_ {};
    };

    virtual bool empty() const override { return this->crossCloudLevelList_ == nullptr
        && this->requestId_ == nullptr; };
    // crossCloudLevelList Field Functions 
    bool hasCrossCloudLevelList() const { return this->crossCloudLevelList_ != nullptr;};
    void deleteCrossCloudLevelList() { this->crossCloudLevelList_ = nullptr;};
    inline const vector<DescribeCrossCloudLevelsResponseBody::CrossCloudLevelList> & getCrossCloudLevelList() const { DARABONBA_PTR_GET_CONST(crossCloudLevelList_, vector<DescribeCrossCloudLevelsResponseBody::CrossCloudLevelList>) };
    inline vector<DescribeCrossCloudLevelsResponseBody::CrossCloudLevelList> getCrossCloudLevelList() { DARABONBA_PTR_GET(crossCloudLevelList_, vector<DescribeCrossCloudLevelsResponseBody::CrossCloudLevelList>) };
    inline DescribeCrossCloudLevelsResponseBody& setCrossCloudLevelList(const vector<DescribeCrossCloudLevelsResponseBody::CrossCloudLevelList> & crossCloudLevelList) { DARABONBA_PTR_SET_VALUE(crossCloudLevelList_, crossCloudLevelList) };
    inline DescribeCrossCloudLevelsResponseBody& setCrossCloudLevelList(vector<DescribeCrossCloudLevelsResponseBody::CrossCloudLevelList> && crossCloudLevelList) { DARABONBA_PTR_SET_RVALUE(crossCloudLevelList_, crossCloudLevelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossCloudLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCrossCloudLevelsResponseBody::CrossCloudLevelList>> crossCloudLevelList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
