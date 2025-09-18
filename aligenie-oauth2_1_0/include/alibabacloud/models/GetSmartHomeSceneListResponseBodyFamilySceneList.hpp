// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTHOMESCENELISTRESPONSEBODYFAMILYSCENELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTHOMESCENELISTRESPONSEBODYFAMILYSCENELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSmartHomeSceneListResponseBodyFamilySceneListSceneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class GetSmartHomeSceneListResponseBodyFamilySceneList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartHomeSceneListResponseBodyFamilySceneList& obj) { 
      DARABONBA_PTR_TO_JSON(familyId, familyId_);
      DARABONBA_PTR_TO_JSON(familyName, familyName_);
      DARABONBA_PTR_TO_JSON(sceneList, sceneList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartHomeSceneListResponseBodyFamilySceneList& obj) { 
      DARABONBA_PTR_FROM_JSON(familyId, familyId_);
      DARABONBA_PTR_FROM_JSON(familyName, familyName_);
      DARABONBA_PTR_FROM_JSON(sceneList, sceneList_);
    };
    GetSmartHomeSceneListResponseBodyFamilySceneList() = default ;
    GetSmartHomeSceneListResponseBodyFamilySceneList(const GetSmartHomeSceneListResponseBodyFamilySceneList &) = default ;
    GetSmartHomeSceneListResponseBodyFamilySceneList(GetSmartHomeSceneListResponseBodyFamilySceneList &&) = default ;
    GetSmartHomeSceneListResponseBodyFamilySceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartHomeSceneListResponseBodyFamilySceneList() = default ;
    GetSmartHomeSceneListResponseBodyFamilySceneList& operator=(const GetSmartHomeSceneListResponseBodyFamilySceneList &) = default ;
    GetSmartHomeSceneListResponseBodyFamilySceneList& operator=(GetSmartHomeSceneListResponseBodyFamilySceneList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->familyId_ != nullptr
        && this->familyName_ != nullptr && this->sceneList_ != nullptr; };
    // familyId Field Functions 
    bool hasFamilyId() const { return this->familyId_ != nullptr;};
    void deleteFamilyId() { this->familyId_ = nullptr;};
    inline string familyId() const { DARABONBA_PTR_GET_DEFAULT(familyId_, "") };
    inline GetSmartHomeSceneListResponseBodyFamilySceneList& setFamilyId(string familyId) { DARABONBA_PTR_SET_VALUE(familyId_, familyId) };


    // familyName Field Functions 
    bool hasFamilyName() const { return this->familyName_ != nullptr;};
    void deleteFamilyName() { this->familyName_ = nullptr;};
    inline string familyName() const { DARABONBA_PTR_GET_DEFAULT(familyName_, "") };
    inline GetSmartHomeSceneListResponseBodyFamilySceneList& setFamilyName(string familyName) { DARABONBA_PTR_SET_VALUE(familyName_, familyName) };


    // sceneList Field Functions 
    bool hasSceneList() const { return this->sceneList_ != nullptr;};
    void deleteSceneList() { this->sceneList_ = nullptr;};
    inline const vector<Models::GetSmartHomeSceneListResponseBodyFamilySceneListSceneList> & sceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, vector<Models::GetSmartHomeSceneListResponseBodyFamilySceneListSceneList>) };
    inline vector<Models::GetSmartHomeSceneListResponseBodyFamilySceneListSceneList> sceneList() { DARABONBA_PTR_GET(sceneList_, vector<Models::GetSmartHomeSceneListResponseBodyFamilySceneListSceneList>) };
    inline GetSmartHomeSceneListResponseBodyFamilySceneList& setSceneList(const vector<Models::GetSmartHomeSceneListResponseBodyFamilySceneListSceneList> & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
    inline GetSmartHomeSceneListResponseBodyFamilySceneList& setSceneList(vector<Models::GetSmartHomeSceneListResponseBodyFamilySceneListSceneList> && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


  protected:
    std::shared_ptr<string> familyId_ = nullptr;
    std::shared_ptr<string> familyName_ = nullptr;
    std::shared_ptr<vector<Models::GetSmartHomeSceneListResponseBodyFamilySceneListSceneList>> sceneList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
