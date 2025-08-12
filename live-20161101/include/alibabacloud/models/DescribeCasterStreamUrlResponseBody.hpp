// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterStreamUrlResponseBodyCasterStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterStreamUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterStreamUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CasterStreams, casterStreams_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterStreamUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CasterStreams, casterStreams_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterStreamUrlResponseBody() = default ;
    DescribeCasterStreamUrlResponseBody(const DescribeCasterStreamUrlResponseBody &) = default ;
    DescribeCasterStreamUrlResponseBody(DescribeCasterStreamUrlResponseBody &&) = default ;
    DescribeCasterStreamUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterStreamUrlResponseBody() = default ;
    DescribeCasterStreamUrlResponseBody& operator=(const DescribeCasterStreamUrlResponseBody &) = default ;
    DescribeCasterStreamUrlResponseBody& operator=(DescribeCasterStreamUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterId_ != nullptr
        && this->casterStreams_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterStreamUrlResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // casterStreams Field Functions 
    bool hasCasterStreams() const { return this->casterStreams_ != nullptr;};
    void deleteCasterStreams() { this->casterStreams_ = nullptr;};
    inline const DescribeCasterStreamUrlResponseBodyCasterStreams & casterStreams() const { DARABONBA_PTR_GET_CONST(casterStreams_, DescribeCasterStreamUrlResponseBodyCasterStreams) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreams casterStreams() { DARABONBA_PTR_GET(casterStreams_, DescribeCasterStreamUrlResponseBodyCasterStreams) };
    inline DescribeCasterStreamUrlResponseBody& setCasterStreams(const DescribeCasterStreamUrlResponseBodyCasterStreams & casterStreams) { DARABONBA_PTR_SET_VALUE(casterStreams_, casterStreams) };
    inline DescribeCasterStreamUrlResponseBody& setCasterStreams(DescribeCasterStreamUrlResponseBodyCasterStreams && casterStreams) { DARABONBA_PTR_SET_RVALUE(casterStreams_, casterStreams) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterStreamUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterStreamUrlResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The ID of the production studio.
    std::shared_ptr<string> casterId_ = nullptr;
    // The information about the streams of the production studio.
    std::shared_ptr<DescribeCasterStreamUrlResponseBodyCasterStreams> casterStreams_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of streams that were returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
