// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDPDEPARTMENTSRESPONSEBODYDATADATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTIDPDEPARTMENTSRESPONSEBODYDATADATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListIdpDepartmentsResponseBodyDataDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdpDepartmentsResponseBodyDataDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdpDepartmentsResponseBodyDataDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListIdpDepartmentsResponseBodyDataDataList() = default ;
    ListIdpDepartmentsResponseBodyDataDataList(const ListIdpDepartmentsResponseBodyDataDataList &) = default ;
    ListIdpDepartmentsResponseBodyDataDataList(ListIdpDepartmentsResponseBodyDataDataList &&) = default ;
    ListIdpDepartmentsResponseBodyDataDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdpDepartmentsResponseBodyDataDataList() = default ;
    ListIdpDepartmentsResponseBodyDataDataList& operator=(const ListIdpDepartmentsResponseBodyDataDataList &) = default ;
    ListIdpDepartmentsResponseBodyDataDataList& operator=(ListIdpDepartmentsResponseBodyDataDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->idpConfigId_ == nullptr && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIdpDepartmentsResponseBodyDataDataList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline ListIdpDepartmentsResponseBodyDataDataList& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIdpDepartmentsResponseBodyDataDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> idpConfigId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
