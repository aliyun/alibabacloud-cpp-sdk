// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESEARCHSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESEARCHSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateSearchStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSearchStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSearchStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSearchStrategyRequest() = default ;
    UpdateSearchStrategyRequest(const UpdateSearchStrategyRequest &) = default ;
    UpdateSearchStrategyRequest(UpdateSearchStrategyRequest &&) = default ;
    UpdateSearchStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSearchStrategyRequest() = default ;
    UpdateSearchStrategyRequest& operator=(const UpdateSearchStrategyRequest &) = default ;
    UpdateSearchStrategyRequest& operator=(UpdateSearchStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SearchStrategy & body() const { DARABONBA_PTR_GET_CONST(body_, SearchStrategy) };
    inline SearchStrategy body() { DARABONBA_PTR_GET(body_, SearchStrategy) };
    inline UpdateSearchStrategyRequest& setBody(const SearchStrategy & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSearchStrategyRequest& setBody(SearchStrategy && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    std::shared_ptr<SearchStrategy> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
