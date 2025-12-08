// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEIMAGETEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEIMAGETEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFaceImageTemplateResponseBodyDataFaceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class AddFaceImageTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceImageTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceImageTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    AddFaceImageTemplateResponseBodyData() = default ;
    AddFaceImageTemplateResponseBodyData(const AddFaceImageTemplateResponseBodyData &) = default ;
    AddFaceImageTemplateResponseBodyData(AddFaceImageTemplateResponseBodyData &&) = default ;
    AddFaceImageTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceImageTemplateResponseBodyData() = default ;
    AddFaceImageTemplateResponseBodyData& operator=(const AddFaceImageTemplateResponseBodyData &) = default ;
    AddFaceImageTemplateResponseBodyData& operator=(AddFaceImageTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceInfos_ == nullptr
        && return this->templateId_ == nullptr; };
    // faceInfos Field Functions 
    bool hasFaceInfos() const { return this->faceInfos_ != nullptr;};
    void deleteFaceInfos() { this->faceInfos_ = nullptr;};
    inline const vector<Models::AddFaceImageTemplateResponseBodyDataFaceInfos> & faceInfos() const { DARABONBA_PTR_GET_CONST(faceInfos_, vector<Models::AddFaceImageTemplateResponseBodyDataFaceInfos>) };
    inline vector<Models::AddFaceImageTemplateResponseBodyDataFaceInfos> faceInfos() { DARABONBA_PTR_GET(faceInfos_, vector<Models::AddFaceImageTemplateResponseBodyDataFaceInfos>) };
    inline AddFaceImageTemplateResponseBodyData& setFaceInfos(const vector<Models::AddFaceImageTemplateResponseBodyDataFaceInfos> & faceInfos) { DARABONBA_PTR_SET_VALUE(faceInfos_, faceInfos) };
    inline AddFaceImageTemplateResponseBodyData& setFaceInfos(vector<Models::AddFaceImageTemplateResponseBodyDataFaceInfos> && faceInfos) { DARABONBA_PTR_SET_RVALUE(faceInfos_, faceInfos) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AddFaceImageTemplateResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<vector<Models::AddFaceImageTemplateResponseBodyDataFaceInfos>> faceInfos_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
