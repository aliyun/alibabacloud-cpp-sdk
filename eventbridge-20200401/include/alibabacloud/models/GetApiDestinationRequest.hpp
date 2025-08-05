// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPIDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetApiDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
    };
    GetApiDestinationRequest() = default ;
    GetApiDestinationRequest(const GetApiDestinationRequest &) = default ;
    GetApiDestinationRequest(GetApiDestinationRequest &&) = default ;
    GetApiDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiDestinationRequest() = default ;
    GetApiDestinationRequest& operator=(const GetApiDestinationRequest &) = default ;
    GetApiDestinationRequest& operator=(GetApiDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinationName_ != nullptr; };
    // apiDestinationName Field Functions 
    bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
    void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
    inline string apiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
    inline GetApiDestinationRequest& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


  protected:
    // The name of the API destination.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiDestinationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
