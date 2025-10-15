// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODYAPPLICATIONTEMPLATESALEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATERESPONSEBODYAPPLICATIONTEMPLATESALEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AlwaysFree, alwaysFree_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AlwaysFree, alwaysFree_);
    };
    GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo() = default ;
    GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo(const GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo &) = default ;
    GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo(GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo &&) = default ;
    GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo() = default ;
    GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo& operator=(const GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo &) = default ;
    GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo& operator=(GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alwaysFree_ == nullptr; };
    // alwaysFree Field Functions 
    bool hasAlwaysFree() const { return this->alwaysFree_ != nullptr;};
    void deleteAlwaysFree() { this->alwaysFree_ = nullptr;};
    inline bool alwaysFree() const { DARABONBA_PTR_GET_DEFAULT(alwaysFree_, false) };
    inline GetApplicationTemplateResponseBodyApplicationTemplateSaleInfo& setAlwaysFree(bool alwaysFree) { DARABONBA_PTR_SET_VALUE(alwaysFree_, alwaysFree) };


  protected:
    // 是否永久免费
    std::shared_ptr<bool> alwaysFree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
