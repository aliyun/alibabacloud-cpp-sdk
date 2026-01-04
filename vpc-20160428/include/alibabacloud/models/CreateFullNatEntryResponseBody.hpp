// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFULLNATENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFULLNATENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateFullNatEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFullNatEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFullNatEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FullNatEntryId, fullNatEntryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFullNatEntryResponseBody() = default ;
    CreateFullNatEntryResponseBody(const CreateFullNatEntryResponseBody &) = default ;
    CreateFullNatEntryResponseBody(CreateFullNatEntryResponseBody &&) = default ;
    CreateFullNatEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFullNatEntryResponseBody() = default ;
    CreateFullNatEntryResponseBody& operator=(const CreateFullNatEntryResponseBody &) = default ;
    CreateFullNatEntryResponseBody& operator=(CreateFullNatEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fullNatEntryId_ == nullptr
        && this->requestId_ == nullptr; };
    // fullNatEntryId Field Functions 
    bool hasFullNatEntryId() const { return this->fullNatEntryId_ != nullptr;};
    void deleteFullNatEntryId() { this->fullNatEntryId_ = nullptr;};
    inline string getFullNatEntryId() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryId_, "") };
    inline CreateFullNatEntryResponseBody& setFullNatEntryId(string fullNatEntryId) { DARABONBA_PTR_SET_VALUE(fullNatEntryId_, fullNatEntryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFullNatEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The FULLNAT entry ID.
    shared_ptr<string> fullNatEntryId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
