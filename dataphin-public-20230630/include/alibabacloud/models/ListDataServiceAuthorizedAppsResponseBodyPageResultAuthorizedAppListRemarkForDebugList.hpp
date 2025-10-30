// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODYPAGERESULTAUTHORIZEDAPPLISTREMARKFORDEBUGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODYPAGERESULTAUTHORIZEDAPPLISTREMARKFORDEBUGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList() = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList(const ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList &) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList(ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList &&) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList() = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList& operator=(const ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList &) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList& operator=(ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppListRemarkForDebugList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
