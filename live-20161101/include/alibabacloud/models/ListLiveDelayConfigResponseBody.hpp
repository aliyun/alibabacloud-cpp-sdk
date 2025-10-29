// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEDELAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEDELAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveDelayConfigResponseBodyDelayConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveDelayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelayConfigList, delayConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayConfigList, delayConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLiveDelayConfigResponseBody() = default ;
    ListLiveDelayConfigResponseBody(const ListLiveDelayConfigResponseBody &) = default ;
    ListLiveDelayConfigResponseBody(ListLiveDelayConfigResponseBody &&) = default ;
    ListLiveDelayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveDelayConfigResponseBody() = default ;
    ListLiveDelayConfigResponseBody& operator=(const ListLiveDelayConfigResponseBody &) = default ;
    ListLiveDelayConfigResponseBody& operator=(ListLiveDelayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delayConfigList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // delayConfigList Field Functions 
    bool hasDelayConfigList() const { return this->delayConfigList_ != nullptr;};
    void deleteDelayConfigList() { this->delayConfigList_ = nullptr;};
    inline const ListLiveDelayConfigResponseBodyDelayConfigList & delayConfigList() const { DARABONBA_PTR_GET_CONST(delayConfigList_, ListLiveDelayConfigResponseBodyDelayConfigList) };
    inline ListLiveDelayConfigResponseBodyDelayConfigList delayConfigList() { DARABONBA_PTR_GET(delayConfigList_, ListLiveDelayConfigResponseBodyDelayConfigList) };
    inline ListLiveDelayConfigResponseBody& setDelayConfigList(const ListLiveDelayConfigResponseBodyDelayConfigList & delayConfigList) { DARABONBA_PTR_SET_VALUE(delayConfigList_, delayConfigList) };
    inline ListLiveDelayConfigResponseBody& setDelayConfigList(ListLiveDelayConfigResponseBodyDelayConfigList && delayConfigList) { DARABONBA_PTR_SET_RVALUE(delayConfigList_, delayConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveDelayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListLiveDelayConfigResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The stream delay configurations.
    std::shared_ptr<ListLiveDelayConfigResponseBodyDelayConfigList> delayConfigList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of stream delay configurations.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
