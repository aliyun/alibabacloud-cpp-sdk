// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODYBIZUNITINFOBUSINESSLEADERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODYBIZUNITINFOBUSINESSLEADERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList() = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList(const GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList &) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList(GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList &&) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList() = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList& operator=(const GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList &) = default ;
    GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList& operator=(GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetBizUnitInfoResponseBodyBizUnitInfoBusinessLeaderList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
