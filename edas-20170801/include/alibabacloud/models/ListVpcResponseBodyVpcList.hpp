// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODYVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODYVPCLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcResponseBodyVpcListVpcEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListVpcResponseBodyVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcResponseBodyVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(VpcEntity, vpcEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcResponseBodyVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcEntity, vpcEntity_);
    };
    ListVpcResponseBodyVpcList() = default ;
    ListVpcResponseBodyVpcList(const ListVpcResponseBodyVpcList &) = default ;
    ListVpcResponseBodyVpcList(ListVpcResponseBodyVpcList &&) = default ;
    ListVpcResponseBodyVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcResponseBodyVpcList() = default ;
    ListVpcResponseBodyVpcList& operator=(const ListVpcResponseBodyVpcList &) = default ;
    ListVpcResponseBodyVpcList& operator=(ListVpcResponseBodyVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcEntity_ == nullptr; };
    // vpcEntity Field Functions 
    bool hasVpcEntity() const { return this->vpcEntity_ != nullptr;};
    void deleteVpcEntity() { this->vpcEntity_ = nullptr;};
    inline const vector<Models::ListVpcResponseBodyVpcListVpcEntity> & vpcEntity() const { DARABONBA_PTR_GET_CONST(vpcEntity_, vector<Models::ListVpcResponseBodyVpcListVpcEntity>) };
    inline vector<Models::ListVpcResponseBodyVpcListVpcEntity> vpcEntity() { DARABONBA_PTR_GET(vpcEntity_, vector<Models::ListVpcResponseBodyVpcListVpcEntity>) };
    inline ListVpcResponseBodyVpcList& setVpcEntity(const vector<Models::ListVpcResponseBodyVpcListVpcEntity> & vpcEntity) { DARABONBA_PTR_SET_VALUE(vpcEntity_, vpcEntity) };
    inline ListVpcResponseBodyVpcList& setVpcEntity(vector<Models::ListVpcResponseBodyVpcListVpcEntity> && vpcEntity) { DARABONBA_PTR_SET_RVALUE(vpcEntity_, vpcEntity) };


  protected:
    std::shared_ptr<vector<Models::ListVpcResponseBodyVpcListVpcEntity>> vpcEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
