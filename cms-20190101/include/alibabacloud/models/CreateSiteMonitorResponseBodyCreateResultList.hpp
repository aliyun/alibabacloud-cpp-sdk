// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYCREATERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYCREATERESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSiteMonitorResponseBodyCreateResultListCreateResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateSiteMonitorResponseBodyCreateResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteMonitorResponseBodyCreateResultList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateResultList, createResultList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteMonitorResponseBodyCreateResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateResultList, createResultList_);
    };
    CreateSiteMonitorResponseBodyCreateResultList() = default ;
    CreateSiteMonitorResponseBodyCreateResultList(const CreateSiteMonitorResponseBodyCreateResultList &) = default ;
    CreateSiteMonitorResponseBodyCreateResultList(CreateSiteMonitorResponseBodyCreateResultList &&) = default ;
    CreateSiteMonitorResponseBodyCreateResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteMonitorResponseBodyCreateResultList() = default ;
    CreateSiteMonitorResponseBodyCreateResultList& operator=(const CreateSiteMonitorResponseBodyCreateResultList &) = default ;
    CreateSiteMonitorResponseBodyCreateResultList& operator=(CreateSiteMonitorResponseBodyCreateResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createResultList_ != nullptr; };
    // createResultList Field Functions 
    bool hasCreateResultList() const { return this->createResultList_ != nullptr;};
    void deleteCreateResultList() { this->createResultList_ = nullptr;};
    inline const vector<Models::CreateSiteMonitorResponseBodyCreateResultListCreateResultList> & createResultList() const { DARABONBA_PTR_GET_CONST(createResultList_, vector<Models::CreateSiteMonitorResponseBodyCreateResultListCreateResultList>) };
    inline vector<Models::CreateSiteMonitorResponseBodyCreateResultListCreateResultList> createResultList() { DARABONBA_PTR_GET(createResultList_, vector<Models::CreateSiteMonitorResponseBodyCreateResultListCreateResultList>) };
    inline CreateSiteMonitorResponseBodyCreateResultList& setCreateResultList(const vector<Models::CreateSiteMonitorResponseBodyCreateResultListCreateResultList> & createResultList) { DARABONBA_PTR_SET_VALUE(createResultList_, createResultList) };
    inline CreateSiteMonitorResponseBodyCreateResultList& setCreateResultList(vector<Models::CreateSiteMonitorResponseBodyCreateResultListCreateResultList> && createResultList) { DARABONBA_PTR_SET_RVALUE(createResultList_, createResultList) };


  protected:
    std::shared_ptr<vector<Models::CreateSiteMonitorResponseBodyCreateResultListCreateResultList>> createResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
