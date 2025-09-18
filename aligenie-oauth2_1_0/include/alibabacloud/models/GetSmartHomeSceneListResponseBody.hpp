// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTHOMESCENELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTHOMESCENELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSmartHomeSceneListResponseBodyFamilySceneList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class GetSmartHomeSceneListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartHomeSceneListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FamilySceneList, familySceneList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartHomeSceneListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FamilySceneList, familySceneList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSmartHomeSceneListResponseBody() = default ;
    GetSmartHomeSceneListResponseBody(const GetSmartHomeSceneListResponseBody &) = default ;
    GetSmartHomeSceneListResponseBody(GetSmartHomeSceneListResponseBody &&) = default ;
    GetSmartHomeSceneListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartHomeSceneListResponseBody() = default ;
    GetSmartHomeSceneListResponseBody& operator=(const GetSmartHomeSceneListResponseBody &) = default ;
    GetSmartHomeSceneListResponseBody& operator=(GetSmartHomeSceneListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->familySceneList_ != nullptr
        && this->requestId_ != nullptr; };
    // familySceneList Field Functions 
    bool hasFamilySceneList() const { return this->familySceneList_ != nullptr;};
    void deleteFamilySceneList() { this->familySceneList_ = nullptr;};
    inline const vector<GetSmartHomeSceneListResponseBodyFamilySceneList> & familySceneList() const { DARABONBA_PTR_GET_CONST(familySceneList_, vector<GetSmartHomeSceneListResponseBodyFamilySceneList>) };
    inline vector<GetSmartHomeSceneListResponseBodyFamilySceneList> familySceneList() { DARABONBA_PTR_GET(familySceneList_, vector<GetSmartHomeSceneListResponseBodyFamilySceneList>) };
    inline GetSmartHomeSceneListResponseBody& setFamilySceneList(const vector<GetSmartHomeSceneListResponseBodyFamilySceneList> & familySceneList) { DARABONBA_PTR_SET_VALUE(familySceneList_, familySceneList) };
    inline GetSmartHomeSceneListResponseBody& setFamilySceneList(vector<GetSmartHomeSceneListResponseBodyFamilySceneList> && familySceneList) { DARABONBA_PTR_SET_RVALUE(familySceneList_, familySceneList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmartHomeSceneListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetSmartHomeSceneListResponseBodyFamilySceneList>> familySceneList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
