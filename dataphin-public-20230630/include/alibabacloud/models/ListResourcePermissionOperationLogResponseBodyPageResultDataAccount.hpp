// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATAACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATAACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionOperationLogResponseBodyPageResultDataAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionOperationLogResponseBodyPageResultDataAccount& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionOperationLogResponseBodyPageResultDataAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListResourcePermissionOperationLogResponseBodyPageResultDataAccount() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataAccount(const ListResourcePermissionOperationLogResponseBodyPageResultDataAccount &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataAccount(ListResourcePermissionOperationLogResponseBodyPageResultDataAccount &&) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataAccount() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataAccount& operator=(const ListResourcePermissionOperationLogResponseBodyPageResultDataAccount &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultDataAccount& operator=(ListResourcePermissionOperationLogResponseBodyPageResultDataAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataAccount& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataAccount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultDataAccount& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
