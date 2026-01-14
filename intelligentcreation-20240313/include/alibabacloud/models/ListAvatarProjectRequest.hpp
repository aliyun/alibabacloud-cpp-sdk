// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVATARPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVATARPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAvatarProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvatarProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(projectIdList, projectIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvatarProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(projectIdList, projectIdList_);
    };
    ListAvatarProjectRequest() = default ;
    ListAvatarProjectRequest(const ListAvatarProjectRequest &) = default ;
    ListAvatarProjectRequest(ListAvatarProjectRequest &&) = default ;
    ListAvatarProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvatarProjectRequest() = default ;
    ListAvatarProjectRequest& operator=(const ListAvatarProjectRequest &) = default ;
    ListAvatarProjectRequest& operator=(ListAvatarProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectIdList_ == nullptr; };
    // projectIdList Field Functions 
    bool hasProjectIdList() const { return this->projectIdList_ != nullptr;};
    void deleteProjectIdList() { this->projectIdList_ = nullptr;};
    inline const vector<string> & getProjectIdList() const { DARABONBA_PTR_GET_CONST(projectIdList_, vector<string>) };
    inline vector<string> getProjectIdList() { DARABONBA_PTR_GET(projectIdList_, vector<string>) };
    inline ListAvatarProjectRequest& setProjectIdList(const vector<string> & projectIdList) { DARABONBA_PTR_SET_VALUE(projectIdList_, projectIdList) };
    inline ListAvatarProjectRequest& setProjectIdList(vector<string> && projectIdList) { DARABONBA_PTR_SET_RVALUE(projectIdList_, projectIdList) };


  protected:
    shared_ptr<vector<string>> projectIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
