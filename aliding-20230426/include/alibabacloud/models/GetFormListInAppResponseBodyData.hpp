// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMLISTINAPPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFORMLISTINAPPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFormListInAppResponseBodyDataTitle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormListInAppResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormListInAppResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(FormType, formType_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormListInAppResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(FormType, formType_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetFormListInAppResponseBodyData() = default ;
    GetFormListInAppResponseBodyData(const GetFormListInAppResponseBodyData &) = default ;
    GetFormListInAppResponseBodyData(GetFormListInAppResponseBodyData &&) = default ;
    GetFormListInAppResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormListInAppResponseBodyData() = default ;
    GetFormListInAppResponseBodyData& operator=(const GetFormListInAppResponseBodyData &) = default ;
    GetFormListInAppResponseBodyData& operator=(GetFormListInAppResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->formType_ == nullptr && return this->formUuid_ == nullptr && return this->gmtCreate_ == nullptr && return this->title_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetFormListInAppResponseBodyData& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // formType Field Functions 
    bool hasFormType() const { return this->formType_ != nullptr;};
    void deleteFormType() { this->formType_ = nullptr;};
    inline string formType() const { DARABONBA_PTR_GET_DEFAULT(formType_, "") };
    inline GetFormListInAppResponseBodyData& setFormType(string formType) { DARABONBA_PTR_SET_VALUE(formType_, formType) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetFormListInAppResponseBodyData& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetFormListInAppResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline const Models::GetFormListInAppResponseBodyDataTitle & title() const { DARABONBA_PTR_GET_CONST(title_, Models::GetFormListInAppResponseBodyDataTitle) };
    inline Models::GetFormListInAppResponseBodyDataTitle title() { DARABONBA_PTR_GET(title_, Models::GetFormListInAppResponseBodyDataTitle) };
    inline GetFormListInAppResponseBodyData& setTitle(const Models::GetFormListInAppResponseBodyDataTitle & title) { DARABONBA_PTR_SET_VALUE(title_, title) };
    inline GetFormListInAppResponseBodyData& setTitle(Models::GetFormListInAppResponseBodyDataTitle && title) { DARABONBA_PTR_SET_RVALUE(title_, title) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> formType_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<Models::GetFormListInAppResponseBodyDataTitle> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
