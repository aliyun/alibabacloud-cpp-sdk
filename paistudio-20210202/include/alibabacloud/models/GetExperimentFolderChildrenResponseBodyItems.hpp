// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTFOLDERCHILDRENRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTFOLDERCHILDRENRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentFolderChildrenResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentFolderChildrenResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Empty, empty_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentFolderChildrenResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Empty, empty_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetExperimentFolderChildrenResponseBodyItems() = default ;
    GetExperimentFolderChildrenResponseBodyItems(const GetExperimentFolderChildrenResponseBodyItems &) = default ;
    GetExperimentFolderChildrenResponseBodyItems(GetExperimentFolderChildrenResponseBodyItems &&) = default ;
    GetExperimentFolderChildrenResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentFolderChildrenResponseBodyItems() = default ;
    GetExperimentFolderChildrenResponseBodyItems& operator=(const GetExperimentFolderChildrenResponseBodyItems &) = default ;
    GetExperimentFolderChildrenResponseBodyItems& operator=(GetExperimentFolderChildrenResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->empty_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->icon_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->type_ == nullptr; };
    // empty Field Functions 
    bool hasEmpty() const { return this->empty_ != nullptr;};
    void deleteEmpty() { this->empty_ = nullptr;};
    inline bool empty() const { DARABONBA_PTR_GET_DEFAULT(empty_, false) };
    inline GetExperimentFolderChildrenResponseBodyItems& setEmpty(bool empty) { DARABONBA_PTR_SET_VALUE(empty_, empty) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetExperimentFolderChildrenResponseBodyItems& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetExperimentFolderChildrenResponseBodyItems& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline GetExperimentFolderChildrenResponseBodyItems& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetExperimentFolderChildrenResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetExperimentFolderChildrenResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetExperimentFolderChildrenResponseBodyItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> empty_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
