// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODYSLBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODYSLBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSlbResponseBodySlbListSlbEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSlbResponseBodySlbList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlbResponseBodySlbList& obj) { 
      DARABONBA_PTR_TO_JSON(SlbEntity, slbEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlbResponseBodySlbList& obj) { 
      DARABONBA_PTR_FROM_JSON(SlbEntity, slbEntity_);
    };
    ListSlbResponseBodySlbList() = default ;
    ListSlbResponseBodySlbList(const ListSlbResponseBodySlbList &) = default ;
    ListSlbResponseBodySlbList(ListSlbResponseBodySlbList &&) = default ;
    ListSlbResponseBodySlbList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlbResponseBodySlbList() = default ;
    ListSlbResponseBodySlbList& operator=(const ListSlbResponseBodySlbList &) = default ;
    ListSlbResponseBodySlbList& operator=(ListSlbResponseBodySlbList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slbEntity_ == nullptr; };
    // slbEntity Field Functions 
    bool hasSlbEntity() const { return this->slbEntity_ != nullptr;};
    void deleteSlbEntity() { this->slbEntity_ = nullptr;};
    inline const vector<Models::ListSlbResponseBodySlbListSlbEntity> & slbEntity() const { DARABONBA_PTR_GET_CONST(slbEntity_, vector<Models::ListSlbResponseBodySlbListSlbEntity>) };
    inline vector<Models::ListSlbResponseBodySlbListSlbEntity> slbEntity() { DARABONBA_PTR_GET(slbEntity_, vector<Models::ListSlbResponseBodySlbListSlbEntity>) };
    inline ListSlbResponseBodySlbList& setSlbEntity(const vector<Models::ListSlbResponseBodySlbListSlbEntity> & slbEntity) { DARABONBA_PTR_SET_VALUE(slbEntity_, slbEntity) };
    inline ListSlbResponseBodySlbList& setSlbEntity(vector<Models::ListSlbResponseBodySlbListSlbEntity> && slbEntity) { DARABONBA_PTR_SET_RVALUE(slbEntity_, slbEntity) };


  protected:
    std::shared_ptr<vector<Models::ListSlbResponseBodySlbListSlbEntity>> slbEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
