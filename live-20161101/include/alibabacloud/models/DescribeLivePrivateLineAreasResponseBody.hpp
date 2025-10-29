// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRIVATELINEAREASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLivePrivateLineAreasResponseBodyLiveAreasList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePrivateLineAreasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePrivateLineAreasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAreasList, liveAreasList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePrivateLineAreasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAreasList, liveAreasList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLivePrivateLineAreasResponseBody() = default ;
    DescribeLivePrivateLineAreasResponseBody(const DescribeLivePrivateLineAreasResponseBody &) = default ;
    DescribeLivePrivateLineAreasResponseBody(DescribeLivePrivateLineAreasResponseBody &&) = default ;
    DescribeLivePrivateLineAreasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePrivateLineAreasResponseBody() = default ;
    DescribeLivePrivateLineAreasResponseBody& operator=(const DescribeLivePrivateLineAreasResponseBody &) = default ;
    DescribeLivePrivateLineAreasResponseBody& operator=(DescribeLivePrivateLineAreasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAreasList_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveAreasList Field Functions 
    bool hasLiveAreasList() const { return this->liveAreasList_ != nullptr;};
    void deleteLiveAreasList() { this->liveAreasList_ = nullptr;};
    inline const DescribeLivePrivateLineAreasResponseBodyLiveAreasList & liveAreasList() const { DARABONBA_PTR_GET_CONST(liveAreasList_, DescribeLivePrivateLineAreasResponseBodyLiveAreasList) };
    inline DescribeLivePrivateLineAreasResponseBodyLiveAreasList liveAreasList() { DARABONBA_PTR_GET(liveAreasList_, DescribeLivePrivateLineAreasResponseBodyLiveAreasList) };
    inline DescribeLivePrivateLineAreasResponseBody& setLiveAreasList(const DescribeLivePrivateLineAreasResponseBodyLiveAreasList & liveAreasList) { DARABONBA_PTR_SET_VALUE(liveAreasList_, liveAreasList) };
    inline DescribeLivePrivateLineAreasResponseBody& setLiveAreasList(DescribeLivePrivateLineAreasResponseBodyLiveAreasList && liveAreasList) { DARABONBA_PTR_SET_RVALUE(liveAreasList_, liveAreasList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePrivateLineAreasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the regions.
    std::shared_ptr<DescribeLivePrivateLineAreasResponseBodyLiveAreasList> liveAreasList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
