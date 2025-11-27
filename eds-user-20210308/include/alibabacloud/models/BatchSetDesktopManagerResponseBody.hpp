// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDESKTOPMANAGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDESKTOPMANAGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class BatchSetDesktopManagerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDesktopManagerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDesktopManagerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchSetDesktopManagerResponseBody() = default ;
    BatchSetDesktopManagerResponseBody(const BatchSetDesktopManagerResponseBody &) = default ;
    BatchSetDesktopManagerResponseBody(BatchSetDesktopManagerResponseBody &&) = default ;
    BatchSetDesktopManagerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDesktopManagerResponseBody() = default ;
    BatchSetDesktopManagerResponseBody& operator=(const BatchSetDesktopManagerResponseBody &) = default ;
    BatchSetDesktopManagerResponseBody& operator=(BatchSetDesktopManagerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchSetDesktopManagerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
