// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ListDcdnRealTimeDeliveryProjectResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDcdnRealTimeDeliveryProjectResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Projects, projects_);
    };
    friend void from_json(const Darabonba::Json& j, ListDcdnRealTimeDeliveryProjectResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
    };
    ListDcdnRealTimeDeliveryProjectResponseBodyContent() = default ;
    ListDcdnRealTimeDeliveryProjectResponseBodyContent(const ListDcdnRealTimeDeliveryProjectResponseBodyContent &) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBodyContent(ListDcdnRealTimeDeliveryProjectResponseBodyContent &&) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDcdnRealTimeDeliveryProjectResponseBodyContent() = default ;
    ListDcdnRealTimeDeliveryProjectResponseBodyContent& operator=(const ListDcdnRealTimeDeliveryProjectResponseBodyContent &) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBodyContent& operator=(ListDcdnRealTimeDeliveryProjectResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projects_ != nullptr; };
    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<Models::ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Models::ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects>) };
    inline vector<Models::ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects> projects() { DARABONBA_PTR_GET(projects_, vector<Models::ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects>) };
    inline ListDcdnRealTimeDeliveryProjectResponseBodyContent& setProjects(const vector<Models::ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListDcdnRealTimeDeliveryProjectResponseBodyContent& setProjects(vector<Models::ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


  protected:
    std::shared_ptr<vector<Models::ListDcdnRealTimeDeliveryProjectResponseBodyContentProjects>> projects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
