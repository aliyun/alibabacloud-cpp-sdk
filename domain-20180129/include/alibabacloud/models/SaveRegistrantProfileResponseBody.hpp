// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEREGISTRANTPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEREGISTRANTPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveRegistrantProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveRegistrantProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveRegistrantProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SaveRegistrantProfileResponseBody() = default ;
    SaveRegistrantProfileResponseBody(const SaveRegistrantProfileResponseBody &) = default ;
    SaveRegistrantProfileResponseBody(SaveRegistrantProfileResponseBody &&) = default ;
    SaveRegistrantProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveRegistrantProfileResponseBody() = default ;
    SaveRegistrantProfileResponseBody& operator=(const SaveRegistrantProfileResponseBody &) = default ;
    SaveRegistrantProfileResponseBody& operator=(SaveRegistrantProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registrantProfileId_ == nullptr
        && this->requestId_ == nullptr; };
    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveRegistrantProfileResponseBody& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveRegistrantProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> registrantProfileId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
