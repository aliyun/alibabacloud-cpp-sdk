// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListProjectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Projects, projects_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
    };
    ListProjectResponseBodyData() = default ;
    ListProjectResponseBodyData(const ListProjectResponseBodyData &) = default ;
    ListProjectResponseBodyData(ListProjectResponseBodyData &&) = default ;
    ListProjectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectResponseBodyData() = default ;
    ListProjectResponseBodyData& operator=(const ListProjectResponseBodyData &) = default ;
    ListProjectResponseBodyData& operator=(ListProjectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projects_ == nullptr; };
    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<string> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<string>) };
    inline vector<string> projects() { DARABONBA_PTR_GET(projects_, vector<string>) };
    inline ListProjectResponseBodyData& setProjects(const vector<string> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListProjectResponseBodyData& setProjects(vector<string> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


  protected:
    std::shared_ptr<vector<string>> projects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
