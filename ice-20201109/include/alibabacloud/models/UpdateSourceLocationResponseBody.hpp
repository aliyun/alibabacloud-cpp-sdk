// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESOURCELOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESOURCELOCATIONRESPONSEBODY_HPP_
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
  class UpdateSourceLocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSourceLocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceLocation, sourceLocation_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSourceLocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceLocation, sourceLocation_);
    };
    UpdateSourceLocationResponseBody() = default ;
    UpdateSourceLocationResponseBody(const UpdateSourceLocationResponseBody &) = default ;
    UpdateSourceLocationResponseBody(UpdateSourceLocationResponseBody &&) = default ;
    UpdateSourceLocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSourceLocationResponseBody() = default ;
    UpdateSourceLocationResponseBody& operator=(const UpdateSourceLocationResponseBody &) = default ;
    UpdateSourceLocationResponseBody& operator=(UpdateSourceLocationResponseBody &&) = default ;
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
    inline UpdateSourceLocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceLocation Field Functions 
    bool hasSourceLocation() const { return this->sourceLocation_ != nullptr;};
    void deleteSourceLocation() { this->sourceLocation_ = nullptr;};
    inline const ChannelAssemblySourceLocation & sourceLocation() const { DARABONBA_PTR_GET_CONST(sourceLocation_, ChannelAssemblySourceLocation) };
    inline ChannelAssemblySourceLocation sourceLocation() { DARABONBA_PTR_GET(sourceLocation_, ChannelAssemblySourceLocation) };
    inline UpdateSourceLocationResponseBody& setSourceLocation(const ChannelAssemblySourceLocation & sourceLocation) { DARABONBA_PTR_SET_VALUE(sourceLocation_, sourceLocation) };
    inline UpdateSourceLocationResponseBody& setSourceLocation(ChannelAssemblySourceLocation && sourceLocation) { DARABONBA_PTR_SET_RVALUE(sourceLocation_, sourceLocation) };


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
