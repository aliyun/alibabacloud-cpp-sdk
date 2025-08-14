// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAvatarListResponseBodyDataListSupportedResolutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryAvatarListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(MakeFailReason, makeFailReason_);
      DARABONBA_PTR_TO_JSON(MakeStage, makeStage_);
      DARABONBA_PTR_TO_JSON(MakeStatus, makeStatus_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Portrait, portrait_);
      DARABONBA_PTR_TO_JSON(Preview, preview_);
      DARABONBA_PTR_TO_JSON(SupportedResolutions, supportedResolutions_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarType, avatarType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(MakeFailReason, makeFailReason_);
      DARABONBA_PTR_FROM_JSON(MakeStage, makeStage_);
      DARABONBA_PTR_FROM_JSON(MakeStatus, makeStatus_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Portrait, portrait_);
      DARABONBA_PTR_FROM_JSON(Preview, preview_);
      DARABONBA_PTR_FROM_JSON(SupportedResolutions, supportedResolutions_);
    };
    QueryAvatarListResponseBodyDataList() = default ;
    QueryAvatarListResponseBodyDataList(const QueryAvatarListResponseBodyDataList &) = default ;
    QueryAvatarListResponseBodyDataList(QueryAvatarListResponseBodyDataList &&) = default ;
    QueryAvatarListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarListResponseBodyDataList() = default ;
    QueryAvatarListResponseBodyDataList& operator=(const QueryAvatarListResponseBodyDataList &) = default ;
    QueryAvatarListResponseBodyDataList& operator=(QueryAvatarListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarType_ != nullptr
        && this->code_ != nullptr && this->description_ != nullptr && this->image_ != nullptr && this->makeFailReason_ != nullptr && this->makeStage_ != nullptr
        && this->makeStatus_ != nullptr && this->modelType_ != nullptr && this->name_ != nullptr && this->portrait_ != nullptr && this->preview_ != nullptr
        && this->supportedResolutions_ != nullptr; };
    // avatarType Field Functions 
    bool hasAvatarType() const { return this->avatarType_ != nullptr;};
    void deleteAvatarType() { this->avatarType_ = nullptr;};
    inline string avatarType() const { DARABONBA_PTR_GET_DEFAULT(avatarType_, "") };
    inline QueryAvatarListResponseBodyDataList& setAvatarType(string avatarType) { DARABONBA_PTR_SET_VALUE(avatarType_, avatarType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAvatarListResponseBodyDataList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryAvatarListResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline QueryAvatarListResponseBodyDataList& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // makeFailReason Field Functions 
    bool hasMakeFailReason() const { return this->makeFailReason_ != nullptr;};
    void deleteMakeFailReason() { this->makeFailReason_ = nullptr;};
    inline string makeFailReason() const { DARABONBA_PTR_GET_DEFAULT(makeFailReason_, "") };
    inline QueryAvatarListResponseBodyDataList& setMakeFailReason(string makeFailReason) { DARABONBA_PTR_SET_VALUE(makeFailReason_, makeFailReason) };


    // makeStage Field Functions 
    bool hasMakeStage() const { return this->makeStage_ != nullptr;};
    void deleteMakeStage() { this->makeStage_ = nullptr;};
    inline string makeStage() const { DARABONBA_PTR_GET_DEFAULT(makeStage_, "") };
    inline QueryAvatarListResponseBodyDataList& setMakeStage(string makeStage) { DARABONBA_PTR_SET_VALUE(makeStage_, makeStage) };


    // makeStatus Field Functions 
    bool hasMakeStatus() const { return this->makeStatus_ != nullptr;};
    void deleteMakeStatus() { this->makeStatus_ = nullptr;};
    inline string makeStatus() const { DARABONBA_PTR_GET_DEFAULT(makeStatus_, "") };
    inline QueryAvatarListResponseBodyDataList& setMakeStatus(string makeStatus) { DARABONBA_PTR_SET_VALUE(makeStatus_, makeStatus) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline QueryAvatarListResponseBodyDataList& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryAvatarListResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portrait Field Functions 
    bool hasPortrait() const { return this->portrait_ != nullptr;};
    void deletePortrait() { this->portrait_ = nullptr;};
    inline string portrait() const { DARABONBA_PTR_GET_DEFAULT(portrait_, "") };
    inline QueryAvatarListResponseBodyDataList& setPortrait(string portrait) { DARABONBA_PTR_SET_VALUE(portrait_, portrait) };


    // preview Field Functions 
    bool hasPreview() const { return this->preview_ != nullptr;};
    void deletePreview() { this->preview_ = nullptr;};
    inline string preview() const { DARABONBA_PTR_GET_DEFAULT(preview_, "") };
    inline QueryAvatarListResponseBodyDataList& setPreview(string preview) { DARABONBA_PTR_SET_VALUE(preview_, preview) };


    // supportedResolutions Field Functions 
    bool hasSupportedResolutions() const { return this->supportedResolutions_ != nullptr;};
    void deleteSupportedResolutions() { this->supportedResolutions_ = nullptr;};
    inline const Models::QueryAvatarListResponseBodyDataListSupportedResolutions & supportedResolutions() const { DARABONBA_PTR_GET_CONST(supportedResolutions_, Models::QueryAvatarListResponseBodyDataListSupportedResolutions) };
    inline Models::QueryAvatarListResponseBodyDataListSupportedResolutions supportedResolutions() { DARABONBA_PTR_GET(supportedResolutions_, Models::QueryAvatarListResponseBodyDataListSupportedResolutions) };
    inline QueryAvatarListResponseBodyDataList& setSupportedResolutions(const Models::QueryAvatarListResponseBodyDataListSupportedResolutions & supportedResolutions) { DARABONBA_PTR_SET_VALUE(supportedResolutions_, supportedResolutions) };
    inline QueryAvatarListResponseBodyDataList& setSupportedResolutions(Models::QueryAvatarListResponseBodyDataListSupportedResolutions && supportedResolutions) { DARABONBA_PTR_SET_RVALUE(supportedResolutions_, supportedResolutions) };


  protected:
    std::shared_ptr<string> avatarType_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> makeFailReason_ = nullptr;
    std::shared_ptr<string> makeStage_ = nullptr;
    std::shared_ptr<string> makeStatus_ = nullptr;
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> portrait_ = nullptr;
    std::shared_ptr<string> preview_ = nullptr;
    std::shared_ptr<Models::QueryAvatarListResponseBodyDataListSupportedResolutions> supportedResolutions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
