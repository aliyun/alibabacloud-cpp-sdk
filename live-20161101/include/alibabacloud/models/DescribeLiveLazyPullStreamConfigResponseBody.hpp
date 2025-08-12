// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveLazyPullStreamConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveLazyPullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveLazyPullConfigList, liveLazyPullConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveLazyPullStreamConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveLazyPullConfigList, liveLazyPullConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveLazyPullStreamConfigResponseBody() = default ;
    DescribeLiveLazyPullStreamConfigResponseBody(const DescribeLiveLazyPullStreamConfigResponseBody &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBody(DescribeLiveLazyPullStreamConfigResponseBody &&) = default ;
    DescribeLiveLazyPullStreamConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveLazyPullStreamConfigResponseBody() = default ;
    DescribeLiveLazyPullStreamConfigResponseBody& operator=(const DescribeLiveLazyPullStreamConfigResponseBody &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBody& operator=(DescribeLiveLazyPullStreamConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveLazyPullConfigList_ != nullptr
        && this->requestId_ != nullptr; };
    // liveLazyPullConfigList Field Functions 
    bool hasLiveLazyPullConfigList() const { return this->liveLazyPullConfigList_ != nullptr;};
    void deleteLiveLazyPullConfigList() { this->liveLazyPullConfigList_ = nullptr;};
    inline const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList & liveLazyPullConfigList() const { DARABONBA_PTR_GET_CONST(liveLazyPullConfigList_, DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList) };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList liveLazyPullConfigList() { DARABONBA_PTR_GET(liveLazyPullConfigList_, DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList) };
    inline DescribeLiveLazyPullStreamConfigResponseBody& setLiveLazyPullConfigList(const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList & liveLazyPullConfigList) { DARABONBA_PTR_SET_VALUE(liveLazyPullConfigList_, liveLazyPullConfigList) };
    inline DescribeLiveLazyPullStreamConfigResponseBody& setLiveLazyPullConfigList(DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList && liveLazyPullConfigList) { DARABONBA_PTR_SET_RVALUE(liveLazyPullConfigList_, liveLazyPullConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveLazyPullStreamConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of triggered stream pulling.
    std::shared_ptr<DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList> liveLazyPullConfigList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
