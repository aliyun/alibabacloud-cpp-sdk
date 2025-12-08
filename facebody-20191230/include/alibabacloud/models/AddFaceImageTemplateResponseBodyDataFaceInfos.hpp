// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEIMAGETEMPLATERESPONSEBODYDATAFACEINFOS_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEIMAGETEMPLATERESPONSEBODYDATAFACEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class AddFaceImageTemplateResponseBodyDataFaceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceImageTemplateResponseBodyDataFaceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FaceRect, faceRect_);
      DARABONBA_PTR_TO_JSON(TemplateFaceID, templateFaceID_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceImageTemplateResponseBodyDataFaceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceRect, faceRect_);
      DARABONBA_PTR_FROM_JSON(TemplateFaceID, templateFaceID_);
    };
    AddFaceImageTemplateResponseBodyDataFaceInfos() = default ;
    AddFaceImageTemplateResponseBodyDataFaceInfos(const AddFaceImageTemplateResponseBodyDataFaceInfos &) = default ;
    AddFaceImageTemplateResponseBodyDataFaceInfos(AddFaceImageTemplateResponseBodyDataFaceInfos &&) = default ;
    AddFaceImageTemplateResponseBodyDataFaceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceImageTemplateResponseBodyDataFaceInfos() = default ;
    AddFaceImageTemplateResponseBodyDataFaceInfos& operator=(const AddFaceImageTemplateResponseBodyDataFaceInfos &) = default ;
    AddFaceImageTemplateResponseBodyDataFaceInfos& operator=(AddFaceImageTemplateResponseBodyDataFaceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceRect_ == nullptr
        && return this->templateFaceID_ == nullptr; };
    // faceRect Field Functions 
    bool hasFaceRect() const { return this->faceRect_ != nullptr;};
    void deleteFaceRect() { this->faceRect_ = nullptr;};
    inline const Models::AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect & faceRect() const { DARABONBA_PTR_GET_CONST(faceRect_, Models::AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect) };
    inline Models::AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect faceRect() { DARABONBA_PTR_GET(faceRect_, Models::AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect) };
    inline AddFaceImageTemplateResponseBodyDataFaceInfos& setFaceRect(const Models::AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect & faceRect) { DARABONBA_PTR_SET_VALUE(faceRect_, faceRect) };
    inline AddFaceImageTemplateResponseBodyDataFaceInfos& setFaceRect(Models::AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect && faceRect) { DARABONBA_PTR_SET_RVALUE(faceRect_, faceRect) };


    // templateFaceID Field Functions 
    bool hasTemplateFaceID() const { return this->templateFaceID_ != nullptr;};
    void deleteTemplateFaceID() { this->templateFaceID_ = nullptr;};
    inline string templateFaceID() const { DARABONBA_PTR_GET_DEFAULT(templateFaceID_, "") };
    inline AddFaceImageTemplateResponseBodyDataFaceInfos& setTemplateFaceID(string templateFaceID) { DARABONBA_PTR_SET_VALUE(templateFaceID_, templateFaceID) };


  protected:
    std::shared_ptr<Models::AddFaceImageTemplateResponseBodyDataFaceInfosFaceRect> faceRect_ = nullptr;
    std::shared_ptr<string> templateFaceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
