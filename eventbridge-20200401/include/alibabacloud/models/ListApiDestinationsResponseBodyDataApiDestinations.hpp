// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSRESPONSEBODYDATAAPIDESTINATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSRESPONSEBODYDATAAPIDESTINATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListApiDestinationsResponseBodyDataApiDestinations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDestinationsResponseBodyDataApiDestinations& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(HttpApiParameters, httpApiParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDestinationsResponseBodyDataApiDestinations& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(HttpApiParameters, httpApiParameters_);
    };
    ListApiDestinationsResponseBodyDataApiDestinations() = default ;
    ListApiDestinationsResponseBodyDataApiDestinations(const ListApiDestinationsResponseBodyDataApiDestinations &) = default ;
    ListApiDestinationsResponseBodyDataApiDestinations(ListApiDestinationsResponseBodyDataApiDestinations &&) = default ;
    ListApiDestinationsResponseBodyDataApiDestinations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDestinationsResponseBodyDataApiDestinations() = default ;
    ListApiDestinationsResponseBodyDataApiDestinations& operator=(const ListApiDestinationsResponseBodyDataApiDestinations &) = default ;
    ListApiDestinationsResponseBodyDataApiDestinations& operator=(ListApiDestinationsResponseBodyDataApiDestinations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinationName_ != nullptr
        && this->connectionName_ != nullptr && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->httpApiParameters_ != nullptr; };
    // apiDestinationName Field Functions 
    bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
    void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
    inline string apiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
    inline ListApiDestinationsResponseBodyDataApiDestinations& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline ListApiDestinationsResponseBodyDataApiDestinations& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApiDestinationsResponseBodyDataApiDestinations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListApiDestinationsResponseBodyDataApiDestinations& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // httpApiParameters Field Functions 
    bool hasHttpApiParameters() const { return this->httpApiParameters_ != nullptr;};
    void deleteHttpApiParameters() { this->httpApiParameters_ = nullptr;};
    inline const Models::ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters & httpApiParameters() const { DARABONBA_PTR_GET_CONST(httpApiParameters_, Models::ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters) };
    inline Models::ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters httpApiParameters() { DARABONBA_PTR_GET(httpApiParameters_, Models::ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters) };
    inline ListApiDestinationsResponseBodyDataApiDestinations& setHttpApiParameters(const Models::ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters & httpApiParameters) { DARABONBA_PTR_SET_VALUE(httpApiParameters_, httpApiParameters) };
    inline ListApiDestinationsResponseBodyDataApiDestinations& setHttpApiParameters(Models::ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters && httpApiParameters) { DARABONBA_PTR_SET_RVALUE(httpApiParameters_, httpApiParameters) };


  protected:
    // The name of the API destination.
    std::shared_ptr<string> apiDestinationName_ = nullptr;
    // The connection name.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The description of the connection.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the API destination was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The request parameters that are configured for the API destination.
    std::shared_ptr<Models::ListApiDestinationsResponseBodyDataApiDestinationsHttpApiParameters> httpApiParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
