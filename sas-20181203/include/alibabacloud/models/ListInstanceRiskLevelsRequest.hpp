// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKLEVELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceRiskLevelsRequestInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskLevelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskLevelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskLevelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
    };
    ListInstanceRiskLevelsRequest() = default ;
    ListInstanceRiskLevelsRequest(const ListInstanceRiskLevelsRequest &) = default ;
    ListInstanceRiskLevelsRequest(ListInstanceRiskLevelsRequest &&) = default ;
    ListInstanceRiskLevelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskLevelsRequest() = default ;
    ListInstanceRiskLevelsRequest& operator=(const ListInstanceRiskLevelsRequest &) = default ;
    ListInstanceRiskLevelsRequest& operator=(ListInstanceRiskLevelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceList_ != nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<ListInstanceRiskLevelsRequestInstanceList> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<ListInstanceRiskLevelsRequestInstanceList>) };
    inline vector<ListInstanceRiskLevelsRequestInstanceList> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<ListInstanceRiskLevelsRequestInstanceList>) };
    inline ListInstanceRiskLevelsRequest& setInstanceList(const vector<ListInstanceRiskLevelsRequestInstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListInstanceRiskLevelsRequest& setInstanceList(vector<ListInstanceRiskLevelsRequestInstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


  protected:
    // The instances.
    std::shared_ptr<vector<ListInstanceRiskLevelsRequestInstanceList>> instanceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
