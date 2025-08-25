// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEVIDEOTEMPLATERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEVIDEOTEMPLATERESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class QueryFaceVideoTemplateResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceVideoTemplateResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceVideoTemplateResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryFaceVideoTemplateResponseBodyDataElements() = default ;
    QueryFaceVideoTemplateResponseBodyDataElements(const QueryFaceVideoTemplateResponseBodyDataElements &) = default ;
    QueryFaceVideoTemplateResponseBodyDataElements(QueryFaceVideoTemplateResponseBodyDataElements &&) = default ;
    QueryFaceVideoTemplateResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceVideoTemplateResponseBodyDataElements() = default ;
    QueryFaceVideoTemplateResponseBodyDataElements& operator=(const QueryFaceVideoTemplateResponseBodyDataElements &) = default ;
    QueryFaceVideoTemplateResponseBodyDataElements& operator=(QueryFaceVideoTemplateResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->faceInfos_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryFaceVideoTemplateResponseBodyDataElements& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // faceInfos Field Functions 
    bool hasFaceInfos() const { return this->faceInfos_ != nullptr;};
    void deleteFaceInfos() { this->faceInfos_ = nullptr;};
    inline const vector<Models::QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos> & faceInfos() const { DARABONBA_PTR_GET_CONST(faceInfos_, vector<Models::QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos>) };
    inline vector<Models::QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos> faceInfos() { DARABONBA_PTR_GET(faceInfos_, vector<Models::QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos>) };
    inline QueryFaceVideoTemplateResponseBodyDataElements& setFaceInfos(const vector<Models::QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos> & faceInfos) { DARABONBA_PTR_SET_VALUE(faceInfos_, faceInfos) };
    inline QueryFaceVideoTemplateResponseBodyDataElements& setFaceInfos(vector<Models::QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos> && faceInfos) { DARABONBA_PTR_SET_RVALUE(faceInfos_, faceInfos) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryFaceVideoTemplateResponseBodyDataElements& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline QueryFaceVideoTemplateResponseBodyDataElements& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryFaceVideoTemplateResponseBodyDataElements& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryFaceVideoTemplateResponseBodyDataElements& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<Models::QueryFaceVideoTemplateResponseBodyDataElementsFaceInfos>> faceInfos_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateURL_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
