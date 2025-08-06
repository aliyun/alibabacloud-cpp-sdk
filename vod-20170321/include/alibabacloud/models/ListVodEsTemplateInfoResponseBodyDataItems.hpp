// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODESTEMPLATEINFORESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTVODESTEMPLATEINFORESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodEsTemplateInfoResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodEsTemplateInfoResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TmplDef, tmplDef_);
      DARABONBA_PTR_TO_JSON(TmplDesc, tmplDesc_);
      DARABONBA_PTR_TO_JSON(TmplName, tmplName_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodEsTemplateInfoResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TmplDef, tmplDef_);
      DARABONBA_PTR_FROM_JSON(TmplDesc, tmplDesc_);
      DARABONBA_PTR_FROM_JSON(TmplName, tmplName_);
    };
    ListVodEsTemplateInfoResponseBodyDataItems() = default ;
    ListVodEsTemplateInfoResponseBodyDataItems(const ListVodEsTemplateInfoResponseBodyDataItems &) = default ;
    ListVodEsTemplateInfoResponseBodyDataItems(ListVodEsTemplateInfoResponseBodyDataItems &&) = default ;
    ListVodEsTemplateInfoResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodEsTemplateInfoResponseBodyDataItems() = default ;
    ListVodEsTemplateInfoResponseBodyDataItems& operator=(const ListVodEsTemplateInfoResponseBodyDataItems &) = default ;
    ListVodEsTemplateInfoResponseBodyDataItems& operator=(ListVodEsTemplateInfoResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->tmplDef_ != nullptr && this->tmplDesc_ != nullptr && this->tmplName_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListVodEsTemplateInfoResponseBodyDataItems& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // tmplDef Field Functions 
    bool hasTmplDef() const { return this->tmplDef_ != nullptr;};
    void deleteTmplDef() { this->tmplDef_ = nullptr;};
    inline string tmplDef() const { DARABONBA_PTR_GET_DEFAULT(tmplDef_, "") };
    inline ListVodEsTemplateInfoResponseBodyDataItems& setTmplDef(string tmplDef) { DARABONBA_PTR_SET_VALUE(tmplDef_, tmplDef) };


    // tmplDesc Field Functions 
    bool hasTmplDesc() const { return this->tmplDesc_ != nullptr;};
    void deleteTmplDesc() { this->tmplDesc_ = nullptr;};
    inline string tmplDesc() const { DARABONBA_PTR_GET_DEFAULT(tmplDesc_, "") };
    inline ListVodEsTemplateInfoResponseBodyDataItems& setTmplDesc(string tmplDesc) { DARABONBA_PTR_SET_VALUE(tmplDesc_, tmplDesc) };


    // tmplName Field Functions 
    bool hasTmplName() const { return this->tmplName_ != nullptr;};
    void deleteTmplName() { this->tmplName_ = nullptr;};
    inline string tmplName() const { DARABONBA_PTR_GET_DEFAULT(tmplName_, "") };
    inline ListVodEsTemplateInfoResponseBodyDataItems& setTmplName(string tmplName) { DARABONBA_PTR_SET_VALUE(tmplName_, tmplName) };


  protected:
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<string> tmplDef_ = nullptr;
    std::shared_ptr<string> tmplDesc_ = nullptr;
    std::shared_ptr<string> tmplName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
