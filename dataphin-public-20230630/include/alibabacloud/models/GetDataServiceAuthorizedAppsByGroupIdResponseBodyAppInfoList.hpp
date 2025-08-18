// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDAPPSBYGROUPIDRESPONSEBODYAPPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAUTHORIZEDAPPSBYGROUPIDRESPONSEBODYAPPINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList() = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList(const GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList &) = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList(GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList &&) = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList() = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList& operator=(const GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList &) = default ;
    GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList& operator=(GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataServiceAuthorizedAppsByGroupIdResponseBodyAppInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // AppKey
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // AppId
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
