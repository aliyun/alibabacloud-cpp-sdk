// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceRiskNumRequestInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
    };
    ListInstanceRiskNumRequest() = default ;
    ListInstanceRiskNumRequest(const ListInstanceRiskNumRequest &) = default ;
    ListInstanceRiskNumRequest(ListInstanceRiskNumRequest &&) = default ;
    ListInstanceRiskNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskNumRequest() = default ;
    ListInstanceRiskNumRequest& operator=(const ListInstanceRiskNumRequest &) = default ;
    ListInstanceRiskNumRequest& operator=(ListInstanceRiskNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceList_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<ListInstanceRiskNumRequestInstanceList> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<ListInstanceRiskNumRequestInstanceList>) };
    inline vector<ListInstanceRiskNumRequestInstanceList> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<ListInstanceRiskNumRequestInstanceList>) };
    inline ListInstanceRiskNumRequest& setInstanceList(const vector<ListInstanceRiskNumRequestInstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListInstanceRiskNumRequest& setInstanceList(vector<ListInstanceRiskNumRequestInstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


  protected:
    // The instances.
    std::shared_ptr<vector<ListInstanceRiskNumRequestInstanceList>> instanceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
