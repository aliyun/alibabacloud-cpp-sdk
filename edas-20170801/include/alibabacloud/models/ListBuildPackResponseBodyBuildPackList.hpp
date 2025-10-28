// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODYBUILDPACKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODYBUILDPACKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBuildPackResponseBodyBuildPackListBuildPack.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListBuildPackResponseBodyBuildPackList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBuildPackResponseBodyBuildPackList& obj) { 
      DARABONBA_PTR_TO_JSON(BuildPack, buildPack_);
    };
    friend void from_json(const Darabonba::Json& j, ListBuildPackResponseBodyBuildPackList& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildPack, buildPack_);
    };
    ListBuildPackResponseBodyBuildPackList() = default ;
    ListBuildPackResponseBodyBuildPackList(const ListBuildPackResponseBodyBuildPackList &) = default ;
    ListBuildPackResponseBodyBuildPackList(ListBuildPackResponseBodyBuildPackList &&) = default ;
    ListBuildPackResponseBodyBuildPackList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBuildPackResponseBodyBuildPackList() = default ;
    ListBuildPackResponseBodyBuildPackList& operator=(const ListBuildPackResponseBodyBuildPackList &) = default ;
    ListBuildPackResponseBodyBuildPackList& operator=(ListBuildPackResponseBodyBuildPackList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildPack_ == nullptr; };
    // buildPack Field Functions 
    bool hasBuildPack() const { return this->buildPack_ != nullptr;};
    void deleteBuildPack() { this->buildPack_ = nullptr;};
    inline const vector<Models::ListBuildPackResponseBodyBuildPackListBuildPack> & buildPack() const { DARABONBA_PTR_GET_CONST(buildPack_, vector<Models::ListBuildPackResponseBodyBuildPackListBuildPack>) };
    inline vector<Models::ListBuildPackResponseBodyBuildPackListBuildPack> buildPack() { DARABONBA_PTR_GET(buildPack_, vector<Models::ListBuildPackResponseBodyBuildPackListBuildPack>) };
    inline ListBuildPackResponseBodyBuildPackList& setBuildPack(const vector<Models::ListBuildPackResponseBodyBuildPackListBuildPack> & buildPack) { DARABONBA_PTR_SET_VALUE(buildPack_, buildPack) };
    inline ListBuildPackResponseBodyBuildPackList& setBuildPack(vector<Models::ListBuildPackResponseBodyBuildPackListBuildPack> && buildPack) { DARABONBA_PTR_SET_RVALUE(buildPack_, buildPack) };


  protected:
    std::shared_ptr<vector<Models::ListBuildPackResponseBodyBuildPackListBuildPack>> buildPack_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
