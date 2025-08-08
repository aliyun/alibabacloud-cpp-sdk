// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkspacesResponseBodyDataBaseWorkspaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkspacesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaseWorkspaces, baseWorkspaces_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseWorkspaces, baseWorkspaces_);
    };
    ListWorkspacesResponseBodyData() = default ;
    ListWorkspacesResponseBodyData(const ListWorkspacesResponseBodyData &) = default ;
    ListWorkspacesResponseBodyData(ListWorkspacesResponseBodyData &&) = default ;
    ListWorkspacesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBodyData() = default ;
    ListWorkspacesResponseBodyData& operator=(const ListWorkspacesResponseBodyData &) = default ;
    ListWorkspacesResponseBodyData& operator=(ListWorkspacesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseWorkspaces_ != nullptr; };
    // baseWorkspaces Field Functions 
    bool hasBaseWorkspaces() const { return this->baseWorkspaces_ != nullptr;};
    void deleteBaseWorkspaces() { this->baseWorkspaces_ = nullptr;};
    inline const vector<Models::ListWorkspacesResponseBodyDataBaseWorkspaces> & baseWorkspaces() const { DARABONBA_PTR_GET_CONST(baseWorkspaces_, vector<Models::ListWorkspacesResponseBodyDataBaseWorkspaces>) };
    inline vector<Models::ListWorkspacesResponseBodyDataBaseWorkspaces> baseWorkspaces() { DARABONBA_PTR_GET(baseWorkspaces_, vector<Models::ListWorkspacesResponseBodyDataBaseWorkspaces>) };
    inline ListWorkspacesResponseBodyData& setBaseWorkspaces(const vector<Models::ListWorkspacesResponseBodyDataBaseWorkspaces> & baseWorkspaces) { DARABONBA_PTR_SET_VALUE(baseWorkspaces_, baseWorkspaces) };
    inline ListWorkspacesResponseBodyData& setBaseWorkspaces(vector<Models::ListWorkspacesResponseBodyDataBaseWorkspaces> && baseWorkspaces) { DARABONBA_PTR_SET_RVALUE(baseWorkspaces_, baseWorkspaces) };


  protected:
    std::shared_ptr<vector<Models::ListWorkspacesResponseBodyDataBaseWorkspaces>> baseWorkspaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
