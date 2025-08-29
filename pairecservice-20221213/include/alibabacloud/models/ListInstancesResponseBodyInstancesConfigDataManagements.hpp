// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESCONFIGDATAMANAGEMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESCONFIGDATAMANAGEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstancesResponseBodyInstancesConfigDataManagements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesConfigDataManagements& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
      DARABONBA_ANY_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesConfigDataManagements& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
      DARABONBA_ANY_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListInstancesResponseBodyInstancesConfigDataManagements() = default ;
    ListInstancesResponseBodyInstancesConfigDataManagements(const ListInstancesResponseBodyInstancesConfigDataManagements &) = default ;
    ListInstancesResponseBodyInstancesConfigDataManagements(ListInstancesResponseBodyInstancesConfigDataManagements &&) = default ;
    ListInstancesResponseBodyInstancesConfigDataManagements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesConfigDataManagements() = default ;
    ListInstancesResponseBodyInstancesConfigDataManagements& operator=(const ListInstancesResponseBodyInstancesConfigDataManagements &) = default ;
    ListInstancesResponseBodyInstancesConfigDataManagements& operator=(ListInstancesResponseBodyInstancesConfigDataManagements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentCode_ != nullptr
        && this->meta_ != nullptr && this->type_ != nullptr; };
    // componentCode Field Functions 
    bool hasComponentCode() const { return this->componentCode_ != nullptr;};
    void deleteComponentCode() { this->componentCode_ = nullptr;};
    inline string componentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
    inline ListInstancesResponseBodyInstancesConfigDataManagements& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline     const Darabonba::Json & meta() const { DARABONBA_GET(meta_) };
    Darabonba::Json & meta() { DARABONBA_GET(meta_) };
    inline ListInstancesResponseBodyInstancesConfigDataManagements& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
    inline ListInstancesResponseBodyInstancesConfigDataManagements& setMeta(Darabonba::Json & meta) { DARABONBA_SET_RVALUE(meta_, meta) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstancesResponseBodyInstancesConfigDataManagements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> componentCode_ = nullptr;
    Darabonba::Json meta_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
