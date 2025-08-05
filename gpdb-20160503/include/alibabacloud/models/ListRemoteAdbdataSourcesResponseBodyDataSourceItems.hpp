// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMOTEADBDATASOURCESRESPONSEBODYDATASOURCEITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTREMOTEADBDATASOURCESRESPONSEBODYDATASOURCEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListRemoteADBDataSourcesResponseBodyDataSourceItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemoteADBDataSourcesResponseBodyDataSourceItems& obj) { 
      DARABONBA_PTR_TO_JSON(RemoteDataSources, remoteDataSources_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemoteADBDataSourcesResponseBodyDataSourceItems& obj) { 
      DARABONBA_PTR_FROM_JSON(RemoteDataSources, remoteDataSources_);
    };
    ListRemoteADBDataSourcesResponseBodyDataSourceItems() = default ;
    ListRemoteADBDataSourcesResponseBodyDataSourceItems(const ListRemoteADBDataSourcesResponseBodyDataSourceItems &) = default ;
    ListRemoteADBDataSourcesResponseBodyDataSourceItems(ListRemoteADBDataSourcesResponseBodyDataSourceItems &&) = default ;
    ListRemoteADBDataSourcesResponseBodyDataSourceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemoteADBDataSourcesResponseBodyDataSourceItems() = default ;
    ListRemoteADBDataSourcesResponseBodyDataSourceItems& operator=(const ListRemoteADBDataSourcesResponseBodyDataSourceItems &) = default ;
    ListRemoteADBDataSourcesResponseBodyDataSourceItems& operator=(ListRemoteADBDataSourcesResponseBodyDataSourceItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remoteDataSources_ != nullptr; };
    // remoteDataSources Field Functions 
    bool hasRemoteDataSources() const { return this->remoteDataSources_ != nullptr;};
    void deleteRemoteDataSources() { this->remoteDataSources_ = nullptr;};
    inline const vector<Models::ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources> & remoteDataSources() const { DARABONBA_PTR_GET_CONST(remoteDataSources_, vector<Models::ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources>) };
    inline vector<Models::ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources> remoteDataSources() { DARABONBA_PTR_GET(remoteDataSources_, vector<Models::ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources>) };
    inline ListRemoteADBDataSourcesResponseBodyDataSourceItems& setRemoteDataSources(const vector<Models::ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources> & remoteDataSources) { DARABONBA_PTR_SET_VALUE(remoteDataSources_, remoteDataSources) };
    inline ListRemoteADBDataSourcesResponseBodyDataSourceItems& setRemoteDataSources(vector<Models::ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources> && remoteDataSources) { DARABONBA_PTR_SET_RVALUE(remoteDataSources_, remoteDataSources) };


  protected:
    std::shared_ptr<vector<Models::ListRemoteADBDataSourcesResponseBodyDataSourceItemsRemoteDataSources>> remoteDataSources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
