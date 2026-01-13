// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECROWDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECROWDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateCrowdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCrowdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCrowdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCrowdResponseBody() = default ;
    CreateCrowdResponseBody(const CreateCrowdResponseBody &) = default ;
    CreateCrowdResponseBody(CreateCrowdResponseBody &&) = default ;
    CreateCrowdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCrowdResponseBody() = default ;
    CreateCrowdResponseBody& operator=(const CreateCrowdResponseBody &) = default ;
    CreateCrowdResponseBody& operator=(CreateCrowdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crowdId_ == nullptr
        && this->requestId_ == nullptr; };
    // crowdId Field Functions 
    bool hasCrowdId() const { return this->crowdId_ != nullptr;};
    void deleteCrowdId() { this->crowdId_ = nullptr;};
    inline string getCrowdId() const { DARABONBA_PTR_GET_DEFAULT(crowdId_, "") };
    inline CreateCrowdResponseBody& setCrowdId(string crowdId) { DARABONBA_PTR_SET_VALUE(crowdId_, crowdId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCrowdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> crowdId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
