// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEDATAREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEDATAREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetKnowledgeDataRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeDataRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(knowledgeIdList, knowledgeIdList_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeDataRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(knowledgeIdList, knowledgeIdList_);
    };
    GetKnowledgeDataRequestBody() = default ;
    GetKnowledgeDataRequestBody(const GetKnowledgeDataRequestBody &) = default ;
    GetKnowledgeDataRequestBody(GetKnowledgeDataRequestBody &&) = default ;
    GetKnowledgeDataRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeDataRequestBody() = default ;
    GetKnowledgeDataRequestBody& operator=(const GetKnowledgeDataRequestBody &) = default ;
    GetKnowledgeDataRequestBody& operator=(GetKnowledgeDataRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->knowledgeIdList_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetKnowledgeDataRequestBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // knowledgeIdList Field Functions 
    bool hasKnowledgeIdList() const { return this->knowledgeIdList_ != nullptr;};
    void deleteKnowledgeIdList() { this->knowledgeIdList_ = nullptr;};
    inline const vector<string> & knowledgeIdList() const { DARABONBA_PTR_GET_CONST(knowledgeIdList_, vector<string>) };
    inline vector<string> knowledgeIdList() { DARABONBA_PTR_GET(knowledgeIdList_, vector<string>) };
    inline GetKnowledgeDataRequestBody& setKnowledgeIdList(const vector<string> & knowledgeIdList) { DARABONBA_PTR_SET_VALUE(knowledgeIdList_, knowledgeIdList) };
    inline GetKnowledgeDataRequestBody& setKnowledgeIdList(vector<string> && knowledgeIdList) { DARABONBA_PTR_SET_RVALUE(knowledgeIdList_, knowledgeIdList) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<string>> knowledgeIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
