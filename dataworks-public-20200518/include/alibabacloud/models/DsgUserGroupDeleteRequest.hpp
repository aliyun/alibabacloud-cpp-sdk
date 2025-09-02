// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DsgUserGroupDeleteRequest() = default ;
    DsgUserGroupDeleteRequest(const DsgUserGroupDeleteRequest &) = default ;
    DsgUserGroupDeleteRequest(DsgUserGroupDeleteRequest &&) = default ;
    DsgUserGroupDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupDeleteRequest() = default ;
    DsgUserGroupDeleteRequest& operator=(const DsgUserGroupDeleteRequest &) = default ;
    DsgUserGroupDeleteRequest& operator=(DsgUserGroupDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline DsgUserGroupDeleteRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline DsgUserGroupDeleteRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // The information about the user group.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
