// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEESINSTANCEIDSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEESINSTANCEIDSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAvailableEsInstanceIdsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableEsInstanceIdsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_TO_JSON(kibanaEndpoint, kibanaEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableEsInstanceIdsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(esInstanceId, esInstanceId_);
      DARABONBA_PTR_FROM_JSON(kibanaEndpoint, kibanaEndpoint_);
    };
    ListAvailableEsInstanceIdsResponseBodyResult() = default ;
    ListAvailableEsInstanceIdsResponseBodyResult(const ListAvailableEsInstanceIdsResponseBodyResult &) = default ;
    ListAvailableEsInstanceIdsResponseBodyResult(ListAvailableEsInstanceIdsResponseBodyResult &&) = default ;
    ListAvailableEsInstanceIdsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableEsInstanceIdsResponseBodyResult() = default ;
    ListAvailableEsInstanceIdsResponseBodyResult& operator=(const ListAvailableEsInstanceIdsResponseBodyResult &) = default ;
    ListAvailableEsInstanceIdsResponseBodyResult& operator=(ListAvailableEsInstanceIdsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->endpoint_ != nullptr && this->esInstanceId_ != nullptr && this->kibanaEndpoint_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAvailableEsInstanceIdsResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListAvailableEsInstanceIdsResponseBodyResult& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // esInstanceId Field Functions 
    bool hasEsInstanceId() const { return this->esInstanceId_ != nullptr;};
    void deleteEsInstanceId() { this->esInstanceId_ = nullptr;};
    inline string esInstanceId() const { DARABONBA_PTR_GET_DEFAULT(esInstanceId_, "") };
    inline ListAvailableEsInstanceIdsResponseBodyResult& setEsInstanceId(string esInstanceId) { DARABONBA_PTR_SET_VALUE(esInstanceId_, esInstanceId) };


    // kibanaEndpoint Field Functions 
    bool hasKibanaEndpoint() const { return this->kibanaEndpoint_ != nullptr;};
    void deleteKibanaEndpoint() { this->kibanaEndpoint_ = nullptr;};
    inline string kibanaEndpoint() const { DARABONBA_PTR_GET_DEFAULT(kibanaEndpoint_, "") };
    inline ListAvailableEsInstanceIdsResponseBodyResult& setKibanaEndpoint(string kibanaEndpoint) { DARABONBA_PTR_SET_VALUE(kibanaEndpoint_, kibanaEndpoint) };


  protected:
    // The name of the Elasticsearch cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The address that is used to access the Elasticsearch cluster over the Internet.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The ID of the Elasticsearch cluster.
    std::shared_ptr<string> esInstanceId_ = nullptr;
    // The address that is used to access the Kibana console of the Elasticsearch cluster over the Internet.
    std::shared_ptr<string> kibanaEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
