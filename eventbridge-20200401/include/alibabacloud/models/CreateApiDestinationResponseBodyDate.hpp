// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONRESPONSEBODYDATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONRESPONSEBODYDATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateApiDestinationResponseBodyDate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiDestinationResponseBodyDate& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiDestinationResponseBodyDate& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
    };
    CreateApiDestinationResponseBodyDate() = default ;
    CreateApiDestinationResponseBodyDate(const CreateApiDestinationResponseBodyDate &) = default ;
    CreateApiDestinationResponseBodyDate(CreateApiDestinationResponseBodyDate &&) = default ;
    CreateApiDestinationResponseBodyDate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiDestinationResponseBodyDate() = default ;
    CreateApiDestinationResponseBodyDate& operator=(const CreateApiDestinationResponseBodyDate &) = default ;
    CreateApiDestinationResponseBodyDate& operator=(CreateApiDestinationResponseBodyDate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinationName_ != nullptr; };
    // apiDestinationName Field Functions 
    bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
    void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
    inline string apiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
    inline CreateApiDestinationResponseBodyDate& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


  protected:
    // The name of the API destination.
    std::shared_ptr<string> apiDestinationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
