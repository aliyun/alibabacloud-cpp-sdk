// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEIMAGETEMPLATERESPONSEBODYDATAELEMENTSFACEINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEIMAGETEMPLATERESPONSEBODYDATAELEMENTSFACEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class QueryFaceImageTemplateResponseBodyDataElementsFaceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceImageTemplateResponseBodyDataElementsFaceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FaceRect, faceRect_);
      DARABONBA_PTR_TO_JSON(TemplateFaceID, templateFaceID_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceImageTemplateResponseBodyDataElementsFaceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceRect, faceRect_);
      DARABONBA_PTR_FROM_JSON(TemplateFaceID, templateFaceID_);
    };
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfos() = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfos(const QueryFaceImageTemplateResponseBodyDataElementsFaceInfos &) = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfos(QueryFaceImageTemplateResponseBodyDataElementsFaceInfos &&) = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceImageTemplateResponseBodyDataElementsFaceInfos() = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfos& operator=(const QueryFaceImageTemplateResponseBodyDataElementsFaceInfos &) = default ;
    QueryFaceImageTemplateResponseBodyDataElementsFaceInfos& operator=(QueryFaceImageTemplateResponseBodyDataElementsFaceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceRect_ == nullptr
        && return this->templateFaceID_ == nullptr; };
    // faceRect Field Functions 
    bool hasFaceRect() const { return this->faceRect_ != nullptr;};
    void deleteFaceRect() { this->faceRect_ = nullptr;};
    inline const Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect & faceRect() const { DARABONBA_PTR_GET_CONST(faceRect_, Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect) };
    inline Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect faceRect() { DARABONBA_PTR_GET(faceRect_, Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect) };
    inline QueryFaceImageTemplateResponseBodyDataElementsFaceInfos& setFaceRect(const Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect & faceRect) { DARABONBA_PTR_SET_VALUE(faceRect_, faceRect) };
    inline QueryFaceImageTemplateResponseBodyDataElementsFaceInfos& setFaceRect(Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect && faceRect) { DARABONBA_PTR_SET_RVALUE(faceRect_, faceRect) };


    // templateFaceID Field Functions 
    bool hasTemplateFaceID() const { return this->templateFaceID_ != nullptr;};
    void deleteTemplateFaceID() { this->templateFaceID_ = nullptr;};
    inline string templateFaceID() const { DARABONBA_PTR_GET_DEFAULT(templateFaceID_, "") };
    inline QueryFaceImageTemplateResponseBodyDataElementsFaceInfos& setTemplateFaceID(string templateFaceID) { DARABONBA_PTR_SET_VALUE(templateFaceID_, templateFaceID) };


  protected:
    std::shared_ptr<Models::QueryFaceImageTemplateResponseBodyDataElementsFaceInfosFaceRect> faceRect_ = nullptr;
    std::shared_ptr<string> templateFaceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
