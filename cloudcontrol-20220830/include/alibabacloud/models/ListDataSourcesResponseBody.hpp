// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourcesResponseBodyDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody(ListDataSourcesResponseBody &&) = default ;
    ListDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody& operator=(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody& operator=(ListDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSources_ != nullptr
        && this->requestId_ != nullptr; };
    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<ListDataSourcesResponseBodyDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<ListDataSourcesResponseBodyDataSources>) };
    inline vector<ListDataSourcesResponseBodyDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<ListDataSourcesResponseBodyDataSources>) };
    inline ListDataSourcesResponseBody& setDataSources(const vector<ListDataSourcesResponseBodyDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline ListDataSourcesResponseBody& setDataSources(vector<ListDataSourcesResponseBodyDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried data.
    std::shared_ptr<vector<ListDataSourcesResponseBodyDataSources>> dataSources_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
