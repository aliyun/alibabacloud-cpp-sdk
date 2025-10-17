// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRECORDCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTRECORDCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class StartRecordContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRecordContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRecordContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartRecordContentResponseBody() = default ;
    StartRecordContentResponseBody(const StartRecordContentResponseBody &) = default ;
    StartRecordContentResponseBody(StartRecordContentResponseBody &&) = default ;
    StartRecordContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRecordContentResponseBody() = default ;
    StartRecordContentResponseBody& operator=(const StartRecordContentResponseBody &) = default ;
    StartRecordContentResponseBody& operator=(StartRecordContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartRecordContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
