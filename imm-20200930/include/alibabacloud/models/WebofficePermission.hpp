// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBOFFICEPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_WEBOFFICEPERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class WebofficePermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebofficePermission& obj) { 
      DARABONBA_PTR_TO_JSON(Copy, copy_);
      DARABONBA_PTR_TO_JSON(Export, export_);
      DARABONBA_PTR_TO_JSON(History, history_);
      DARABONBA_PTR_TO_JSON(Print, print_);
      DARABONBA_PTR_TO_JSON(Readonly, readonly_);
      DARABONBA_PTR_TO_JSON(Rename, rename_);
    };
    friend void from_json(const Darabonba::Json& j, WebofficePermission& obj) { 
      DARABONBA_PTR_FROM_JSON(Copy, copy_);
      DARABONBA_PTR_FROM_JSON(Export, export_);
      DARABONBA_PTR_FROM_JSON(History, history_);
      DARABONBA_PTR_FROM_JSON(Print, print_);
      DARABONBA_PTR_FROM_JSON(Readonly, readonly_);
      DARABONBA_PTR_FROM_JSON(Rename, rename_);
    };
    WebofficePermission() = default ;
    WebofficePermission(const WebofficePermission &) = default ;
    WebofficePermission(WebofficePermission &&) = default ;
    WebofficePermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebofficePermission() = default ;
    WebofficePermission& operator=(const WebofficePermission &) = default ;
    WebofficePermission& operator=(WebofficePermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->copy_ != nullptr
        && this->export_ != nullptr && this->history_ != nullptr && this->print_ != nullptr && this->readonly_ != nullptr && this->rename_ != nullptr; };
    // copy Field Functions 
    bool hasCopy() const { return this->copy_ != nullptr;};
    void deleteCopy() { this->copy_ = nullptr;};
    inline bool copy() const { DARABONBA_PTR_GET_DEFAULT(copy_, false) };
    inline WebofficePermission& setCopy(bool copy) { DARABONBA_PTR_SET_VALUE(copy_, copy) };


    // export Field Functions 
    bool hasExport() const { return this->export_ != nullptr;};
    void deleteExport() { this->export_ = nullptr;};
    inline bool _export() const { DARABONBA_PTR_GET_DEFAULT(export_, false) };
    inline WebofficePermission& setExport(bool _export) { DARABONBA_PTR_SET_VALUE(export_, _export) };


    // history Field Functions 
    bool hasHistory() const { return this->history_ != nullptr;};
    void deleteHistory() { this->history_ = nullptr;};
    inline bool history() const { DARABONBA_PTR_GET_DEFAULT(history_, false) };
    inline WebofficePermission& setHistory(bool history) { DARABONBA_PTR_SET_VALUE(history_, history) };


    // print Field Functions 
    bool hasPrint() const { return this->print_ != nullptr;};
    void deletePrint() { this->print_ = nullptr;};
    inline bool print() const { DARABONBA_PTR_GET_DEFAULT(print_, false) };
    inline WebofficePermission& setPrint(bool print) { DARABONBA_PTR_SET_VALUE(print_, print) };


    // readonly Field Functions 
    bool hasReadonly() const { return this->readonly_ != nullptr;};
    void deleteReadonly() { this->readonly_ = nullptr;};
    inline bool readonly() const { DARABONBA_PTR_GET_DEFAULT(readonly_, false) };
    inline WebofficePermission& setReadonly(bool readonly) { DARABONBA_PTR_SET_VALUE(readonly_, readonly) };


    // rename Field Functions 
    bool hasRename() const { return this->rename_ != nullptr;};
    void deleteRename() { this->rename_ = nullptr;};
    inline bool rename() const { DARABONBA_PTR_GET_DEFAULT(rename_, false) };
    inline WebofficePermission& setRename(bool rename) { DARABONBA_PTR_SET_VALUE(rename_, rename) };


  protected:
    std::shared_ptr<bool> copy_ = nullptr;
    std::shared_ptr<bool> export_ = nullptr;
    std::shared_ptr<bool> history_ = nullptr;
    std::shared_ptr<bool> print_ = nullptr;
    std::shared_ptr<bool> readonly_ = nullptr;
    std::shared_ptr<bool> rename_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
