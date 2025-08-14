// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCELOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCELOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChannelAssemblySourceLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSourceLocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceLocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceLocation, sourceLocation_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceLocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceLocation, sourceLocation_);
    };
    GetSourceLocationResponseBody() = default ;
    GetSourceLocationResponseBody(const GetSourceLocationResponseBody &) = default ;
    GetSourceLocationResponseBody(GetSourceLocationResponseBody &&) = default ;
    GetSourceLocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceLocationResponseBody() = default ;
    GetSourceLocationResponseBody& operator=(const GetSourceLocationResponseBody &) = default ;
    GetSourceLocationResponseBody& operator=(GetSourceLocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sourceLocation_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceLocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceLocation Field Functions 
    bool hasSourceLocation() const { return this->sourceLocation_ != nullptr;};
    void deleteSourceLocation() { this->sourceLocation_ = nullptr;};
    inline const ChannelAssemblySourceLocation & sourceLocation() const { DARABONBA_PTR_GET_CONST(sourceLocation_, ChannelAssemblySourceLocation) };
    inline ChannelAssemblySourceLocation sourceLocation() { DARABONBA_PTR_GET(sourceLocation_, ChannelAssemblySourceLocation) };
    inline GetSourceLocationResponseBody& setSourceLocation(const ChannelAssemblySourceLocation & sourceLocation) { DARABONBA_PTR_SET_VALUE(sourceLocation_, sourceLocation) };
    inline GetSourceLocationResponseBody& setSourceLocation(ChannelAssemblySourceLocation && sourceLocation) { DARABONBA_PTR_SET_RVALUE(sourceLocation_, sourceLocation) };


  protected:
    // **Request ID**
    std::shared_ptr<string> requestId_ = nullptr;
    // The source location information.
    std::shared_ptr<ChannelAssemblySourceLocation> sourceLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
