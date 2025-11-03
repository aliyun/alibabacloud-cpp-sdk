// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKAPIDESTINATIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKAPIDESTINATIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SinkApiDestinationParametersBodyParameters.hpp>
#include <alibabacloud/models/SinkApiDestinationParametersHeaderParameters.hpp>
#include <alibabacloud/models/SinkApiDestinationParametersQueryStringParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkApiDestinationParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkApiDestinationParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueryStringParameters, queryStringParameters_);
    };
    friend void from_json(const Darabonba::Json& j, SinkApiDestinationParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueryStringParameters, queryStringParameters_);
    };
    SinkApiDestinationParameters() = default ;
    SinkApiDestinationParameters(const SinkApiDestinationParameters &) = default ;
    SinkApiDestinationParameters(SinkApiDestinationParameters &&) = default ;
    SinkApiDestinationParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkApiDestinationParameters() = default ;
    SinkApiDestinationParameters& operator=(const SinkApiDestinationParameters &) = default ;
    SinkApiDestinationParameters& operator=(SinkApiDestinationParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyParameters_ == nullptr
        && return this->headerParameters_ == nullptr && return this->name_ == nullptr && return this->queryStringParameters_ == nullptr; };
    // bodyParameters Field Functions 
    bool hasBodyParameters() const { return this->bodyParameters_ != nullptr;};
    void deleteBodyParameters() { this->bodyParameters_ = nullptr;};
    inline const SinkApiDestinationParametersBodyParameters & bodyParameters() const { DARABONBA_PTR_GET_CONST(bodyParameters_, SinkApiDestinationParametersBodyParameters) };
    inline SinkApiDestinationParametersBodyParameters bodyParameters() { DARABONBA_PTR_GET(bodyParameters_, SinkApiDestinationParametersBodyParameters) };
    inline SinkApiDestinationParameters& setBodyParameters(const SinkApiDestinationParametersBodyParameters & bodyParameters) { DARABONBA_PTR_SET_VALUE(bodyParameters_, bodyParameters) };
    inline SinkApiDestinationParameters& setBodyParameters(SinkApiDestinationParametersBodyParameters && bodyParameters) { DARABONBA_PTR_SET_RVALUE(bodyParameters_, bodyParameters) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const SinkApiDestinationParametersHeaderParameters & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, SinkApiDestinationParametersHeaderParameters) };
    inline SinkApiDestinationParametersHeaderParameters headerParameters() { DARABONBA_PTR_GET(headerParameters_, SinkApiDestinationParametersHeaderParameters) };
    inline SinkApiDestinationParameters& setHeaderParameters(const SinkApiDestinationParametersHeaderParameters & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline SinkApiDestinationParameters& setHeaderParameters(SinkApiDestinationParametersHeaderParameters && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SinkApiDestinationParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryStringParameters Field Functions 
    bool hasQueryStringParameters() const { return this->queryStringParameters_ != nullptr;};
    void deleteQueryStringParameters() { this->queryStringParameters_ = nullptr;};
    inline const SinkApiDestinationParametersQueryStringParameters & queryStringParameters() const { DARABONBA_PTR_GET_CONST(queryStringParameters_, SinkApiDestinationParametersQueryStringParameters) };
    inline SinkApiDestinationParametersQueryStringParameters queryStringParameters() { DARABONBA_PTR_GET(queryStringParameters_, SinkApiDestinationParametersQueryStringParameters) };
    inline SinkApiDestinationParameters& setQueryStringParameters(const SinkApiDestinationParametersQueryStringParameters & queryStringParameters) { DARABONBA_PTR_SET_VALUE(queryStringParameters_, queryStringParameters) };
    inline SinkApiDestinationParameters& setQueryStringParameters(SinkApiDestinationParametersQueryStringParameters && queryStringParameters) { DARABONBA_PTR_SET_RVALUE(queryStringParameters_, queryStringParameters) };


  protected:
    std::shared_ptr<SinkApiDestinationParametersBodyParameters> bodyParameters_ = nullptr;
    std::shared_ptr<SinkApiDestinationParametersHeaderParameters> headerParameters_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<SinkApiDestinationParametersQueryStringParameters> queryStringParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
