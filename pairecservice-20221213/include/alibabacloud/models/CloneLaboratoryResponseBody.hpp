// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONELABORATORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONELABORATORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CloneLaboratoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneLaboratoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneLaboratoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloneLaboratoryResponseBody() = default ;
    CloneLaboratoryResponseBody(const CloneLaboratoryResponseBody &) = default ;
    CloneLaboratoryResponseBody(CloneLaboratoryResponseBody &&) = default ;
    CloneLaboratoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneLaboratoryResponseBody() = default ;
    CloneLaboratoryResponseBody& operator=(const CloneLaboratoryResponseBody &) = default ;
    CloneLaboratoryResponseBody& operator=(CloneLaboratoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->laboratoryId_ == nullptr
        && this->requestId_ == nullptr; };
    // laboratoryId Field Functions 
    bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
    void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
    inline string getLaboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
    inline CloneLaboratoryResponseBody& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneLaboratoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> laboratoryId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
