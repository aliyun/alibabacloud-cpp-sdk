// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELCARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELCARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListModelCardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelCardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelCardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    ListModelCardsRequest() = default ;
    ListModelCardsRequest(const ListModelCardsRequest &) = default ;
    ListModelCardsRequest(ListModelCardsRequest &&) = default ;
    ListModelCardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelCardsRequest() = default ;
    ListModelCardsRequest& operator=(const ListModelCardsRequest &) = default ;
    ListModelCardsRequest& operator=(ListModelCardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->provider_ == nullptr; };
    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListModelCardsRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    // The identifier of the model provider used to filter model cards by provider.
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
