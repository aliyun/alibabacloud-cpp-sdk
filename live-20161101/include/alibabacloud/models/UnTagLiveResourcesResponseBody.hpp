// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGLIVERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNTAGLIVERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UnTagLiveResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnTagLiveResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnTagLiveResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnTagLiveResourcesResponseBody() = default ;
    UnTagLiveResourcesResponseBody(const UnTagLiveResourcesResponseBody &) = default ;
    UnTagLiveResourcesResponseBody(UnTagLiveResourcesResponseBody &&) = default ;
    UnTagLiveResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnTagLiveResourcesResponseBody() = default ;
    UnTagLiveResourcesResponseBody& operator=(const UnTagLiveResourcesResponseBody &) = default ;
    UnTagLiveResourcesResponseBody& operator=(UnTagLiveResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnTagLiveResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
