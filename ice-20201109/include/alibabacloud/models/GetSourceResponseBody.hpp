// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChannelAssemblySource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    GetSourceResponseBody() = default ;
    GetSourceResponseBody(const GetSourceResponseBody &) = default ;
    GetSourceResponseBody(GetSourceResponseBody &&) = default ;
    GetSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceResponseBody() = default ;
    GetSourceResponseBody& operator=(const GetSourceResponseBody &) = default ;
    GetSourceResponseBody& operator=(GetSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->source_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const ChannelAssemblySource & source() const { DARABONBA_PTR_GET_CONST(source_, ChannelAssemblySource) };
    inline ChannelAssemblySource source() { DARABONBA_PTR_GET(source_, ChannelAssemblySource) };
    inline GetSourceResponseBody& setSource(const ChannelAssemblySource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline GetSourceResponseBody& setSource(ChannelAssemblySource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    // **Request ID**
    std::shared_ptr<string> requestId_ = nullptr;
    // The source information.
    std::shared_ptr<ChannelAssemblySource> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
