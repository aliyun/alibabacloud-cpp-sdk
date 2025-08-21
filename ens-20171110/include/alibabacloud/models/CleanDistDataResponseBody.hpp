// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEANDISTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLEANDISTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CleanDistDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CleanDistDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CleanDistDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CleanDistDataResponseBody() = default ;
    CleanDistDataResponseBody(const CleanDistDataResponseBody &) = default ;
    CleanDistDataResponseBody(CleanDistDataResponseBody &&) = default ;
    CleanDistDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CleanDistDataResponseBody() = default ;
    CleanDistDataResponseBody& operator=(const CleanDistDataResponseBody &) = default ;
    CleanDistDataResponseBody& operator=(CleanDistDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CleanDistDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
