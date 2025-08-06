// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABUSINESSESVALUESDKFEATURES_HPP_
#define ALIBABACLOUD_MODELS_DATABUSINESSESVALUESDKFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DataBusinessesValueSdkFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataBusinessesValueSdkFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Scode, scode_);
      DARABONBA_PTR_TO_JSON(Svalue, svalue_);
    };
    friend void from_json(const Darabonba::Json& j, DataBusinessesValueSdkFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Scode, scode_);
      DARABONBA_PTR_FROM_JSON(Svalue, svalue_);
    };
    DataBusinessesValueSdkFeatures() = default ;
    DataBusinessesValueSdkFeatures(const DataBusinessesValueSdkFeatures &) = default ;
    DataBusinessesValueSdkFeatures(DataBusinessesValueSdkFeatures &&) = default ;
    DataBusinessesValueSdkFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataBusinessesValueSdkFeatures() = default ;
    DataBusinessesValueSdkFeatures& operator=(const DataBusinessesValueSdkFeatures &) = default ;
    DataBusinessesValueSdkFeatures& operator=(DataBusinessesValueSdkFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->scode_ != nullptr && this->svalue_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DataBusinessesValueSdkFeatures& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataBusinessesValueSdkFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scode Field Functions 
    bool hasScode() const { return this->scode_ != nullptr;};
    void deleteScode() { this->scode_ = nullptr;};
    inline string scode() const { DARABONBA_PTR_GET_DEFAULT(scode_, "") };
    inline DataBusinessesValueSdkFeatures& setScode(string scode) { DARABONBA_PTR_SET_VALUE(scode_, scode) };


    // svalue Field Functions 
    bool hasSvalue() const { return this->svalue_ != nullptr;};
    void deleteSvalue() { this->svalue_ = nullptr;};
    inline string svalue() const { DARABONBA_PTR_GET_DEFAULT(svalue_, "") };
    inline DataBusinessesValueSdkFeatures& setSvalue(string svalue) { DARABONBA_PTR_SET_VALUE(svalue_, svalue) };


  protected:
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> scode_ = nullptr;
    std::shared_ptr<string> svalue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
