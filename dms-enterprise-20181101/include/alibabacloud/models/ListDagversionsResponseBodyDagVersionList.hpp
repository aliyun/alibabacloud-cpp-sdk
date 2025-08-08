// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODYDAGVERSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODYDAGVERSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDAGVersionsResponseBodyDagVersionListDagVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDAGVersionsResponseBodyDagVersionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDAGVersionsResponseBodyDagVersionList& obj) { 
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListDAGVersionsResponseBodyDagVersionList& obj) { 
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
    };
    ListDAGVersionsResponseBodyDagVersionList() = default ;
    ListDAGVersionsResponseBodyDagVersionList(const ListDAGVersionsResponseBodyDagVersionList &) = default ;
    ListDAGVersionsResponseBodyDagVersionList(ListDAGVersionsResponseBodyDagVersionList &&) = default ;
    ListDAGVersionsResponseBodyDagVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDAGVersionsResponseBodyDagVersionList() = default ;
    ListDAGVersionsResponseBodyDagVersionList& operator=(const ListDAGVersionsResponseBodyDagVersionList &) = default ;
    ListDAGVersionsResponseBodyDagVersionList& operator=(ListDAGVersionsResponseBodyDagVersionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagVersion_ != nullptr; };
    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline const vector<Models::ListDAGVersionsResponseBodyDagVersionListDagVersion> & dagVersion() const { DARABONBA_PTR_GET_CONST(dagVersion_, vector<Models::ListDAGVersionsResponseBodyDagVersionListDagVersion>) };
    inline vector<Models::ListDAGVersionsResponseBodyDagVersionListDagVersion> dagVersion() { DARABONBA_PTR_GET(dagVersion_, vector<Models::ListDAGVersionsResponseBodyDagVersionListDagVersion>) };
    inline ListDAGVersionsResponseBodyDagVersionList& setDagVersion(const vector<Models::ListDAGVersionsResponseBodyDagVersionListDagVersion> & dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };
    inline ListDAGVersionsResponseBodyDagVersionList& setDagVersion(vector<Models::ListDAGVersionsResponseBodyDagVersionListDagVersion> && dagVersion) { DARABONBA_PTR_SET_RVALUE(dagVersion_, dagVersion) };


  protected:
    std::shared_ptr<vector<Models::ListDAGVersionsResponseBodyDagVersionListDagVersion>> dagVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
