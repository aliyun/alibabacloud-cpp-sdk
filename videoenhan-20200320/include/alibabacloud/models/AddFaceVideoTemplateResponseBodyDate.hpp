// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATERESPONSEBODYDATE_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATERESPONSEBODYDATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFaceVideoTemplateResponseBodyDateFaceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AddFaceVideoTemplateResponseBodyDate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceVideoTemplateResponseBodyDate& obj) { 
      DARABONBA_PTR_TO_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TransResult, transResult_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceVideoTemplateResponseBodyDate& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TransResult, transResult_);
    };
    AddFaceVideoTemplateResponseBodyDate() = default ;
    AddFaceVideoTemplateResponseBodyDate(const AddFaceVideoTemplateResponseBodyDate &) = default ;
    AddFaceVideoTemplateResponseBodyDate(AddFaceVideoTemplateResponseBodyDate &&) = default ;
    AddFaceVideoTemplateResponseBodyDate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceVideoTemplateResponseBodyDate() = default ;
    AddFaceVideoTemplateResponseBodyDate& operator=(const AddFaceVideoTemplateResponseBodyDate &) = default ;
    AddFaceVideoTemplateResponseBodyDate& operator=(AddFaceVideoTemplateResponseBodyDate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faceInfos_ != nullptr
        && this->templateId_ != nullptr && this->transResult_ != nullptr; };
    // faceInfos Field Functions 
    bool hasFaceInfos() const { return this->faceInfos_ != nullptr;};
    void deleteFaceInfos() { this->faceInfos_ = nullptr;};
    inline const vector<Models::AddFaceVideoTemplateResponseBodyDateFaceInfos> & faceInfos() const { DARABONBA_PTR_GET_CONST(faceInfos_, vector<Models::AddFaceVideoTemplateResponseBodyDateFaceInfos>) };
    inline vector<Models::AddFaceVideoTemplateResponseBodyDateFaceInfos> faceInfos() { DARABONBA_PTR_GET(faceInfos_, vector<Models::AddFaceVideoTemplateResponseBodyDateFaceInfos>) };
    inline AddFaceVideoTemplateResponseBodyDate& setFaceInfos(const vector<Models::AddFaceVideoTemplateResponseBodyDateFaceInfos> & faceInfos) { DARABONBA_PTR_SET_VALUE(faceInfos_, faceInfos) };
    inline AddFaceVideoTemplateResponseBodyDate& setFaceInfos(vector<Models::AddFaceVideoTemplateResponseBodyDateFaceInfos> && faceInfos) { DARABONBA_PTR_SET_RVALUE(faceInfos_, faceInfos) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AddFaceVideoTemplateResponseBodyDate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transResult Field Functions 
    bool hasTransResult() const { return this->transResult_ != nullptr;};
    void deleteTransResult() { this->transResult_ = nullptr;};
    inline string transResult() const { DARABONBA_PTR_GET_DEFAULT(transResult_, "") };
    inline AddFaceVideoTemplateResponseBodyDate& setTransResult(string transResult) { DARABONBA_PTR_SET_VALUE(transResult_, transResult) };


  protected:
    std::shared_ptr<vector<Models::AddFaceVideoTemplateResponseBodyDateFaceInfos>> faceInfos_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> transResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
