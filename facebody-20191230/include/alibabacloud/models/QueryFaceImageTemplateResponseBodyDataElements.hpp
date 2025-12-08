// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEIMAGETEMPLATERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEIMAGETEMPLATERESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFaceImageTemplateResponseBodyDataElementsFaceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class QueryFaceImageTemplateResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceImageTemplateResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceImageTemplateResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryFaceImageTemplateResponseBodyDataElements() = default ;
    QueryFaceImageTemplateResponseBodyDataElements(const QueryFaceImageTemplateResponseBodyDataElements &) = default ;
    QueryFaceImageTemplateResponseBodyDataElements(QueryFaceImageTemplateResponseBodyDataElements &&) = default ;
    QueryFaceImageTemplateResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceImageTemplateResponseBodyDataElements() = default ;
    QueryFaceImageTemplateResponseBodyDataElements& operator=(const QueryFaceImageTemplateResponseBodyDataElements &) = default ;
    QueryFaceImageTemplateResponseBodyDataElements& operator=(QueryFaceImageTemplateResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->faceInfos_ == nullptr && return this->templateId_ == nullptr && return this->templateURL_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElements& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // faceInfos Field Functions 
    bool hasFaceInfos() const { return this->faceInfos_ != nullptr;};
    void deleteFaceInfos() { this->faceInfos_ = nullptr;};
    inline const vector<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfos> & faceInfos() const { DARABONBA_PTR_GET_CONST(faceInfos_, vector<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfos>) };
    inline vector<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfos> faceInfos() { DARABONBA_PTR_GET(faceInfos_, vector<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfos>) };
    inline QueryFaceImageTemplateResponseBodyDataElements& setFaceInfos(const vector<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfos> & faceInfos) { DARABONBA_PTR_SET_VALUE(faceInfos_, faceInfos) };
    inline QueryFaceImageTemplateResponseBodyDataElements& setFaceInfos(vector<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfos> && faceInfos) { DARABONBA_PTR_SET_RVALUE(faceInfos_, faceInfos) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElements& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElements& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElements& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElements& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfos>> faceInfos_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateURL_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
